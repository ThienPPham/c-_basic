#include<iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	//cout << ((a >= 0 && a <= 10) ? "The score is valid" : "The score is not valid");
	cout << ((a < 0 || a > 10) ? "The score is not valid" : "The score is valid");
	return 0;
}
