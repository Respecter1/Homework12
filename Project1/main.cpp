/*
1. Запишіть віртуальний конструктор-копіювальник для класу Square.
*/


class Rectangle
{
public:
    Rectangle() { }
    virtual Rectangle* Clone() const { return new Rectangle(*this); }
    virtual ~Rectangle() { }
};

class Square : public Rectangle
{
public:
    Square() { }
    virtual Square* Clone() const override { return new Square(*this); }
    ~Square() { }
};

