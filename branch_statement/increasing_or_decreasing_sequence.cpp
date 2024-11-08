#include<iostream>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a <= b && b <= c) ? "increasing" : (a >= b && b >= c) ? "decreasing" : "neither increasing nor decreasing order");
	return 0;
}
