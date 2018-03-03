//created by Cr4shOv3rrid3 under the https://github.com/Cr4shOv3rrid3/1337_General_Public_BTC_Banking_license
// feel free to copy, hack, destroy or create new things with it
// P.S. if you don't like i created that for you. just replace first line with your own cool stylish hacker name ;)

#include <iostream>
#include <stdio.h>




using namespace std;

struct test {
	double beginning;
	string material;
	int quantity;
    float price;
	double extended;
};
struct test2 {
	string material;
	int quantity;
	float price;
	double extended;
};
struct test3 {
	string material;
	int quantity;
	float price;
	double extended;
	string shitsgotreal;
};
struct toshi {
	static char const ett = '@';
	string username;
	string displayname;
	string address;
	float amount;
};


test var0;
test  var1;
test2 var2;
test3 var3;

float s0 = 0.0;
float s1 = 5.5;
float s2 = 2.6;
float s3 = 1.9;   //amount of BTC in sum and cost price of roundabout a local banking license: (100k$)

string m0 = "stone";
string m1 = "gold";
string m2 = "silver";
string m3 = "iron";
//string sneakshit = "shitcollectors";

string unit = "BTC";

void settings(void) {

var0.price = s0;
var1.price = s1;
var2.price = s2;
var3.price = s3;  


var0.material = m0;
var1.material = m1;
var2.material = m2; 
var3.material = m3;
//var3.shitsgotreal = sneakshit;
}


void testprint(void) {

cout << "Bitcoin Generator Test Programm: \n";
cout << var1.price << " "  << unit << " " << var1.material << "\n" 
     << var2.price << " " << unit << " " << var2.material << "\n" 
     << var3.price << " " << unit << " " << var3.material << "\n";
  //   << var0.price << " " << unit << " " << var0.material << "\n";

}

int main()
{

settings();
testprint();

int count = 10;
char ch;
while(cin.get(ch) != ".")
count++;
cout << "Numbers of characters read: \n" << count;
cout << "Test print!!!";

        return 0;
} //Basic Beginners Bitcoin generator Test Programmm in 100 Lines of code



	
