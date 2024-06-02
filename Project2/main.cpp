		/*
				2. Жучки: що неправильно у наступному програмному коді ?	
		*/

#include <iostream>

class Shape {
public:
    virtual void draw() const 
{
        std::cout << "Drawing Shape" << std::endl;
    }
    virtual ~Shape() {}  // Виртуальный деструктор для корректного удаления объектов производных классов
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

void SomeFunction(Shape &shape) {
    shape.draw();  // Вызов виртуального метода
}

int main() {
    Shape *pRect = new Rectangle;
    SomeFunction(*pRect);  // Передача объекта по ссылке класса Rectangle
    delete pRect;  // Очистка памяти
    return 0;
}
