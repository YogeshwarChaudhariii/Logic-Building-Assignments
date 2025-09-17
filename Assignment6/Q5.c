//write a program which accept no from usr adn display its table in reverse order

#include<stdio.h>

void Table(int iNo)
{
    for(int i = 10; i >= 1; i--)
    {
        printf("%d\n",iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}