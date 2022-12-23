#include <bits/stdc++.h>
using namespace std;
typedef long long int llt;


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int main()
{
    llt n;
    cin>>n;

    vector<llt>S;
    vector<llt>H;
    vector<llt>D;
    vector<llt>C;

    char temp;
    llt a;
    llt flag=0;

    stringstream ss("");
    string ss_temp;
    scanf("%c",&temp);
    for(llt i=0;i<n;i++)
    {
        S.clear();
        H.clear();
        D.clear();
        C.clear();
        ss.clear();
        ss.str("");

        getline(cin,ss_temp);
        ss<<ss_temp;
        while(ss>>temp)
        {
            ss>>a;
            //debug(temp,a);
            if(temp=='S')
            {
                S.push_back(a);
            }
            else if(temp=='H')
            {
                H.push_back(a);
            }
            else if(temp=='D')
            {
                D.push_back(a);
            }
            else if(temp=='C')
            {
                C.push_back(a);
            }
        }

        sort(S.begin(),S.end());
        sort(H.begin(),H.end());
        sort(D.begin(),D.end());
        sort(C.begin(),C.end());

        flag=0;
        for(llt j=S.size()-1;j>=0;j--)
        {
            if(flag==0)
            {
                cout<<'S'<<S[j];
                flag=1;
            }
            else
            {
                cout<<" "<<'S'<<S[j];
            }
        }

        for(llt j=H.size()-1;j>=0;j--)
        {
            if(flag==0)
            {
                cout<<'H'<<H[j];
                flag=1;
            }
            else
            {
                cout<<" "<<'H'<<H[j];
            }
        }

        for(llt j=D.size()-1;j>=0;j--)
        {
            if(flag==0)
            {
                cout<<'D'<<D[j];
                flag=1;
            }
            else
            {
                cout<<" "<<'D'<<D[j];
            }
        }

        for(llt j=C.size()-1;j>=0;j--)
        {
            if(flag==0)
            {
                cout<<'C'<<C[j];
                flag=1;
            }
            else
            {
                cout<<" "<<'C'<<C[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
