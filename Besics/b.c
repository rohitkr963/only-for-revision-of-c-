#include <stdio.h> 
#include <stdlib.h>

int main() {
int n, i, *ptr, sum = 0;

printf("Enter the number of elements: ");
 scanf("%d", &n);
ptr = (int*)calloc(n, sizeof(int)); 
if (ptr == NULL) {
printf("Error! Memory allocation failed.\n");
exit(1);
}

printf("Enter %d elements:\n4", n); for (i = 0; i < n; ++i) {
scanf("%d", ptr + i); sum += *(ptr + i);
}
printf("Sum = %d\n", sum); free(ptr);
printf("Kajal Kumar\nRoll No-1323443\n");
return 0;
}