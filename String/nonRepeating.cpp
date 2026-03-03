// Find the index of the first non-repeating character in a string.

#include <iostream>
#include <vector>
using namespace std;

int firstUniqueChar(string s) {
    
    vector<int> freq(26, 0);
    
    // Step 1: Count frequency
    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;
    }
    
    // Step 2: Find first character with freq = 1
    for(int i = 0; i < s.length(); i++){
        if(freq[s[i] - 'a'] == 1){
            return i;
        }
    }
    
    return -1;  // if no unique character
}

int main() {
    string s = "leetcode";
    cout << firstUniqueChar(s);

    return 0; 
}