#include <iostream>
#include <vector>

class Bookshelf
{
public:
    int price;
    int A5;
    int commic;
    int bunko;

    Bookshelf(int price, int A5, int commic, int bunko)
    {
        this->price = price;
        this->A5 = A5;
        this->commic = commic;
        this->bunko = bunko;
    }
};

int main()
{
    int A5, commic, bunko;
    std::cin >> A5 >> commic >> bunko;

    int N;
    std::cin >> N;

    std::vector<Bookshelf*> bookshelvs;

    for(int i = 0; i < N; i++)
    {
        int bookshelf_price, bookshelf_A5, bookshelf_commic, bookshelf_bunko;
        std::cin >> bookshelf_price >> bookshelf_A5 >> bookshelf_commic >> bookshelf_bunko;
        Bookshelf* bookshelf = new Bookshelf(bookshelf_price, bookshelf_A5, bookshelf_commic, bookshelf_bunko);

        bookshelvs.push_back(bookshelf);
    }

    int cheapest = 100000000;
    for(auto&& bookshelf : bookshelvs)
    {
        int A5_space = bookshelf->A5;
        int commic_space = bookshelf->A5 + bookshelf->commic;
        int bunko_space = bookshelf->A5 + bookshelf->commic + bookshelf->bunko;
        
        if(A5_space < A5 || commic_space < A5 + commic || bunko_space < A5 + commic + bunko)
        {
            continue;
        }

        cheapest = cheapest > bookshelf->price ? bookshelf->price : cheapest;
    }
    
    if(cheapest == 100000000)
    {
        cheapest = -1;
    }

    std::cout << cheapest << std::endl;

    return 0;
}