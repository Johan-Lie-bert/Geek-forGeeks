#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> leader_in_array(int a[], int n){
    
    vector<int> ans;
  
    for(int i = 0; i < n-1; i++){
        bool flag = false;
        for(int j = i+1; j < n; j++){
            if(a[i]>=a[j]){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(a[i]);
    }
    ans.push_back(a[n-1]);

    return ans;
}

int main()
{
 int t ;
 cin>>t;
 while (t--){
     int n;
     cin>>n;

     int a[n];
     for(int i = 0; i < n; i++){
        cin>>a[i];
     }
     
     vector<int> Leader = leader_in_array(a,n);

     for(int i = 0; i < Leader.size(); i++){
        cout<<Leader[i]<<" ";
     }
     cout<<endl;
     
 }
 
 
  return 0;
}