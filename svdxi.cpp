/* This sample code is copyrighted and asssigned to SRTI.  All rights reserved 2015 */


#include <octave/oct.h>
#include <octave/parse.h>
#include <iostream>
#include <omp.h>
#include <stdio.h>
int DEBUG = 0;
int DEBUG2 = 1;
int DEBUG3 = 0;
DEFUN_DLD (svdxi, args,, "Given matrices A, B,,,, compute SVD's in parallel threads using default SVD code from Octave")
{
    int nargin = args.length ();
    octave_value_list myargs;
    int maxblocks = nargin;
    octave_value_list retval1[maxblocks];
    octave_value_list retval2;

//     int numberthreads = 4;
    int numberthreads = nargin;
    omp_set_num_threads (numberthreads);
    int nthreads, ii;
    
// use matrix class
    
    Matrix B[maxblocks], Sigma[maxblocks];
    if (nargin != 0)
        std::cout << "nargin=:" << nargin << std::endl;
    maxblocks = nargin;
    std::cout << "maxblocks=:" << maxblocks << std::endl;
    
// use compiler directives
    
     nthreads = omp_get_num_threads ();
     std::cout << "There are now " << nthreads << " threads" ;
    
    #pragma omp parallel for schedule(static, numberthreads)
    for (ii = 0; ii < nargin; ii++)	// divide
    {
            std::cout << " ii=: " << ii << std::endl;      
        if (DEBUG2 == 1)
        {
            nthreads = omp_get_num_threads ();
            std::cout << "There are now " << nthreads << " threads" ;
            std::cout << " ii=: " << ii << std::endl;
        }
        myargs = args (ii);
//         std::cout << "-- myargs(0)\n" << myargs (0).matrix_value () << "nargin=:" << nargin << std::endl;

// make function call
	
	retval1[ii] = feval ("svd", myargs (0), 1);
	
// extract the singular values only.  Additional code is required to retain the eigenvectors	
        Sigma[ii] = retval1[ii] (0).matrix_value ();
	
// store the result into an octave output return list
	retval2(ii)=retval1[ii](0);

    }

return(retval2);
}

