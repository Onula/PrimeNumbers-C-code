#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> //To be used the true and false

bool isPrime(int n);

int main(){
	int i, n;
	scanf("%d", &n);
	for(i=2; i<=n; i++) if( isPrime(i) ) printf("%d ", i);
}


bool isPrime(int n){
	int i;
	for(i=sqrt(n); i>1; i--) if(n%i == 0) return false;
	
	return true;
}


