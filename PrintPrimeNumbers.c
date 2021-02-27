//By Onur Ibrahim( Onula )
//This code print the prime numbers using isPrime(n) function
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> //To be used the true and false

bool isPrime(int n);// returns true or false

int main(){
	int i, n;
	scanf("%d", &n);//input(last number)
	for(i=2; i<=n; i++) if( isPrime(i) ) printf("%d ", i);
}

bool isPrime(int n){
	int i;
	for(i=sqrt(n); i>1; i--) if(n%i == 0) return false;//If at least one number between {2,...,sqrt(n)} divides the n number then it is not a prime number 
	
	return true;//if dont have a number between {2,...,sqrt(n)} that divides the n number then n it is prime number
}


