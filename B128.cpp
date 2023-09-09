#include <iostream>
#include <vector>
#include <stdlib.h>

int main()
{
    std::string str;
    std::cin >> str;

    std::vector<int> numbers;
    for(int i = 0; i < str.size(); i++){
        int num = (int) str[i] - 48;
        numbers.push_back(num);
        //std::cout << num << std::endl;
    }

    std::vector<std::vector<std::string>> codes;
    for(auto&& number : numbers)
    {
        std::string charactors;
        for(int i = 0; i < number; i++)
        {
            charactors += "#";
        }

        for(int j = 0; j < 9 - number; j++)
        {
            charactors += ".";
        }

        //std::cout << charactors << std::endl;
        std::vector<std::string> code;
        int idx = 0;
        int length = 3;
        for(int i =0; i < 3; i++)
        {
            //std::cout << charactors.substr(idx * 3, 3) << std::endl;
            code.push_back(charactors.substr(idx * 3, 3));
            idx++;
        }
        
        codes.push_back(code);
    }

    for(int k = 0; k < codes.size() / 3; k++)
    {
        for(int l = 0; l < 3; l++)
        {
            std::cout << codes.at(k * 3).at(l) << codes.at(k * 3 + 1).at(l) << codes.at(k * 3 + 2).at(l) << std::endl;
        }
    }


    return 0;
}