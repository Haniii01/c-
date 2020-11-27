//
//  main.c
//  05project04
//
//  Created by cappuccino  on 2020/10/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int speed;
    printf("Enter a wind speed in knots: ");
    scanf("%d",&speed);
    printf("Wind description: ");
    if(speed < 1)
        printf("Clam");
    else if (speed >= 1 && speed <= 3)
        printf("Light air");
    else if (speed >= 4 && speed <= 27)
        printf("Breeze");
    else if (speed >= 28 && speed <= 47)
        printf("Gale");
    else if (speed >= 48 && speed <= 63)
        printf("Storm");
    else
        printf("Hurricane");
    return 0;
}
