#include <iostream>
#include <vector>
using namespace std;

// Function to swap two elements
void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// Insertion Sort
void InsertionSort(vector<int>& arr) {
    int size = arr.size();
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Bubble Sort
void BubbleSort(vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
            }
        }
    }
}

// Selection Sort
void SelectionSort(vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Merge function for Merge Sort
void merge(vector<int>& arr, int left, int mid, int right) {
    int m = mid - left + 1;
    int n = right - mid;

    vector<int> LeftArr(m);
    vector<int> RightArr(n);

    for (int i = 0; i < m; i++) {
        LeftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n; j++) {
        RightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < m && j < n) {
        if (LeftArr[i] <= RightArr[j]) {
            arr[k++] = LeftArr[i++];
        } else {
            arr[k++] = RightArr[j++];
        }
    }

    while (i < m) {
        arr[k++] = LeftArr[i++];
    }

    while (j < n) {
        arr[k++] = RightArr[j++];
    }
}

// Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Partition function for Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Quick Sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Heapify function for Heap Sort
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// Function to print the array
void printArray(vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {102, 59, 63, 3, 120, 7};

    // Insertion Sort
    vector<int> insertionArr = arr;
    InsertionSort(insertionArr);
    cout << "Insertion Sort: ";
    printArray(insertionArr);

    // Bubble Sort
    vector<int> bubbleArr = arr;
    BubbleSort(bubbleArr);
    cout << "Bubble Sort: ";
    printArray(bubbleArr);

    // Selection Sort
    vector<int> selectionArr = arr;
    SelectionSort(selectionArr);
    cout << "Selection Sort: ";
    printArray(selectionArr);

    // Merge Sort
    vector<int> mergeArr = arr;
    mergeSort(mergeArr, 0, mergeArr.size() - 1);
    cout << "Merge Sort: ";
    printArray(mergeArr);

    // Quick Sort
    vector<int> quickArr = arr;
    quickSort(quickArr, 0, quickArr.size() - 1);
    cout << "Quick Sort: ";
    printArray(quickArr);

    // Heap Sort
    vector<int> heapArr = arr;
    heapSort(heapArr);
    cout << "Heap Sort: ";
    printArray(heapArr);

    return 0;
}
