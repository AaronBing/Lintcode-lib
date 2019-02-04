#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/* 
����
����һ������n. �� 1 �� n ��������Ĺ����ӡÿ������

����������3��������ӡfizz.
����������5��������ӡbuzz.
����������ͬʱ��3��5��������ӡfizz buzz.
���������Ȳ��ܱ� 3 ����Ҳ���ܱ� 5 ��������ӡ���ֱ���
������ʵ���������Ƿ�����������⣿  
����
���� n = 15, ����һ���ַ������飺

[
  "1", "2", "fizz",
  "4", "buzz", "fizz",
  "7", "8", "fizz",
  "buzz", "11", "fizz",
  "13", "14", "fizz buzz"
]
��ս
���Ƿ����ֻ��һ�� if ��ʵ��
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
	
	
	cout<<"���ս��"<<back[n]<<'\0'<<endl;
	
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