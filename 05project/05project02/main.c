//
//  main.c
//  05project02
//
//  Created by cappuccino  on 2020/10/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hour,minute;
    printf("Enter a 24-hour time:");
    scanf(" %d : %d",&hour,&minute);
    if(hour > 12 && hour < 24){
        hour -= 12;
    }
    printf("Equivalent 12-hour time: %d:%.2d",hour,minute);
    return 0;
}
