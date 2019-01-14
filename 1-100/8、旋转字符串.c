#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/* 
描述
给定一个字符串和一个偏移量，根据偏移量旋转字符串(从左向右旋转)
 
样例
对于字符串 "abcdefg".

offset=0 => "abcdefg"
offset=1 => "gabcdef"
offset=2 => "fgabcde"
offset=3 => "efgabcd"

挑战
在数组上原地旋转，使用O(1)的额外空间
*/
	void rotateString(string &str,int offset){
        //wirte your code here
        if (str.size() == 0)
            return;
            
        offset = offset % str.size();
        str = str.substr(str.size() - offset, offset) +
                str.substr(0, str.size() - offset);
    }
class Solution {
public:
       /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
    	int strlen=str.size();				//确定字符串长度 
		int temp; 							//交换空间 
		for(int j=0;j<offset;j++){
			for(int i=0;i<strlen-1;i++){
    			temp=str[0];
    			str[0]=str[i+1];
    			str[i+1]=temp;
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