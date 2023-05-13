#include <stdio.h>
int main() {
int a, b = 0, s, n;
printf("The armstrong numbers are");
for (n = 1; n <= 10000; n++) {
  s = n;
  while (n > 0) {
    a = n % 10;
    b = b + a * a * a;
    n = n / 10;
  }
  if (b == s)
    printf("%d ", s);
}
}