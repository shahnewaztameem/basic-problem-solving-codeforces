#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b;
    cin>>a>>b;
    cout<<"floor "<< a <<" / " << b << " = " << floor(a/b)<<"\n";
    cout<<"ceil "<< a <<" / " << b << " = " << ceil(a/b)<<"\n";
    cout<<"round "<< a <<" / " << b << " = " << round(a/b)<<"\n";

    return 0;
}
