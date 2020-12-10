//
//  main.c
//  08project16
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>
#include <ctype.h>

#define N 26

int main(int argc, const char * argv[]) {
    char arr[N] = {0};
    char ch;
    int i,same = 0;
    printf("Enter first word:");
    while((ch = getchar()) != '\n'){
            if((toupper(ch) >= 'A') && (toupper(ch) <= 'Z'))
               arr[toupper(ch) - 'A']++;
        }
    printf("Enter second word:");
        while((ch = getchar()) != '\n'){
            if((toupper(ch) >= 'A') && (toupper(ch) <= 'Z'))
               arr[toupper(ch) - 'A']--;
        }
    for(i = 0; i < N; i++){
        if(arr[i] == 0)
            same = 0;
        else
            break;
    }
    if(N == i)
        printf("The words are anagrams");
    else
        printf("The words are not anagrams");

    return 0;
}
