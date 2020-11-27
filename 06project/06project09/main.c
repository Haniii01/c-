//
//  main.c
//  06project09
//
//  Created by cappuccino  on 2020/11/1.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float amount,interest,monthly;
    int payments,i;
    printf("Enter amount of loan:");
    scanf("%f",&amount);
    printf("Enter interest rate:");
    scanf("%f",&interest);
    printf("Enter monthly payment:");
    scanf("%f",&monthly);
    printf("Enter number of payments:");
    scanf("%d",&payments);
    
    interest = ( ( interest / 12 ) * 0.01 ) ;
    
    for( i = 1 ; i <= payments ; i++)
    {
        amount = amount - monthly + (amount * interest);
                printf("Balance remaining after payment %d: $%.2f\n", i, amount);
    }
    return 0;
}
