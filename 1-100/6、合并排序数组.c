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
        int Anum=0,Bnum=0;							//表示数组A、B的下表值 
        int Amax=A.size(),Bmax=B.size();			//数组A、B的最大长度 
		vector<int> C(Amax+Bmax);					//合成的数组C 
		
		for(int i=0;i<Amax+Bmax;i++){
			if((Bnum<Bmax)&&(Anum<Amax)){           //当A、b数组还有值比较 
				if(A[Anum]<=B[Bnum]){
					C[i]=A[Anum];Anum++;
				}else{
					C[i]=B[Bnum];Bnum++;
				}
			}else if(Anum==Amax){					//当A完结 
				C[i]=B[Bnum];Bnum++;
			}else if(Bnum==Bmax){					//当B完结
				 C[i]=A[Anum];Anum++;
			} 				
		}	
		return C;
    }
};

int main() {
	
	
	int a[5] = {1,2,3,4,5};
		
	vector<int> A(a, a+5);
	vector<int> B(a, a+5);
	vector<int> C(10);	
	Solution solut;
	C=solut.mergeSortedArray(A,B);
	for(int i=0;i<10;i++){
		cout<<C[i]<<'\0'<<endl;
	}
	
	return 0;
}