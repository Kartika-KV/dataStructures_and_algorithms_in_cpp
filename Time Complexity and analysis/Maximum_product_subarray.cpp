#include<iostream>
using namespace std;
int max_product_subarray(int arr[],int n){
    int max_ending=1;
    int min_ending=1;
    int max_so_far=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            max_ending=max_ending*arr[i];
            min_ending=min(1,min_ending*arr[i]);
        }
        else if (arr[i]==0){
            max_ending=1;
            min_ending=1;
        }
        else{
            int temp=max_ending;
            max_ending=max(1,min_ending*arr[i]);
            min_ending=temp*arr[i];
        }
        max_so_far=max(max_ending,max_so_far);
    }
    return max_so_far;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_product_subarray(arr,n);
}