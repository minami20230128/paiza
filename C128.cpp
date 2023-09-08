#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> numbers(N);
    for(auto&& number : numbers)
    {
        std::cin >> number;
    }

    auto ritr = numbers.rbegin();
    int top = 1;
    int bottom = *ritr;
    ritr++;
    top = *ritr * bottom + top;
    ritr++;
    while(ritr != numbers.rend())
    {
        int prev_bottom = bottom;
        bottom = top;
        top = *ritr * bottom + prev_bottom;
        
        //std::cout << *ritr << std::endl;
        //std::cout << top << std::endl;
        //std::cout << bottom << std::endl;

        ritr++;
    }
    
    std::cout << std::to_string(top)  << " " << std::to_string(bottom) << std::endl;

    return 0;
}