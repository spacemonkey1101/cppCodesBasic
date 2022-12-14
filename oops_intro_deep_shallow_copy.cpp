#include <iostream>
#include <cstring>

using namespace std;

class Product
{
private:
    int id;
    char *name; // creating a pointer instead
    int mrp;
    int selling_price;

public:
    // constructor
    // this is the default consructor that already exist
    Product()
    {
        cout << "Inside constructor" << endl;
    }
    // parameterized constructor
    Product(int id, char *n, int mrp, int selling_price)
    {
        // this is a parameterized constructor that is being used to
        // initialize member variables
        this->id = id; // left id refers to the 'id' member
        this->mrp = mrp;
        (*this).selling_price = selling_price;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // copy constructor
    Product(Product &P)
    {
        // we have to use the parameter P as a reference here
        id = P.id;
        mrp = P.mrp;
        selling_price = P.selling_price;
        name = new char[strlen(P.name) + 1];
        strcpy(name, P.name);
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
    void setName(char *name)
    {
        strcpy(this->name, name);
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
    char *getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};

int main()
{
    Product camera(101, "Kodak New Gen", 3000, 2500);
    // the ambiguity seen below is due to the below line calling the default copy
    // constructor which does a shallow copy, we should implement deep copy by
    // calling our own copy constructor
    Product camera_old(camera);

    camera_old.setName("Kotak Old");
    // the above statement sets both the names of camera and camera_old
    // although we are just setting it from camera_old

    camera_old.setMRP(2200);
    camera_old.setSellingPrice(2000);
    // the above 2 lines works as intended

    cout << "id of camera is " << camera.getId() << endl;
    cout << "name of camera is " << camera.getName() << endl;
    cout << "MRP of camera is " << camera.getMRP() << endl;
    cout << "Selling Price of camera is " << camera.getSellingPrice() << endl;

    cout << endl;

    cout << "id of camera_old is " << camera_old.getId() << endl;
    cout << "name of camera_old is " << camera_old.getName() << endl;
    cout << "MRP of camera_old is " << camera_old.getMRP() << endl;
    cout << "Selling Price of camera_old is " << camera_old.getSellingPrice() << endl;
}