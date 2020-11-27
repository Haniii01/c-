//
//  main.c
//  07project13 fixed
//
//  Created by cappuccino  on 2020/11/27.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 3
#define N 4
int sum_two_dimensional_array(const int a[][LEN],int n);
int main(int argc, const char * argv[]) {
    int length = 0,word = 0;
    float average = 0;
    char ch,pre=' ';
    printf("Enter a sentence:");
    while ((ch = getchar()) != '\n') {
        if(pre==' ' && ch != ' ')
            word++;
        if(ch!=' ')
            length++;
        pre=ch;
        
    }
    average =(float) length / word;
    printf("Average word length:%.1f\n",average);
    return 0;
}

