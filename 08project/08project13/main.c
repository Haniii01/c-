//
//  main.c
//  08project13
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char name[20] = {0};
    char ch,initial;
    int i;
    printf("Enter a first and last name:");
    while((ch = getchar()) == ' ')
        ;
    initial = ch;
    while((getchar()) != ' ')
        ;
    for(i = 0; (ch = getchar()) != '\n'; i++)
    name[i] = ch;
    
    printf("You entered the name:");
    for (i = 0; name[i] != '\0'; i++)
    putchar(name[i]);
    printf(",%c",initial);
    
    return 0;
}
//Lloyd Fosdick
