/*在数组中找到第k大的元素

你可以交换数组中的元素的位置

您在真实的面试中是否遇到过这个题？  
样例
给出数组 [9,3,2,4,8]，第三大的元素是 4

给出数组 [1,2,3,4,5]，第一大的元素是 5，第二大的元素是 4，第三大的元素是 3，以此类推

挑战
要求时间复杂度为O(n)，空间复杂度为O(1)*/

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
    	bool flag = true;    //标记是否发生交换
    	for (int i = 0; i < all - 1 && flag; i++)    //外层循环走到倒数第二个元素
    	{
        	flag = false;
        	for (int j = all - 1; j > i; j--)
        		{
            		if (nums[j] < nums[j - 1])
            		{
                	swap(nums[j - 1], nums[j]);
                	flag = true;    //这一轮有反生交换，就需要下一轮
            		}    
        		}
    	}
        return nums[all-n];    //返回第n大的值 
    }
//};

int main() {
	int a[5] = {3,2,1,4,5};int n=1;
						//通过数组a的地址初始化，注意地址是从0到5（左闭右开区间）
	vector<int> b(a, a+5);
	
	vector<int>::iterator iter;
	
	
	cout<<kthLargestElement(n,b)<<'\0'<<endl;
	
	for(iter=b.begin();iter!=b.end();iter++){
		cout<<*iter<<'\0';
	}
	
	return 0;
}