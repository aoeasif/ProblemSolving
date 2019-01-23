#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;

int main() {
    int i;
    string word, filterWord;
    char letter;
    set <string> d;

    while(cin >> word) {
        filterWord = "";
//        cout << ">" << word << endl;
        for(i=0; i<word.length(); i++) {
            letter = word.at(i);
            if(isalpha(letter)) {
                filterWord += tolower(letter);
            }else if(!filterWord.empty()){
                d.insert(filterWord);
                filterWord = "";
            }
        }
        if(!filterWord.empty()) d.insert(filterWord);
        

    }
    set<string>::iterator itr;
    for(itr=d.begin(); itr != d.end(); itr++) {
        cout << (*itr) << endl;
    }
    return 0;
}