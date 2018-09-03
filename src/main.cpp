#include <iostream>
#include <iterator>

void swap(int& xp, int& yp) {
   int temp = xp;
   xp = yp;
   yp = temp;
}

void selectionSort(int arr[], int size) {
   for (int i = 0; i < size; i++) {
       int min_indice = i;
       for (int validate_min_indice = i + 1; validate_min_indice < size; validate_min_indice++) {
         if (arr[validate_min_indice] < arr[min_indice]) {
           swap(arr[min_indice], arr[validate_min_indice]);
         }
       }
   }
}

void printArray(int arr[], int size) {
   for (int i = 0; i < size; i++) {
       std::cout << arr[i] << std::endl;
   }
}

int main() {
   int arr[] = {64, 25, 12, 22, 11};
   size_t arr_size = sizeof(arr)/sizeof(arr[0]);
   selectionSort(arr, arr_size);
   printArray(arr, arr_size);
   return 0;
}