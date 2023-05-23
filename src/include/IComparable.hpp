#pragma once

class IComparable
{
    public:
        virtual bool operator<(const IComparable& rhs) const = 0;
        virtual bool operator>(const IComparable& rhs) const = 0;
};