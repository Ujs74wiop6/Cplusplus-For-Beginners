#include <iostream>

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

// Namespace = Provides a solution for preventing name conflicts in large project.

using namespace std;

/* using namespace ... first or second*/

int main() {
    int x = 0;

    string name = "Fabricio";

    cout << name << endl;
    cout << x << endl;

    return 0;
}

