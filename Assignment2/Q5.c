//Accept number from user and check whether number is even or odd

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    ChkEven(iValue);
    return 0;
}