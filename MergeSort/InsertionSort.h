//
// Created by YongZhang on 2020/2/16.
//

#ifndef MERGESORT_INSERTIONSORT_H
#define MERGESORT_INSERTIONSORT_H

#include<iostream>

using namespace std;

template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        T temp = arr[i];
        int j; //保存元素temp应该插入的位置
        for (j = i; j > 0 && temp < arr[j - 1]; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}

#endif //MERGESORT_INSERTIONSORT_H
