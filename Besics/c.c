#include <stdio.h>

void printArray(int* arr, int n) { 
    printf("Array: ");
for (int i = 0; i < n; i++) {
     printf("%d ", arr[i]);
}
printf("\n");
}

int main() {
int arr[] = {2, -1, 5, 6, 0, -3};
int n = sizeof(arr) / sizeof(arr[0]);
 printArray(arr, n);
printf("Kajal Kumari\nRoll No-1323443\n"); 
return 0;
}
