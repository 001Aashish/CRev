// sum and average 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("give input for getting sum and avg of numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("you gave input : %d,%d and %d\n",a,b,c);
    printf("sum of no.s = %d",a+b+c);
    float avg = (a+b+c)/3;
    printf(" avg : %.2f",avg);
    return 0;
}s