//
//  main.c
//  07project11
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>

int main(void) {

    char c, initial;

    printf("Enter a first and last name: ");
    
    while ((c = getchar()) == ' ')
        //惯用法，跳过空白字符，循环停止时，变量ch将返回getchar函数遇到的第一个非空白字符
        ;
    initial = c;
    while ((c = getchar()) != ' ')
        //跳过前面的单词 到第二个单词开头部分
        ;
    while ((c = getchar()) != '\n')
        //读取第二个单词
        putchar(c);
    printf(", %c.\n", initial);

    return 0;
}


