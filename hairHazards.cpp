// When school finishes, Fayez decides to experiment with new hair lengths.Currently, Fayez has a hair length of H cm.
// Whenever he visits his barber in the summer, his hair will be cut S cm shorter. He will visit his barber Q times 
// and wants to know his hair length after each haircut. Can you help him?

// https://dmoj.ca/src/6526892

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int l, c, f;
    
    cin >> l >> c >> f;
    
    vector<int> r;
    r.reserve(f);
    
    for (int i = 0; i < f; ++i) {
        l -= c;
        r.push_back(l);
    }

    for (int r : r) {
        cout << r << endl;
    }
    
    return 0;
}
