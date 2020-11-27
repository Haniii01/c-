//
//  main.c
//  06project03
//
//  Created by cappuccino  on 2020/10/31.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n,x = 0,y = 0,gcd;
    printf("Enter a fraction:");
    scanf("%d / %d",&m,&n);
    
        x = m;
        y = n;
    
    while(y != 0)
    {
        gcd = x % y;
        x = y;
        y = gcd;
    }
    printf("In lowest terms:%d/%d",m / x ,n / x);
    return 0;
}
