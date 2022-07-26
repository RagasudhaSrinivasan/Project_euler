#include <stdio.h>

int palindrome(int p){
    
int rev=0,d,a=p;
    
while(p){
       
d=p%10;
        
rev=rev*10+d;
        
p=p/10; 
    
}
    
return(rev==a);

}

int main()
{
    
int i,j,max=0;
    
for(i=100;i<1000;i++){
        
for(j=100;j<1000;j++){
            
int p=i*j;
            
if(palindrome(p)&&p>max){
                
max=p;
            
}
        
}
    
}
    
printf("%d",max);
    
return 0;

}
