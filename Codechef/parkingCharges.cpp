#include <iostream>
using namespace std;

int main() {
	int x,y,h;
	cin>>x>>y>>h;
	int ans = x + ((h-1)*y);
	cout<<ans;
	return 0;
}
