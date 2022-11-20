#include <iostream>
#include <cstring>

using namespace std;

class Product
{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // constructor
    // this is the default consructor that already exist
    Product()
    {
        cout << "Inside constructor" << endl;
    }

    Product(int id, char *n, int mrp, int selling_price){
        //this is a parameterized constructor that is being used to 
        //initialize member variables
        this->id = id ; //left id refers to the 'id' member 
        strcpy(name, n);
        this->mrp = mrp;
        (*this).selling_price = selling_price;

    }
        // setters
        void setSellingPrice(int price)
    {
        // additional checks on setting selling price
        // we should put a price that is lower than or equall to MRP
        if (price > mrp)
        {
            selling_price = mrp;
        }
        else
        {
            selling_price = price;
        }
    }
    void setMRP(int price)
    {
        if (price > 0)
        {
            mrp = price;
        }
        else
        {
            mrp = 0;
        }
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
    char* getName(){
        return name;
    }
    int getId(){
        return id;
    }
};

int main()
{
    // this calls the default constructor that is implemented internally
    Product camera;
    Product camera2(2, "SonyCam", 2200, 2000);
    // this is not the correct way of setting variables
    // camera.mrp = 100;
    // camera.selling_price = 80;
    // we need to implement getters and setters

    // setting mrp and selling price using setter methods
    camera.setMRP(1000);
    camera.setSellingPrice(1200);
    cout << sizeof(camera) << endl; // 4+4+4+100

    // using getters to get the value

    cout << "MRP of camera is " << camera.getMRP() << endl;
    cout << "Selling Price of camera is " << camera.getSellingPrice() << endl;
    
    cout << "id od camera2 is " << camera2.getId() << endl;
    cout << "name of camera2 is " << camera2.getName() << endl;
    cout << "MRP of camera2 is " << camera2.getMRP() << endl;
    cout << "Selling Price of camera2 is " << camera2.getSellingPrice() << endl;
}