#include <iostream>
#include <algorithm>


using namespace std;

// 寻找枢轴P
template<typename T>
int __partition(T arr[], int l, int r) {
    int i = l, j = r;
    T x = arr[l];
    while (i < j) {
        while (i < j && arr[j] >= x)
            j--;
        if (i < j) {
            arr[i] = arr[j];
            i++;
        }

        while (i < j && arr[i] < x)
            i++;
        if (i < j) {
            arr[j] = arr[i];
            j--;
        }
    }
    arr[i] = x;
    return i;
}

// 对arr[l...r]进行快速排序
template<typename T>
void __quickSort(T arr[], int l, int r) {
    if (l >= r)
        return;

    int p = __partition(arr, l, r);
    __quickSort(arr, l, p - 1);
    __quickSort(arr, p + 1, r);
}

//左边元素小于枢轴，右侧元素大于枢轴
template<typename T>
void quickSort(T arr[], int n) {
    __quickSort(arr, 0, n - 1);
}

static int fuc(char j){
    static char i = j;
    return ++i;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}