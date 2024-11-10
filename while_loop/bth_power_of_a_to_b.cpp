#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int i = 1;
	int product = 1;
	while(i <= b){
		product *= a;
		i++;
	}
	cout << product;
	return 0;
}
