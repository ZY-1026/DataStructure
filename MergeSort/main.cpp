#include<iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "MergeSort.h"


using namespace std;

// 自底向上进行归并排序
template<typename T>
void mergeSortBU(T arr[], int n) {
    for (int size = 1; size <= n; size += size)//逐渐增加size大小
        for (int i = 0; i +size < n; i += size + size)
            //对arr[i...i+size-1]和arr[i+size...i+2*size-1]进行归并
            __merge(arr, i, i + size - 1, min(i + size + size - 1, n-1));
}

int main() {
    return 0;
}