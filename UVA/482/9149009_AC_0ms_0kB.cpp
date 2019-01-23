#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

int main() {
    int n, index;
    string list, listItem;
    char iFalse;
    unsigned int i;
    vector <int> indexVector;
    vector <string> listVector;
    vector <string> permuteVector;

    scanf("%d", &n);

    while(n--) {
        while(scanf("%d%c", &index, &iFalse)) {
            indexVector.push_back(index);
            if(iFalse == '\n') break;
        }

        getline(cin, list);
        istringstream iss(list);
        while(iss >> listItem) {
            listVector.push_back(listItem);
        }

        for(i = 0; i < listVector.size(); i++) permuteVector.push_back("0");

        for(i = 0; i < indexVector.size(); i++) {
            index = indexVector[i];
            permuteVector[index-1] = listVector[i];

        }

        for(i = 0; i < permuteVector.size(); i++) cout << permuteVector[i] << endl;
        if(n)cout << endl;

        indexVector.clear();
        listVector.clear();
        permuteVector.clear();

    }

    return 0;
}

