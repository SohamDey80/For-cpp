#include <iostream>
using namespace std;

class Cls{
    private: 
        int objid;

    public:
        Cls();
        int displayObjcount();
};

int Cls:: objecntr = 0;

Cls:: Cls(){
    objid = ++objectr;
    objid = 1;
    std::cout << "\n Object created";
}

int main(){
    Cls c1, c2, c3;
    std::cout << std::endl;
    return 0;
}