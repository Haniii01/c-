//
//  main.c
//  07project03
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double n, sum = 0;
    
    printf("Enter programs sums a series of intergers.\n");
    printf("Enter integers (0 to terminate):");
    
    scanf("%lf",&n);
    while (n != 0) {
        sum += n;
        scanf("%lf",&n);
    }
    printf("The sum is :%lf\n",sum);
    
    return 0;
}
