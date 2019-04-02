#include <iostream>
using namespace std;

void hanoiTower(int n, char from, char to, char inter)
{
  if (n==1)
    {
      cout << n << " -- " << from << " to " << to << endl;
      return;
    }
  hanoiTower(n-1, from, inter, to);
  cout << n << " -- " << from << " to " << to << endl;
  hanoiTower(n-1, inter, to, from);
}

int main()
{
  int numdisk;
  cout << "How many disks?" << endl;
  cin >> numdisk;
  hanoiTower(numdisk, 'A', 'B', 'C');
}
