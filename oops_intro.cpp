#include <iostream>
using namespace std;

class Product
{
    int id;
    char name[100];

public:
    int mrp;
    int selling_price;
};

int main()
{

    Product camera;
    camera.mrp = 100;
    camera.selling_price = 80;
    cout << sizeof(camera) << endl; // 4+4+4+100
    cout << "MRP of camera is" << camera.mrp << endl;
    cout << "Selling Price of camera is" << camera.selling_price << endl;
}