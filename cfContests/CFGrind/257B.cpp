    #include<bits/stdc++.h>
    #define ll long long
    #define pb push_back
    #define fr(a,b) for(int i = a; i < b; i++)
    #define rep(i,a,b) for(int i = a; i < b; i++)
    #define mod 1000000007
    #define inf (1LL<<60)
    #define all(x) (x).begin(), (x).end()
    #define prDouble(x) cout << fixed << setprecision(10) << x
    #define triplet pair<ll,pair<ll,ll>>
    #define goog(tno) cout << "Case #" << tno <<": "
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    #define read(x) int x; cin >> x
    using namespace std;
    
    void init_code() {
        fast_io;
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif 
    }


    int main() {
        init_code();
        int t;
        t = 1;
        while(t--){
            int a,b1;cin>>a>>b1;
            int r = min(a,b1);
            int b = max(a,b1);
            int turn = 0;
            int prev = -1;
            vector<char>ans;
            while(r+b>0){
                if(turn==0){
                    if(prev==-1){
                        ans.push_back('R');
                        r--;
                        prev = 0;
                    }
                    else{
                        if(ans.back()=='R' && r!=0){
                            ans.push_back('R');
                            r--;
                        }
                        else if(ans.back()=='B' && b!=0){
                            ans.push_back('B');
                            b--;
                        }
                        else if(r==0){
                            ans.push_back('B');
                            b--;
                        }
                        else if(b==0){
                            ans.push_back('R');
                            r--;
                        }
                    }
                    turn = 1-turn;
                }
                else{
                    if(ans.back()=='R' && b!=0){
                        ans.push_back('B');
                        b--;
                    }
                    else if(ans.back()=='B' && r!=0){
                        ans.push_back('R');
                        r--;
                    }
                    else if(r==0){
                        ans.push_back('B');
                        b--;
                    }
                    else if(b==0){
                        ans.push_back('R');
                        r--;
                    }
                    turn = 1-turn;
                }
            }
            int n = ans.size();
            int p1 = 0;
            int p2 = 0;
            fr(0,n-1){
                if(ans[i]==ans[i+1])p1++;
                else p2++;
            }
            r = max(a,b1);
            b = min(a,b1);
            turn = 0;
            prev = -1;
            vector<char>ans2;
            while(r+b>0){
                if(turn==0){
                    if(prev==-1){
                        ans2.push_back('R');
                        r--;
                        prev = 0;
                    }
                    else{
                        if(ans2.back()=='R' && r!=0){
                            ans2.push_back('R');
                            r--;
                        }
                        else if(ans2.back()=='B' && b!=0){
                            ans2.push_back('B');
                            b--;
                        }
                        else if(r==0){
                            ans2.push_back('B');
                            b--;
                        }
                        else if(b==0){
                            ans2.push_back('R');
                            r--;
                        }
                    }
                    turn = 1-turn;
                }
                else{
                    if(ans2.back()=='R' && b!=0){
                        ans2.push_back('B');
                        b--;
                    }
                    else if(ans2.back()=='B' && r!=0){
                        ans2.push_back('R');
                        r--;
                    }
                    else if(r==0){
                        ans2.push_back('B');
                        b--;
                    }
                    else if(b==0){
                        ans2.push_back('R');
                        r--;
                    }
                    turn = 1-turn;
                }
            }
            n = ans2.size();
            int p11 = 0;
            int p22 = 0;
            fr(0,n-1){
                if(ans2[i]==ans2[i+1])p11++;
                else p22++;
            }
            if(p1>p11){
                cout<<p1<<" "<<p2<<endl;
            }
            else{
                cout<<p11<<" "<<p22<<endl;
            }
        }
        return 0;

    }


