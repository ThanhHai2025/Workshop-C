#include<stdio.h>
int main(){
	float a, b, c;
	printf("a ="); scanf("%f", &a);
	printf("b ="); scanf("%f", &b);
	printf("c ="); scanf("%f", &c);
	
	float max = a, min = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(b < min) min = b;
	if(c < min) min = c;
	printf("maximum value = %2f\n", max);
	printf("minimum value = %2f\n", min);
	
//	s?p x?p tang d?n
float A;
if (a >= b) { A = a; a = b; b = A; }
if (b >= c) { A = b; b = c; c = A; }
if (a >= c) { A = a; a = c; c = A; }
printf("ascending: %.2f, %.2f, %.2f\n", a, b, c);

	return 0;
}