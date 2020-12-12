//
//  main.c
//  09exercise06
//
//  Created by cappuccino  on 2020/12/10.
//

#include <stdio.h>

int digit(int n,int k);

int main(int argc, const char * argv[]) {
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Shift to digit:");
    scanf("%d",&k);
    printf("%d\n",digit(n, k));
    return 0;
}
int digit(int n,int k){
    
    int i,length = 0,m;
    m = n;
    while(m != 0) {
        length++;
        m /= 10;
    }
    if(k<=length && k>=1)
    {
        for(i=1;i<k;i++)
        {
            n=n/10;
        }
        return n%10;
    }
    else
    {
        printf("please input a data between 1-%d\n",length);
        return 0;
    }
//
//    int arr[length];
//
//    for(i=0;i < length; i++){
//        arr[i] = n % 10;
//        n /= 10;
//    }
//    if(k <= length)
//        printf("%d",arr[k-1]);
//    else
//        printf("0");
//    return k;
}
