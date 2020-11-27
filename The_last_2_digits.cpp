#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long long a,b,c,d,res;
    cin>>a>>b>>c>>d;


    res = a %100 * b%100 * c%100 * d%100;

    if(res%100 < 10) {
      cout<<0;
      cout<<res%100;
    } else {
      cout<<res%100;
    }


    cout << "\n";

    return 0;
}
