//
//  main.c
//  08project14
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>

#define LEN 100

int main(int argc, const char * argv[]) {
    int i,length;
    char arr[LEN] ;
    char end = '\0',ch;
    printf("Enter a sentence:");
    for (i = 0; (ch = getchar()) != '\n' && i < LEN; i++) {
           if (ch == '.' || ch == '!' || ch == '?') {
               end = ch;
               arr[i]=' ';//把标点符号定为‘ ’
               break;
           }
        arr[i] = ch;
       }
    length=i;
    printf("Reversal of sentence:");
    for(i = length-1; i >= 0; i--)//从除了标点之外的倒数第一个非标点开始打
    {
        if(arr[i] == ' ' && arr[i+1]!=' ')
        {
            for(int j=i+1;arr[j]!=' ';j++)
            putchar(arr[j]);
            putchar(' ');
        }//输出单词，再用不为空格循环，保证输出单词
        
        if(i == 0 && arr[0] !=' ')
        {
            for(int j=i; arr[j] != ' ';j++)
            putchar(arr[j]);}
    }//整句话中的第一个词前没有空格时，输出第一个单词
    printf("%c",end);
    printf("\n");
    return 0;
}//you can cage a swallow can't you?
