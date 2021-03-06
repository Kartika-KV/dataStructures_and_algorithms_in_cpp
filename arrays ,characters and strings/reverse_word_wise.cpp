/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
   */

#include<bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char input[]){
   vector <string> words;
    string word="";
    
    int size=strlen(input);
    for(int i=0;i<=size;i++){
        
        if(input[i]!=' ' && input[i]!='\0')
            word+=input[i];
        else{
            words.push_back(word);
            word="";
        }
    }
    
    reverse(words.begin(),words.end());
    
    string ans="";
    

    for(int i=0;i<words.size();i++){
        if(i!=words.size()-1)
            ans+=words[i]+" ";
        else
            ans+=words[i];
    }
    
    
    strcpy(input,ans.c_str());

   
}
int main(){
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}



