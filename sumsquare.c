#include <stdio.h>

int main()
{
    
int n,j,i,sum=0,sum2=0,sum1=0,total;
    
for(i=1;i<=100;i++){
        
sum=sum+i;
    
}
    
sum1=sum*sum;
    
for(j=1;j<=100;j++){
        
sum2=sum2+(j*j);
    
}
    
total=sum1-sum2;
    
printf("%d",total);
    

}
