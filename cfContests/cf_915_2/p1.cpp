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
      cin >> t;
      while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s2=s;
        stack<pair<char,int>>st;
        for(int i=0;i<n;i++){
         if(st.size()==0){
            st.push({s[i],i});
         }
         else{
            while(st.size()>0 && s[i]>st.top().first){
               st.pop();
            }
             st.push({s[i],i});         

         }
        }
        stack<pair<char,int>>st2=st;
        stack<pair<char,int>>st1;
        int k=st.size();
        while(!st.empty()){
            st1.push({st.top().first,st.top().second});
            st.pop();
        }
        string sr="";
        while(!st1.empty()){
         sr+=st1.top().first;
         s[st2.top().second]=st1.top().first;
         st1.pop();
         st2.pop();
        }
        bool b =true;
        for(int i=1;i<n;i++){
         if(s[i]<s[i-1]){
            b=false;
            break;
         }
        }
        if(!b){
         cout<<-1<<endl;
        }
        
        else{
            cout<<sett.size()-1<<endl;
        }
      }
      
      return 0;
         
         
   }




