#pragma once 
#include<iostream>
class class1{
    public:
    int usercode;
    char* username;
    int userpromocode;
    class1(int usercode, char* username, int userpromocode){
        this-> usercode=usercode;
        this-> username=username;
        this -> userpromocode =userpromocode;
    };
};