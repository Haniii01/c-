//
//  main.c
//  06project05
//
//  Created by cappuccino  on 2020/11/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int digits = 0,n;
    printf("Enter numbers:");
    scanf("%d",&n);
    printf("The reversal is:");
    do{
         printf("%d",n % 10);
        n /= 10;
        digits++;
    }while( n > 0);
    

    return 0;
}
