#include <vector>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {

		multimap<string, string> mVal = {{"zhangjie", "nihao"}, {"zhangjie", "dongtiandexue"},{"zhangjie","weilai"},{"zhangjie","jianai"}};
		auto pVal = mVal.find("zhangsanji");
		int count = mVal.count("zhangsanji");
		
		while(count)
		{
			count--;
			cout << pVal->second << endl;
			pVal++;
		}

		return 0;
}
