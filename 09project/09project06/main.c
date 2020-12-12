//
//  main.c
//  09project06
//
//  Created by cappuccino  on 2020/12/10.
//

#include <stdio.h>

float power(float num, int n);

int main(int argc, const char * argv[]) {
    float num;
    double result;
    
    printf("Enter a number:");
    scanf("%f",&num);
    result = (3 * power(num,5)) + (2 * power(num,4)) - (5 * power(num,3)) - (1 * power(num,2)) + (7 * power(num,1)) - 6;
    printf("%.2lf",result);
    return 0;
}
float power(float num, int n){
    if(n == 0)
        return 1;
    else
        return num * power(num, n - 1);
}
