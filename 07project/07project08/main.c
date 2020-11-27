//
//  main.c
//  07project08
//
//  Created by cappuccino  on 2020/11/26.
//

#include <stdio.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    int time = 0,hour,minute,
            d1 = 480 , d2 = 583 , d3 = 679,
            d4 = 767 , d5 = 840 , d6 = 945,
            d7 = 1140 , d8 = 1305;
    char c = '\0';
    
    printf("Enter a 12-hour time:");
    scanf("%d:%d",&hour,&minute);
    c = getchar();
    c = toupper(c);
    if (toupper(c) == 'P'){
        time = ( hour + 12 ) * 60 + minute ;
    }
    else if((toupper(c))== 'A'){
        time = hour * 60 + minute ;
    }
    
    printf("Closest departure time is");
    
    if ( time >= 128 && time <= ( d1 + ( d2 - d1 ) / 2)){
        printf("8:00 a.m., arriving at 10:16 a.m.");
    }
    else if ( time >= ( d1 + ( d2 - d1 ) / 2) && time <= ( d2 + ( d3 - d2 ) / 2 )){
        printf("10.16 a.m., arriving at 11:52 a.m.");
    }
    else if ( time >= ( d2 + ( d3 - d2 ) / 2 ) && time <= ( d3 + ( d4 - d3 ) / 2 )){
        printf("11:19 a.m., arriving at 1:31 p.m.");
    }
    else if ( time >= ( d3 + ( d4 - d3 ) / 2 ) && time <= ( d4 + ( d5 - d4 ) / 2 )){
        printf("12:47 p.m., arriving at 3:00 p.m.");
    }
    else if ( time >= ( d4 + ( d5 - d4 ) / 2 ) && time <= ( d5 + ( d6 - d5 ) / 2 )){
        printf("2:00 p.m., arriving at 4:08 p.m.");
    }
    else if ( time >= ( d5 + ( d6 - d5 ) / 2 ) && time <= ( d6 + ( d7 - d6 ) / 2 )){
        printf("3:45 p.m., arriving at 5:55 p.m.");
    }
    else if ( time >= ( d6 + ( d7 - d6 ) / 2 ) && time <= ( d7 + ( d8 - d7 ) / 2 )){
        printf("7:00 p.m., arriving at 9:20 p.m.");
    }
    else{
        printf("9:45 p.m., arriving at 11:58 p.m.");
    }
    return 0;
}
