#include "StrBlob.h"


StrBlob::~StrBlob()
{
}

void StrBlob::pop_back()
{
	//���vectorΪ�գ�check���׳�һ���쳣
	check(0, "pop_back on empty StrBlob");
}

string & StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

const string & StrBlob::front() const
{

	check(0, "front on empty StrBlob");
	return data->front();
}

string & StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

const string & StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}



void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}