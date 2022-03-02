#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name[8] = {
        "Fly Weight",
        "Super Fly Weight",
        "Bantam",
        "Super Bantam",
        "Feather",
        "Super Feather",
        "Light"
        "Super Light"
    };
    int weight[16] = {0,111,112,114,115,117,118,121,122,125,126,129,130,134};
    int x;
    cin >> x;
    for (int i = 0; i < 16; i+=2)
    {
        if(x > weight[i] && x < weight[i+1]) cout << name[i/2];
    }
    
    
}
