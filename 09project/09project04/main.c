//
//  main.c
//  09project04
//
//  Created by cappuccino  on 2020/12/10.
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 26

void read_word(int counts[26]);
bool equal_array(int counts1[26],int counts2[26]);

int main(int argc, const char * argv[]) {
    char arr[N] = {0};
    int i,same = 0;
    int counts[26]={0},counts2[26]={0};
    printf("Enter first word:");
    read_word(counts);
    printf("Enter second word:");
    read_word(counts2);
    for(i = 0; i < N; i++){
        if(arr[i] == 0)
            same = 0;
        else
            break;
    }
    if(equal_array(counts, counts2))
        printf("The words are anagrams");
    else
        printf("The words are not anagrams");

    return 0;
}
void read_word(int counts[26]){
    char ch;
    while((ch = getchar()) != '\n'){
            if((toupper(ch) >= 'A') && (toupper(ch) <= 'Z'))
               counts[toupper(ch) - 'A']++;
        }
}
bool equal_array(int counts1[26],int counts2[26]){
    int i;
    for(i = 0; i < 26; i++){
        if (counts1[i] != counts2[i])
            return false;
    }
    return true;
}
