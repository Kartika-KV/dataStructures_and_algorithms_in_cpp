#include<iostream>
using namespace std;
int lastIndex(int input[],int n,int x){
    if (n==0)
    return -1;
    else{
        if(input[n]==x)
            return n;
        else{
            lastIndex(input,n-1,x);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout << lastIndex(input, n, x) << endl;

}