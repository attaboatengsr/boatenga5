#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{



// opening text file
ifstream input;
input.open(argv[1]);

//turning file into vector
int buffer;
vector<int> arr;

while(!input.eof())
{
   input >> buffer;
   arr.push_back(buffer);
}

input.close();

//sort the array vector
sort(arr.begin(),arr.end());

int lower_bound=1;
int upper_bound=arr.size();
int target;

cout << "Enter the number you want to search for" << endl;
cin >> target;

int pos = (lower_bound + upper_bound)/2;
int dist = upper_bound - lower_bound;


//implementing binary search

if(arr[pos]==target)
{
   cout << "Found " << target << " at index: " << pos << endl;
}
else
{
        while(dist !=0)
        {
                if(arr[pos] == target)
                {
                   cout << "Found " << target << " at index: " << pos << endl;
                   break;
                }
                else if(arr[pos] < target)
                {
                   cout << "Currently at: " << arr[pos] << endl;
                   lower_bound = pos;
                   pos = (lower_bound + upper_bound)/2;
                }
                else if(arr[pos] > target)
                {
                   cout << "Currently at: " << arr[pos] << endl;
                   upper_bound = pos;
                   pos = (lower_bound + upper_bound)/2;
                }
        }
}
return 0;
}
