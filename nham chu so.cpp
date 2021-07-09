#include <iostream>
using namespace std;

int miss5(string a, string b)
{
    int a5=0, b5=0;
    for (int i=0; i<a.size(); i++)
        if (a[i]=='6')
            a5 = a5*10 + 5;
        else
            a5 = a5*10 + (int)(a[i]-'0');
    for (int i=0; i<b.size(); i++)
        if (b[i]=='6')
            b5 = b5*10 + 5;
        else
            b5 = b5*10 + (int)(b[i]-'0');
    return a5+b5;

}
int miss6(string a, string b)
{
    int a5=0, b5=0;
    for (int i=0; i<a.size(); i++)
        if (a[i]=='5')
            a5 = a5*10 + 6;
        else
            a5 = a5*10 + (int)(a[i]-'0');
    for (int i=0; i<b.size(); i++)
        if (b[i]=='5')
            b5 = b5*10 + 6;
        else
            b5 = b5*10 + (int)(b[i]-'0');
    return a5+b5;

}
int main()
{
    string a,b; cin>>a>>b;
    cout << miss5(a,b) << " " << miss6(a,b);
}
