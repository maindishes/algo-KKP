
#include<map>
#include<vector>
#include<algorithm>
#include<iostream>
// 26 5
// Bulbasaur
// Ivysaur
// Venusaur
// Charmander
// Charmeleon
// Charizard
// Squirtle
// Wartortle
// Blastoise
// Caterpie
// Metapod
// Butterfree
// Weedle
// Kakuna
// Beedrill
// Pidgey
// Pidgeotto
// Pidgeot
// Rattata
// Raticate
// Spearow
// Fearow
// Ekans
// Arbok
// Pikachu
// Raichu
// 25
// Raichu
// 3
// Pidgey
// Kakuna

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int P,T;
    std::cin >> P >>T;
    std::string temp;
    std::map<std::string , std::string> imap;
    std::map<std::string, std::string> omap;
    // std::string temp = "dkfjkdjf";
    // std::string a = "3";
    // std::cout << std::is_int("4") << std::endl;
    // std::cout << std::is_integral(a) << std::endl;
    for(int i=0;i<P;++i)
    {
        std::cin >> temp;
        imap[std::to_string(i+1)] = temp;
        omap[temp] = std::to_string(i+1);
    }
    std::string target;
    for(int i=0 ; i<T; ++i) {
        std::cin >> target;
        // std::map<std::string, std::string>::iterator it = omap.find(target);
        if(imap[target].length() != 0)
            std::cout << imap[target] << "\n";
        else
            std::cout << omap[target] << "\n";
        
    }
}