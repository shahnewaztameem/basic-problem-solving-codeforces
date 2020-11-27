#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    double x;
    string s;

    cin >>x;
    if(x > 0 && x <= 25.0) {
      s = "Interval [0,25]";
    } else if(x > 25.0 && x <= 50.0) {
      s = "Interval (25,50]";
    } else if(x > 50.0 && x <= 75.0) {
      s = "Interval (50,75]";
    } else if(x > 75.0 && x <= 100.0) {
      s = "Interval (75,100]";
    } else {
      s = "Out of Intervals";
    }

    cout <<s;
    cout << "\n";

    return 0;
}
