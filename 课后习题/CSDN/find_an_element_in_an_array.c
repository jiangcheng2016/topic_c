#include <stdio.h>

int FindElement(int a[], int n, int x)
{
    //***complete the function
    for (int i = 0; i < n; i ++)
        if(x == a[i])
            return i + 1;
    return 0;

}

int main()
{

    int A[] = { 1, 3, 5, 8, 9, 5, 7,10, 12 };
    int e;
    int RetVal;
    
    printf("Please input an integer number \n");
    scanf("%d",&e);
    
    RetVal= FindElement (A, sizeof(A)/sizeof(A[0]), e);
    if(RetVal)
        printf("The position of the element is %d\n", RetVal);
    else
        printf("The element doesn't exist in the array!\n");
    return 0;

}