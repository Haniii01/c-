//
//  main.c
//  04project02
//
//  Created by cappuccino  on 2020/10/26.
//

#include <stdio.h>

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m;
    printf("Enter a three-digit number:");
    scanf("%d",&m);
    printf("The reversal is:%d%d%d",m % 10,m / 10 % 10 , m / 100 );
    return 0;
}
