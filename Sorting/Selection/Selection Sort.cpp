#include<iostream>
using namespace std;
 
int main(){
	
	int arr[10] = {50, 30, 20, 80, 10, 90, 70, 60, 40, 100};
	int min, lastIndex;


 for(int i = 0; i < 9; i++){
 	
 	    min = arr[i];
 	    
 	for(int j = i+1; j < 10; j++){
    	
    	if(min > arr[j]) {
    	 
		 min = arr[j];    
    	 lastIndex = j;  
    	 
		}
		
	}
	
	swap(arr[lastIndex] , arr[i]);
 	
 }

	

   cout << "The list after sorted is: \n\n";
    
    for(int i = 0; i < 10; i++){
    	cout << arr[i] << " ";
	}

   cout << "\n\nThe time complexity for this algoritm is o(n*n)\n"; 
}