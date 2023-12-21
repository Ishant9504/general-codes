// Program for the 6 Sorting Algorithms
#include <stdio.h>
#include <stdlib.h>

// Function for swapping
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Function for Bubble Sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(&arr[j + 1], &arr[j]);
            }
        }
    }
}

// Function for Insertion Sort
void insertionSort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            swap(&arr[j], &arr[j + 1]);
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function for Selection Sort
void selectionSort(int arr[], int size)
{
    int minindex;
    for (int i = 0; i < size - 1; i++)
    {
        minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(&arr[i], &arr[minindex]);
    }
}

// Function for partion around the pivot for Quick Sort
int partition(int arr[], int low, int high)
{
    int i = low + 1, j = high;
    int pivot = arr[low];
    while (i <= j)
    {
        while (i <= j && arr[i] <= pivot)
        {
            i++;
        }
        while (i <= j && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

// Function for Quick Sort
void quickSort(int arr[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(arr, low, high);
        quickSort(arr, low, j);
        quickSort(arr, j + 1, high);
    }
}

// Function for performing a 2 way merge
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    i = j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k++] = R[j++];
        }
        else
        {
            arr[k++] = L[i++];
        }
    }

    for (i; i < n1; i++)
    {
        arr[k++] = L[i];
    }

    for (j; j < n2; j++)
    {
        arr[k++] = R[j];
    }
}

// Function for Merge Sort
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf("%d ,", arr[i]);
        }
    }
    printf("\n");
}

// Driver Code
int main()
{
    int arr[] = {12, 24, 34, 56, 25, 54, 53};
    int size = sizeof(arr) / sizeof(int);

    printf("Unsorted array is:");
    printArray(arr, size);

    int choice;
    printf("1-Bubble sort:\n2-Selection sort:\n3-Insertion sort:\n4-Quick sort\n5-Merge sort\n7-Exit\n");

    while (1)
    {
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bubbleSort(arr, size);
            printf("Using bubble sort:");
            printArray(arr, size);
            break;

        case 2:
            selectionSort(arr, size);
            printf("Using selection sort:");
            printArray(arr, size);
            break;

        case 3:
            insertionSort(arr, size);
            printf("Using insertion sort:");
            printArray(arr, size);
            break;

        case 4:
            quickSort(arr, 0, size - 1);
            printf("Using quick sort:");
            printArray(arr, size);
            break;

        case 5:
            mergeSort(arr, 0, size - 1);
            printf("Using merge sort:");
            printArray(arr, size);
            break;

        case 7:
            exit(0);

        default:
            printf("Invalid option!!");
            break;
        }
    }
}