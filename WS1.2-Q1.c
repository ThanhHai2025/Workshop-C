#include <stdio.h>
#include<stdlib.h>
int main() {
  int n, i;
  float s1, s3;
  long long s2;

	  printf("Enter n = ");
	  scanf("%d", &n);

	  while (n <= 5) {
	    printf("n must be > 5, please reenter!\n");
	    printf("Enter n = ");
	    scanf("%d", &n);
  }

  s1 = 0;
  for (i = 1; i <= n; i++) {
    s1 += i;
  }
  printf("s1 = %.0f\n", s1);

  s2 = 1;
  for (i = 1; i <= n; i++) {
    s2 *= i;
  }
  printf("s2 = %lld\n", s2);

  s3 = 0;
  for (i = 1; i <= n; i++) {
    s3 += (float) 1 / i;
  }
  printf("s3 = %f\n", s3);

  int isPrime = 1;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      isPrime = 0;
      break;
    }
  }
  if (isPrime) {
    printf("%d is a prime number\n", n);
  } else {
    printf("%d is not a prime number\n", n);
  }
system ("pause");
  return 0;
}