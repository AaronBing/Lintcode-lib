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

class Solution {
public:
       /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
    	int strlen=str.size();				//确定字符串长度 
		char temp; 							//交换空间 
		
		if( strlen == 0)
			return ;
		
		offset=offset%strlen;
		 
		reverse(str,0,strlen-offset-1);
		cout<<"第一层结束"<<str<<'\0'<<endl;
		reverse(str,strlen-offset,strlen-1);
		cout<<"第二层结束"<<str<<'\0'<<endl;
		reverse(str,0,strlen-1);
    }
    void reverse(string &str,int start,int end){
    	char temp;int i,j;
		for(i = start, j = end; i < j; i++,j--){
    		temp = str[i];
			str[i] = str[j];
			str[j] = temp; 
			cout<<i<<" "<<j<<str<<'\0'<<endl;
    	}
    	
    }
    
    
    
};

int main() {
	
	
	int a[5] = {1,2,3,4,5};
	string aa = "abcdefghijk";
	Solution solut;
	solut.rotateString(aa,3);
	cout<<"最终结果"<<aa<<'\0'<<endl;
	
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