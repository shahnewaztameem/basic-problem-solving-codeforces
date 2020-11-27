#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long long a,b;
    char s;

    cin >>a>>s>>b;
    if(s == 43) {
      cout<<a+b;
    } else if(s==45) {
      cout<<a-b;
    } else if(s==42) {
      cout<<a*b;
    } else if(s==47) {
      cout<<a/b;
    }

    cout << "\n";

    return 0;
}
