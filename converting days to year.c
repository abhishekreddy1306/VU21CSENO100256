#include <stdio.h>

int main()
{
    int days, years, weeks;
    printf("Enter days: ");
    scanf("%d", &days);

    
    years = (days / 365);   
    weeks = (days % 365) / 7;
 
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
 

    return 0;
}
