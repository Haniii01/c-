//
//  main.c
//  05project10
//
//  Created by cappuccino  on 2020/10/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int grade;
    printf("Enter numberical grade:");
    scanf("%d",&grade);
    
    if( grade < 0 || grade > 100)
        printf("ERROR");
    
    else{
        grade = grade / 10 ;
    printf("Letter grade:");
    switch(grade){
        case 0:case 1:case 2:case 3:case 4:case 5:
            printf("F");break;
        case 6:
            printf("D");break;
        case 7:
            printf("C");break;
        case 8:
            printf("B");break;
        case 9:case 10:
            printf("A");break;
    }
    }
    return 0;
}
