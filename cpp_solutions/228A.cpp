#include<iostream>
using namespace std;

int main()
{
    long int a,b,c,d;
    int i,j,cn=0;;
    cin>>a>>b>>c>>d;

    if ( (a==b) &&(b==c)&&(c==d) ) { cout<<"3"<<endl; return 0;}

    if ( ((a==b) && (b==c)) || ((a==b)&& (b==d)) || ((a==c)&&(c==d))||((b==c)&&(c==d))) { cout<<"2"<<endl; return 0; }

    if (((a==b)&&(c==d)) || (( a==c)&&( b==d))||((a==d)&&b==c)) { cout<<"2"<<endl; return 0; }

    if( ( a==b) || (a==c) ||( a==d)||(b==c) ||(b==d)||(c==d)) { cout<<"1"<<endl; return 0;}

    cout<<"0"<<endl;

    return 0;



}
