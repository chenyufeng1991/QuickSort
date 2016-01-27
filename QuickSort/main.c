//
//  main.c
//  QuickSort
//
//  Created by chenyufeng on 16/1/27.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

int *quickSort(int arr[],int left,int right);
int main(int argc, const char * argv[]) {


    int numArr[5] = {9,1,0,4,1};
    int *p;

    p = quickSort(numArr,0,4);

    for (int i = 0; i < 5; i++ ){
        printf( "%d ", *(p + i));
               }
    return 0;
}

int *quickSort( int arr[],int left,int right){

    if (left < right) {

        int i = left,j = right,x = arr[left];
        while (i < j) {

            while (i < j && arr[j] >= x ) {
                j--;
            }
            if (i < j) {
                arr[i++] = arr[j];
            }

            while (i < j && arr[i] < x) {
                i++;
            }
            if (i < j) {
                arr[j--] = arr[i];
            }
        }
        arr[i] = x;
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }

//    if (left == right) {
//        for (int i = 0; i < 5; i++) {
//            printf("%d ",arr[i]);
//        }
//    }

    return arr;
}






