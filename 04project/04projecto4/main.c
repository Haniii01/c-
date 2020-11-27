//
//  main.c
//  04projecto4
//
//  Created by cappuccino  on 2020/10/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&n);
    printf("In octal , ypur number is :%d%d%d%d%d",
           (n/4096)%8,
           (n/512)%8,
           (n/64)%8,
           (n/8)%8,
           n%8
           );
    return 0;
}
