/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
   */

#include<bits/stdc++.h>
using namespace std;
void reverse_word_wise(char input[]){
       vector<string> temp;
       string str="";
       int size=strlen(input);
       for(int i=0;i<=size;i++){
            if(input[i]==' '){
                temp.push_back(str);
                str="";
            }
            else{
                str+=input[i];
            }
       }
       reverse(temp.begin(),temp.end());
       string ans="";
       for(int i=0;i<temp.size();i++){
           if(i!=temp.size()-1){
                 ans+=temp[i]+" ";
           }
           else
               ans+=temp[i];

       }

       strcpy(input,ans.c_str());
}
int main(){
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}



