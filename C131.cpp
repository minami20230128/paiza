#include <iostream>

int main()
{
    int A, B;
    std::cin >> A >> B;
    int count = 0;
    for(int i = A; i <= B; i++)
    {
        auto str_num = std::to_string(i);
        auto itr = str_num.rbegin();
        std::string reverse;
        while(itr != str_num.rend())
        {
            const char c = *itr;
            int n = atoi(&c);
            if(n == 0 || n == 1 || n == 8)
            {
                reverse += std::string({*itr}); 
            }
            else if(n == 6)
            {
                reverse += "9";
            }
            else if(n == 9)
            {
                reverse += "6";
            }
            else
            {
                break;
            }

            itr++;
        }
        
        if(str_num.size() != reverse.size())
        {
            continue;
        }

        if(str_num == reverse)
        {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}