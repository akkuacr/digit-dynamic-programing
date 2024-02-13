//base recursion in which you have to print numbers between 1 to n
 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;


  string s;
  
  void fun(string ans,int index,bool last){
    
      if(index==s.size()){
        cout<<ans<<endl;
        return;
      }

    int till=(last? (s[index]-'0'): 9);

     for(int i=0;i<=till;i++){
        fun(ans+to_string(i),index+1, (last && (i==till)));
     }

  }


  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
    cin>>s;

    fun("",0,true);
 
      return 0;
  }
