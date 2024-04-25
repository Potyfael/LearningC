//Use only switch for computing the sum of the days (don't use any loops).
#include <stdio.h>

int main(){
    int month, days = 0;
    printf("Enter the month number [1-12]: ");
    scanf("%d", &month);
    switch(month){
        case 12: days += 30;
        case 11: days += 31;
        case 10: days += 30;
        case 9: days += 31;
        case 8: days += 31;
        case 7: days += 30;
        case 6: days += 31;
        case 5: days += 30;
        case 4: days += 31;
        case 3: days += 29;
        case 2: days += 30;
        case 1: break;
    }
    printf("There are %d days before the given month.", days);
    return 0;
}