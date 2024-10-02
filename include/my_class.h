#ifndef MY_CLASS_H
#define MY_CLASS_H

class MyClass {
public:
    MyClass(int data) : _data(data) { }
    int getData() { return _data; }
private:
    int _data;
};

#endif
