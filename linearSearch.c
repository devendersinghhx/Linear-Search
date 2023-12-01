#include <stdio.h>

// Function to perform linear search in an array
// Parameters:
//   arr: the array to search in
//   size: the size of the array
//   target: the element to search for
// Returns:
//   The index of the target element if found, -1 otherwise
int linearSearch(int arr[], int size, int target) {
   for (int i = 0; i < size; i++) {
      if (arr[i] == target) {
         return i;
      }
   }
   return -1;
}

int main() {
    // Variable to store the size of the array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Array to store elements entered by the user
    int arr[size];
    printf("Enter %d elements: ", size);

    // Loop to input elements into the array
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to search for in the array
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear Search
    int LS = linearSearch(arr, size, target);

    // Display the result of linear search
    if (LS != -1) {
        printf("lS: Element found at index: %d.", LS);
    } else {
        printf("LS: Element not found.");
    }
}

//by devender
