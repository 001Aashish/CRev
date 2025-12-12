// calculator
#include <stdio.h>

int main() {
    // printf("enter two no as operands ");
    // int a,b ;
    // scanf("%d %d",&a,&b);
    // printf(" choose operation \n1)+\n2)-\n3)*\n4)/\n");
    // char o;
    // scanf(" %c",&o);// used "'space'%c" to skip leftover newline from previous input
    // printf("you choose %c\n",o);
    // if (o == '+')
    // {
    //     int res = a+b;
    //     printf("%d",res);
    // }
    // else if (o == '-')
    // {
    //      int res2 = a-b;
    //     printf("%d",res2);
    // }
    // else if (o == '*')
    // {
    //      int res3 = a*b;
    //     printf("%d",res3);
    // }    
    // else if (o == '/')
    // {
    //      int res4 = a/b;
    //     printf("%d",res4);
    // }   
    // else {
    //     printf("invalid char");
    // }
    
    // Optimized version for above code 
        int a, b, result;
    char o;

    printf("Enter two numbers as operands: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation \n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n");
    scanf(" %c", &o); // space before %c skips leftover newline

    printf("You chose %c\n", o);

    switch (o) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operation!\n");
    }
    return 0;
}