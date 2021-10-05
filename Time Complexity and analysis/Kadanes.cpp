// Largest Contigous Sum
#include<iostream>
using namespace std;
int kadane(int* input,int n){
    int curr_sum=0;
    int best_sum=0;
    for(int i=0;i<n;i++){
        curr_sum=curr_sum+input[i];
        if(best_sum<curr_sum){
            best_sum=curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return best_sum;
}
int main(){
    int n;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++)
        cin>>input[i];
    cout<<kadane(input,n);
    delete input;
}
