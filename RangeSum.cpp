#include <iostream>
#include <cmath>

using namespace std;

int main(){
	cout<<"Please input two numbers in a line and seperated by a blank(they could be integers and decimals) "<<endl;
	float a,b;
	scanf("%f %f",&a, &b);
	int aa,bb;
	aa = ceil(a);
	bb = floor(b);
	cout<<aa<<' '<<bb<<endl;
	long long res = 0;
	for(long long i = aa; i < bb; ++i)
		res += i;
	cout<< res<<endl;

	return 0;
}
