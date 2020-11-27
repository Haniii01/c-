//
//  main.c
//  07project07
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,denom1,denom2,resultnum = 1,resuledenom = 1;
    int m,n;
    char ch;
    printf("Enter first fraction:");
    scanf(" %d/ %d",&num1,&denom1);
    printf("Enter the sign:");
    scanf(" %c",&ch);
    printf("Enter second fraction:");
    scanf(" %d/ %d",&num2,&denom2);
    switch (ch) {
        case '+':
            resultnum = num1 * denom2 + num2 * denom1;
            resuledenom = denom1 * denom2;
            break;
        case '-':
            resultnum = num1 * denom2 - num2 * denom1;
            resuledenom = denom1 * denom2;
            break;
        case '*':
            resultnum = num1 * num2;
            resuledenom = denom1 * denom2;
        case '/':
            resultnum = num1 * denom2;
            resuledenom = num2 * denom1;
    }
    printf("The result is:%d/%d",resultnum,resuledenom);
    return 0;
}
