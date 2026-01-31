#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int data[] = {7,8,2,1,2,4,6,9,0,1}; 
	cout << "Before: ";
	for(int i = 0; i<10; i++) cout << data[i] << " ";
	
	int data1[5], data2[5];
	for (int i = 0; i<5; i++) {
		data1[i] = data[i];
		data2[i] = data[i+5];
	}
	
	sort(&data1[0],&data1[5]);
	sort(&data2[0],&data2[5]);

	for (int i = 0; i<5; i++) {
		data[i] = data1[i];
		data[i+5] = data2[i];
	}

	cout << "\nAfter: ";
	for(int i = 0; i<10; i++) cout << data[i] << " ";
	return 0;
}
