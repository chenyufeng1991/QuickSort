//
//  main.c
//  QuickSort
//
//  Created by chenyufeng on 16/1/27.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

int *quickSort(int arr[],int l,int r);
int main(int argc, const char * argv[]) {

    int numArr[5] = {3,6,0,9,4};

    //使用指针返回数组，返回的其实是数组的头指针；
    int *retArr;
    retArr = quickSort(numArr, 0, 4);
    for (int i = 0; i < 5; i++) {
        //取数组值
        printf("%d ",*(retArr + i));
    }
}

int *quickSort(int arr[],int l,int r){
    //当左右指针相等的时候直接返回；
    if (l < r) {
        //此时的x就是基准值；
        int i = l,j = r,x = arr[l];

        //下面的while循环表示一次分治，也就是进行一次排序；
        while (i < j) {
            //先从基准值右侧找出小于基准的值；
            while (i < j && arr[j] >= x) {
                j--;
            }
            if (i < j) {
                //交换顺序，i++；
                arr[i++] = arr[j];
            }

            //从基准值左侧找出大于基准的值；
            while (i < j && arr[i] < x) {
                i++;
            }
            if (i < j) {
                //交换顺序，j--;
                arr[j--] = arr[i];
            }
        }
        //把基准值放入arr[i]位置；
        arr[i] = x;
        //递归，左右两侧分别进行快排；
        quickSort(arr, l, i - 1);
        quickSort(arr, i + 1, r);
    }
    return arr;
}





