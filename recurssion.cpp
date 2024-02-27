#include <iostream>
using namespace std;

int count = 0;

void loop() {
    if (count == 4) {
        return;
        //when u enter a return the function gets terminated then and there
    } else {
        count = count + 1;
        cout << count<<endl;
        loop();
    }
}

int main() {
    loop();
    return 0;
}
