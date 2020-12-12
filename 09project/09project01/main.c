//
//  main.c
//  09project01
//
//  Created by cappuccino  on 2020/12/10.
//
#include <stdio.h>

#define N 100

void selection_sort(int arr[],int length);

int main(int argc, const char * argv[]) {
    int i,length = 0;
    int arr[N];
    printf("Enter your numbers:");
    for(i = 0;i < N; i++){
        scanf("%d",&arr[i]);
        length++;
        if((getchar()) == '\n')
            break;
    }
    //读取输入的数
    selection_sort(arr,length);
    
    printf("Sorted list:");
    for(i = 0; i < length; i++){
        printf(" %d",arr[i]);
    }
    //输出新的数组
    return 0;
}
void selection_sort(int arr[],int length){
    if(length==1) return ;
    else
    {
        int i,temp;
        int largest = 0;
        for(i = 0; i < length ;i++){
            if (arr[i] > arr[largest])
                largest = i;
        }
            temp = arr[largest];
            arr[largest] = arr[length-1];
            arr[length-1] = temp;

        selection_sort(arr,length - 1);

    }
    
}
