#include <iostream>
#include <map>

bool IsAllRoomsCleaned(std::map<int, bool> IsCleaned)
{
    auto itr = IsCleaned.begin();
    while(itr != IsCleaned.end())
    {
        if(itr->second == 0) return false;
        //std::cout << itr->first << std::endl;
        //std::cout << itr->second << std::endl;
        itr++;
    }
    return true;
}

int main()
{
    int N, M;
    std::cin >> N;
    std::cin >> M;
    std::map<int, bool> IsCleaned;

    //vector[idx]は要素が空だったときに例外が発生するのでmapでやる
    for(int i = 0; i < N; i++)
    {
        IsCleaned[i] = false;
    }

    for(int i = 0; i < N; i++)
    {
        int L = M * i;
        IsCleaned[L % N] = true;
    }

    if(IsAllRoomsCleaned(IsCleaned))
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }
    
    return 0;
}
