#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    map<string, int> mymap = {
        {"张三", 60},   {"李四", 65}, {"王五", 75}
    };

    string admiral[3] = { "张飞",  "关羽",  "吕布" };

    mymap.insert(pair<string, int>(admiral[0], 98));
    mymap.insert(pair<string, int>(admiral[1], 97));
    mymap.insert(pair<string, int>(admiral[2], 99));

    for (auto it = mymap.begin(); it != mymap.end(); ++it)
        cout << it->first << " => " << it->second << '\n';


    return 0;
}
