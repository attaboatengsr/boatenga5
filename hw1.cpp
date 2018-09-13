#include <iostream>
using namespace std;

int main()
{
 int a,op,b;

 cout << "please input a:" << endl;
 cin >> a;

 cout << "please input operator (1: add, 2: subtract, 3: multiply, 4: divide):" << endl;
 cin >> op;

 cout << "please input b:" << endl;
 cin >> b;

  if(op==1) cout << a+b << endl;
  else if(op==2) cout << a-b << endl;
  else if(op==3) cout << a*b << endl;
  else if(op==4)
  {
   if(b==0) cout << "error: division by 0" << endl;
   else
    {
     cout << "c = " << a/b << endl;
     cout << "r = " << a%b << endl;
    }
  }
return 0;
}

