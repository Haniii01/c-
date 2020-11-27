//
//  main.c
//  05project11
//
//  Created by cappuccino  on 2020/10/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n;
    printf("Enter a two digit number:");
    scanf("%1d%1d",&m,&n);
    printf("You enter the number ");
    if( m == 1 ){
        switch(n){
            case 0:printf("ten");break;
            case 1:printf("eleven");break;
            case 2:printf("twelve");break;
            case 3:printf("thirteen");break;
            case 4:printf("fourteen");break;
            case 5:printf("fifteen");break;
            case 6:printf("sisteen");break;
            case 7:printf("seventeen");break;
            case 8:printf("eighteen");break;
            case 9:printf("ninteen");break;
        }
    }
    else{
        switch(m){
            case 0:break;
            case 2:printf("twenty");break;
            case 3:printf("thirty");break;
            case 4:printf("fourty");break;
            case 5:printf("fifty");break;
            case 6:printf("sisty");break;
            case 7:printf("seventy");break;
            case 8:printf("eighty");break;
            case 9:printf("ninty");break;
        }
        if(n != 0 && m != 0)
            printf("-");
        switch(n){
            case 1:printf("one");break;
            case 2:printf("two");break;
            case 3:printf("three");break;
            case 4:printf("four");break;
            case 5:printf("five");break;
            case 6:printf("six");break;
            case 7:printf("seven");break;
            case 8:printf("eight");break;
            case 9:printf("nine");break;
        }
    }
    return 0;
}
