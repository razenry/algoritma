#include <iostream>
using namespace std;

int main() {
    
    // Outer loop: iterates 3 times (i = 0, 1, 2)
    for (int i = 0; i < 3; i++) {
        cout << "Outer loop: i = " << i << endl;
        
        // Inner loop: iterates 2 times for each outer iteration
        for (int j = 0; j < 2; j++) {
            cout << "  Inner loop: j = " << j << endl;
        }
    }
    
    return 0;
}
    
