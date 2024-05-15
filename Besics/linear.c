#include <stdio.h>

int linearSearch(int arr[], int size, int key) { for (int i = 0; i < size; i++) {
if (arr[i] == key) { return i;
}
}
return -1;
}

int main() {
int arr[] = {6, 7, 9, 1, 5, 11, 8, 12, 2, 3};
int size = sizeof(arr) / sizeof(int); int key = 4;
int index = linearSearch(arr, size, key); if (index == -1) {
printf("The element is not present in the list.\n");
} else {
printf("The element is present at arr[%d].\n", index);
}
printf("Rohit Kumar\nRoll No-1323448\n"); return 0;
}
