#include<stdio.h>

int snt(int a){

	if(a<2) return 0;

	for(int i=2; i<a; ++i){

		if(a%i==0){

			return 0;

		}

	}

	return 1;

}

int main(){

  long long m, n ;

  printf("m = ");

  scanf("%lld", &m);

  printf("n = ");

  scanf("%lld", &n);

  

  long long GCD, LCM;

  long long x=m, y=n;

 

  while(x!=y){

    if(x>y) x-=y;

    else y-=x;

  }

  GCD=x;

  printf("GCD = %lld\n", GCD);

  

  LCM=(m*n)/GCD;

  printf("LCM = %lld\n", LCM);

  

  printf("All common prime: ");

  for(int i=2; i<=GCD; ++i){

  	if(GCD%i==0 && snt(i)){

  		printf("%lld ", i);

	  }

  }
return 0;
}

