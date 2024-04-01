#include<iostream>
#include<vector>
#include<Windows.h>


 template <typename T>
 T print(T a)
{
    std::cout << "[IN]:   " << a << std::endl;
    std::cout << "[OUT]:  " << a * a << std::endl;
    return 0;
}

template<>
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



    return 0;
}