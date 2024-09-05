//https://dmoj.ca/src/6569693

#include <bits/stdc++.h>

using namespace std;

int count(const std::string& inp, const std::string& substr) {
    int count = 0;
    size_t pos = 0;
    while ((pos = inp.find(substr, pos)) != std::string::npos) {
        ++count;
        pos += substr.length();
    }
    return count;
}

int main() {
    string inp;
    getline(cin, inp);
    
    string happy = ":-)";
    string sad = ":-(";
    
    int happyCount = count(inp, happy);
    int sadCount = count(inp, sad);
    
    if (happyCount == 0 && sadCount == 0) {
        cout << "none" << endl;
    } else if (happyCount == sadCount) {
        cout << "unsure" << endl;
    } else if (happyCount > sadCount) {
        cout << "happy" << endl;
    } else if (happyCount < sadCount) {
        cout << "sad" << endl;
    }
    
    return 0;
}
