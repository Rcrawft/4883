#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream outfile;
  ifstream infile;
  int first, second, total, sum;
  infile.open("infile.txt");
  outfile.open("outfile.txt");

  infile >> total;

  for (int i = 1; i <= total; i++) 
  {
    sum = 0;
    infile >> first >> second;
    if(first % 2 == 0)
      first ++;
    for (int j = first; j <= second; j+=2) 
    {
      sum += j;
    }
    outfile << "Case " << i << ": " << sum << endl;
  }


  return 0;
}
