#pragma once 
#include<iostream>
class class1{
    public:
    int usercode;
    char* username;
    int userpromo;
    class1(int usercode, char* username, int userpromo){
        this-> usercode=usercode;
        this-> username=username;
        this -> userpromo =userpromo;
    };
};