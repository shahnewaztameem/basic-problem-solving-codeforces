#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    long long a,b;
    cin>>a>>b;

    if(a%b ==0 || b%a==0){
      cout<<"Multiples";
    } else {
      cout<<"No Multiples";
    }

    cout << "\n";

    return 0;
}
