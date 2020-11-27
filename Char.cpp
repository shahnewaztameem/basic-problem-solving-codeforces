#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    char c;
    cin >>c;

    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
      if(c >= 'A' && c <= 'Z') {
        c+=32;
        cout<<c;
      } else {
        c-=32;
        cout<<c;
      }
    }
    cout << "\n";

    return 0;
}
