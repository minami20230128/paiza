#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    std::string A, B;
    std::cin >> A >> B;
    
    //std::cout << B << std::endl;

    if (A.size() > B.size())
    {
        for(int i = 0; i < A.size() - B.size(); i++)
        {
            B = "0" + B;
        }
    }
    else if (B.size() > A.size())
    {
        for(int i = 0; i < B.size() - A.size(); i++)
        {
            A = "0" + A;
        }
    }

    std::string result;
    auto aitr = A.begin();
    auto bitr = B.begin();
    //std::cout << A << std::endl;
    //std::cout << B << std::endl;

    while(aitr != A.end())
    {
        const char const_a = *aitr;
        const char const_b = *bitr;
        //std::cout << int(*aitr - '0') << std::endl;
        //std::cout << atoi(*const_a) << std::endl;
        int tmp = (int(*aitr - '0') + int(*bitr - '0')) % 10;
        //std::cout << atoi(&const_a) << std::endl;
        //std::cout << atoi(&const_b) << std::endl;
        //std::cout << tmp << std::endl;
        result += std::to_string(tmp);
        aitr++;
        bitr++;
    }

    std::cout << result << std::endl;

    return 0;
}