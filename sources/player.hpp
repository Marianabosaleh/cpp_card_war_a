#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{
    class Player{
        string name;
 
        public:
        
        Player(){name="";}

        Player(string name);

        string getname(){
            return name;
        }
        void setname(string new_name);

        int stacksize();
        int cardesTaken();
    };
}