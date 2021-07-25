/*For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
 */
#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    int i,n=strlen(input);
    int j=0;
    for(i=1;i<n;i++)
    {
		if(input[j]!=input[i]){
            j++;
            input[j]=input[i];
        }        
    }
    j++;
    input[j]='\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
