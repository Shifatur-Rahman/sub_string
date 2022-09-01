#include <iostream>
using namespace std;

int main(){

int n=7;
int arr[50] = {10,10,58,31,63,40,76};
int i, max, min;


for(i=0; i<7; i++){
	//	max= arr[0];
       min = arr[0];
	//if(arr[i]>max){
	//	max = i+1;
//	}

	 if(min>arr[i]){
		min = i;
	}

cout<<min;
}


}
