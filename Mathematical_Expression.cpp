#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long long a,b,c, tempsum;
    char sign;
    char q;

    cin>>a>>sign>>b>>q>>c;

    if(sign == 43) {
      tempsum= a + b;
      if(tempsum == c) {
        cout<<"Yes";
      } else {
        cout<<tempsum;
      }
    } else if(sign == 45) {
      tempsum = a - b;
      if(tempsum == c) {
        cout<<"Yes";
      } else {
        cout<<tempsum;
      }
    } else if(sign == 42) {
      tempsum = a * b;
      if(tempsum == c) {
        cout<<"Yes";
      } else {
        cout<<tempsum;
      }
    }

    cout << "\n";

    return 0;
}
