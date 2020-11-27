//
//  main.c
//  06project02
//
//  Created by cappuccino  on 2020/10/31.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n,gcd;
    printf("Enter two integers:");
    scanf(" %d %d",&m,&n);
    while(n != 0)
    {   gcd = m % n;
        m = n;
        n = gcd;
    }
    printf("Greatest common divisior: %d",m);
        return 0;
}
