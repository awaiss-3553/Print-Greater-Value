#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"enter 1 number:";
    cin >>a;
    cout<<"enter 2 number:";
    cin >>b;
    cout<<"enter 3 number:";
    cin >>c;
    if(a>b and a>c) cout<<a;
    else if (b>a and b>c) cout<<b;
    else cout<<c;
    return 0;
}
