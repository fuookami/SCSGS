#pragma once

#include <iostream>
#include <string>
#include <map>
#include <utility>

class ResultTime
{
	friend std::ostream &operator << (std::ostream &os, const ResultTime &time);

	friend bool operator==(const ResultTime &left, const ResultTime &right) { return left.code == right.code && left.msec == right.msec; }
	friend bool operator!=(const ResultTime &left, const ResultTime &right) { return left.code != right.code && left.msec == right.msec; }
	friend bool operator<(const ResultTime &left, const ResultTime &right) { return left.msec < right.msec; }
	friend bool operator>(const ResultTime &left, const ResultTime &right) { return left.msec > right.msec; }
	friend bool operator<=(const ResultTime &left, const ResultTime &right) { return left.msec <= right.msec; }
	friend bool operator>=(const ResultTime &left, const ResultTime &right) { return left.msec >= right.msec; }

public:
	enum 
	{
		MR = 1,
		Normal = 2,
		DSQ = 4,
		DNS = 8,
	};

	ResultTime() : code(Normal), msec(0) {}
	explicit ResultTime(unsigned int _code, unsigned int _msec = UINT_MAX) : msec(_msec) {}
	explicit ResultTime(unsigned int _code, unsigned int min, unsigned int sec, unsigned int _msec) : code(_code), msec(min * MsecsOfOneMin + sec * MsecsOfOneSec + _msec) {}
	ResultTime(const ResultTime &ano) : code(ano.code), msec(ano.msec) {}
	ResultTime(const ResultTime &&ano) : code(ano.code), msec(ano.msec) {}

	ResultTime &setCode(unsigned int _code) { code = _code; }
	ResultTime &setTime(unsigned int min, unsigned int sec, unsigned int _msec) { min * MsecsOfOneMin + sec * MsecsOfOneSec + _msec; }
	ResultTime &setMin(unsigned int min) { msec = min * MsecsOfOneMin + msec % MsecsOfOneMin; return *this; }
	ResultTime &setSec(unsigned int sec) { msec = msec / MsecsOfOneMin * MsecsOfOneMin + sec * MsecsOfOneSec + msec % MsecsOfOneSec; return *this; }
	ResultTime &setMsec(unsigned int _msec) { msec = msec / MsecsOfOneSec * MsecsOfOneSec + _msec; return *this; }

	std::string toString(void) const;
	inline unsigned int totalMsecs(void) const { return msec; }
	inline unsigned int mins(void) const { return msec / MsecsOfOneMin; }
	inline unsigned int secs(void) const { return msec / MsecsOfOneSec % SecsOfOneMin; }
	inline unsigned int msecs(void) const { return msec%MsecsOfOneSec; }

	ResultTime &operator=(const ResultTime &ano) { code = ano.code; msec = ano.msec; return *this; }
	ResultTime &operator=(const ResultTime &&ano) { code = ano.code; msec = ano.msec; return *this; }
	ResultTime operator+(const ResultTime &ano) const;
	ResultTime operator+(const unsigned int _msec) const;
	ResultTime &operator+=(const ResultTime &ano);
	ResultTime &operator+=(const unsigned int _msec);
	ResultTime operator-(const ResultTime &ano) const;
	ResultTime operator-(const unsigned int _msec) const;
	ResultTime &operator-=(const ResultTime &ano);
	ResultTime &operator-=(const unsigned int _msec);
	ResultTime operator*(const unsigned int times);
	ResultTime &operator*=(const unsigned int times);

private:
	static const unsigned int SecsOfOneMin = 60;
	static const unsigned int MsecsOfOneSec = 1000;
	static const unsigned int MsecsOfOneMin = SecsOfOneMin * MsecsOfOneSec;
	static const std::map<unsigned int, std::string> timeStrings;

	unsigned int code;
	unsigned int msec;
};

const std::map<unsigned int, std::string> ResultTime::timeStrings =
{
	std::make_pair(DSQ, "DSQ"),
	std::make_pair(DNS, "DNS"),
	std::make_pair(MR, "MR")
};