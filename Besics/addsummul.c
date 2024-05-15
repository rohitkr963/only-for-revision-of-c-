#include <stdio.h>
 #include <stdlib.h>

int main() { 
    int* ptr; int n, i;

printf("Enter the number of elements: ");
 scanf("%d", &n);
ptr = (int*)malloc(n * sizeof(int));

if (ptr == NULL) {
printf("Memory allocation failed.\n"); 
exit(1);
}
 else {
printf("Memory successfully allocated using malloc.\n");

for (i = 0; i < n; ++i) { ptr[i] = i + 1;
}

printf("The elements of the array are: ");
 for (i = 0; i < n; ++i) {
printf("%d, ", ptr[i]);
}
}
printf("Rohit Kumar\nRoll No-1323448\n");
 return 0;
}
