//w.c.p to print a tribonacci series//
#include<stdio.h>
int main(){
	int n,a=0,b=1,c=1,sum=1,i=1;
	printf("Enter n: ");
	scanf("%d",&n);
	while(i<=n){
		sum=a+b+c;
		printf("%d\t",a);
		a=b;
		b=c;
		c=sum;
		i++;
	}
	return 0;
}