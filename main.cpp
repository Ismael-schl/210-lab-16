//Lab 16 | COMSC 210 | Ismael Hadi
#include <iostream>

using namespace std;

class Color {
    private:
    string name;
    int rvalue;
    int gvalue;
    int bvalue;
    public:
    Color() {name = "none"; rvalue = 0; gvalue = 0; bvalue = 0;}
    Color(string n) {name = n; rvalue = 15; gvalue = 15; bvalue = 15;}
    Color(string n, int r, int g, int b) {name = n; rvalue = r; gvalue = g; bvalue = b;}
    

}