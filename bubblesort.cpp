#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

void input()
{
  int d;
  while (true)
  {
      cout << "masukkan banyak nya elemen pada array : ";
      cin >> n;
      if (n <= 20)
          break;
      else
      {
          cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
      }
  }
  cout << endl;
  cout << "====================" << endl;
} 

