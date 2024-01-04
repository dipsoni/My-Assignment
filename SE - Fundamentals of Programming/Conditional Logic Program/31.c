#include <stdio.h>

int main() {
    int month;
    
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    
    switch (month) {
        case 1:
        	printf("JAN\n");
        	printf("Number of days: 31\n");
            break;
        case 2:
        	printf("FEB\n");
        	printf("Number of days: 28 OR 29\n");
            break;
        case 3:
        	printf("MAR\n");
        	printf("Number of days: 31\n");
            break;
        case 4:
        	printf("APR\n");
        	printf("Number of days: 30\n");
            break;
        case 5:
        	printf("MAY\n");
        	printf("Number of days: 31\n");
            break;
        case 6:
        	printf("JUNE\n");
        	printf("Number of days: 30\n");
            break;
        case 7:
        	printf("JULY\n");
        	printf("Number of days: 31\n");
            break;
        case 8:
        	printf("AUG\n");
        	printf("Number of days: 31\n");
            break;
        case 9:
        	printf("SEP\n");
        	printf("Number of days: 30\n");
            break;
        case 10:
        	printf("OCT\n");
        	printf("Number of days: 31\n");
            break;
        case 11:
        	printf("NOV\n");
        	printf("Number of days: 30\n");
            break;
        case 12:
        	printf("DEC\n");
        	printf("Number of days: 31\n");
            break;
        default:
            printf("Invalid month number.\n");
    }
}

