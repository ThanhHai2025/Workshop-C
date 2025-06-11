#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, x;
	printf("a="); scanf("%f",&a);
	printf("b="); scanf("%f",&b);
	printf("c="); scanf("%f",&c);
	printf("x="); scanf("%f",&x);
//	float s1= a*x*x + b*x +c;
float s1=a*pow(x,2)+b*x+c;
printf("%.1f\n", s1);

float s2= sqrt(b*b - 4*a*c);
	if(b*b - 4*a*c >0){
		printf("s2 = %.2f\n", s2);
	}else{
		printf("s2 = 0\n"); 
	}
	
	s2= (b*b-4*a*c)>0? sqrt(b*b-4*a*c):0;
	printf("\n s2=%f", s2);
		
	return 0;
	
}



