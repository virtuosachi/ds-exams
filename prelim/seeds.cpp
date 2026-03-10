#include <iostream>
using namespace std;

int main() {
  int tray[4][4]; // 2D array initialization
  int sprouted = 0, notSprouted = 0; // counter for sum
  int rowGrowth[4]; // growth per row

  cout << "Enter 4x4 seed growth (0 = no growth, 1 = sprouted):\n";

  // Reading user input and counting
  for (int r = 0; r < 4; r++) {
    rowGrowth[r] = 0; // initialize row growth
    for (int c = 0; c < 4; c++) {
      cin >> tray[r][c];
      if (tray[r][c] == 1) {
        sprouted++;
        rowGrowth[r]++;
      } else {
        notSprouted++;
      }
    }
  }

  // Display totals
  cout << "\nTotal Sprouted Seeds: " << sprouted;
  cout << "\nTotal Not Sprouted: " << notSprouted << "\n";

  // Display row scores
  cout << "\nGrowth per Row:\n";
  for (int r = 0; r < 4; r++) {
    cout << "Row " << r + 1 << ": " << rowGrowth[r] << endl;
  }
  
  // Calculate overall sprouting percentage
  double percentage = (sprouted / 16.0) * 100;
  cout << "\nOverall Garden Sprouting Percentage: " << percentage << "%" << endl;

  // Find row(s) with highest score
  int maxGrowth = 0;
  for (int r = 0; r < 4; r++) {
    if (rowGrowth[r] > maxGrowth) maxGrowth = rowGrowth[r];
  }

  cout << "\nRow(s) with the Highest Growth: ";
  bool first = true;
  for (int r = 0; r < 4; r++) {
    if (rowGrowth[r] == maxGrowth) {
      if (!first) cout << ", ";
      cout << "Row " << r + 1;
      first = false;
    }
  }
  cout << endl;

  return 0;
}