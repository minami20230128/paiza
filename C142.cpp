#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string favorite;
    int word_num;
    std::cin >> favorite;
    std::cin >> word_num;
    std::vector<std::string> menu(word_num);

    bool is_favorite = false;

    for(auto&& word : menu)
    {
        std::cin >> word;
        if(favorite == word)
        {
            is_favorite = true;
            break;
        }
    }

    if(is_favorite)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    return 0;
}