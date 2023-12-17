#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    std::string str;
    std::cin >> str;

    std::string answer;
    auto itr = str.begin();
    int idx = 1;
    while(itr != str.end())
    {
        int ascii = int(*itr);
        if(idx % 2 == 1)
        {
            ascii = ascii - N >= 65 ? ascii - N : 90 - (65 - (ascii - N)) + 1;
            char ch = (char) (ascii);
            answer += std::string({ch});
        }
        else
        {
            ascii = ascii + N <= 90 ? ascii + N : ((ascii + N) - 90) + 65 - 1;
            char ch = (char) (ascii);
            answer += std::string({ch});
        }
        //std::cout << int(*itr) << std::endl;
        idx++;
        itr++;
    }
    
    std::cout << answer << std::endl;

    return 0;
}