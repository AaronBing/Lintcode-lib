#include <stdio.h>
#include <stdlib.h>

//
//class Solution {
//	public:
    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     *///�κγ��������Ա�ʾΪ��i^2 * j^3 * k^5����һ����������ǰ��ĳ����������2��3��5��
    int nthUglyNumber(int n) {
    	int numvalue[100];numvalue[0]=1; 
    	
        int num,num2=0,num3=0,num5=0;// ��ʾ�ڼ�λ��ֵ
        
		int numvalue2=0,numvalue3=0,numvalue5=0;//��ʾ��ǰ����ֵ  ��λ��num*���Ե�ֵ 
		
//		numvalue2=num2*2; 				//����ԭʼ��ֵ 
//		numvalue3=num3*3; 
//		numvalue5=num5*5; 
		

		
		
		for(num=2;num<=n;num++){//�ӵڶ�����ʼ
			
			if(numvalue2==numvalue3)	++num2;	//��֤��Ҫ�ظ��� 
			if(numvalue2==numvalue5)	++num2;
			if(numvalue3==numvalue5)	++num3;
			
			numvalue2=num2*2; 				//����ԭʼ��ֵ 
			numvalue3=num3*3; 
			numvalue5=num5*5;
			
						 
			if((numvalue2<=numvalue3)&&(numvalue2<=numvalue5)){		//�����ж�3����ֵ�ĸ���С   ��value2  �� value3 ��  value5 
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