#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int longestseq(int number){
  //if it's all 1's,just return int size
	if(number==-1)
		return sizeof(int)*8;
	int current=0,previous=0,maxlen=0;
	while(number!=0){
    //keep increasing till we get 1's
		if((number&1)==1)
			current++;
		else if((number &1)==0){
		// if the current bit is zero, then need to check next bit, if that is also zero, our current sequence would end
			previous=(number&2)==0?0:current;
			//reset current 
			current=0;
		}
		maxlen=max(current+previous,maxlen);
		number =number>>1;
		
	}
  
	return maxlen+1;
}

int main() {
	
	cout<<longestseq(5);
	return 0;
}
