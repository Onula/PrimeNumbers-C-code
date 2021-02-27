#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {
    FALSE, TRUE
} boolean;

boolean isPrime(int n);


int main(){
	
	
}


boolean isPrime(int n){
	int i;
	int sqrtN = sqrt(n);
	for(i=sqrtN; i>1; i--) if(n%i == 0) return FALSE;
	
	return TRUE;
}


