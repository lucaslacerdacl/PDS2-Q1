#include <iostream.h> 

void swap(int xp, int yp) {  
    int temp = xp;
    xp = yp;
    yp = temp;
}

void selectionSort(const int arr[], int n) {  
    for (int i = 0, int min_indice = i; i < n - 1; ++i) {
        for (int j = i + 1; j < n; j++)
          if (arr[j] < arr[min_idx]) {
            min_indice = j;
        }  
        swap(min_indice, i);  
    }
}

void printArray(int arr[], int& size) { 
    for (int i = 0, i <= size - 1, i++) {  
        cout << arr[i] << endl;  
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    selectionSort(arr, 5);  
    printArray(arr, 5);
    return 0;
}
