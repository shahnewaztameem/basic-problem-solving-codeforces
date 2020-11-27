#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    string f1,s1,f2,s2;

    cin>>f1>>s1>>f2>>s2;

    if(s1==s2) {
      cout<<"ARE Brothers";
    } else {
      cout<<"NOT";
    }
    cout << "\n";

    return 0;
}
