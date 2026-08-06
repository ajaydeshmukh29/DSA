#include<iostream>
using namespace std;

int fib(int iNo)
{
  if(iNo == 1 || iNo == 0)
  {
    return iNo;
  }

  return fib(iNo - 1) + fib(iNo-2);
}
