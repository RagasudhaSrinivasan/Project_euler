#include<stdio.h>
#include<math.h>
int isprime(int num)
{
    int f=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            f=1;
            return 0;
            break;
        }
    }
    if(f==0)
        return 1;
}
int main()
{
    int num=2;
    long sum=0;
    while(num<2000000)
    {
        if(isprime(num)==1)
            sum=sum+num;
        num++;
    }
    printf("%ld",sum);
}
