 
#include <bits/stdc++.h>
using namespace std;


#define ll long long int
#define f(a,b,i) for(ll i=a;i<b;i++)


string addition(string s1,string s2)
{
    if (s1.length() > s2.length())
        swap(s1, s2);
 
    string s = "";
 
    int n1 = s1.length(), n2 = s2.length();

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
 
    int x = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((s1[i]-'0')+(s2[i]-'0')+x);
        s.push_back(sum%10 + '0');
 
        x = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((s2[i]-'0')+x);
        s.push_back(sum%10 + '0');
        x = sum/10;
    }
 
    if (x)
        s.push_back(x+'0');
    reverse(s.begin(), s.end());
 
    return s;
}

string fib(int n)
{
    string a="0",b="1",c;
    if(n==0)
    return a;
    if(n==1)
    return b;
    f(2,n+1,i)
    {
        c=addition(a,b);
        a=b;
        b=c;
    }
    return b;
}


int main()
{
   
    ll n;
    cout<<"Enter a value"<<endl;
    cin>>n;
    cout<<fib(n);

    return 0;    
}


