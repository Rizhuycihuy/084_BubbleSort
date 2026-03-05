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

void bubblesortarray()
{
      int pass = 1;

      do
      {
        for (int j = 0; j <= n - 1 - pass; j++)
        {
          if (arr[j] > arr [j + 1])
          {
            int temp;
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
          }
        }
        pass += 1;

        cout << "\nPass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++)
        {
          cout << arr[k] << " ";
        }
        cout << endl;
      
      } while (pass <= n - 1);
}
void display()
{
  cout << endl;
  cout << "==================================" << endl;
  cout << "Element array yang telah tersusun" << endl;
  cout << "==================================" << endl;
  cout << endl;
  for (int  j = 0; j < n; j++)
  {
    cout << arr[j];
    if (j < n - 1)
    {
        cout << " --> ";
    
    }
  }
  cout << endl;
  cout << endl;

  cout << "jumlah pass = " << n - 1 << endl;
  cout << endl;
  cout << endl;
} 

int main()
{
  input();

  bubblesortarray();
  display();
}

