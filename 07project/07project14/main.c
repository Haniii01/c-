//
//  main.c
//  07project14
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    double y = 1,x = 0,i = 0,avg;
    printf("Enter a positive number:");
    scanf("%lf",&x);
    for(i = 1;fabs(i) > 0.00001;y = avg ){
        avg = (y + x/y ) / 2;
        i = y - avg;
    }
    printf("Square root:%.5lf",y);
    return 0;
}
