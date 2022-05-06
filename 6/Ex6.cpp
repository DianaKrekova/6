#include "Ex6.h"

void BubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

}
void BubbleSort(double* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void SelectionSort(int* arr, int size)
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (arr[j] > arr[k]) {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}
void SelectionSort(double* arr, int size)
{
    int j = 0;
    double tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (arr[j] > arr[k]) {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void InsertionSort(int* arr, int size)
{
    int key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }
}

void InsertionSort(double* arr, int size)
{
    double key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }
}



void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void printArr(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}