//
//  main.c
//  03project05
//
//  Created by cappuccino  on 2020/10/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16;
    printf("enter phone number from 1 to 16 in any order:");
    scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);
    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
           num1,num2,num3,num4,
           num5,num6,num7,num8,
           num9,num10,num11,num12,
           num13,num14,num15,num16);
    printf("Row sums:%d %d %d %d\n",
           num1+num2+num3+num4,num5+num6+num7+num8,num9+num10+num11+num12,num13+num14+num15+num16);
    printf("Column sums:%d %d %d %d\n",
           num1+num5+num9+num13,num2+num6+num10+num14,num3+num7+num11+num15,num4+num8+num12+num16);
    printf("Diagonak sums:%d %d\n",
           num1+num6+num11+num16,num4+num7+num10+num13);
    return 0;
}
