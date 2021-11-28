#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int r=0;
	int g=0;
	int b=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='R' && s[i+1]=='R' && (i+1)<s.size()){
	        r++;
	    }
	    else if(s[i]=='G' && s[i+1]=='G' && (i+1)<s.size()){
	        g++;
	    }
	    else if(s[i]=='B' && s[i+1]=='B' && (i+1)<s.size()){
	        b++;
	    }
	}
	cout<<r+b+g;
	return 0;
}
