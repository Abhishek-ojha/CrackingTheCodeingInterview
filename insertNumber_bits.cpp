#include <iostream>
using namespace std;
int insertNumber(int M,int N, int i, int j){
    int allone= ~0;// a number with all 1s
    int left=allone &(1<<(j+1)); // clear all bits from j to 0
    int right= allone &((1 <<i)-1); // set it till 1, then subtract 1 to have 1's till lsb
    int mask=left|right;// generate a mask with 1s till j+1 then 0s then again 1s
    int cleared_N=N &mask;
    int shifted_M=M <<i;// as it has to be inserted b/w i and j
    int result=cleared_N|shifted_M;
    return result;
}

int main() {
	// your code goes here
	int M=5;
	int N=10;
	std::cout << insertNumber(M,N,2,4) << std::endl;
	return 0;
}
