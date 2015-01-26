 mkoctfile -v -I-fopenmp svdxi.cpp >& make.svdxi.log

g++ -v -c  -fPIC -I/usr/include/octave-3.8.2/octave/.. -I/usr/include/octave-3.8.2/octave  -O2 -g -pipe -Wall -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches  -m64 -mtune=generic -pthread -fopenmp   -I-fopenmp  svdxi.cpp -o svdxi.o
g++ -v -shared -Wl,-Bsymbolic  -o svdxi.oct  svdxi.o   -L/usr/lib64/octave/3.8.2 -L/usr/lib64 -loctinterp -loctave -Wl,-z,relro 

