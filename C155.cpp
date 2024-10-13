#include <iostream>
#include <string>

int main()
{
    std::string adv_str;
    std::cin >> adv_str;

    int mail_num;
    std::cin >> mail_num;


    for(int i = 0; i < mail_num + 1; i++)
    {
        std::string title;
        getline(std::cin, title);
        //std::cout << title << std::endl;
        
        if(i == 0)
        {
            continue;
        }

        if(title.find(adv_str) != std::string::npos)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}