//
//  main.c
//  QuickSort
//
//  Created by chenyufeng on 16/1/27.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

// 利用Partition划分实现快速排序
#include <stdio.h>
#include <stdlib.h>

void QuickSort(int *arr, int start, int end);
int Partition(int *arr, int start, int end);

int main(int argc, const char *argv[])
{
    int array[] = {6,4,3,7,8,9};
    QuickSort(array, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}

void QuickSort(int *arr, int start, int end)
{
    if (start == end)
    {
        return;
    }

    int index = Partition(arr, start, end);
    if (index > start)
    {
        QuickSort(arr, start, index);
    }

    if (index < end)
    {
        QuickSort(arr, index + 1, end);
    }
}

int Partition(int *arr, int start, int end)
{
    int i = start, j = end, x = arr[start];

    while (i < j)
    {
        while (i < j && arr[j] >= x)
        {
            j--;
        }
        if (i < j)
        {
            arr[i++] = arr[j];
        }

        while (i < j && arr[i] < x)
        {
            i++;
        }
        if (i < j)
        {
            arr[j--] = arr[i];
        }
    }
    arr[i] = x;

    return i;
}
