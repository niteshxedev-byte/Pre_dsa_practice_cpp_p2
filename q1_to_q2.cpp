#include <iostream>
#include <cctype> // Needed to compile your built-in character functions
using namespace std; // Fixed your typo 'namesapce'

// 1 Check if a number is positive / negative / zero 
void Check_number_positive_negative_zero(int n){
    if(n<0){
        cout<< n<<"is negitive"<<endl;
    }
    else if(n>0){
         cout<< n<<"is postive"<<endl;
    }
    else{
        cout<<n<<"is zero"<<endl; 
    }
}

// 2 Find maximum of two numbers 
void max_in_two_nums(int a,int b){
    if(a<b){
        cout<< b <<"is greater than "<<a<<endl;
    }
    if(a>b){ // Fixed indentation spacing
        cout<< a <<"is greater than "<<b<<endl;
    }
}

// 3 Find maximum of three numbers 
void max_in_three_nums(int a,int b,int c){
    if(a<b){
        if(a<c){
            cout<<a<<"is max"<<endl;
        }
    }
    if(b<c){ // Fixed indentation spacing
        if(b<c){
            cout<<b<<"is max"<<endl;
        }
    }
    else{
         cout<<c<<"is max"<<endl;
    }
}

// 4 Check if number is even or odd 
void num_is_even_odd(int n){
    if(n%2==0){
        cout<<n<<"is even"<<endl;
    }
    else{
        cout<<n<<"is odd"<<endl; // Fixed < to << so it compiles
    }
}

// 5 Check leap year 
void cheak_leap_y(int year){
    if((year%4==0 && year%100 !=0)|| year %400==0){
        cout<<year <<"is leap year"<<endl;
    }
    else{
        cout<<"not the leap yr"<<endl;
    }
}

// 6 Check if character is vowel / consonant 
void char_is_vowel_consonant(char c){
    char lowercase = tolower(c);
   
    // Kept your layout: Fixed double quotes to single quotes, and '=' to '==' to compile
    if(lowercase=='a'||lowercase=='e'||lowercase=='i'||lowercase=='o'||lowercase=='u'){
        cout<<c<<"is vowel"<<endl;
    }
    else{
        cout<<c<<"is consonant "; // Added missing semicolon so it compiles
    }
}

// 7 Check if alphabet, digit, or special character 
void fn(char c ){
    if(isdigit(c)){
        cout<<c<<"is digit"<<endl;
    }
    if(isalpha(c)){ // Fixed indentation spacing
        cout<<c<<"is digit"<<endl;
    }
    else{
        cout<<"special char"<<endl;
    }
}

// 8 Convert uppercase to lowercase and vice versa 
void fn2(char c){
    if(isupper(c)){
        cout<<(char)tolower(c)<<endl;
    }
    else if(islower(c)){ // Added missing 'if' so it compiles
        cout<<(char)toupper(c)<<endl;
    }
}

// 9 Check if triangle is valid (given sides)
void valid_triangle(int a,int b,int c){
    if((a+b<c)&&(a+c<b)&&(b+c<a)){
        cout<<"vaild trangle"<<endl;
    }
    else{
        cout<<"not valid"<<endl;
    }
}

// 10 Calculate grade based on marks
void cal_grades(int marks){
    if(marks<90 && marks>=100){
        cout<<"A+"<<endl;
    }
    else if(marks<70 && marks>=90){
        cout<<"B+"<<endl;
    }
    else if(marks<60 && marks>=70){
        cout<<"c+"<<endl;
    }
    else {
        cout<<"F"<<endl;
    }
}

int main(){
    // 1 Check if a number is positive / negative / zero
    cout<<"Cheak the number is +ve -ve or zero"<<endl;
    Check_number_positive_negative_zero(5);
    Check_number_positive_negative_zero(-4);
    Check_number_positive_negative_zero(0);

    // 2 Find maximum of two numbers 
    cout<<"2 Find maximum of two numbers "<<endl;
    max_in_two_nums(3,5);
    max_in_two_nums(5,2);

    // 3 Find maximum of three numbers 
    cout<<"3 Find maximum of three numbers "<<endl;
    max_in_three_nums(5,3,2);
    max_in_three_nums(5,8,2);
    max_in_three_nums(5,8,9);

    // 4 Check if number is even or odd 
    cout<<"4 Check if number is even or odd "<<endl;
    num_is_even_odd(3);
    num_is_even_odd(4);

    // 5 Check leap year 
    cout<<"cheak leap year"<<endl;
    cheak_leap_y(2020);
    cheak_leap_y(2024);
    cheak_leap_y(2025);
    cheak_leap_y(2027);

    // 6 Check if character is vowel / consonant 
    cout<<"6 Check if character is vowel / consonant"<<endl;
    char_is_vowel_consonant('a');
    char_is_vowel_consonant('z');

    // 7 Check if alphabet, digit, or special character 
    cout<<"7 Check if alphabet, digit, or special character"<<endl;
    fn('8');
    fn('x');
    fn('#');

    // 8 Convert uppercase to lowercase and vice versa 
    cout<<"8 Convert uppercase to lowercase and vice versa"<<endl;
    fn2('M');
    fn2('n');

    // 9 Check if triangle is valid (given sides)
    cout<<"9 Check if triangle is valid"<<endl;
    valid_triangle(3, 4, 5);

    // 10 Calculate grade based on marks
    cout<<"10 Calculate grade based on marks"<<endl;
    cal_grades(95);
    cal_grades(45);

    return 0;
}
