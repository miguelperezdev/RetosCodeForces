#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int answer = 0;
 
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
 
        if (petya + vasya + tonya >= 2) {
            answer++;
        }
    }
 
    cout << answer << endl;
 
    return 0;
}