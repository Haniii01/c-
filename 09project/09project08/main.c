//
//  main.c
//  09project08
//
//  Created by cappuccino  on 2020/12/10.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int roll_dice(void);//generate two numbers, return the sum
bool play_game(void);//player win return true, display the sum of dice
int main()
{
    srand((unsigned)time(NULL));
    int win=0,lose=0;
    bool result;
    char choose;
    do
    {
        result=play_game();
        if(result)
            win++;
        else
            lose++;
        printf("\nPlay again?");
        scanf(" %c",&choose);
    }while(choose=='y'||choose=='Y');
    
    printf("Wins:%d  Losses:%d\n",win,lose);
    return 0;
 
}
int roll_dice(void)
{
    int n1=rand()%6+1;
    int n2=rand()%6+1;
    return n1+n2;
}
bool play_game(void)
{
    bool first=true;
    int sum=roll_dice();
    printf("\nYou rolled:%d\n",sum);
    if(first && (sum==7 ||sum==11))
    {
        printf("You win!\n");
        return true;
    }
    first=false;
    printf("Your point is %d\n",sum);
    do{
        int temp=roll_dice();
        printf("You rolled:%d\n",temp);
        if(temp==sum)
        {
            printf("You win!\n");
            return true;
        }
        if(temp==7)
        {
            printf("You lose!\n");
            return false;
        }
    }while(1);
}
//提示赢和输要求在主函数中 代码还需稍稍修改一下才能满足题目要求
