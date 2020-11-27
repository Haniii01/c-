//
//  main.c
//  07project13
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int length = 0,word = 1;
    float average = 0;
    char ch;
    printf("Enter a sentence:");
    while ((ch = getchar()) != '\n') {
        if(ch == ' ')
            word++;
        else
            length++;
        
    }
    average =(float) length / word;
    printf("Average word length:%.1f",average);
    return 0;
}
//这个判断不了用户在两个单词中间输入两个单词的情况
