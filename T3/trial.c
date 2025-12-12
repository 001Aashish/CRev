#include <stdio.h>

int main() {
    int day = 3;
    switch(day){
        case 1: printf(" mon ");break;
        case 2: printf(" tue ");break;
        case 3: printf(" wed ");break;
        default:printf(" invalid");
    }
    return 0;
}