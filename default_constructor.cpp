//Name:Abuzar Jamilee
//PRN:23070123158

#include <iostream>
using namespace std;
class construct{
    public:
    int a,b;

construct(){
    a = 10;
    b = 20;
}
void display(){
cout << "a ="<< a <<endl<< "b ="<<b;
}
};


int main() {
    construct constructor;
    constructor.display();
    

    return 0;
}
