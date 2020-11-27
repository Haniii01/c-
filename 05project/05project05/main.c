//
//  main.c
//  05project05
//
//  Created by cappuccino  on 2020/10/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float income,tax;
    printf("please taxable income:");
    scanf("%f",&income);
    
    if(income <= 750)
        tax = income * .01;
    else if(income > 750 && income <= 2250)
        tax = ( income - 750 ) * .02 + 7.50;
    else if(income > 2250 && income <= 3750)
        tax = ( income - 2250 ) * .03 + 37.50;
    else if(income > 3750 && income <= 5250)
        tax = ( income - 3750 ) * .04 + 82.50;
    else if(income > 5250 && income <= 7000)
        tax = ( income - 5250 ) * .05 + 142.50;
    else
        tax = ( income - 7000 ) * .06 + 230.00;
    printf("Tax due :$%.2f\n",tax);
    return 0;
}
