#include<iostream>
#include<vector>

using namespace std;



int main()
{
    vector<char> result;
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c)
            result.push_back('+');
        else
            result.push_back('-');
    }

    for (int i = 0; i < (int)result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;
}

