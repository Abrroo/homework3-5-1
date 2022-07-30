#include <iostream>
#include <cstring>
#include <string>

class Figure
{
protected:
    int count_side_quadrangle = 4;
    int count_side_triangle = 3;
    int count_side_none = 0;
public:
    int get_c_s_f()
    {
        return this->count_side_none;
    }
};

class Triangle : protected Figure
{
public:
    Triangle() : Figure() {}
    int get_c_s_t()
    {
        return this->count_side_triangle;
    }
};

class Quadrangle : protected Figure
{
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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
