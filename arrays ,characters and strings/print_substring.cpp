/* For a given input string(str), write a function to print all the possible substrings.
Sample Input 1:
abc
Sample Output 1:
a
ab
abc
b
bc
c
*/

#include<iostream>
#include<cstring>
using namespace std;

void printSubstrings(char input[]) {
    int size=strlen(input);
    for(int len=1;len<=size;len++){
        for(int start=0;start<=size-len;start++){
            for(int end=start;end<=start+len-1;end++){
                cout<<input[end];
            }
            cout<<endl;
        }
    }
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
