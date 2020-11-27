//
//  main.c
//  07project01
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

        short i, n;

        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
    scanf("%d", &n);

        for (i = 1; i <= n; i++)
            printf("%20d%20d\n", i, i * i);


        return 0;

}
