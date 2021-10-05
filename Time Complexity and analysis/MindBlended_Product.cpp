/* You are given an array and you need to construct product array such that P is equal to product of all elements except 
A[i] You have to do this is contant space and division is not allowed
Example :- 10,3,5,6,2
Product array :- 180,600,360,300,900*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long prod[n];
        long lp=1;
        for(int i=0;i<n;i++){
            prod[i]=lp;
            lp=lp*arr[i];
        }
        long rp=1;
        for(int i=n-1;i>=0;i--){
            prod[i]=prod[i]*rp;
            rp=rp*arr[i];

        }
        for(int i=0;i<n;i++)
            cout<<prod[i]<<" ";
    }
}