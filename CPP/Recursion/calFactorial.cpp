#include<iostream>
using namespace std;

int factorial(int iNo)
{
  if(iNo == 0)
  {
    return 1;
  }

  return iNo * factorial(iNo - 1);

}
int main()
{
  cout<< factorial(5) << endl;
  return 0;
}