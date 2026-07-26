#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
bool ispalindrome(int x)
    { 
        if(x<=0)
        {
            
            if(x==0)
            return true;

            else
            return false;
        }
        

        string s= to_string(x);
        string rep=s;
        reverse(rep.begin(),rep.end());
        return s==rep;
        return true;

    }


int main ()
{    int x;
    cin>>x;
    ispalindrome(x);
    if(ispalindrome)
    {
        cout<<"true"<<endl;
    }
    else
    cout<<"false"<<endl;

    return 0;

    
    
   
     
}