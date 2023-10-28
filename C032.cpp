#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    
    for(int i = 0; i < N; i++)
    {
        int kind, price;
        std::cin >> kind;
        std::cin >> price;
  
        switch(kind)
        {
            case 0:
                zero += price;
                break;
            case 1:
                one += price;
                break;
            case 2:
                two += price;
                break;
            case 3:
                three += price;
                break;
        }
    }
    
    int points = zero / 100 * 5 + one / 100 * 3 + two / 100 * 2 + three / 100;

    std::cout << points << std::endl;
    return 0;
}
