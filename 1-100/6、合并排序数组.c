#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

/* 
描述
合并两个排序的整数数组A和B变成一个新的数组。


样例
给出A=[1,2,3,4]，B=[2,4,5,6]，返回 [1,2,2,3,4,4,5,6]

挑战
你能否优化你的算法，如果其中一个数组很大而另一个数组很小？
*/

class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        int Anum=0,Bnum=0,Cnum0;
        int Amax=A.size(),Bmax=B.size();
		vector<int> C(2000);
		
		for(int i=0;i<100;i++){
			if(A[Anum]<=B[Bnum]){
				C[i]=A[Anum];Anum++;
			}else{
				C[i]=B[Bnum];Bnum++;
			}
		}
		
		
		return C;
		// write your code here
    }
};

int main() {
	
	
	int a[5] = {3,2,5,4,1};
		
	vector<int> A(a, a+5);
	vector<int> B(a, a+5);
	vector<int> C(2000);	
	Solution solut;
	C=solut.mergeSortedArray(A,B);
	for(int i=0;i<10;i++){
		cout<<C[i]<<'\0'<<endl;
	}
	
	
//通过数组a的地址初始化，注意地址是从0到5（左闭右开区间）
//	vector<int> b(a, a+5);
//	
//	vector<int>::iterator iter;
//	
//	
//	cout<<kthLargestElement(n,b)<<'\0'<<endl;
//	
//	for(iter=b.begin();iter!=b.end();iter++){
//		cout<<*iter<<'\0';
//	}
	
	return 0;
}