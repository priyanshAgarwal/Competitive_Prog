#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
 
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans=0;
    for(ll i=0;i<n-2;i++){
        string temp;
        temp=s.substr(i,3);
        if(temp == "010"){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
