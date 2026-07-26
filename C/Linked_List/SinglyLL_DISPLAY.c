#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
  while(first != NULL)
  {
    printf("| %d | -> ", first->data);
    first = first->next;
  }
  printf("NULL\n");
}

void InsertFirst(PPNODE first, int iNo)
{
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->next = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn->next = *first;
    *first = newn;
  }
}

void InsertLast(PPNODE first, int iNo)
{
  PNODE newn = NULL;
  PNODE temp = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->next = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    temp = *first;

    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
  }
}

int main()
{
  PNODE head = NULL;
  int iRet = 0;

  InsertFirst(&head,51);
  InsertFirst(&head,21);
  InsertFirst(&head,11);

  InsertLast(&head,101);
  InsertLast(&head,111);
  InsertLast(&head,121);

  Display(head);

  return 0;
}