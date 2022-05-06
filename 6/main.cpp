#include "Ex6.h"

int main() {
    setlocale(0, "");
    int size = 0;
    int arr1[5] = { 1, 4, 3, 8, 10 };
    printArr(arr1, 5);
    BubbleSort(arr1, 5);
    printArr(arr1, 5);
    double arr2[5] = { 1.1,4.7,3.333,4.0,2.1 };
    printArr(arr2, 5);
    InsertionSort(arr2, 5);
    printArr(arr2, 5);
    return 0;
}