#include<stdio.h>

int sum(int r){
	
	float result = 0.314*r*r;
	
	return result;
	
}

int main(){
	
	int r;
	
	printf ("give two number : ");
	
	scanf("%d",&r);
	
	float add = sum(r);
	
	printf("%f",add);
	
	return 0;
}