#include <iostream>

using namespace std;

int main() {
  int a, b;

  while (cin) {
    cin >> a >> b;
    if (cin.eof())
      break;
    cout << abs(a - b) << endl;
  }

  return 0;
}
