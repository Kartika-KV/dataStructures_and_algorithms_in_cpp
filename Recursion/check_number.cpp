#include<iostream>
using namespace std;
bool checkNumber(int input[],int n,int x){
    if(n<0){
        return false;
    }
    else if (input[0]==x){
        return true;
    }
    bool check_next=checkNumber(input+1,n-1,x);
    return check_next;
}
int main(){
    int n,x;
    cin>>x;
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++)
        cin>>input[i];
    if(checkNumber(input,n,x)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}