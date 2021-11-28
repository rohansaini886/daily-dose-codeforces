#include <iostream>

using namespace std;

int main()
{
    int dost, fingers, sum = 0, z = 0;
    cin >> dost;
    for (int i = 0; i < dost; ++i)
    {
        cin >> fingers;
        sum += fingers;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((sum + i) % (dost + 1) == 1)
        {
            continue;
        }else{
            z += 1;
        }
    }
    cout << z << endl;
    return 0;
}
