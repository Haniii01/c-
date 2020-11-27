//
//  main.c
//  07project15
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double num,result = 0.0,i;
    printf("Enter a positive integer:");
    scanf("%lf",&num);
    result = num;
    for(i = num - 1 ; i > 0 ; i--){
        num = num * i;
    }
    printf("Factorial of %lf:%lf",result,num);
    return 0;
}
