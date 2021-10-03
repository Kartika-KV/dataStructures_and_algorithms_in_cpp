#include<iostream>
using namespace std;
int sum_of_array(int input[],int n){
    if (n==0)
    return 0;
    int sum=sum_of_array(input+1,n-1)+input[0];
    return sum;
}
int main(){
    int n;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<sum_of_array(input,n);
    return 0;
}