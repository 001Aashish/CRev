// check leap year
# include<stdio.h>
int main()
{
printf("enter year to check that whether it is a leap year : ");
int year;
scanf("%d",&year);
if (year%400 == 0)
{
    printf(" is leap");
}
else if (year%100 == 0)
{
    printf(" is not leap");
}
else if (year%4 == 0 )
{
    printf(" is leap");
}
else
{printf("is not leap");}
    return 0;
}