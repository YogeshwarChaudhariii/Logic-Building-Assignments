//write a c program which accept number from user and display it multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);

    return 0;
}
