//
//  main.c
//  08project03
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>

int main(void) {

    int digit, i, j,repeated[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    do{
        while (n > 0) {
        digit = n % 10;
        repeated[digit] ++;
        n /= 10;
    }
    
    printf("digit: \t\t");
    for(j = 0; j <10; j++){
        printf("%d\t",j);
    }
    printf("\n");
    
    printf("Occurrences:");
    for (i = 0; i < 10; i++) {
        printf("%d\t", repeated[i]);
    }
        printf("\n");
        
        printf("Enter a number: ");
        scanf("%ld", &n);

    }while (n > 0);
    return 0;
}
