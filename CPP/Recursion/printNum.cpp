#include<iostream>
using namespace std;

void printNumber(int iNo)
{
  if(iNo == 1)
  {
    cout << "1\n";
    return;
  }

  cout << iNo << " ";
  printNumber(iNo - 1);

}

int main()
{
  printNumber(4);

  return 0;
}