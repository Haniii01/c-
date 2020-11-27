//
//  main.c
//  06project11
//
//  Created by cappuccino  on 2020/11/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,i;
    float m=1,e=0,n=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i = 1 ; i <= num ; i++ )
    {
        n = i * n ;
        m = m + 1 / n ;
        e = m ;
    }
    printf("%f",e);
        return 0;
}
