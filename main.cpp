#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "PROBLEM 1\n";
    int p1_var1;
    cin>>p1_var1;
    if(p1_var1>=0){
        cout<<"Positive"<<endl;
    }else{
        cout<<"Negative"<<endl;
    }

    cout << "PROBLEM 2\n";
    int p2_var1;
    cin>>p2_var1;
    if(p2_var1>=0 ) {
        if (p2_var1 % 2 == 0) {
            cout << "The number is positive and even" << endl;
        } else {
            cout << "The number is positive and odd"<<endl;
        }
    }
    else {
        if( p2_var1%2!=0){
            cout<<"The number is negative and odd"<<endl;
        }else{
            cout<<"The number is negative and even"<<endl;
        }
    }
    cout << "PROBLEM 3\n";
    int p3_var1,p3_var2,p3_var3;
    cin>>p3_var1>>p3_var2>>p3_var3;
    int maxi=p3_var1;
    if(maxi<p3_var2){
        maxi=p3_var2;
    }else if (maxi<p3_var3){
        maxi=p3_var3;
    }
    cout<<maxi<<" is the largest"<<endl;
    cout << "PROBLEM 4\n";
    int p4_var1,p4_var2;
    cin>>p4_var1>>p4_var2;
    if(p4_var1%p4_var2==0){
        cout<<p4_var1<<" is divisible by "<<p4_var2<<endl;
    }else{
        cout<<p4_var1<<" is not divisible by "<<p4_var2<<endl;
    }
    cout << "PROBLEM 5\n";
    int p5_var1;
    cin>>p5_var1;
    if((p5_var1%4==0  and p5_var1%100!=0 ) or p5_var1%400==0 ){
        cout<<p5_var1<<" is a leap year"<<endl;
    }else{
        cout<<p5_var1<<" is not a leap year"<<endl;
    }
    cout << "PROBLEM 6\n";
    float a,b,c;
    cin>>a>>b>>c;
    float x1,x2;
    float D=sqrt((b*b)-4*a*c);
    if(D>0){
        x1=(-b+ D)/(2*a);
        x2=(-b- D)/(2*a);
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }else if (D==0){
        x1=-b/(2*a);
        x2=-b/(2*a);
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }else{
        cout<<"Discriminant is negative"<<endl;
    }
    cout << "PROBLEM 7\n";
    int p7_1,p7_2,p7_3;
    cin>>p7_1>>p7_2>>p7_3;
    if(p7_1+p7_2+p7_3==180 and p7_3>0 and p7_2>0 and p7_1>0 ){
        cout<<"The triangle is valid"<<endl;
    }else{
        cout<<"The triangle is not valid"<<endl;
    }
    cout << "PROBLEM 8\n";
    char input;
    cin>>input;
    if (input>='A' and input<='Z'){
        cout<<"Uppercase alphabet";
    }else if(input>='a' and input<='z'){
        cout<<"Lowercase alphabet";
    }else{
        cout<<"It is not an alphabet";
    }

    cout << "PROBLEM 9\n";
    int speed;
    cin>>speed;
    if(speed<20){
        cout<<"too slow";
    }else if(speed>80){
        cout<<"too fast";
    }else{
        cout<<"just right";
    }

    cout << "PROBLEM 10\n";
    int p10_x,p10_y;
    cin>>p10_x>>p10_y;
    if(sqrt((p10_x*p10_x)+(p10_y*p10_y))<=10){
        cout<<"Point( "<<p10_x<<","<<p10_y<<") is in circle"<<endl;
    }else{
        cout<<"Point( "<<p10_x<<","<<p10_y<<") is not in circle"<<endl;
    }

    cout << "PROBLEM 11\n";
     float w1 , p1 ;
     cout << " enter the number for weight" << endl ;
     cin >> w1 ;
     cout << " enter the number for price" << endl ;
     cin >> p1 ;
     float w2, p2 ;
     cout << " enter the number for weight in the second" << endl ;
     cin >> w2 ;
     cout << " enter the number for price in the second " << endl;
     cin >> p2 ;
     float pac1 = w1*p1 ;
     float pac2=  w2*p2 ;
      if (pac1>pac2) {
      cout << " the first package is better" ;
      }else if (pac1==pac2) {

              cout << "  Two packages have the same price.";
          }else {
              cout << " the second package is better" ;

          }


    cout << "PROBLEM 12\n";
    int n;
    cout<<"a three-digit integer: ";
    cin>>n;
    int p12_100=n/100;
    int p12_1=n%10;
    if(p12_1==p12_100){
        cout<<n<<"  is a palindrome";
    }else{
        cout<<n<<"  is not a palindrome";
    }
