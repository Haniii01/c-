//
//  main.c
//  08project07
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j, total;
    int n[5][5];

    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);

        for (j = 0; j < 5; j++) {
            scanf(" %d", &n[i][j]);
        }
    }
    printf("Row totals:");
    for(i = 0; i < 5; i++){
        total = 0;
        
        for (j = 0; j < 5; j++){
            total += n[i][j];
        }
        printf("%d ",total);
    }
    printf("\nColumn totals:");
    for(i = 0; i < 5; i++){
        total = 0;
        
        for (j = 0; j < 5; j++){
            total += n[j][i];
        }
        printf("%d ",total);
    }
    return 0;
}
/*
 Enter row 1: 8 3 9 0 10
 Enter row 2: 3 5 17 1 1
 Enter row 3: 2 8 6 23 1
 Enter row 4: 15 7 3 2 9
 Enter row 5: 6 14 2 6 0
 */
