#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int aplusb(int a, int b) {
    while (b != 0)
        {
            int tmpa = a ^ b;
            int tmpb = (a & b) << 1;
            //printf("%d    %d \n",tmpa,tmpb);
            a = tmpa;
            b = tmpb;
        }
     return a;
}


int Multi(int a, int b)
{
     int ans = 0;
    while(b)
    {
         if(b&1)
            ans = aplusb(ans, a);
         a = a << 1;
         b = b >> 1;
    }
    return ans;
 }

int negative(int a)
{
	return aplusb(~a,1);
}

int Minus(int a,int b)
{
	return aplusb(a,negative(b));
}


int Divide(int a,int b)
{
	int coun= 0;
	while(a>=b){
		a=Minus(a,b);
		coun = aplusb(coun,1);
	}
	return coun;
}



int trailingZeros(int n) {
	long long sum;
	sum=0;
	while(n>0){
		sum=aplusb(sum,Divide(n,5));//sum=sum+n/5;//  
		n=Divide(n,5);    //n=n/5;
	}
        
	return sum;	
		// write your code here, try to do it without arithmetic operators.
}



int main(int argc, char *argv[]) {
//	trailingZeros(11);
	printf("%d",trailingZeros(11));
	return 0;
}

