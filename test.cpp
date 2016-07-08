#include <iostream>

using namespace std;

int main()
{
  int *p = new int;
  int *q = p ;

  cout << "p記憶體位置:" << p << endl;
  cout << "p的值：" << *p << endl;
  cout << "q記憶體位置：" << q << endl;
  cout << "q的值：" << *q << endl;


  delete p;
  cout << "做了delete p之後" << endl;
  cout << "p記憶體位置:" << p << endl;
  cout << "p的值：" << *p << endl;
  cout << "q記憶體位置：" << q << endl;
  cout << "q的值：" << *q << endl;
}
