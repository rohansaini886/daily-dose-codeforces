#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    int a,b;

    for(int i=1;i<=5;i++){

        for(int o=1;o<=5;o++){

            int h;

            cin>>h;

            if(h){

                a=i;

                b=o;

            }

        }

    }

    cout<<abs(3-a)+abs(3-b);

    return 0;

}
