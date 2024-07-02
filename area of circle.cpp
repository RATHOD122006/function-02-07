#include<stdio.h>

int sum(int r){
	
	float result = 0.314*r*r;
	
	return result;
	
}

int main(){
	
	int r;
	
	printf ("give one number : ");
	
	scanf("%d",&r);
	
	float add = sum(r);
	
	printf("%.2f",add);
	
	return 0;
}