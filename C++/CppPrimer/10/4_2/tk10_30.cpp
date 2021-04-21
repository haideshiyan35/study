#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
    vector<int> vVal;
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, "\n");

    copy(in, eof, back_inserter(vVal));
    sort(vVal.begin(), vVal.end());
    copy(vVal.begin(), vVal.end(), out);

    return 0;
}
