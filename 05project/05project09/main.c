//
//  main.c
//  05project09
//
//  Created by cappuccino  on 2020/10/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    int m1,d1,y1,m2,d2,y2;
    printf("Enter first date (mm/dd/yy):");
    scanf(" %d / %d / %d",&m1,&d1,&y1);
    printf("Enter first date (mm/dd/yy):");
    scanf(" %d / %d / %d",&m2,&d2,&y2);
    
    if( y1 < y2 ){
        printf("%d/%d/%d is eariler than %d/%d/%d",m1,d1,y1,m2,d2,y2);
    }
    else if( y1 == y2 && m1 < m2 ){
        printf("%d/%d/%d is eariler than %d/%d/%d",m1,d1,y1,m2,d2,y2);
    }
    else if( y1 == y2 && m1 == m2 && d1 < d2 ){
        printf("%d/%d/%d is eariler than %d/%d/%d",m1,d1,y1,m2,d2,y2);
    }
    else
        printf("%d/%d/%.2d is eariler than %d/%d/%.2d\n",m2,d2,y2,m1,d1,y1);
    return 0;
}
