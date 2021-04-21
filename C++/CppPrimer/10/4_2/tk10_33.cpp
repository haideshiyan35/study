#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iterator>

using namespace std;

int main(void)
{
    vector<int> vVal;
    ifstream in("file/tk33_sum.txt");
    ofstream outOdd("file/tk33_odd.txt");
    ofstream outEven("file/tk33_even.txt");
    istream_iterator<int> fileIn(in), fileEof;
    ostream_iterator<int> fileOutOdd(outOdd, " ");
    ostream_iterator<int> fileOutEven(outEven, "\n");
    copy(fileIn, fileEof, back_inserter(vVal));
    for(auto e : vVal)
    {
        if(e % 2)
        {
           *fileOutOdd++ = e;
        }
        else
        {
            *fileOutEven++ = e;
        }
    }
    
    in.close();
    outOdd.close();
    outEven.close();

    return 0;
}
