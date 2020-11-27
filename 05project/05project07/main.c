//
//  main.c
//  05project07
//
//  Created by cappuccino  on 2020/10/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n,p,q,largest = 0,smallest = 0,
        l1=0,m1=0,l2=0,m2=0;
    printf("enter four integers:");
    scanf(" %d %d %d %d",&m,&n,&p,&q);
    if(m>n){
        l1 = m ; m1 = n ;}
    else{
        l1 = n ; m1 = m ;}
    if(p>q){
        l2 = p ; m2 = q ;}
    else{
        l2 = q ; m2 = p ;}
    if(l1 > l2){
        largest = l1;}
    else{
        largest = l2;}
    if(m1 > m2){
        smallest = m2;}
    else
        smallest = m1;
    printf("Largest: %d\nSmllest: %d\n",largest,smallest);
    return 0;
}
