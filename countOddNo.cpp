#include<iostream>
using namespace std;
int countOdd(int low,int high){
    int count=0;
    for(int i=low;i<=high;i++){
        if(i%2!=0)count++;
    }
    return count;
}
int main(){
    int high,low;
    cout<<"Enter low: ";
    cin>>low;
    cout<<"Enter high:";
    cin>>high;
    cout<<countOdd(low,high);
}