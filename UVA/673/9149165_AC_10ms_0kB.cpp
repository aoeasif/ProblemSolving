#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;



int main() {
    int n, i, len;
    char par;

    stack<char> parStack;

    scanf("%d%c", &n, &par);
    while (n--) {
        char ch[150];
        gets(ch);
        len = strlen(ch);
        for (i = 0; i < len; i++) {
            if (ch[i] == '(' || ch[i] == '[') {
                parStack.push(ch[i]);
            } else if (ch[i] == ')') {
                if (parStack.empty() || parStack.top() != '(') break;
                parStack.pop();
            } else if (ch[i] == ']') {
                if (parStack.empty() || parStack.top() != '[') break;
                parStack.pop();
            }
        }
        //        cout << len << " " << i << endl;
        if (len == i && parStack.empty()) printf("Yes\n");
        else printf("No\n");
        while (!parStack.empty()) parStack.pop();
        memset(ch, '\0', 150);
    }

    return 0;
}