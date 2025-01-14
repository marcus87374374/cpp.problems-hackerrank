// create a class that contains  that contains age standard first name and last name of a student
// but we should make it like we can give input to student but we cannot excess it without function

#include<iostream>
class students{
    private:
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
    // setters
    void set_age(int a){
        age = a;
    }
    void set_standard(int a){
        standard = a;
    }
    void set_first_name(string a){
    first_name = a;
    }
    void set_last_name(string a){
        last_name = a;
    }
    // getters
    int get_age (){
        return age;
    }
    int get_standard (){
        return standard;
    }
    string get_first_name(){
        return first_name; 
    }
    string get_last_name(){
        return last_name;
    }
};




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int age1;
    string name;
    string last;
    int standard1;
    std::cin>>age1;
    std::cin>> name;
    std::cin>>last;
    std::cin>>standard1;
    students rollno_1;
    rollno_1.set_age(age1);
    rollno_1.set_first_name(name);
    rollno_1.set_last_name(last);
    rollno_1.set_standard(standard1);
    std::cout<<rollno_1.get_age()<<std::endl;
    std::cout<<rollno_1.get_last_name()<<", "<<rollno_1.get_first_name()<<std::endl;
    std::cout<<rollno_1.get_standard()<<std::endl;
    std::cout<<std::endl;
    std::cout<<rollno_1.get_age()<<","<<rollno_1.get_first_name()
    <<","<<rollno_1.get_last_name()<<","<<rollno_1.get_standard()
    <<std::endl;    
    return 0;
}
