//Lab 16 | COMSC 210 | Ismael Hadi
#include <iostream>

using namespace std;

// Initiates a class type Color that assigns rgb values via various constructors
class Color {
    private:
    string name;
    int rvalue;
    int gvalue;
    int bvalue;
    public:

    //constructors
    Color() {name = "none"; rvalue = 0; gvalue = 0; bvalue = 0;}
    Color(string n) {name = n; rvalue = 15; gvalue = 15; bvalue = 15;}
    Color(string n, int r, int g, int b) {name = n; rvalue = r; gvalue = g; bvalue = b;}

    //setters and getters
    string getName() {return name;}
    void setName(string n) {name = n;}
    int getRvalue() {return rvalue;}
    void setRvalue(int r) {rvalue = r;}
    int getGvalue() {return gvalue;}
    void setGvalue(int g) {gvalue = g;}
    int getBvalue() {return bvalue;}
    void setBvalue(int b) {bvalue = b;}
    
    //prints color values in a clean way
    void print() {
        cout << "Color name: " << name << endl;
        cout << "Red value: " << rvalue << endl;
        cout << "Green value: " << gvalue << endl;
        cout << "Blue value: " << bvalue << endl << endl;
    }
};

int main() {
    //implements default constructor
    Color nothing;
    nothing.print();

    //implements partial constructor
    Color brown("brown");
    brown.print();

    //implements parameter constructor
    Color teal("teal", 157, 210, 500);
    teal.print();

    Color cyan("cyan", 123, 216, 513);
    cyan.print();
    return 0;
}