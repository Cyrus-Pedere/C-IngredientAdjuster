/* Cyrus Jayson A. Pedere
   Bscpe 1-1 Programming Logic and Design
   FSw1 Module 2: Input, Processing, and Output

   **** 2. Ingredient Adjuster *****
        C++ LANGUAGE
 */


#include<iostream>
using namespace std;


int main()
{

double sugar, butter, flour, cookies;

cout << "How many cookies do you want to make?"<<endl;
cin >> cookies;

sugar = (1.5*cookies)/48;
butter = (1*cookies)/48;
flour = (2.75*cookies)/48;

cout <<"The number of cookies that you want to make is" << cookies <<endl;
cout <<"The number of cups of sugar needed is: " << sugar <<endl;
cout <<"The number of cups of butter needed is: " << butter <<endl;
cout <<"The number of cups of flour needed is: " << flour <<endl;
return 0;

}