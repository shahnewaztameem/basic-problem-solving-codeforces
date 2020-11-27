#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    char ch;
    cin >>ch;

    if(ch >= 48 && ch <= 57) {
      cout<<"IS DIGIT";
    } else if(ch >= 65 && ch <=91 || ch  >= 97 && ch <= 123) {
      cout<<"ALPHA"<<"\n";
      if(ch >= 65 && ch <=91) {
        cout<<"IS CAPITAL";
      } else if(ch  >= 97 && ch <= 123) {
        cout<<"IS SMALL";
      }
    }

    cout << "\n";

    return 0;
}
