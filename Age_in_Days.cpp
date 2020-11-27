#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    long long age,year, month,days;

    cin>>age;

    year = age / 365;
    month = (age % 365) / 30;
    days = (age % 365) % 30;

    cout<<year<<" ano(s)";
    cout << "\n";

    cout<<month<<" mes(es)";
    cout << "\n";

    cout<<days<<" dia(s)";
    cout << "\n";



    return 0;
}
