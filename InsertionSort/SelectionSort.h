//
// Created by YongZhang on 2020/2/14.
//

#ifndef INSERTIONSORT_SELECTIONSORT_H
#define INSERTIONSORT_SELECTIONSORT_H

//
// Created by YongZhang on 2020/2/10.
//
#include<iostream>

using namespace std;

template<typename T>
void selectionSort(T array[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i; j < n; j++)
            if (array[j] < array[minIndex])
                swap(array[j], array[minIndex]);
    }
}

#endif //INSERTIONSORT_SELECTIONSORT_H
