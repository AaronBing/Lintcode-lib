#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/* 
描述
给你一个整数n. 从 1 到 n 按照下面的规则打印每个数：

如果这个数被3整除，打印fizz.
如果这个数被5整除，打印buzz.
如果这个数能同时被3和5整除，打印fizz buzz.
如果这个数既不能被 3 整除也不能被 5 整除，打印数字本身。
您在真实的面试中是否遇到过这个题？  
样例
比如 n = 15, 返回一个字符串数组：

[
  "1", "2", "fizz",
  "4", "buzz", "fizz",
  "7", "8", "fizz",
  "buzz", "11", "fizz",
  "13", "14", "fizz buzz"
]
挑战
你是否可以只用一个 if 来实现
*/

class Solution {
public:
    /*
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> temp;
        string str;
        
        for(int i=1;i<=n;++i)
        {
            stringstream ss;
            ss<<i;
            str=ss.str();
            temp.push_back(str);
        }
        for(int j=1;(3*j)<=n;++j)
        {
            temp[3*j-1]="fizz";
        }
        for(int k=1;(5*k)<=n;++k)
        {
            if(5*k%3==0)
            {
                temp[5*k-1]=temp[5*k-1]+" "+"buzz";
            }
            else
            {
                temp[5*k-1]="buzz";
            }
        }
        return temp;
    }
};

int main() {
	vector<string> back;
	int n=15;

	Solution solut;
	back=solut.fizzBuzz(n);
	
	
	cout<<"最终结果"<<back[n]<<'\0'<<endl;
	
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