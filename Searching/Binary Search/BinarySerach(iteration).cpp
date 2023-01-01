#include<iostream>
using namespace std;
int main (){
	
	//Binary search
	// the idea is to seacrh in a sorted array by complexity time log(n)
	
	     
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	int low = 0, high = 9;
	int item , index = -1, mid = 0;
	
	cout << "Enter the number you want to search for : " ;
	cin >> item;
	
	while (low <= high){
	    
		mid = (low + high) / 2;
		
		if(arr[mid] == item){
		    index = mid;
		    break;
            	}
            	
		else if(arr[mid] > item)
		     high = mid - 1;
		
	    else if(arr[mid] < item)
	      	low = mid + 1;	  	 	
	}
	
	 if(index == -1)
	 cout << "Sorry, Not Found\n";
	 
	 else
	 cout << "Founded at index " << index << "\n";
}