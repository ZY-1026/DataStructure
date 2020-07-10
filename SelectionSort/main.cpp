//
// Created by YongZhang on 2020/2/10.
//
#include<iostream>
#include "SortTestHelper.h"
#include "Student.h"

using namespace std;

// 选择排序的时间复杂度为O(n**2)
template<typename T>
void SelectionSort(T array[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i; j < n; j++)
            if (array[j] < array[minIndex])
                swap(array[j], array[minIndex]);
    }
}

int main() {
//    int array[9] = {2, 9, 0, 1, -9, 3, 2, 4, 5};
//    SelectionSort(array, 9);
//    for (int i = 0; i < 9; i++)
//        cout << array[i] + "\t";
    int n = 100000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    SortTestHelper::testSort("Selection Sort", SelectionSort, arr, n);
    delete[] arr;

//    Student student[4]={{"D", 90}, {"C", 100}, {"B", 95}, {"A", 95}};
//    SelectionSort(student, 4);
//    for(int i=0;i<4;i++)
//        cout<<student[i];
//    cout<<endl;
     return 0;
}
