#include <iostream>
#include "SelectionSort.h"
#include "SortTestHelper.h"

using namespace std;

// 对于近乎有序的序列，插入排序的效率很高，
// 对于一个有序序列，插入排序的时间复杂度为O(n)
// 插入排序的时间复杂度为O(n**2)
template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            swap(arr[j], arr[j - 1]);
        }
    }
}


template<typename T>
void insertionSort2(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        T temp = arr[i];
        int j; //保存元素temp应该插入的位置
        for (j = i; j > 0 && temp < arr[j - 1]; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}

int main() {
    int n = 10000;
    int *arr;
    arr = SortTestHelper::generateNearlyOrderedArray(n, 100);
    int *arr2;
    arr2 = SortTestHelper::copyIntArray(arr, n);
    int *arr3;
    arr3 = SortTestHelper::copyIntArray(arr, n);
    SortTestHelper::testSort("Insertion Sort", insertionSort, arr, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr2, n);
    SortTestHelper::testSort("Insertion Sort2", insertionSort2, arr3, n);
    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    return 0;
}



