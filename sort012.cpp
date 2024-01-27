#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;

void display(vector<int>&a){
for(int i=0;i<a.size();i++){
  cout<<a[i]<<" ";
}  
cout<<endl;  
}

void sort012(vector<int>&v){
   int i=0;
   int j=0;
   int k=n-1;
   while(j<=k){
    if(v[j]==2){
        int temp=v[j];
        v[j]=v[k];
        v[k]=temp;
        k--;
    }
    else if(v[j]==0){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        i++;
        j++;
    }
    else if(v[j]==1){
        j++;
    }
   }
}
//2 0 1 1 0 2 1 0
int main(){
vector<int> v;

cout<<"Enter size of vector:";
cin>>n;

cout<<"\nEnter the elements in vector:";
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  
  
  v.push_back(x);
}
display(v);
sort012(v);

display(v);

}