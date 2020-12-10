//
//  main.c
//  08project06
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>
#include <ctype.h>

#define SIZE (int) (sizeof(biff) / sizeof(biff[0]))

int main(int argc, const char * argv[]) {
    char ch,biff[100] = {0};
    int i=0;
    printf("Enter message:");
    while ((ch = getchar()) != '\n' && i < SIZE) {
        biff[i++] = ch;
    }
    printf("In B1FF-speak:");
    for(i = 0; i < SIZE; i++){
        switch(ch = toupper(biff[i])){
            case 'A':printf("4");break;
            case 'B':printf("8");break;
            case 'E':printf("3");break;
            case 'I':printf("1");break;
            case 'O':printf("0");break;
            case 'S':printf("5");break;
            default: putchar(ch);break;
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
//Hey dude, C is rilly cool
