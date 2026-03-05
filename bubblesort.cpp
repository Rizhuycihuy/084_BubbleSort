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
      cout << "masukkan banyak nya elemen pada array : "; // output ke layar
      cin >> n;                                           // input dari penguna
      if (n <= 20)                                        // jika n kurang dari atau sama dengan 20
          break;                                          // keluar dari loop
      else
      {
          cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
      }
  }
  cout << endl;
  cout << "====================" << endl;
  cout << "masukkan elemen array" << endl;
  cout << "====================" << endl;

  for (int i = 0; i < n; i++)
  {                                           // looping dengan i di mulai dari 0 
      cout << "Data ke-" << (i + 1) << ": ";  // output ke layar
      cin >> arr[i];                          // input dari pengguna
  }
} 


