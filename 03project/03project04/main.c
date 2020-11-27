//
//  main.c
//  03project04
//
//  Created by cappuccino  on 2020/10/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y,z;
    printf("enter phone number [(xxx) xxx-xxxx]:");
    scanf(" ( %d ) %d - %d",&x,&y,&z);
    printf("you entered %d.%d.%d",x,y,z);
    return 0;
}
