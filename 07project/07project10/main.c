//
//  main.c
//  07project10
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    int num = 0;
    char ch;
    printf("Enter a sentence:");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        switch (ch) {
            case 'A':case 'E':case 'I':case 'O':case 'U':
                num += 1;
                break;
            default:break;
        }
    }
    printf("Your sentence contains %d vowels",num);
    return 0;
}
