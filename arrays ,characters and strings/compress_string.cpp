/*Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
   */

#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
    int i,n=strlen(input);
    int j=0,count=1;
    char ans[n];
    ans[0]=input[0];

    for(i=1;i<n;i++)
    {   
        int curr=input[i];
        int prev=input[i-1];
        if(curr==prev)
            count++;
		if(curr!=prev){
            if(count>1){
                j+=1;
                ans[j]=char(48+count);
                count=1;
            }
            j+=1;
            ans[j]=curr;
           
        }       
    }
     if(count>1){
        j+=1;
        ans[j]=char(48+count);
        count=1;
    }
    j++;
    ans[j]='\0';
    strcpy(input,ans);
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    stringCompression(str);
    cout << str;
}
