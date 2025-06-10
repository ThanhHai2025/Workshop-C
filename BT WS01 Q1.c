#include<stdio.h>
int main(){
	int n, i;
	float s1;
	printf("Enter n = ");
	scanf("%d", &n);
	while (n<=5){
		printf("\n n must be > 5, please reenter!");
		printf(" Enter n = ");
		scanf("%d", &n);
	}
	s1 = 0;
	for (i=0; i <= n; i++){
		s1 += i;
	}
	printf("\n s1 = %.0f", s1);
	return 0;
}