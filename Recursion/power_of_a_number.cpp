/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.*/
#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==1)
        return x;
    
    int temp=power(x,n/2);
    if(n%2==0)
        return temp*temp;
    
    else
        return x*temp*temp;
    
}
int main(){
int n,x;
cin>>x>>n;
cout<<power(x,n)<<endl;
return 0;
}
