//Accept two numbers from user and display first number in second number of times

#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    int i = 0;
    if(iNo <= 0)
    {
        return iNo;
    }
    for(iNo = 1; iNo <= iFrequency; iNo++)
    {
        printf("%d\t",iFrequency);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);
    printf("Enter a frequency: \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}