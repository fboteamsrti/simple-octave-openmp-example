

This simple example illustrates how to perform parallel multi-threaded implementations using Octave and C++.

As is, the code will return the singular values only for multiple matrices.

Additional code is required to retain the eigenvectors U,V for the SVD factorization A=U \Sigma V' ( see http://en.wikipedia.org/wiki/SVD  for additional mathematical details on the SVD method.)


Please see the run.sh file to make and run the project example on your local computer.

If you modify the randn() to use larger dimensions, you may observe multithreaded execution in another terminal.


Tasks: 286 total,   2 running, 281 sleeping,   2 stopped,   1 zombie
%Cpu0  : 36.1 us,  0.7 sy,  0.0 ni, 63.2 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu1  : 62.3 us,  0.7 sy,  0.0 ni, 37.0 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu2  : 48.7 us,  0.3 sy,  0.0 ni, 51.0 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu3  : 48.7 us,  0.0 sy,  0.0 ni, 43.3 id,  8.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu4  : 47.8 us,  0.3 sy,  0.0 ni, 51.8 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu5  : 51.0 us,  0.3 sy,  0.0 ni, 48.7 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu6  : 39.3 us,  0.3 sy,  0.0 ni, 60.3 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
%Cpu7  : 59.0 us,  0.3 sy,  0.0 ni, 40.7 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
KiB Mem : 16194484 total,   168424 free,  4948308 used, 11077752 buff/cache
KiB Swap:  8134652 total,  8127220 free,     7432 used. 10764184 avail Mem 

  PID USER      PR  NI    VIRT    RES    SHR S  %CPU %MEM     TIME+ COMMAND                      
 8234 xxxxx    20   0 4689968 3.779g  31124 R 392.4 24.5   0:32.09 octave-cli-3.8. 
 
 