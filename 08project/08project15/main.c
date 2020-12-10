//
//  main.c
//  08project15
//
//  Created by cappuccino  on 2020/12/4.
//

#include <stdio.h>

#define M 80

int main(int argc, const char * argv[]) {
    int i,n,length = 0;
    char ch;
    char arr[M];
    
    printf("Enter message to be encrypted:");
    for(i = 0; i < M && ((ch = getchar()) != '\n'); i++){
        length++;
        arr[i] = ch;
    }
    printf("Enter shift amount:");
    scanf("%d",&n);
    printf("Encrypted message:");
    for (i = 0; i < length; i++) {
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = ((arr[i] - 'a') + n) % 26 + 'a';
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = ((arr[i] - 'A') + n) % 26 + 'A';
        }
        putchar(arr[i]);
    }
    printf("\n");
}
//Jr dkhdg, pdnh pb gdb.
