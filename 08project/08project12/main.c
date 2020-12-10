//
//  main.c
//  08project12
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    char c;
    int sum = 0,scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
                        5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
                        1, 4, 4, 8, 4, 10};
    printf("Enter a word:");
    
    while ((c = getchar()) != '\n') {
            sum += scrabble[toupper(c) - 'A'];
        }
    printf("Scrabble value:%d",sum);
    return 0;
}
