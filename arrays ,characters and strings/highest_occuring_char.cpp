/*
For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
*/
#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int i=0,j=0;
    int freq[256]={0};
    while(input[i]!='\0'){
        freq[int(input[i])]+=1;
        i++;
    }
    i=1;
    int count=freq[int(input[0])],frq=0;
    while(input[i]!='\0'){
        if(freq[int(input[i])]>count){
            count=freq[int(input[i])];
            frq=i;
        }
      i++;       
    }
    return input[frq];
       
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
