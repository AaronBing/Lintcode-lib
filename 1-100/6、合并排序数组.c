#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

/* 
����
�ϲ������������������A��B���һ���µ����顣


����
����A=[1,2,3,4]��B=[2,4,5,6]������ [1,2,2,3,4,4,5,6]

��ս
���ܷ��Ż�����㷨���������һ������ܴ����һ�������С��
*/

class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        int Anum=0,Bnum=0;							//��ʾ����A��B���±�ֵ 
        int Amax=A.size(),Bmax=B.size();			//����A��B����󳤶� 
		vector<int> C(Amax+Bmax);					//�ϳɵ�����C 
		
		for(int i=0;i<Amax+Bmax;i++){
			if((Bnum<Bmax)&&(Anum<Amax)){           //��A��b���黹��ֵ�Ƚ� 
				if(A[Anum]<=B[Bnum]){
					C[i]=A[Anum];Anum++;
				}else{
					C[i]=B[Bnum];Bnum++;
				}
			}else if(Anum==Amax){					//��A��� 
				C[i]=B[Bnum];Bnum++;
			}else if(Bnum==Bmax){					//��B���
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