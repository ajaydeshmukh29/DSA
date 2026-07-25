#include<stdio.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display()
{}

int Count()
{
  return 0;
}

void InsertFirst(int iNo)
{}

void InsertLast(int iNo)
{}

void InsertAtPos(int iNo, int iPos)
{}

void DeleteFirst()
{}

void DeleteLast()
{}

void DeleteAtpos()
{}

int main()
{
  PNODE head = NULL;
  
  return 0;
}