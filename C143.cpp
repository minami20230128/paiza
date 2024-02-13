#include <iostream>
#include <string>

int main()
{
    std::string file_name;
    std::cin >> file_name;

    auto itr = file_name.begin();
    bool is_hyphen = false;
    bool is_prev_hyphen = false;
    std::string result;
    while(itr != file_name.end())
    {
        is_hyphen = *itr == '-';
        if(!is_prev_hyphen || !is_hyphen)
        {
            result += std::string({*itr});
        }

        is_prev_hyphen = *itr == '-';

        itr++;
    }

    std::cout << result << std::endl;

    return 0;
}