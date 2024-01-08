#include <iostream>
#include <string>

int main()
{
    int N;
    std::string sample, actual;
    std::cin >> N >> sample >> actual;
    //std::cout << *(actual.end() - 1) << std::endl;
    int count = 0;
    
    for(int i = 0; i < N; i++)
    {
        if(sample == actual) break;
        
        auto c = *(actual.end() - 1);
        //std::cout << *(actual.end() - 1) << std::endl;
        actual = c + actual;
        actual.erase(actual.end() - 1);

        //std::cout << actual << std::endl;

        count++;
        
        if(sample == actual) break;
    }
    
    std::cout << count - 1 << std::endl;
    
    return 0;
}
