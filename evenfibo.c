#include<stdio.h>
#include<conio.h>
void main(){
	int i,sum=0,a=1,b=2,temp;	
	for(i=1;i<10;i++){
		temp=a+b;
		if(temp%2==0)
			sum=sum+temp;
		a=b;	
	}
	printf("%d",sum);

}
