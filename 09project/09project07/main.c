//
//  main.c
//  09project07
//
//  Created by cappuccino  on 2020/12/10.
//

#include <stdio.h>

double power(float num, int n);

int main(int argc, const char * argv[]) {
    int n;
    float num;
    
    printf("Enter a number as X:");
    scanf("%f",&num);
    printf("Enter a number as n:");
    scanf("%d",&n);
    printf("%.2lf",power(num, n));
    return 0;
}
double power(float num, int n){
    double result;
    if(n == 0)
        return 1;
    if((n % 2) == 0){
        result = power(num, n / 2);
        return result * result;
    }
    else
        return num * power(num, n-1);
}

/*另一个方法
float power(float x,int n);
int main(){
    int n;
    float x;
    printf("enter X:");
    scanf("%f",&x);
    printf("Enter n:");
    scanf("%d",&n);
    
    printf("%.1f power %d is %.1f\n",x,n,power(x,n));
}
float power(float x,int n){
    int result;
    if(n==0)
        return 1;
    else{
        if(n%2==1)
            return x*power(x, n-1);
        else{
            result = power(x, n / 2);
            return result * result;
        }
    }
}
*/
