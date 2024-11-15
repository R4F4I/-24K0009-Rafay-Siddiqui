#include <iostream>
using namespace  std;



class Student{
    // members are privetae / encapsulation
    private:
        string std_name;
        int roll_no;
          
    // methods are public
    public:
        // setter functions: sets value to members                
        void set_stdName(string name){
            std_name = name;
        }
        void set_rollNo(int num){
            roll_no = num;
        }

        // getter functions: gets value of members

        string get_stdName(){
            return std_name;
        }
        int get_rollNo(){
            return roll_no;
        }

};

class Shape{
    private:
        int width;
        int height;
    public:
        void set_width(int w){
            width = w;
        }
        void set_height(int h){
            height = h;
        }

        int get_width(){
            return width;
        }
        int get_height(){
            return height;
        }

};

int main(){
    Student s1;

    s1.set_stdName("Helo");
    s1.set_rollNo(13);

    cout << s1.get_stdName()<< endl;
    cout << s1.get_rollNo()<< endl;

    Shape rect;

    rect.set_height(12);
    rect.set_width(15);

    cout << rect.get_height() << endl;
    cout << rect.get_width() << endl;

    return 0;
}