///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : DisplayString.c
//  Author      : Ajay Deshmukh
//  Language    : C
//  Topic       : Strings
//
//  Description :
//      Accept a string from the user and display it using a separate function.
//
//  Input  : Hello
//  Output : Hello
//
//  Time Complexity  : O(n)
//  Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ReverseDisplay(char *str)
{
  printf("%s\n",str);
}

int main()
{
  char Arr[50] = {'\0'};

  printf("Enter String : \n");

  scanf("%[^'\n']s",&Arr);

  ReverseDisplay(Arr);    // passing base address to function   

  return 0;
}