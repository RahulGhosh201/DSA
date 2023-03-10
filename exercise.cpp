#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="information";
    int count=0;
    int n=strlen(str);//length of an char array
    char temp[n];
    cout<<"Upper case of the given string: "<<endl;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' )
        {
            count++;
        }
        putchar(toupper(str[i]));
    }
    cout<<endl;
    cout<<"No of vowels present in the given string: "<<count<<endl;
    cout<<"After reverse: "<<endl;
    for(int i=0;i<n;i++)
    {
        temp[i]=toupper(str[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<temp[i];
    }cout<<endl;
}