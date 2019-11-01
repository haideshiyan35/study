#include <vector>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {

		multimap<string, string> mVal = {{"zhangjie", "nihao"}, {"zhangjie", "dongtiandexue"},{"zhangjie","weilai"},{"zhangjie","jianai"}};
		for(pair<multimap<string, string>::iterator, multimap<string, string>::iterator> pos = mVal.equal_range("zhangjie"); pos.first != pos.second; pos.first++)
		{
			cout << pos.first->second << endl;
		}

		return 0;
}
