//
//  main.c
//  06project12
//
//  Created by cappuccino  on 2020/11/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    float num,m=1,e=0,n=1,mn=1;
    printf("Enter a number:");
    scanf("%f",&num);
    for(i = 1 ; mn > num ; i++ )
    {
        n = i * n ;
        mn = 1.0f / n ;
        m = m + 1.0f / n ;
        e = 1.0f + m ;
        printf("%f\n",e);
    }
    printf("%f",e);
        return 0;
}
