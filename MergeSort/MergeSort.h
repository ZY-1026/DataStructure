//
// Created by YongZhang on 2020/4/3.
//

#ifndef MERGESORT_MERGESORT_H
#define MERGESORT_MERGESORT_H

#include <iostream>
#include<algorithm>
#include "SortTestHelper.h"
#include "InsertionSort.h"

using namespace std;

//归并过程
//将arr[l...mid]和arr[mid+1...r]两部分进行归并
template<typename T>
void __merge(T arr[], int l, int mid, int r) {
    T aux[r - l + 1];
    // 将arr中的元素复制到aux中
    for (int i = l; i <= r; i++)
        aux[i - l] = arr[i];

    int i = l, j = mid + 1;
    for (int k = l; k <= r; k++) {

        // 判断i和j是否合法
        if (i > mid) {
            arr[k] = aux[j - l];
            j++;
        } else if (j > r) {
            arr[k] = aux[i - l];
            i++;
        }

        if (aux[i - l] < aux[j - l]) {
            arr[k] = arr[i - l];
            i++;
        } else {
            arr[k] = aux[j - l];
            j++;
        }
    }
}


//递归使用归并排序，对arr[l...r]的范围进行排序
//归并排序的时间复杂度是O(nlogn)，但是却额外增加了空间开销
template<typename T>
void __mergeSort(T arr[], int l, int r) {
    if (l >= r) {
        return;
    }


//    // 对于小数组，用插入排序
//    if (r - l <= 15) {
//        insertionSort(arr, r - l + 1);
//        return;
//    }

    int mid = (l + r) / 2;
    __mergeSort(arr, l, mid);
    __mergeSort(arr, mid + 1, r);
    if (arr[mid] > arr[mid + 1]) //归并排序的第一个优化
        __merge(arr, l, mid, r);
}

template<typename T>
void mergeSort(T arr[], int n) {
    __mergeSort(arr, 0, n - 1);
}

#endif //MERGESORT_MERGESORT_H
