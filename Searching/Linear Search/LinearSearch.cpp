#include<iostream>
using namespace std;
int main(){
	
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int item, index = -1;
	cout << "Enter the item you want to search : ";
	cin >> item;
	
	for(int i = 0; i < 10; i++){
		
		if(item == arr[i]) {
		
		  index = i;
	      break; 	  
	}
	}
	
	if(index == -1)
	cout << "Sorry not found \n";
	
	else
	cout << "Found at index " << index << "\n";
}