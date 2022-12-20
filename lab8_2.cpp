//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string nameuser_1 = "" , movie = "" , bduser = "" , seeu= "";
    int iduser_1;
    string x = "Fahsai";
    cout << x << ": " << "Sawadee ka...Can you tell me your name?\n" ;
    cout << "?????: ";
    getline(cin,nameuser_1);
    cout << x << ": " << "Wow!!! " << nameuser_1 << " is a really cool name.\n";
    cout << x << ": " << "I think you are an Engineering student. What is your student ID?\n" ;
    cout << nameuser_1 <<": ";
    cin >> iduser_1 ;
    int y ;
    y = (iduser_1/10000000) -12 ;
    cout << x << ": " << "I think you may be GEAR " << y << ". I have a free movie ticket for you.\n";
    cout << x << ": " <<  "Let's go to the cinema together!!!\n";
    cout << x << ": " <<  "What movie do you want to watch?\n";
    cout << nameuser_1 <<": ";
    cin.ignore();
    getline(cin,movie);
    cout << x << ": " << "So....which day are you free to go with me?\n";
    cout << nameuser_1 <<": ";
    getline(cin,bduser);
    cout << x << ": " << bduser << "....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
    cout << nameuser_1 <<": ";
    getline(cin,seeu);
    cout << x << ": " <<"555+ see you "<<bduser<<". Bye Bye \\(^ ^)/" ;

}