/*************************************************************
 * ��ü ���� ���α׷��ֿ��� Ŭ������ ����ϴ� ���α׷�       *
 *************************************************************/
#include <iostream>
using namespace std;

/************************************************************
 * Ŭ���� ����                                              *
 * ������ ����� ��� �Լ��� ����                           *
 ************************************************************/
class Circle
{
private:
    double radius; // mutable ���� const�� ����� ��� �Լ� ���� �ʵ� ���� ���� �� �� �ִ�.
public:
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
};

/**************************************************************
 * ��� �Լ� ���� �κ�                                        *
 * ��� �Լ����� Ŭ���� ���� �κп��� ����                    *
 **************************************************************/
 // getRadius ��� �Լ��� ����
double Circle::getRadius() const
{
    return radius;
}
// getArea ��� �Լ��� ����
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
// getPerimeter ��� �Լ��� ����
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
// setRadius ��� �Լ��� ����
void Circle::setRadius(double value)
{
    radius = value;
}
/********************************************************
 * ���ø����̼� �κ�                                    *
 * Ŭ������ �ν��Ͻ�ȭ�ؼ� ��ü�� ����� Ȱ��           *
*********************************************************/
int main()
{
    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "������: " << circle1.getRadius() << endl;
    cout << "����: " << circle1.getArea() << endl;
    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;
    // �� ��° circle ��ü�� ����� ��� �Լ� ȣ��  
    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "������: " << circle2.getRadius() << endl;
    cout << "����: " << circle2.getArea() << endl;
    cout << "�ѷ�: " << circle2.getPerimeter();
    return 0;
}