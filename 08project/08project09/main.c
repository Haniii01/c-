//
//  main.c
//  08project09
//
//  Created by cappuccino  on 2020/12/4.
//

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10
int main()
{
    srand((unsigned)time(NULL));
    char arr[N][N],ch='A';
    int i,j,row,col,r,c,flag=1;
    for(i=0;i<N;i++)
    for(j=0;j<N;j++)
    arr[i][j]='.';
    
    row=col=0;
    arr[row][col]=ch;
    for(ch='B';ch<='Z'&& flag;ch++)
    {
        do{//下面的若干if语句处理四个角、四个边、内部若可填位置已填满，程序跳出循环
            if(row>=1&&row<=8&&col>=1&&col<=8
                &&arr[row-1][col]!='.'&&arr[row+1][col]!='.'&&arr[row][col-1]!='.'&&arr[row][col+1]!='.')
            { flag=0;break;}
            if(row==0 && arr[row][col-1]!='.' &&arr[row][col+1]!='.'&& arr[row+1][col]!='.'&& col>=1 &&col<=8) {flag=0;break;}
            if(row==9 && arr[row][col-1]!='.' &&arr[row][col+1]!='.'&& arr[row-1][col]!='.'&& col>=1 &&col<=8) {flag=0;break;}
            if(col==0 && arr[row-1][col]!='.' &&arr[row+1][col]!='.'&& arr[row][col+1]!='.'&& row>=1 &&row<=8) {flag=0;break;}
            if(col==9 && arr[row-1][col]!='.' &&arr[row+1][col]!='.'&& arr[row][col-1]!='.'&& row>=1 &&row<=8) {flag=0;break;}
            if(row==0&&col==0&&arr[row+1][col]!='.'&&arr[row][col+1]!='.'){flag=0;break;}
            if(row==0 && col==9 &&arr[row][col-1]!='.' && arr[row+1][col]!='.')
            {flag=0;break;}
            if(row==9&&col==0&&arr[row-1][col]!='.'&&arr[row][col+1]!='.'){flag=0;break;}
            if(row==9 && col==9 &&arr[row][col-1]!='.' && arr[row-1][col]!='.')
            {flag=0;break;}
        //下面的dowhile循环处理行标列标在有效范围0-9
            do{
            r=row; c=col;
            i=rand()%4;
            switch(i)
            {
                case 0: r--;break;
                case 1: c++;break;
                case 2: r++; break;
                case 3: c--;break;
            }
            
        }while(r==-1 ||r==10 ||c==-1||c==10);
        //下面的循环判断条件为找到的有效位置已填字母，需重新找有效位置
        }while(arr[r][c]!='.');
        if(flag){row=r; col=c;
            arr[row][col]=ch;}
        
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        printf("%2c",arr[i][j]);
        printf("\n");
    }
}
//哈哈 这个题也太难啦😄贪吃蛇，是贪吃蛇吧？
