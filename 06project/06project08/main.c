//
//  main.c
//  06project08
//
//  Created by cappuccino  on 2020/11/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    int i,n,week;
    printf("Enter number of days in month:");
    scanf("%d",&n);
    printf("Enter starting day of the week(1=Sun,7=Sat):");
    scanf("%d",&week);
    switch(week){
        case 1:break;
        case 2:printf("\t");break;
        case 3:printf("\t\t");break;
        case 4:printf("\t\t\t");break;
        case 5:printf("\t\t\t\t");break;
        case 6:printf("\t\t\t\t\t");break;
        case 7:printf("\t\t\t\t\t\t");break;
    }
    for(i = 1 ; i <= n ; i++){
            printf("%d\t",i);
            if(i == 8 - week || i == 15 - week || i == 22 - week || i == 29 - week || i == 36 - week)
                printf("\n");
    }
    return 0;
}
