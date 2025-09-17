//accept no from usr and print that number of $ & * on screen

#include<stdio.h>

void Pattern(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (int i = 1; i <= iNo; i++)
    {
        printf("$\t*\t");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
