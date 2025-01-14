// This problem is from easy section of hackerrank.
// In this question we have to make a program for taking input and priting out the output
// now in this code we can do output formatting and make our result more readable.
// but in hacker rank we dont have to give input it automatically takes input and run the code to match the output.
#include<iostream>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    long int b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",a,b,c,d,e);
    // we could have used cout but it will be easier to get better ouput  with printf cuz you can 
  // decide how much width it will take on screen and how many decimals you want to display
    
    return 0;
}

