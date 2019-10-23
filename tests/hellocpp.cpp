#include "mex.h" 
#include <iostream>
using namespace std;
void mexFunction(int nlhs, mxArray *plhs[],
    int nrhs, const mxArray *prhs[])
{
  cout<<"Hello Matlab world!"<<endl; 
} 
