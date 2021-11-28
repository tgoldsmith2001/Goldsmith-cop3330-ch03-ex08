/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Goldsmith
 */

#include "std_lib_facilities.h"

//Checks if a given string is an integer by checking that each character is exclusively a number
bool isInteger(string str){
        for (int i = 0; i < str.length(); i++){
            if (isdigit(str[i]) == false){
                if(i==0 && str[0]=='+'||str[0]=='-'){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
}

bool isEven(int num){
    return (num%2==0);
}

int main(){
    string num;
    string result="";

    cout <<"Enter an Integer and we will determine if it is odd or even:  ";
    cin >> num;

    //while loop to check for non integer input
    while (!isInteger(num)){
        cout <<"Invalid input try again: ";
        cin >> num;
    }
    if(isEven(stoi(num)))
        result="Even";
    else
        result="Odd";
    cout <<num <<" is an " <<result <<" number";
}

