// SIMPLE INTEREST CALCULATOR
#include <stdio.h>
int main()
{
    int P, R, T, si;
    printf("Enter the values for \"P\",\"R\" and \"T\" to get simple interest \n");
    scanf("%d %d %d", &P, &R, &T);
    si = (P * R * T) / 100;
    printf("si : %d", si);
    return 0;
}