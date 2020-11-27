//
//  main.c
//  06project06
//
//  Created by cappuccino  on 2020/11/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    
    for(i = 2 ; i * i <= num ;i +=2){
        printf("%-d\n",i * i);
    }
    
    
    return 0;
}
