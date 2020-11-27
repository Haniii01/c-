//
//  main.c
//  07project09
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    int hour,minute;
    char c = '\0';
    
    printf("Enter a 12-hour time:");
    scanf("%d:%d",&hour,&minute);
    c = getchar();
    c = toupper(c);
    if (toupper(c) == 'P'){
        hour += 12;
    }
    else if((toupper(c))== 'A'){
    }
    printf("Equivalent 24-hour time:%d:%d",hour,minute);
    return 0;
}
