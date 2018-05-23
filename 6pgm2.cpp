#include<iostream>
using namespace std;
void expand(int);
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    expand(n);
}
void expand(int val)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};

    if(val<0)
    {
        cout<<"minus ";
        expand(-val);
    }
    else if(val>=1000)
    {
        expand(val/1000);
        cout<<" thousand";
        if(val % 1000)
        {
            if(val % 1000 < 100)
            {
                cout << " and";
            }
            cout << " " ;
            expand(val % 1000);
        }
    }
    else if(val >= 100)
    {
        expand(val / 100);
        cout<<" hundred";
        if(val % 100)
        {
            cout << " and ";
            expand (val % 100);
        }
    }
    else if(val >= 20)
    {
        cout << tens[val / 10];
        if(val % 10)
        {
            cout << " ";
            expand(val % 10);
        }
    }
    else
    {
        cout<<ones[val];
    }
    return;
}
