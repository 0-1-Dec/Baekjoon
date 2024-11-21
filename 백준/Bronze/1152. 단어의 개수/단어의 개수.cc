#include <iostream>

using namespace std;

int main()
{
    int cnt = 0; int cnt2 = 0; int ans = 0;
    string S;
    getline(cin, S);
    
    if(S.length() == 1 && S[0] == ' '){
        cout<<'0';
        return 0;
    }
    
        if (S[0]==' '){
            cnt++;
        }
        

        if (S[S.length()-1]==' '){
            cnt2++;
        }

    
    for(int i = cnt+1; i < S.length()-cnt2; i++){
        if (S[i]==' '){
            ans++;
        }
    }
    cout<<ans+1;
    return 0;
}