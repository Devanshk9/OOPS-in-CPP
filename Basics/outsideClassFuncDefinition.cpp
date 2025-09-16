//
// Created by Apple on 10/09/25.
//
#include<iostream>

using namespace std;

class Product {
    int count;
    int price;
public:
    void setData(int x, int y);
    void getData();
};

inline void Product::setData(int x, int y) {
    count = x;
    price = y;
}
inline void Product::getData() {
    cout<<count<<" "<<price;
}

int main() {
    Product p1;
    p1.setData(4,5);
    p1.getData();
    return 0;
}