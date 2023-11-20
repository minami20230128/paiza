#include <iostream>
#include <string>

std::string replace(std::string s, std::string before, std::string after)
{
    size_t pos = 0;
    int offset = 0;
    while((pos = s.find(before, offset)) != std::string::npos)
    {
        s.replace(pos, before.length(), after);
        offset = pos + after.length();
    }
    
    return s;
}

int main()
{
    std::string s;
    std::cin >> s;
    int under_count = 0;
    int hyphen_count = 0;
    auto itr = s.begin();
    while(itr != s.end())
    {
        if(*itr == '_')
        {
            under_count++;
        }

        if(*itr == '-')
        {
            hyphen_count++;
        }
        itr++;
    }

    std::string output = "";
    if(under_count < hyphen_count)
    {
        
        s = replace(s, "_", "-");
    }
    else
    {
        s = replace(s, "-", "_");
    }

    std::cout << s << std::endl;

    return 0;
}