//
//  main.c
//  07project02
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:");
    scanf("%d",&n);
    
    for(i = 1;i <= n; i++){
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
                ;
            }

    }
    return 0;
}
