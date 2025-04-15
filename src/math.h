#pragma once
#include <iostream>
#include <string>


using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Rectangle" << endl;
        }
    };

class ShapeFactory {
public:
    static unique_ptr<Shape> createShape(const string& type) {
        if (type == "circle") return make_unique<Circle>();
        if (type == "square") return make_unique<Square>();
        return nullptr;
    }
};