#include<stdio.h>
int main(){
// -----P1-----
printf(" enter no to check odd or even : \n");
int a ; 
scanf("%d",&a);
if ((a%2) == 0)
{
    printf(" it is even\n");
}

else{ printf("it is odd \n");}

// -----P2-----
printf(" enter no to check +ive or -ive : \n");
int num ; 
scanf("%d",&num);
if (num == 0)
{
    printf(" this no is zero \n");
}
else if (num >= 1)
{
    printf(" this is positive \n");
}
else{printf(" this is negative \n");}

// -----P3-----
printf(" enter marks to calculate grade : \n");
int marks ; 
scanf("%d",&marks);
if (marks >= 90)
{
    printf("A\n");
}
else if (marks >= 75 && marks < 90)
{
    printf("B\n");
}
else{printf("C\n");}
    return 0;
}