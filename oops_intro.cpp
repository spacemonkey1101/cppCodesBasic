#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // setters
    void setSellingPrice(int price)
    {
        selling_price = price;
    }
    void setMRP(int price)
    {
        mrp = price;
    }
    // getters
    int getMRP()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }
};

int main()
{

    Product camera;
    // this is not the correct way of setting variables
    // camera.mrp = 100;
    // camera.selling_price = 80;
    // we need to implement getters and setters

    // setting mrp and selling price using setter methods
    camera.setMRP(1000);
    camera.setSellingPrice(1200);
    cout << sizeof(camera) << endl; // 4+4+4+100

    // using getters to get the value

    cout << "MRP of camera is" << camera.getMRP() << endl;
    cout << "Selling Price of camera is" << camera.getSellingPrice() << endl;
}