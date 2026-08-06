// print number from iNo to 1

#include<iostream>
using namespace std;

int printNumber(int iNo)
{
  if(iNo == 1)
  {
    cout << "1";
    return iNo;
  }
  printNumber(iNo);

  cout<< printNumber << endl;

  printNumber(iNo - 1);

  cout<< printNumber;

}

int main()
{
  int iNum = 0;
  int iRet = 0;

  cout<< "Enter Number : ";
  cin>>iNum;

  printNumber(iNum);

  return 0;
}