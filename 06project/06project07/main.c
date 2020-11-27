//
//  main.c
//  06project07
//
//  Created by cappuccino  on 2020/11/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n,odd,square;
    printf("The program prints a table of square.\n");
    printf("Enter number of entries in table:");
    scanf("%d",&n);
    for(i = 1,odd = 3,square = 3;i <= n ; odd += 2,i++){
    printf("%10d%10d\n",i,square);
        square += odd;
    }
    return 0;
}
