//
//  main.c
//  05project03
//
//  Created by cappuccino  on 2020/10/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    float price,commission,value,rival;
    printf("Enter number of shares: ");
    scanf("%d", &num);
    printf("Enter price per share: ");
    scanf("%f", &price);
    
    value = num * price;
    
    if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0011f * value;
    else
            commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;
    printf("Commission: $%.2f\n",commission);
    
    if(num < 2000)
        rival = num * 0.03f + 33;
    else
        rival = num * 0.02f + 33;
    printf("Rival comission: $%.2f\n", rival);
    
    return 0;
}
