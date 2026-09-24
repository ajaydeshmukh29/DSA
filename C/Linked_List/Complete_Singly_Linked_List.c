/*
 * ============================================================
 *  Singly Linked List - Complete Implementation
 *  Author  : Ajay Dnyaneshwar Deshmukh
 *  Github  : github.com/ajaydeshmukh29
 *  Goal    : program demonstrating all major
 *            operations on a Singly Linked List
 * ============================================================
 */

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

/* ---------------- Function Declarations ---------------- */
void Display(PNODE first);
int  Count(PNODE first);
void InsertFirst(PPNODE first, int iNo);
void InsertLast(PPNODE first, int iNo);
void InsertAtPos(PPNODE first, int iNo, int iPos);
void DeleteFirst(PPNODE first);
void DeleteLast(PPNODE first);
void DeleteAtPos(PPNODE first, int iPos);
int  Sum(PNODE first);
int  LinearSearch(PNODE first, int iNo);
void Reverse(PPNODE first);
void BubbleSort(PPNODE first);
int  GetMax(PNODE first);
int  GetMin(PNODE first);
void DeleteAllNodes(PPNODE first);

/* ---------------------------------------------------------
 *  Display : Traverse and print all nodes of the list
 * --------------------------------------------------------- */
void Display(PNODE first)
{
    if (first == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }

    printf("\nLinked List is : \n");
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

/* ---------------------------------------------------------
 *  Count : Returns number of nodes present in list
 * --------------------------------------------------------- */
int Count(PNODE first)
{
    int iCnt = 0;

    while (first != NULL)
    {
        iCnt++;
        first = first->next;
    }
    return iCnt;
}

/* ---------------------------------------------------------
 *  InsertFirst : Insert a new node at the beginning
 * --------------------------------------------------------- */
void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newn->data = iNo;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

/* ---------------------------------------------------------
 *  InsertLast : Insert a new node at the end
 * --------------------------------------------------------- */
void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newn->data = iNo;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;  // (head pointer)
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

/* ---------------------------------------------------------
 *  InsertAtPos : Insert a new node at given position (1-indexed)
 * --------------------------------------------------------- */
void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt = Count(*first);
    int i = 0;

    if (iPos < 1 || iPos > iCnt + 1)
    {
        printf("Invalid position\n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(first, iNo);
        return;
    }

    if (iPos == iCnt + 1)
    {
        InsertLast(first, iNo);
        return;
    }

    newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newn->data = iNo;
    newn->next = NULL;

    temp = *first;
    for (i = 1; i < iPos - 1; i++)
    {
        temp = temp->next;
    }

    newn->next = temp->next;
    temp->next = newn;
}

/* ---------------------------------------------------------
 *  DeleteFirst : Delete the first node of the list
 * --------------------------------------------------------- */
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if (*first == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }

    temp = *first;
    *first = (*first)->next;
    free(temp);
}

/* ---------------------------------------------------------
 *  DeleteLast : Delete the last node of the list
 * --------------------------------------------------------- */
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    PNODE prev = NULL;

    if (*first == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }

    if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
        return;
    }

    temp = *first;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

/* ---------------------------------------------------------
 *  DeleteAtPos : Delete node at given position (1-indexed)
 * --------------------------------------------------------- */
