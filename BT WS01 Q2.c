#include<stdio.h>
int main(){
	int n, i;
	long s2;
	printf("Enter n = ");
	scanf("%d", &n);
	while (n<=5){
		printf("\n n must be > 5, please reenter!");
		printf(" Enter n = ");
		scanf("%d", &n);
	}
	s2 = 1;
	for (i=1; i<= n; i++){
		s2 *= i;
	}
	printf("\n s2 = %ld", s2);
	return 0;
}