cout << "PROBLEM 13\n";
string p13_1;
cin>>p13_1;
if(p13_1=="g"){
cout<<"Go!";
}else if(p13_1=="y"){
cout<<"Get ready!";
}else{
cout<<"Stop";
}

    cout << "PROBLEM 14\n";
    int today ;
    int days_after ;
    cout<<" Enter todays day: ";
    cin >> today;
    cout<<" Enter the number of days\n"
          " elapsed since today: ";
    cin>> days_after ;
    int future_day =(today + days_after) % 7 ;
    cout << " Today is " ;
    switch (today) {
        case 0:
            cout << "Sunday" ;
            break;
        case 1:
            cout << "Monday" ;
            break;
        case 2:
            cout << "Tuesday" ;
            break;
        case 3:
            cout << "Wednesday" ;
            break;
        case 4:
            cout << "Thursday" ;
            break;
        case 5:
            cout << "Friday" ;
            break;
        case 6:
            cout << "Saturday" ;
            break;
    }
    cout << " and the future day is " ;
    switch (future_day) {
        case 0:
            cout << "Sunday" ;
            break;
        case 1:
            cout << "Monday" ;
            break;
        case 2:
            cout << "Tuesday" ;
            break;
        case 3:
            cout << "Wednesday" ;
            break;
        case 4:
            cout << "Thursday" ;
            break;
        case 5:
            cout << "Friday" ;
            break;
        case 6:
            cout << "Saturday" ;
            break;
    }

    cout << "PROBLEM 15\n";
    int mark;
    cin>>mark;
    int result = mark/10;
    switch(result){
        case 10:
            cout<<"A";
            break;
        case 9:
            cout<<"A";
            break;
        case 8:
            cout<<"B";
            break;
        case 7:
            cout<<"C";
            break;
        case 6:
            cout<<"D";
            break;
        case 5:
            cout<<"F";
            break;
        case 4:
            cout<<"F";
            break;
        case 3:
            cout<<"F";
            break;
        case 2:
            cout<<"F";
            break;
        case 1:
            cout<<"F";
            break;
        case 0:
            cout<<"F";
            break;
    }

    cout << "PROBLEM 16\n";
    int p16_var;
    cin>>p16_var;
    switch (p16_var>0) {
        case 1:
            cout<<"Number is positive"<<endl;
            break;
        case 0:
            switch(p16_var<0){
                case 1:
                    cout<<"Number is negative"<<endl;
                    break;
                case 0:
                    cout<<"The number is 0";
                    break;
            }
    }

    cout << "PROBLEM 17\n";
    char language;
    cin>>language;
    switch (language) {
        case 'u':
            cout<<"Assalomu alaykum"<<endl;
        case 'e':
            cout<<"Wassup"<<endl;
        case 'r':
            cout<<"привет"<<endl;
        case 'g':
            cout<<"Hallo"<<endl;
        default:
            cout<<" I do not know this\n"
                  " language:("<<endl;
    }

    cout << "PROBLEM 18\n";
    double weight;
    std::cout << "Enter the weight of the package (in kg): ";
    std::cin >> weight;

    if (weight <= 0) {
        std::cout << "Invalid input." << std::endl;
    } else {
        int shippingCost;
        switch(static_cast<int>(weight)) {
            case 0 ... 1:
                shippingCost = 3500;
                break;
            case 2 ... 3:
                shippingCost = 5500;
                break;
            case 4 ... 10:
                shippingCost = 8500;
                break;
            case 11 ... 20:
                shippingCost = 10500;
                break;
            default:
                std::cout << "The package cannot be shipped." << std::endl;
                return 0;
        }
        std::cout << "Shipping cost: " << shippingCost << " som" << std::endl;
    }

        cout << "PROBLEM 19\n";
        int digit;
        cout << "Enter a digit: ";
        cin >> digit;

        void print_digit_as_word(int digit) {
            switch (digit) {
                case 0:
                    cout << "Zero" << endl;
                    break;
                case 1:
                    cout << "One" << endl;
                    break;
                case 2:
                    cout << "Two" << endl;
                    break;
                case 3:
                    cout << "Three" << endl;
                    break;
                case 4:
                    cout << "Four" << endl;
                    break;
                case 5:
                    cout << "Five" << endl;
                    break;
                case 6:
                    cout << "Six" << endl;
                    break;

                    Umarjon, [24 / 03 / 2024
                    12:12]
                case 7:
                    cout << "Seven" << endl;
                    break;
                case 8:
                    cout << "Eight" << endl;
                    break;
                case 9:
                    cout << "Nine" << endl;
                    break;
                default:
                    cout << "It is not a digit" << endl;
            }


            cout << "PROBLEM 20\n";
            int month;
            cout << "Enter the month number (1-12): ";
            cin >> month;
            print_holidays(month);
            void print_holidays(int month) {
                string holiday;
                switch (month) {
                    case 1:
                        holiday = "New Year, 1 January";
                        break;
                    case 2:
                        holiday = "Defenders of the Fatherland Day, 14 January";
                        break;
                    case 3:
                        holiday = "International Women's Day, 8 March\nNavruz, 21 March";
                        break;
                    case 4:
                        holiday = "Mother's and Health Day, 30 April";
                        break;
                    case 5:
                        holiday = "Memorial Day, 9 May";
                        break;
                    case 6:
                    case 7:
                    case 8:
                        holiday = "There are no national holidays in this month.";
                        break;
                    case 9:

                        Umarjon, [24 / 03 / 2024
                        12:12]
                        holiday = "Independence Day, 1 September";
                        break;
                    case 10:
                        holiday = "Teacher's Day, 1 October";
                        break;
                    case 11:
                        holiday = "Day of the Memory of the Victims of Repression, 30 October";
                        break;
                    case 12:
                        holiday = "Constitution Day, 8 December";
                        break;
                    default:
                        holiday = "Invalid month number.";
                        break;
                }
                cout << "In ";
                switch (month) {


                    case 1:
                        cout << "January";
                        break;
                    case 2:
                        cout << "February";
                        break;
                    case 3:
                        cout << "March";

                        Umarjon, [24 / 03 / 2024
                        12:12]
                        break;
                    case 4:
                        cout << "April";
                        break;
                    case 5:
                        cout << "May";
                        break;
                    case 6:
                        cout << "June";
                        break;
                    case 7:
                        cout << "July";
                        break;
                    case 8:
                        cout << "August";
                        break;
                    case 9:
                        cout << "September";
                        break;
                    case 10:
                        cout << "October";
                        break;
                    case 11:
                        cout << "November";
                        break;

                        Umarjon, [24 / 03 / 2024
                        12:13]
                    case 12:
                        cout << "December";
                        break;
                }
                cout << " there is:\n" << holiday << endl;
            }
            cout << "PROBLEM 21\n";
// Seed the random number generator
            srand(time(nullptr));
// Generate a random integer between 1 and 100
            int randomNumber = rand() % 100 + 1;
// Determine if the random number is even or odd
            bool isEven = (randomNumber % 2 == 0);
// Prompt the user to guess whether the number is even or odd
            char guess;
            cout << "I have generated a random number between 1 and 100.\n";
            cout << "Guess if it's even (E) or odd (O): ";
            cin >> guess;
// Convert the guess to uppercase for simplicity
            guess = toupper(guess);
// Check if the user's guess matches the actual result
            if ((guess == 'E' && isEven) || (guess == 'O' && !isEven)) {
                cout << "Congratulations! You guessed correctly.\n";
            } else {
                cout << "Sorry, you guessed incorrectly.\n";
            }
// Display the actual number and whether it's even or odd
            cout << "The number generated was: " << randomNumber << " - It is ";
            if (isEven) {
                cout << "even.\n";
            } else {
                cout << "odd.\n";
            }
            cout << "PROBLEM 22\n";
// Arrays for ranks and suits
            string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
            string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
// Generate a random rank and suit
            int randomRankIndex = rand() % 13;
            int randomSuitIndex = rand() % 4;
// Display the picked card
            cout << "You picked the " << ranks[randomRankIndex] << " of " << suits[randomSuitIndex] <<
                 ".\n";
            return 0;
        }
    }
