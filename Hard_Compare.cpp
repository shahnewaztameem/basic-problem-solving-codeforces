#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long double A,B,C,D;
    cin>>A>>B>>C>>D;

    long double new_B = B/10000000000000;
    long double new_D = D/10000000000000;

    if (pow(A,new_B)> pow(C,new_D))
        cout<<"YES";
    else
        cout<<"NO";
    cout << "\n";

    return 0;
}
