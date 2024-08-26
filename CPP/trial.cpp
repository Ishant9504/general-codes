#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArray(vector<int>& arr){
    int size= arr.size();
    for(int i = 0; i< size; i++){
        cout<< arr[i]<<", ";
    }
    printf("\n");
}

void InsertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void BubbleSort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void SelectionSort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {102, 59, 63, 3, 120, 7};
    vector<int> tempArr = arr;
    InsertionSort(tempArr); cout << "Insertion Sort: "; printArray(tempArr);
    tempArr = arr;
    BubbleSort(tempArr); cout << "Bubble Sort: "; printArray(tempArr);
    tempArr = arr;
    SelectionSort(tempArr); cout << "Selection Sort: "; printArray(tempArr);
    tempArr = arr;
}
