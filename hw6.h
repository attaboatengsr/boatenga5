#ifndef HW6_H
#define HW6_H
using namespace std;


class userdata
{
protected:
  string user_name;
  int user_id;
  string user_phonenumber;

public:
  userdata(string input_name, int input_id, string input_phonenumber); // this is constructor
  ~userdata(){}; // this is destructor
  int get_id();
  string get_name();
  string get_phonenumber();

};

userdata::userdata(string input_name, int input_id, string input_phonenumber)
{
  user_name = input_name;
  user_id = input_id;
  user_phonenumber = input_phonenumber;
}

int userdata::get_id()
{
  return user_id;
}

string userdata::get_name()
{
  return user_name;
}

string userdata::get_phonenumber()
{
  return user_phonenumber;
}

//creating subclass

class ext_user: public userdata
{
  int zip_code;
  string blood_type;
  string address;
public:
  ext_user(string input_name, int input_id, string input_phonenumber,int zip, string blood, string ad)
  :userdata(input_name, input_id, input_phonenumber)
   {
     zip_code = zip;
     blood_type = blood;
     address = ad;
   }
//};
//   //void set_val(int,string,string);
   int get_zip(){return zip_code;};
   string get_blood_type(){return blood_type;};
   string get_address(){return address;};
 };




#endif