void DeleteAtPos(PPNODE first, int iPos)
{
    PNODE temp = NULL;
    PNODE prev = NULL;
    int iCnt = Count(*first);
    int i = 0;

    if (iPos < 1 || iPos > iCnt)
    {
        printf("Invalid position\n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(first);
        return;
    }

    if (iPos == iCnt)
    {
        DeleteLast(first);
        return;
    }

    temp = *first;
    for (i = 1; i < iPos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

/* ---------------------------------------------------------
 *  Sum : Returns sum of all elements in the list
 * --------------------------------------------------------- */
int Sum(PNODE first)
{
    int iSum = 0;

    while (first != NULL)
    {
        iSum = iSum + first->data;
        first = first->next;
    }
    return iSum;
}

/* ---------------------------------------------------------
 *  LinearSearch : Returns 1 if element found, else 0
 * --------------------------------------------------------- */
int LinearSearch(PNODE first, int iNo)
{
    while (first != NULL)
    {
        if (first->data == iNo)
        {
            return 1;
        }
        first = first->next;
    }
    return 0;
}

/* ---------------------------------------------------------
 *  Reverse : Reverses the linked list iteratively
 * --------------------------------------------------------- */
void Reverse(PPNODE first)
{
    PNODE prev = NULL;
    PNODE curr = *first;
    PNODE next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *first = prev;
}

/* ---------------------------------------------------------
 *  BubbleSort : Sorts the list in ascending order
 *               (swaps data, not links)
 * --------------------------------------------------------- */
void BubbleSort(PPNODE first)
{
    PNODE i = NULL;
    PNODE j = NULL;
    int temp = 0;

    if (*first == NULL)
    {
        return;
    }

    for (i = *first; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

/* ---------------------------------------------------------
 *  GetMax : Returns maximum element from the list
 * --------------------------------------------------------- */
int GetMax(PNODE first)
{
    int iMax = first->data;

    while (first != NULL)
    {
        if (first->data > iMax)
        {
            iMax = first->data;
        }
        first = first->next;
    }
    return iMax;
}

/* ---------------------------------------------------------
 *  GetMin : Returns minimum element from the list
 * --------------------------------------------------------- */
int GetMin(PNODE first)
{
    int iMin = first->data;

    while (first != NULL)
    {
        if (first->data < iMin)
        {
            iMin = first->data;
        }
        first = first->next;
    }
    return iMin;
}

/* ---------------------------------------------------------
 *  DeleteAllNodes : Frees the entire list (used before exit)
 * --------------------------------------------------------- */
void DeleteAllNodes(PPNODE first)
{
    PNODE temp = NULL;

    while (*first != NULL)
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

/* ---------------------------------------------------------
 *  main : Menu driven demonstration of all operations
 * --------------------------------------------------------- */
int main()
{
    PNODE head = NULL;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    while (1)
    {
        printf("\n----------------------------------------\n");
        printf(" Singly Linked List - Menu\n");
        printf("----------------------------------------\n");
        printf("1  : Insert First\n");
        printf("2  : Insert Last\n");
        printf("3  : Insert At Position\n");
        printf("4  : Delete First\n");
        printf("5  : Delete Last\n");
        printf("6  : Delete At Position\n");
        printf("7  : Display\n");
        printf("8  : Count\n");
        printf("9  : Sum of elements\n");
        printf("10 : Linear Search\n");
        printf("11 : Reverse List\n");
        printf("12 : Sort List\n");
        printf("13 : Maximum element\n");
        printf("14 : Minimum element\n");
        printf("0  : Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice : ");
        scanf("%d", &iChoice);

        switch (iChoice)
        {
            case 1:
                printf("Enter value to insert at first : ");
                scanf("%d", &iValue);
                InsertFirst(&head, iValue);
                break;

            case 2:
                printf("Enter value to insert at last : ");
                scanf("%d", &iValue);
                InsertLast(&head, iValue);
                break;

            case 3:
                printf("Enter value : ");
                scanf("%d", &iValue);
                printf("Enter position : ");
                scanf("%d", &iPos);
                InsertAtPos(&head, iValue, iPos);
                break;

            case 4:
                DeleteFirst(&head);
                break;

            case 5:
                DeleteLast(&head);
                break;

            case 6:
                printf("Enter position to delete : ");
                scanf("%d", &iPos);
                DeleteAtPos(&head, iPos);
                break;

            case 7:
                Display(head);
                break;

            case 8:
                printf("Number of nodes : %d\n", Count(head));
                break;

            case 9:
                printf("Sum of elements : %d\n", Sum(head));
                break;

            case 10:
                printf("Enter value to search : ");
                scanf("%d", &iValue);
                iRet = LinearSearch(head, iValue);
                (iRet == 1) ? printf("Element found\n") : printf("Element not found\n");
                break;

            case 11:
                Reverse(&head);
                printf("List reversed successfully\n");
                break;

            case 12:
                BubbleSort(&head);
                printf("List sorted successfully\n");
                break;

            case 13:
                if (head == NULL)
                    printf("List is empty\n");
                else
                    printf("Maximum element : %d\n", GetMax(head));
                break;

            case 14:
                if (head == NULL)
                    printf("List is empty\n");
                else
                    printf("Minimum element : %d\n", GetMin(head));
                break;

            case 0:
                DeleteAllNodes(&head);
                printf("Exiting... Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice, please try again\n");
        }
    }

    return 0;
}
