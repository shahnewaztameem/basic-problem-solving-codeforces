#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long long x, result;
    cin >> x;

    if(x < 10000) {
      result = x / 1000;
      if(result %2 == 0) {
        cout<<"EVEN";
      } else {
        cout<<"ODD";
      }
    }

    cout << "\n";

    return 0;
}
