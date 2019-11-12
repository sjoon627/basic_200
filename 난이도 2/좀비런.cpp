#include <iostream>
using namespace std;
int main() {
	int n,input,b=0,i;
	cin >> n;
	
	for(i=0;i<n;i++){
		cin >> input;
		
		if(b < input)
			b = input;
	}
	cout << b;
	return 0;
}
