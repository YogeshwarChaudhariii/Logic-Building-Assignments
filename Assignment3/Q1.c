//Write a program which accept one no from user and print that number of even no on screen

#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;

    if (iNo <= 0)
    {
        return;
    }
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d ",iNum);
            iNum += 2;
        } 
        printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
