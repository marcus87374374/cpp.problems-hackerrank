// make a program that contains age, first name, last name and standard of a single student and takes input in a specific format and gives output in a specific format
// input format : 15
//                john
//                carmack
//                10
// output formant : 15 john carmack 10

#include<iostream>
struct student {
  int age;
  std::string first_name;
  std::string last_name;
  int standard;  
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    std::string b;
    std:: string c;
    int d;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>d;
    student student1;
    student1.age=a;
    student1.first_name=b;
    student1.last_name=c;
    student1.standard=d;
    std::cout<<student1.age<<" ";
    std::cout<<student1.first_name<<" ";
    std::cout<<student1.last_name<<" ";
    std::cout<<student1.standard;
    return 0;
}
