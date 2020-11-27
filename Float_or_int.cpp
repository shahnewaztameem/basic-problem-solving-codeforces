#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    double x, temp;
    cin >>x;
    if(x - int(x) == 0) {
      cout<<"int " << int(x);
    } else {
      cout<<"float "<< int(x) << " " << x - int(x);
    }
    cout<<"\n";


    return 0;
}
