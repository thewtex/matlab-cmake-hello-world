#include "mex.h" 
#include <iostream>
void mexFunction(int nlhs, mxArray *plhs[],
    int nrhs, const mxArray *prhs[])
{
  mexPrintf("Hello Matlab world!\n"); 
} 
