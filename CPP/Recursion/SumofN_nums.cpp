#include<iostream>
using namespace std;

int Sum(int iNo)
{
  if(iNo == 1)
  {
    return 1;
  }

  return  iNo + Sum(iNo - 1);

}

int main()
{
  cout<< Sum(5) << endl;

  return 0;
}