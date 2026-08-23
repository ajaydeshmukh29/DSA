//////////////////////////////////////////////////////////////////////
//
//  Accept the string from user and Display string in reverse order
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
  std :: string str;

  cout<<"Enter the string : ";
  std::getline(std::cin, str); 

  for(int i = str.length(); i >= 0; i--)
  {
    cout<< str[i];
  }
  cout<<endl;

  return 0;
}