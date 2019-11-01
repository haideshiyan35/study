#include <iostream>
#include <set>

using namespace std;
typedef struct sales_data 
{
	int isbn;
}Sales_data;

using compareType = bool(*)(const Sales_data &lhs, const Sales_data &rhs);

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn < rhs.isbn;
}
int main()
{
	multiset<Sales_data, compareType> bookstore(compareIsbn); // bootstore(compareIsbn) compareIsbn 作为默认构造参数
	multiset<Sales_data, decltype(compareIsbn)*>::iterator bs_iterator = bookstore.begin();
	multiset<Sales_data, compareType>::iterator bs_iteratorN = bookstore.begin();

	return 0;
}
