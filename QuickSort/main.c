//
//  main.c
//  QuickSort
//
//  Created by chenyufeng on 16/1/27.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

void quickSort(int arr[],int left,int right);
int main(int argc, const char * argv[]) {


    int numArr[5] = {8,2,9,4,5};

    quickSort(numArr,0,4);

    return 0;
}

void quickSort(int arr[],int left,int right){

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

    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }

}






