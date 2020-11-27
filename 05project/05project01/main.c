//
//  main.c
//  05project01
//
//  Created by cappuccino  on 2020/10/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num=0,result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num >= 0 && num <= 9){
           result = 1;
    }
    if(num >= 10 && num <= 99){
           result = 2;
    }
    if(num >= 100 && num <= 999){
           result = 3;
    }
    if(num >= 1000 && num <= 9999){
           result = 4;
    }
    printf("The number %d has %d digits\n", num , result);
    return 0;
}
