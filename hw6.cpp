#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "hw6.h"
using namespace std;


int main(int argc, char *argv[])
{
ifstream input_file;
input_file.open(argv[1]);


ofstream output_file;
output_file.open(argv[2]);



//getting the user's address
string str,bl;
vector<string> usr_info;
while(getline(input_file,str))
{
  usr_info.push_back(str);

}



for(int j=0; j<usr_info.size();j++)
{
  string temp = usr_info[j];
  size_t pos;

  for(int i=0; i<temp.length();i++)
  {
    if( (temp.substr(i,2)=="A+")|| (temp.substr(i,2)=="A-") || (temp.substr(i,2)=="B+") || (temp.substr(i,2)=="B-")||
    (temp.substr(i,2)=="O+")|| (temp.substr(i,2)=="O-")||(temp.substr(i,3)=="AB+")|| (temp.substr(i,3)=="AB-") )
    {
      bl = temp.substr(i,2);
    }

  }





  pos = temp.find(bl);
  string tp_ad = temp.substr(pos+3);




  string var_id,var_firstname,var_lastname,var_phone,var_zip,var_blood;
  string temp2 = usr_info[j];
  vector<string> q;
  istringstream buf(temp2);

  for(string word; buf>>word;) q.push_back(word);
  var_id=q[0];
  var_firstname=q[1];
  var_lastname=q[2];
  var_phone=q[3];
  var_zip=q[4];
  var_blood=q[5];



  output_file << var_firstname << " " << var_lastname << " " << var_zip << endl;





}
input_file.close();
output_file.close();

cout << "A text file has been created that contains user info ..." << endl;
return 0;
}
