#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
	while(1){
        cout<<"Please input a line of anything to let me delete the Punctuation"<<endl;
        string str;
        getline(cin,str);
        for(int i = 0; i<str.length();i++)
        {
            if(isalnum(str.at(i)) || isblank(str.at(i)) || str.at(i) == '_')
                cout<<str.at(i);
        }
        cout<<endl<<endl;
	}
	return 0;
}

