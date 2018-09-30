#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
string a,b,temp;

cout << "Enter value of a: ";
cin >> a;

cout << "Enter value of b: ";
cin >> b;


//make string input into a vector of integers and have them reversed
vector<int> x,y,result;

for(int i=a.size()-1; i>=0; i--) x.push_back(a[i]-'0');
for(int i=b.size()-1; i>=0; i--) y.push_back(b[i]-'0');

//make the two vectors have the same length

if(y.size() < x.size())
{
  while(y.size() != x.size())
  {
    y.push_back(0);
  }
}
else if(x.size() < y.size())
{
  while(x.size() != y.size())
  {
    x.push_back(0);
  }
}



//adding the numbers together

int c = 0;

for(int i=0; i<x.size();i++)
{
  if(x[i]+y[i]+c>9)
  {

    result.push_back((x[i]+y[i]+c)%10);
    c = to_string((x[i]+y[i]))[0]-'0';
  }
  else
  {

    result.push_back((x[i]+y[i]+c)%10);
    c = 0;
  }

}

//print the result in correct order

cout << "result: ";

if(c!= 0) cout << c;
for(int i=result.size()-1; i>=0; i--) cout << result[i];

cout << endl;

return 0;
}
