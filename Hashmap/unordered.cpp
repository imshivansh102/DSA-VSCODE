#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation.
    unordered_map<string,int> m;

    // insertion.
    // first way.
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);

    // 2nd way.
    pair<string,int> pair2("love", 2 );
    m.insert(pair2);

    // 3rd way.
    m["mera"] = 1;
    // updates value of key.
    m["mera"] = 2;

    // Search.
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    cout << m["unknownKey"] << endl; // it creates sapce for this key and value is 0.

    // size.
    cout << m.size() << endl;
    // to check presence.
    cout << m.count("love") << endl; // if present it gives 1 otherwise gives 0.

    // erase.
    m.erase("love");
    cout << m.size() << endl;

    for( auto i:m ){
        cout << i.first << " " << i.second << endl;
    }


    return 0;
}