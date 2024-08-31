#include <iostream>
#include <string>

using namespace std;

int main() {
    int total = 0;  // Initialize total to 0
    string x;
    string y;

    cout << "Hello World!" << endl;
    cout << "I need another commit :( " << endl;
    
    while (true) {  // BROKEN
        cin >> x;
        cout << total << endl;
        
        if (x == "womp womp") {
            cout << "womp womp? more like yippe!" << endl;
            break;
        } else {
            cout << "say womp womp" << endl;
            total += 1;
        }
    }

    cin >> y;
    if (y == "nah") {
        cout << "you right" << endl;
    } else {
        cout << "say nah" << endl;
    }

    return 0;
}
