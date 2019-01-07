#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*
 * @param a: An integer
 * @param b: An integer
 * @return: The sum of a and b
*/
int aplusb(int a, int b) {
    while (b != 0)
        {
            int tmpa = a ^ b;
            int tmpb = (a & b) << 1;
            //printf("%d    %d \n",tmpa,tmpb);
            a = tmpa;
            b = tmpb;
        }
     return a;
}

int main(int argc, char** argv) {
	aplusb(3,1);
	return 0;
}
