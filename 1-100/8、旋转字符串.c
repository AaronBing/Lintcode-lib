#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/* 
����
����һ���ַ�����һ��ƫ����������ƫ������ת�ַ���(����������ת)
 
����
�����ַ��� "abcdefg".

offset=0 => "abcdefg"
offset=1 => "gabcdef"
offset=2 => "fgabcde"
offset=3 => "efgabcd"

��ս
��������ԭ����ת��ʹ��O(1)�Ķ���ռ�
*/

class Solution {
public:
       /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
    	int strlen=str.size();				//ȷ���ַ������� 
		int temp; 							//�����ռ� 
    	for(int i=offset;i<strlen;i++){
    		if((i+offset)<strlen){
    			temp=str[i];
    			str[i]=str[i+offset];
    			str[i+offset]=temp;	
    		}else{
    			temp=str[offset-1];
    			str[i]=str[i+offset];
    			str[i+offset]=temp;		
    		}		 
    	}
    	
        // write your code here
    }
};

int main() {
	
	
	int a[5] = {1,2,3,4,5};
//		
//	vector<int> A(a, a+5);
//	vector<int> B(a, a+5);
//	vector<int> C(10);	
//	Solution solut;
//	C=solut.mergeSortedArray(A,B);
//	for(int i=0;i<10;i++){
//		cout<<C[i]<<'\0'<<endl;
//	}
	
	return 0;
}