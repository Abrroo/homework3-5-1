#include <iostream>
#include <cstring>
#include <string>

class Figure
{
protected:
    int count_side_none = 0;
public:
    int get_c_s_f()
    {
        return this->count_side_none;
    }
};

class Triangle : protected Figure
{
private:
    int count_side_triangle = 3;
public:
    Triangle() : Figure() {}
    int get_c_s_t()
    {
        return this->count_side_triangle;
    }
};

class Quadrangle : protected Figure
{
private:
    int count_side_quadrangle = 4;
public:
    Quadrangle() : Figure() {}
    int get_c_s_q()
    {
        return this->count_side_quadrangle;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    Quadrangle quadrangle;
    Figure figure;
    std::cout << "Количество сторон :" << std::endl;
    std::cout << "Фигура: " << figure.get_c_s_f() << std::endl;
    std::cout << "Треугольник: " << triangle.get_c_s_t() << std::endl;
    std::cout << "Четырехугольник: " << quadrangle.get_c_s_q() << std::endl;


}

