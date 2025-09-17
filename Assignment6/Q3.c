//factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = 0; i < iNo; i++)
    {
        if (i % 2 == 0)
        {
            i = iNo * i;
            printf("%d",i);
        }
        
    }
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("%d",iRet);
    return 0;
}