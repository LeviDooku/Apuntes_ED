//Colas con prioridad

#include <queue>
#include <iostream>

using namespace std;

int main() {

    priority_queue<int> mipq;

    mipq.push(10);
    mipq.push(2);
    mipq.push(123);

    cout << mipq.top() << endl;
}