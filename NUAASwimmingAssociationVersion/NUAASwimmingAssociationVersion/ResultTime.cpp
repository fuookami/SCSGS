#include "ResultTime.h"

#include <sstream>
#include <iomanip>
#include <memory>

std::ostream & operator<<(std::ostream & os, const ResultTime & time)
{
	os << time.toString();

	return os;
}

std::string ResultTime::toString(void) const
{
	std::ostringstream sout;

	if (code & Normal)
	{
		sout << mins() << ":";
		sout << std::setfill('0') << secs() << ".";
		sout << std::setfill('0') << msecs() / 100;
		if (code & MR)
		{
			sout << "(MR)";
		}
	}
	if (code & DSQ)
	{
		sout << timeStrings.find(DSQ)->second;
	}
	if (code & DNS)
	{
		sout << timeStrings.find(DNS)->second;
	}
}

ResultTime ResultTime::operator+(const ResultTime & ano) const
{
	if (code & DSQ || code & DNS)
		return ResultTime(*this);
	
	ResultTime newTime(Normal, msec);
	newTime += ano;
	return std::move(newTime);
}

ResultTime ResultTime::operator+(const unsigned int _msec) const
{
	if (code & DSQ || code & DNS)
		return ResultTime(*this);

	ResultTime newTime(Normal, msec);
	newTime += _msec;
	return std::move(newTime);
}

ResultTime & ResultTime::operator+=(const ResultTime & ano)
{
	this->operator+=(ano.msec);
	return *this;
}

ResultTime & ResultTime::operator+=(const unsigned int _msec)
{
	if (code & DSQ || code & DNS)
		return *this;

	if ((unsigned long)msec + _msec >= UINT_MAX)
		msec = UINT_MAX;
	else
		msec += _msec;
	return *this;
}

ResultTime ResultTime::operator-(const ResultTime & ano) const
{
	if (code & DSQ || code & DNS)
		return ResultTime(*this);

	ResultTime newTime(Normal, msec);
	newTime -= ano;
	return std::move(newTime);
}

ResultTime ResultTime::operator-(const unsigned int _msec) const
{
	if (code & DSQ || code & DNS)
		return ResultTime(*this);

	ResultTime newTime(Normal, msec);
	newTime -= _msec;
	return std::move(newTime);
}

ResultTime & ResultTime::operator-=(const ResultTime & ano)
{
	this->operator-=(ano.msec);
	return *this;
}

ResultTime & ResultTime::operator-=(const unsigned int _msec)
{
	if (code & DSQ || code & DNS)
		return *this;

	if ((long)msec - _msec < 0)
		msec = UINT_MAX;
	else
		msec += _msec;
	return *this;
}

ResultTime ResultTime::operator*(const unsigned int times)
{
	if (code & DSQ || code & DNS)
		return ResultTime(*this);

	ResultTime newTime(Normal, msec);
	newTime -= times;
	return std::move(newTime);
}

ResultTime & ResultTime::operator*=(const unsigned int times)
{
	if (code & DSQ || code & DNS)
		return *this;

	msec *= times;
	return *this;
}