//
//  main.c
//  04project01
//
//  Created by cappuccino  on 2020/10/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mn,m,n;
    printf("Enter a two-digit number:");
    scanf("%d",&mn);
    n = mn % 10;
    m = mn / 10;
    printf("The reversal is:%d%d",n,m);
    return 0;
}
