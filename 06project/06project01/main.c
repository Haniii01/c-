//
//  main.c
//  06project01
//
//  Created by cappuccino  on 2020/10/31.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float m,n,i,max;
    printf("Enter a number");
    scanf("%f",&m);
    printf("Enter a number");
    scanf("%f",&n);
    if(m > n)
        max = m;
    else
        max = n;
    printf("Enter a number");
    scanf("%f",&i);
    while(i > 0){
        if(i > max)
            max = i;
        else{
            max = max;
        }
        printf("Enter a number");
        scanf("%f",&i);
    }
    printf("The largest number enterd was %f\n",max);
    return 0;
}
