#include <iostream>

using namespace std;

// Object pointer using the setter with pointer
class Human{
private:
    int age;

public:
    void set_age(int Age);
    int  get_age();
};

void Human::set_age(int Age){
    age = Age;
}

int Human::get_age(){
    return age;
}

int main()
{
      Human human[4];
      Human *hptr;
      hptr = human;

   (hptr+0)->set_age(6);//setting at the index[0]
   (hptr+1)->set_age(7);//setting at the index[1]
   (hptr+2)->set_age(8);//setting at the index[2]
   (hptr+3)->set_age(9);//setting at the index[3]

 for (int i = 0; i <4;i++){
   cout << (hptr+i)->get_age();
 }


}