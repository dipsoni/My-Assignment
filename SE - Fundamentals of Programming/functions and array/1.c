#include <stdio.h>
int main() {
  int n,a[10],i;
  printf("Enter the number of elements : ");
  scanf("%d", &n);

  for (i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &a[i]);
  }

  // storing the largest number to a[0]
  for (i = 1; i < n; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  printf("Largest Number = %d", a[0]);

  return 0;
}

