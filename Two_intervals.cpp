#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    if(r1 < l2 || r2 < l1) {
      cout<<-1;
    } else {
      cout<<max(l1,l2)<<" "<<min(r1,r2);
    }

    cout << "\n";

    return 0;
}
