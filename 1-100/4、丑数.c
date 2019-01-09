#include <stdio.h>
#include <stdlib.h>

//
//class Solution {
//	public:
    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     *///任何丑数都可以表示为：i^2 * j^3 * k^5；后一个丑数等于前面某个丑数乘以2或3或5：
    int nthUglyNumber(int n) {
    	int numvalue[100];numvalue[0]=1; 
    	
        int num,num2=0,num3=0,num5=0;// 表示第几位数值
        
		int numvalue2=0,numvalue3=0,numvalue5=0;//表示当前的数值  由位数num*各自的值 
		
//		numvalue2=num2*2; 				//先求原始初值 
//		numvalue3=num3*3; 
//		numvalue5=num5*5; 
		

		
		
		for(num=2;num<=n;num++){//从第二个开始
			
			if(numvalue2==numvalue3)	++num2;	//保证不要重复先 
			if(numvalue2==numvalue5)	++num2;
			if(numvalue3==numvalue5)	++num3;
			
			numvalue2=num2*2; 				//先求原始初值 
			numvalue3=num3*3; 
			numvalue5=num5*5;
			
						 
			if((numvalue2<=numvalue3)&&(numvalue2<=numvalue5)){		//首先判断3个数值哪个最小   从value2  到 value3 到  value5 
				numvalue[num]=numvalue2;
				numvalue2=(++num2)*2;
			}else if((numvalue3<=numvalue2)&&(numvalue3<=numvalue5)){
				numvalue[num]=numvalue3;
				numvalue3=(++num3)*3;
			}else if((numvalue5<=numvalue2)&&(numvalue5<=numvalue3)){
				numvalue[num]=numvalue5;
				numvalue5=(++num5)*5;
			}							
		}
		
		return numvalue[n];
		// write your code here
    }
//};
    
    
    
int main(int argc, char *argv[]) {
	int sum=0,n=41;int i;
	for(i=1;i<=n;i++){
		sum=nthUglyNumber(i);
		printf("%d\n",sum);		
	}
	
	return 0;
}