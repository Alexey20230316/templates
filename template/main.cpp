#include<iostream>
#include<vector>
#include<Windows.h>
#include<string>

//template<class T>
//class simple_array
//{
//public:
//    simple_array(int elements_count) : elements(new T[elements_count]), num(elements_count) {}
//
//    T getElement(int inIndex) const
//    {
//        return elements[inIndex];
//    }
//
//    void setElement(int inIndex, T inValue)
//    {
//        elements[inIndex] = inValue;
//    }
//
//    ~simple_array()
//    {
//        delete[] elements;
//    }
//
//private:
//    T* elements = nullptr;
//    int num = 0;
//};

//void gotoxy(int x, int y)
//{
//    COORD p = { x, y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//}




//template <typename T>
//T print(T a)
//{
//    std::cout << "[IN]:   " << a << std::endl;
//    std::cout << "[OUT]:  " << a * a << std::endl;
//    return 0;
//}

//template<>
void const print(std::vector<int> const a)
{
    std::cout << "[IN]:   ";
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a.at(i) << ", ";
    }
    std::cout << std::endl;
    std::cout << "[OUT]:  ";
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a.at(i) * a.at(i) << ", ";
    }
    std::cout << std::endl;
}

int main() {

    setlocale(LC_ALL, "Russian");

    //print(4);

    std::vector<int> myVector = { -1, 4, 8 };

    print(myVector);










    // simple_array<char> a(4);

    /* gotoxy(19, 11);
     std::cout << "Проверка";
     Sleep(2000);*/
     //int age;
     //double weight;
     //std::cout << "Введите возраст и вес: ";
     //std::cin >> age >> weight;
     //std::cout << "Возраст: " << age << "\t Вес: " << weight << std::endl;




    return 0;
}