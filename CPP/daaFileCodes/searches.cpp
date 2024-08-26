#include <vector>
#include<iostream>
using namespace std;


// Linear Search Algorithm
int linearSearch(vector<int> arr, int key){
    int size = arr.size();
    for( int i = 0; i< size; i++){
        if ( arr[i] == key){
            return i ;
        }
    }
    return -1;
}

// Binary Search Algorithm
int binarySearch(vector<int>& arr, int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            return binarySearch(arr, left, mid - 1, key);
        } else {
            return binarySearch(arr, mid + 1, right, key);
        }
    }
    return -1;
}

// Sorting algorithm
void sort(vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Driver function
int main(){

    vector<int> temp = {1,24,54,23,54,154};
    sort(temp);

    for (int i = 0 ; i< temp.size(); i++)
    {
        cout << temp[i]<< ", ";
    }
    cout << endl;

    int key = 0;
    cout << "Enter key to search:";
    cin >> key;
    
    cout <<"Found at index: " <<linearSearch(temp, key) <<" using linear search" << endl;
    cout <<"Found at index: " <<binarySearch(temp, 0, temp.size(), key) <<" using linear search";

    return 0;
}