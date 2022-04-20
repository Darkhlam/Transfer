#include "Transfer.h"


Transfer::Transfer()
{
	decimalNumber = 0;
}

Transfer::Transfer(long long decimalNumber)
{
	this->decimalNumber = decimalNumber;
}

const long long Transfer::getDecimalNumber() const
{
	return decimalNumber;
}

void Transfer::setDecimalNumber(long long decimalNumber)
{
	this->decimalNumber = decimalNumber;
}

const std::string Transfer::transferDecimalNumber(const int base) const
{
	std::string hexNumber = "";
	long long dnum = decimalNumber;
	do
	{
		int buff = dnum % base;
		if (buff > 9)
		{
			buff += (int)'A' - 10;
		}
		else
		{
			buff += (int)'0';
		}
		hexNumber = (char)buff + hexNumber;
		dnum /= base;
	} while (dnum);
	return hexNumber;
}