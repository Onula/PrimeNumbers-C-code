
bool isPrime(int n){
	int i;
	for(i=sqrt(n); i>1; i--) if(n%i == 0) return false;
	
	return true;
}

