#pragma once

#include "Public.h"
#include <iostream>
#include <string>
#include <map>
#include <utility>

class Time
{
	friend std::ostream &operator << (std::ostream &os, const Time &time);

	friend bool operator==(const Time &left, const Time &right) { return left.code == right.code && left.msec == right.msec; }
	friend bool operator!=(const Time &left, const Time &right) { return left.code != right.code && left.msec == right.msec; }
	friend bool operator<(const Time &left, const Time &right) { return left.msec < right.msec; }
	friend bool operator>(const Time &left, const Time &right) { return left.msec > right.msec; }
	friend bool operator<=(const Time &left, const Time &right) { return left.msec <= right.msec; }
	friend bool operator>=(const Time &left, const Time &right) { return left.msec >= right.msec; }

public:
	enum 
	{
		MR = 1,
		Normal = 2,
		DSQ = 4,
		DNS = 8,
	};

	Time() : code(Normal), msec(0) {}
	explicit Time(unsigned int _code, unsigned int _msec = UINT_MAX) : msec(_msec) {}
	explicit Time(unsigned int _code, unsigned int min, unsigned int sec, unsigned int _msec) : code(_code), msec(min * MsecsOfOneMin + sec * MsecsOfOneSec + _msec) {}
	Time(const Time &ano) : code(ano.code), msec(ano.msec) {}
	Time(const Time &&ano) : code(ano.code), msec(ano.msec) {}

	Time &setCode(unsigned int _code) { code = _code; }
	Time &setTime(unsigned int min, unsigned int sec, unsigned int _msec) { min * MsecsOfOneMin + sec * MsecsOfOneSec + _msec; }
	Time &setMin(unsigned int min) { msec = min * MsecsOfOneMin + msec % MsecsOfOneMin; return *this; }
	Time &setSec(unsigned int sec) { msec = msec / MsecsOfOneMin * MsecsOfOneMin + sec * MsecsOfOneSec + msec % MsecsOfOneSec; return *this; }
	Time &setMsec(unsigned int _msec) { msec = msec / MsecsOfOneSec * MsecsOfOneSec + _msec; return *this; }

	std::string toString(void) const;
	inline unsigned int totalMsecs(void) const { return msec; }
	inline unsigned int mins(void) const { return msec / MsecsOfOneMin; }
	inline unsigned int secs(void) const { return msec / MsecsOfOneSec % SecsOfOneMin; }
	inline unsigned int msecs(void) const { return msec%MsecsOfOneSec; }

	Time &operator=(const Time &ano) { code = ano.code; msec = ano.msec; return *this; }
	Time &operator=(const Time &&ano) { code = ano.code; msec = ano.msec; return *this; }
	Time operator+(const Time &ano) const;
	Time operator+(const unsigned int _msec) const;
	Time &operator+=(const Time &ano);
	Time &operator+=(const unsigned int _msec);
	Time operator-(const Time &ano) const;
	Time operator-(const unsigned int _msec) const;
	Time &operator-=(const Time &ano);
	Time &operator-=(const unsigned int _msec);
	Time operator*(const unsigned int times);
	Time &operator*=(const unsigned int times);

private:
	static const unsigned int SecsOfOneMin = 60;
	static const unsigned int MsecsOfOneSec = 1000;
	static const unsigned int MsecsOfOneMin = SecsOfOneMin * MsecsOfOneSec;
	static const std::map<unsigned int, std::string> timeStrings;

	unsigned int code;
	unsigned int msec;
};

const std::map<unsigned int, std::string> Time::timeStrings =
{
	std::make_pair(DSQ, "DSQ"),
	std::make_pair(DNS, "DNS"),
	std::make_pair(MR, "MR")
};