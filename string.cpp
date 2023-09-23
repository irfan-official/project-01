#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "0 12345    ";
    int i = 0;
    str[4] = ' ';  //  Removing 4th element using null space 
    cout<<str<<endl;
    cout<<"Initially string size : "<<str.size()<<endl;
    for(char c : str)
    {
        
        if(!isspace(c))
        {
            str[i++] = c;  // Reinitialization without null space
        }
    }
    str.resize(i);
    cout<<"After removing spaces string size : "<<str.size()<<endl;
    cout<<str;
    return 0;
}