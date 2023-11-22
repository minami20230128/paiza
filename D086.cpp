#include <iostream>

class Kadomatsu
{
    public:
    int short_bamboo;

    Kadomatsu(int short_bamboo)
    {
        this->short_bamboo = short_bamboo;
    }

    int sum()
    {
        return this->short_bamboo * 5;
    }
};

int main()
{
    int short_bamboo;
    std::cin >> short_bamboo;
    auto kadomatsu = Kadomatsu(short_bamboo);
    std::cout << kadomatsu.sum() << std::endl;

    return 0;
}