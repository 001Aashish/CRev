// bitwise operations 
# include<stdio.h>
int main()
{
printf(" enter two no.s for performing AND ,OR & XOR ");
int a,b;
scanf("%d%d",&a,&b);
int resAND = a & b;
int resOR = a | b;
int resXOR = a ^ b ;
printf("The result of the operation AND is %d\n",resAND);
printf("The result of the operation OR is %d\n",resOR);
printf("The result of the operation XOR is %d\n",resXOR);
    return 0;
}