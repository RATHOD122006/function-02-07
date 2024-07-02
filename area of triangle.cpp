#include<stdio.h>

int sum(int b,int h){
	
	int result = 0.5*b*h;
	
	return result;
	
}

int main(){
	
	int b,h;
	
	printf ("give two number : ");
	
	scanf("%d%d",&b,&h);
	
	int add = sum(b,h);
	
	printf("%d",add);
	
	return 0;
}