#include <iostream>
#include <vector>
using namespace std;
 
int main(){
 
string word;
 
vector<char> new_word;
 
cin >> word;
 
for(int i = 0; i < word.size(); i++){
    char current_char = tolower(word[i]);
    bool is_vowel = (current_char == 'a' || current_char == 'e' || current_char == 'i' || current_char == 'o' || current_char == 'u' || current_char == 'y');
 
    if(is_vowel == 0){
        new_word.push_back('.');
        new_word.push_back(current_char);
    }
 
}
 
for(int i = 0; i < new_word.size(); i++){
    cout << new_word[i];
}
 
return 0;
}