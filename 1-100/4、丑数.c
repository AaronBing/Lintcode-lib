#include <stdio.h>
#include <stdlib.h>


    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     *///任何丑数都可以表示为：i^2 * j^3 * k^5；后一个丑数等于前面某个丑数乘以2或3或5：
    int nthUglyNumber(int n) {
    
    	int numvalue[2000];
		numvalue[1]=1; 
   	
        int num,num2=1,num3=1,num5=1;// 表示第几位数值        
		int numvalue2=0,numvalue3=0,numvalue5=0;//表示当前的数值  由位数num*各自的值 
		
		
		if(n==1) return 1;
		
		
		for(num=2;num<=n;num++){//从第二个开始


			numvalue2=numvalue[num2]*2;
			numvalue3=numvalue[num3]*3;
			numvalue5=numvalue[num5]*5;
			//printf("初始numvalue2=%d,numvalue3=%d,numvalue5=%d\n",numvalue2,numvalue3,numvalue5);
			
			if(numvalue2==numvalue3)	{++num2;numvalue2=numvalue[num2]*2;}	   //保证不要重复先 
			if(numvalue2==numvalue5)	{++num2;numvalue2=numvalue[num2]*2;}
			if(numvalue3==numvalue5)	{++num3;numvalue3=numvalue[num3]*3;}			
			 
			if((numvalue[num2]*2<=numvalue[num3]*3)&&(numvalue[num2]*2<=numvalue[num5]*5)){		//首先判断3个数值哪个最小   从value2  到 value3 到  value5 
				numvalue[num]=numvalue[num2]*2;
				num2++;
			}else if((numvalue[num3]*3<=numvalue[num2]*2)&&(numvalue[num3]*3<=numvalue[num5]*5)){
				numvalue[num]=numvalue[num3]*3;
				num3++;
			}else if((numvalue[num5]*5<=numvalue[num2]*2)&&(numvalue[num5]*5<=numvalue[num3]*3)){
				numvalue[num]=numvalue[num5]*5;
				num5++;
			}							
		}
		
		return numvalue[num-1];
		
    }

    
    
    
int main(int argc, char *argv[]) {
	int sum=0,n=41;int i;
	for(i=1;i<=n;i++){
		sum=nthUglyNumber(i);
		printf("%d\n",sum);		
	}
	
	return 0;
}