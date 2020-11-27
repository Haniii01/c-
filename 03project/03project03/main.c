//
//  main.c
//  03project03
//
//  Created by cappuccino  on 2020/10/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int gsl,group,pub,item,check;
    printf("enter ISBN:");
    scanf("%d - %d - %d - %d - %d",&gsl,&group,&pub,&item,&check);
    printf("GSL prefix:%d\nGroup identifier:%d\nPublisher code:%d\nItem number:%d\nCheck digit:%d\n",gsl,group,pub,item,check);
    return 0;
}
