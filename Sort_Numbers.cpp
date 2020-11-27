#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    long long a,b,c, temp, sortedA, sortedB, sortedC;

    cin >>a>>b>>c;
    sortedA = a;
    sortedB = b;
    sortedC = c;

    if(sortedA > sortedB) {
      temp = sortedA;
      sortedA = sortedB;
      sortedB = temp;
    } if(sortedA > sortedC) {
      temp = sortedA;
      sortedA = sortedC;
      sortedC = temp;
    } if(sortedB > sortedC) {
      temp = sortedB;
      sortedB = sortedC;
      sortedC = temp;
    }

    cout<<sortedA<<"\n"<<sortedB<<"\n"<<sortedC;

    cout << "\n";

    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;

    return 0;
}
