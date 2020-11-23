#include <iostream>
#include <cmath>

using namespace std;

int main(){
	while(1){
        cout<<"Please input an integer to calculate the approximate factorial of this number:"<<endl;
        int in;
        cin>>in;
        double res = 1;
        if (in == 0 || in == 1)
        {
            cout<<"1.0"<<endl;
        }
        else if(in < 0)
        {
            cout<<'?'<<endl;
        }
        else{
            for(int i = 1; i <= in; i++)
                res *= i;

            cout<<res<<endl;
        }
        cout<<endl;
	}
	return 0;
}

