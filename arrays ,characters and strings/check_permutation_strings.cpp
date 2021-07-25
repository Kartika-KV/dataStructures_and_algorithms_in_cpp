/* For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
   Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example:
str1= "sinrtg"
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
 */

#include <iostream>
#include <cstring>
using namespace std;
/* For checkingstring permutations
1) Length of strings should be same 
2) Frequency array should be same */



bool isPermutation(char input1[], char input2[]) {
    if(strlen(input1)==strlen(input2)){
        int freq[256]={0};
   		int i,n=strlen(input1);
        for(i=0;i<n;i++)
            freq[int(input1[i])]+=1;
        
        for(i=0;i<n;i++)
            freq[int(input2[i])]-=1;
  		int count=0;
        for(i=0;i<256;i++)
            if(freq[i]!=0)
                count+=1;
        if(count==0)
            return true;
        else
            return false;
    }
    
    else
        return false;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
