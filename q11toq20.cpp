// 11 Check if profit or loss (given CP and SP)				
// 12	Check if person can vote (age ≥ 18)				
// 13	Check if number is divisible by 5 and 11				
// 14	Check if triangle is equilateral / isosceles / scalene				
// 15	Check if character is alphabet or not				
// 16	Calculate electricity bill with slabs				
// 17	Check if coordinates lie on x / y axis or quadrant	 << skip 			
// 18	Check if quadratic equation has real roots << skip 				
// 19	Check if number is 1, 2, or 3 digit				
// 20	Check if number ends with 5





#include <iostream>
#include <cctype> // Required for isalpha()
using namespace std;

// 11 Check if profit or loss (given CP and SP)	

void cheak_profit_loss(int cp , int sp){
    int left = cp - sp ;
     int profit = cp - sp ;
    
    if(left>0){
        cout<<"you get losses of rs"<<left<<endl;
    }
    else if(left<0){
                cout<<"you get profit of rs"<<profit<<endl;
    }
}


// 12	Check if person can vote (age ≥ 18)

void person_can_vote(int age){
    if(age<18){
        cout<<"you can vote"<<endl;
    }
    else{

        cout<<"you cannot vote"<<endl;
    }
}



// 13	Check if number is divisible by 5 and 11	

void divisible_by_five_and_eleven(int n){
    if((n/5==1)&& (n/10==1)){
        cout<<n<<"is divisible by 5 and 11"<<ndl;
    }
    else{
       cout<<n<<"is not divisible by 5 and 11"<<ndl;  
    }
}

// 14 Calculate electricity bill with slabs	
void electricity_bills_with_slabs(int units_burned ){
    if(units_burned <100){
        cout<<"Bills are "<<units_burned * 3<<endl;

    }
    else if(units_burned>100&& units_burned<200){
         cout<<"Bills are "<<units_burned * 5<<endl;

    }
      else if(units_burned>200&& units_burned<300){
         cout<<"Bills are "<<units_burned * 7<<endl;
    }

}

// 15	Check if character is alphabet or not

void chr_is_alpha(char c){
    if(isalpha(c)){
        cout<<c<<"is alphabetic character"<<endl;
    }
    else{
         cout<<c<<"is not alphabetic character"<<endl;
    }

}

// 16	Check if triangle is equilateral / isosceles / scalene	


void triangle_equilateral_isosceles_scalene(int a,int b,int c){
    if(a==b==c){
        // equilateral
        cout<<"The triangle is equilateral"<<endl;
    }
    else if(a==b!=c ||a!=b==c ||a==c!=b){
        // equilateral
        cout<<"The triangle is isosceles"<<endl;

    }
    else if(a!=b!=c){
         cout<<"The triangle is scalene"<<endl;
    }
}



// 19	Check if number is 1, 2, or 3 digit	
void num_is_dig(int n){
    if(isdigit(n)){
        cout<<n<<"is digit"<<endl;
    }
    else{
        cout<<n<<"is not digit"<<endl;
    }
}

// 20	Check if number ends with 5

void num_ends_with_5(int n){
    int last_dgit = n%10;
    if(last_dgit == 5){
        cout<< n<<" number ends with 5"<<endl;
    }
    else{
        cout<< n<<" number is not ends with 5"<<endl;
        
    }
    
}




int main(){
void num_ends_with_5(int n){
    int last_dgit = n%10;
    if(last_dgit == 5){
        cout<< n<<" number ends with 5"<<endl;
    }
    else{
        cout<< n<<" number is not ends with 5"<<endl;
        
    }
    
}


cheak_profit_loss(2,5);
cheak_profit_loss(10,5);
person_can_vote(39);
person_can_vote(5);
    return 0;
}