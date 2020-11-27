//
//  main.c
//  03project01
//
//  Created by cappuccino  on 2020/10/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,d,y;
    printf("enter a date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("you enterd a date %d%d%d",y,m,d);
    return 0;
}
