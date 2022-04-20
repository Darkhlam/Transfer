#pragma once
#include <string>

class Transfer
{
private:
    long long decimalNumber;

public:
    Transfer();

    Transfer(long long decimalNumber);

    const long long getDecimalNumber() const;

    void setDecimalNumber(long long decimalNumber);

    const std::string transferDecimalNumber(int base) const;
};

