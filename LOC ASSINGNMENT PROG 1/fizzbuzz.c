//wap to print the numbers from 1 to 100,but replace multiples of 3 with fizz and multiples of 5 with buzz
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        printf("FIZZ\n");
        else if(i%5==0)
        printf("BUZZ\n");
        else
        printf("%d\n",i);
    } 
}