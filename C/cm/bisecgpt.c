int binarySearch(int arr[], int num, int x) {
    int start = 0;
    int end = num - 1;

    while (start<= end) {
        int mid =  + (right - left) / 2;

        if (arr[mid] == x) {
            return mid; // Element found at index 'mid'
        } else if (arr[mid] < x) {
            left = mid + 1; // Adjust the search range to the right half
        } else {
            right = mid - 1; // Adjust the search range to the left half
        }
    }

    return -1; // Element not found in the array