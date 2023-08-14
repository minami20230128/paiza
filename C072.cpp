#include <iostream>
#include <vector>

int main()
{
    int atk, def, agi, N;
    std::vector<std::string> names;
    std::cin >> atk;
    std::cin >> def;
    std::cin >> agi;
    std::cin >> N;

    for(int i = 0; i < N; i++)
    {
        std::string monstername;
        int minatk, maxatk, mindef, maxdef, minagi, maxagi;
        std::cin >> monstername;
        std::cin >> minatk;
        std::cin >> maxatk;
        std::cin >> mindef;
        std::cin >> maxdef;
        std::cin >> minagi;
        std::cin >> maxagi;

        if(atk >= minatk && atk <= maxatk && def >= mindef && def <= maxdef && agi >= minagi && agi <= maxagi)
        {
            names.push_back(monstername);
        }
    }

    if(names.size() == 0)
    {
        names.push_back("no evolution");
    }
    
    auto itr = names.begin();
    while(itr != names.end())
    {
        std::cout << *itr << std::endl;
        itr++;
    }

    return 0;
}