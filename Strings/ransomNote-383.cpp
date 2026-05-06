#include<iostream>
#include<vector>
using namespace std;
// Brute force --> TC = O(n*m), SC = O(1)
// bool fun(string& mag, char ch){
//     for(int i = 0;i<mag.size();i++){ // TC = O(m)
//         if(mag[i] == ch){
//             mag.erase(i,1);
//             return true;
//         }
//     }
//     return false;
// }
// bool canConstruct(string& ransomNote, string& magazine) {
//     if (magazine.size() < ransomNote.size())
//         return false;
//     for(char ch : ransomNote){  // TC = O(n)
//         if(!fun(magazine, ch))
//             return false;
//     }
//     return true;
// }

// Optimal --> TC = O(m+n)
bool canConstruct(string& ransomNote, string& magazine) {
    vector<int> freq(26,0);
    for(char ch : magazine){ // TC = O(m)
        freq[ch - 'a']++;
    }
    for(char c : ransomNote){
        if(freq[c - 'a'] == 0){ // TC = O(n)
            return false;
        } else{
            freq[c - 'a']--;
        }
    }
    return true;
}
int main(){
    string rNote = "aa";
    string mag = "aab";
    cout<<canConstruct(rNote, mag);
    return 0;
}