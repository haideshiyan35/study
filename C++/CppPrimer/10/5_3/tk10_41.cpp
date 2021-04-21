#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool isKeyVal(int &a, int &keyV)
{
	return a == keyV ? 1 : 0;
}

int main(void)
{
	istream_iterator<int> in(cin), eof;
	ostream_iterator<int> out(cout, " ");
	vector<int> vecVal;
	auto biVal = back_inserter(vecVal);
	vector<int> resVal;
	auto biresVal = back_inserter(resVal);
	ostream &os = cout;

	copy(in, eof, biVal);

	/*replace(begin, end, old_val, new_val); 将迭代器范围内等于old_val 替换为 new_val*/
	replace(vecVal.begin(), vecVal.end(), 20, 99);
	for_each(vecVal.begin(), vecVal.end(), [&](int &a){os << a << " "; });
	cout << endl;

	/*replace_if(begin, end, pfunc, new_val);对迭代器范围内得元素调用pfunc，若返回非0，用20替换该元素*/
	replace_if(vecVal.begin(), vecVal.end(), bind(isKeyVal, _1, 99), 20);
	copy(vecVal.begin(), vecVal.end(), out);
	cout << endl;

	/*replace_copy(begin, end, dest, old_val, new_val), 对迭代器范围内等于old_val值得元素替换为new_val之后拷贝到dest迭代器中*/
	replace_copy(vecVal.begin(), vecVal.end(), biresVal, 20, 99);
	for(auto e : resVal)
		*out++ = e++;
	cout << endl;

	/*replace_copy_if(begin, end, dest, pfunc, new_val), 迭代器范围内调用pfunc，如果返回true，用new_val替换当前元素*/
	replace_copy_if(vecVal.begin(), vecVal.end(), biresVal, [](int &a){return a == 99 ? 1 : 0;}, 20);
	copy(resVal.begin(), resVal.end(), out);

	return 0;
}
