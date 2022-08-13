#include <iostream>
#include <cstring>
#include <string>

class Figure
{
protected:
    int count_side = 0;
public:
    int get_c_s()
    {
        return this->count_side;
    }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure() {
        count_side = 3;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure() {
        count_side = 4;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    Quadrangle quadrangle;
    Figure figure;
    std::cout << "Количество сторон :" << std::endl;
    std::cout << "Фигура: " << figure.get_c_s() << std::endl;
    std::cout << "Треугольник: " << triangle.get_c_s() << std::endl;
    std::cout << "Четырехугольник: " << quadrangle.get_c_s() << std::endl;


}

