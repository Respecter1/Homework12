/*
1. �������� ���������� �����������-����������� ��� ����� Square.
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

