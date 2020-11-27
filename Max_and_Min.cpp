#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c, minimum, maximum;

    cin >> a>>b>>c;
    if(a >= b && a >= c) {
      maximum = a;
    }
    if(a <= b && a <= c) {
      minimum = a;
    }
    if(b >= a && b >= c) {
      maximum = b;
    }
    if(b <= a && b <= c) {
      minimum = b;
    }

    if(c >= a && c >= b) {
      maximum = c;
    }

    if(c <= a && c <= b) {
      minimum = c;
    }

    cout << minimum << " " << maximum;

    return 0;
}
