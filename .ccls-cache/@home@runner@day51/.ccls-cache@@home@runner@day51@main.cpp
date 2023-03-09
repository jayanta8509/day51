// Given an integer array of size N, write a program to sort the array
// implementation of bubble sort
#include <iostream>
using namespace std;
void sort_arr(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
}

int main() {
  int arr[] = {1, 5, 7, 5,3};
  int size = 5;
  sort_arr(arr, size);
}