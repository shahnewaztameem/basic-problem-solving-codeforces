#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long long a,b;
    char s;

    cin>>a>>s>>b;

    if(s == 60) {
      if(a < b) {
        cout<<"Right";
      }
      else
        cout <<"Wrong";
    } else if(s == 62) {
      if(a > b) {
        cout<<"Right";
      } else
          cout <<"Wrong";
    } else if(s == 61) {
      if(a == b) {
        cout<<"Right";
      } else
          cout <<"Wrong";
    }

    cout << "\n";

    return 0;
}
