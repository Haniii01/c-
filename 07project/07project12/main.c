//
//  main.c
//  07project12
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    float m = 0,n = 0;
    printf("Enter an expression:");
    scanf("%f",&m);
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '+':{scanf("%f",&n);m = m + n;}break;
            case '-':{scanf("%f",&n);m = m - n;}break;
            case '*':{scanf("%f",&n);m = m * n;}break;
            case '/':{scanf("%f",&n);m = m / n;}break;
            default:break;
        }
    }
    printf("Value of expression:%f",m);
    return 0;
}
