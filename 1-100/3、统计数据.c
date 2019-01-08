#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    /*
     * param k : As description.
     * param n : As description.
     * return: An integer denote the count of digit k in 1..n
     */
int digitCounts(int k, int n) {
        // write your code here
        int sum=0;int i;
        for(i=0;i<=n;i++){
            int num=i;
            while(num/10!=0){
                if(num%10==k){
                    sum++;
                }
                num=num/10;
            }
            if(num==k)
            sum++;
        }
        
        return sum;
    }

int main(int argc, char *argv[]) {
	int k=1,n=12;
	int sum=0;
	sum=digitCounts(k, n);
	printf("%d",sum);
	return 0;
}
