#include <iostream>

using namespace std;

int main() {
  int first, second, total, sum;

  cin >> total;

  for (int i = 1; i <= total; i++) {
    sum = 0;
    .cin >> first >> second;
    if (first % 2 == 0)
      first++;
    for (int j = first; j <= second; j += 2) {
      sum += j;
    }
    cout << "Case " << i << ": " << sum << endl;
  }

  return 0;
}
