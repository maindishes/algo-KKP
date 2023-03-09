/**
 * 비밀번호 찾기
 * 2023 3 9 / 00:23
16 4
noj.am IU
acmicpc.net UAENA
startlink.io THEKINGOD
google.com ZEZE
nate.com VOICEMAIL
naver.com REDQUEEN
daum.net MODERNTIMES
utube.com BLACKOUT
zum.com LASTFANTASY
dreamwiz.com RAINDROP
hanyang.ac.kr SOMEDAY
dhlottery.co.kr BOO
duksoo.hs.kr HAVANA
hanyang-u.ms.kr OBLIVIATE
yd.es.kr LOVEATTACK
mcc.hanyang.ac.kr ADREAMER
startlink.io
acmicpc.net
noj.am
mcc.hanyang.ac.kr
*/

#include <map>
#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
    int a,b;
    std::cin >> a >> b;
    std::string A;
    std::string B;
    std::map<std::string,std::string> imap;
    for( int i =0;i<a;++i)
    {
        std::cin >> A >> B;
        imap[A] = B;
    }

    for(int i =0;i<b; ++i)
    {
        std::cin >> A;
        std::cout << imap[A] << "\n";
    }
}