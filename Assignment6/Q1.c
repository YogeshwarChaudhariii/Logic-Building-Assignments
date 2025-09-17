//accept no from usr and if no is less than 50 then print small, if greater than 50 and less than 100 then print medium, if it is greate than 100 then print large

#include<stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("small");
    }
    else if (iNo >= 50 && iNo < 100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
