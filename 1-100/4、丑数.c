#include <stdio.h>
#include <stdlib.h>


    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     *///�κγ��������Ա�ʾΪ��i^2 * j^3 * k^5����һ����������ǰ��ĳ����������2��3��5��
    int nthUglyNumber(int n) {
    
    	int numvalue[2000];
		numvalue[1]=1; 
   	
        int num,num2=1,num3=1,num5=1;// ��ʾ�ڼ�λ��ֵ        
		int numvalue2=0,numvalue3=0,numvalue5=0;//��ʾ��ǰ����ֵ  ��λ��num*���Ե�ֵ 
		
		
		if(n==1) return 1;
		
		
		for(num=2;num<=n;num++){//�ӵڶ�����ʼ


			numvalue2=numvalue[num2]*2;
			numvalue3=numvalue[num3]*3;
			numvalue5=numvalue[num5]*5;
			//printf("��ʼnumvalue2=%d,numvalue3=%d,numvalue5=%d\n",numvalue2,numvalue3,numvalue5);
			
			if(numvalue2==numvalue3)	{++num2;numvalue2=numvalue[num2]*2;}	   //��֤��Ҫ�ظ��� 
			if(numvalue2==numvalue5)	{++num2;numvalue2=numvalue[num2]*2;}
			if(numvalue3==numvalue5)	{++num3;numvalue3=numvalue[num3]*3;}			
			 
			if((numvalue[num2]*2<=numvalue[num3]*3)&&(numvalue[num2]*2<=numvalue[num5]*5)){		//�����ж�3����ֵ�ĸ���С   ��value2  �� value3 ��  value5 
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