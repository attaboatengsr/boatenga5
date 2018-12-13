#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
//opening file text file
ifstream input;
input.open(argv[1]);

int x;
vector<int> vec;
while(!input.eof())
{
  input >> x;
  vec.push_back(x);
}


//showing the element in the vector

for(int i=0; i<vec.size();i++) cout << vec[i];

cout << endl << endl;
//implementing bubble sort
for(int i=0; i<vec.size();i++)
{
  for(int j=0; j<vec.size(); j++)
  {
    if(vec[j]<vec[j+1])
    {
      swap(vec[j],vec[j+1]);
    }
     cout << vec[j];
  }
cout << endl;

}

return 0;
}
