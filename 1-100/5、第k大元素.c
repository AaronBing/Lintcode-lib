/*���������ҵ���k���Ԫ��

����Խ��������е�Ԫ�ص�λ��

������ʵ���������Ƿ�����������⣿  
����
�������� [9,3,2,4,8]���������Ԫ���� 4

�������� [1,2,3,4,5]����һ���Ԫ���� 5���ڶ����Ԫ���� 4���������Ԫ���� 3���Դ�����

��ս
Ҫ��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�ΪO(1)*/

#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
    /**
     * @param n: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
  
    int kthLargestElement(int n,vector<int> &nums) {
    	int all = nums.size();
    	bool flag = true;    //����Ƿ�������
    	for (int i = 0; i < all - 1 && flag; i++)    //���ѭ���ߵ������ڶ���Ԫ��
    	{
        	flag = false;
        	for (int j = all - 1; j > i; j--)
        		{
            		if (nums[j] < nums[j - 1])
            		{
                	swap(nums[j - 1], nums[j]);
                	flag = true;    //��һ���з�������������Ҫ��һ��
            		}    
        		}
    	}
        return nums[all-n];    //���ص�n���ֵ 
    }
//};

int main() {
	int a[5] = {3,2,1,4,5};int n=1;
						//ͨ������a�ĵ�ַ��ʼ����ע���ַ�Ǵ�0��5������ҿ����䣩
	vector<int> b(a, a+5);
	
	vector<int>::iterator iter;
	
	
	cout<<kthLargestElement(n,b)<<'\0'<<endl;
	
	for(iter=b.begin();iter!=b.end();iter++){
		cout<<*iter<<'\0';
	}
	
	return 0;
}