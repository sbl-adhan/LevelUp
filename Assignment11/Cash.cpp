#include "Cash.h"
#include <iostream>
#include <iomanip>

Cash::Cash(int dollars, int cents)
	: mDollars(dollars + cents / CENTS_PER_DOLLAR),
	mCents(cents % CENTS_PER_DOLLAR)
{
}

Cash::Cash(const Cash & other)
	: mDollars(other.mDollars),
	mCents(other.mCents)
{
}

Cash & Cash::operator=(const Cash & other)
{
	if (this != &other) {
		mDollars = other.mDollars;
		mCents = other.mCents;
	}
	return *this;
}

Cash & Cash::operator++()
{
	mDollars++;
	return *this;
}

Cash & Cash::operator--()
{
	mDollars--;
	return *this;
}

Cash & Cash::operator++(int)
{
	mCents++;
	return *this;
}

Cash & Cash::operator--(int)
{
	mCents--;
	return *this;
}

Cash Cash::operator+(const Cash & other) const
{
	return Cash(mDollars + other.mDollars, mCents + other.mCents);
}

Cash Cash::operator-(const Cash & other) const
{
	int cents = GetInCents() - other.GetInCents();
	return Cash(0, cents);
}

Cash Cash::operator*(int multiple) const
{
	return Cash(0, GetInCents() * multiple);
}

Cash & Cash::operator+=(Cash & other)
{
	int cents = mCents + other.mCents;
	mDollars += other.mDollars + cents / CENTS_PER_DOLLAR;
	mCents = cents % CENTS_PER_DOLLAR;
	return *this;
}

Cash & Cash::operator-=(Cash & other)
{
	int cents = GetInCents() - other.GetInCents();
	mDollars = cents / CENTS_PER_DOLLAR;
	mCents = cents % CENTS_PER_DOLLAR;
	return *this;
}

Cash & Cash::operator*=(int multiple)
{
	int cents = GetInCents() * multiple;
	mDollars = cents / CENTS_PER_DOLLAR;
	mCents = cents % CENTS_PER_DOLLAR;
	return *this;
}

bool Cash::operator>(const Cash & other) const
{
	return GetInCents() > other.GetInCents();
}

bool Cash::operator>=(const Cash & other) const
{
	return GetInCents() >= other.GetInCents();
}

bool Cash::operator<(const Cash & other) const
{
	return GetInCents() < other.GetInCents();
}

bool Cash::operator<=(const Cash & other) const
{
	return GetInCents() <= other.GetInCents();
}

bool Cash::operator==(const Cash & other) const
{
	return GetInCents() == other.GetInCents();
}

bool Cash::operator!=(const Cash & other) const
{
	return GetInCents() != other.GetInCents();
}

void Cash::ShowMeTheMoney() const
{
	std::cout << "$" << mDollars << "." << std::setfill('0') << std::setw(2) << mCents << std::endl;
}

int Cash::GetInCents() const
{
	return mDollars * CENTS_PER_DOLLAR + mCents;
}

Cash operator*(int multiple, const Cash & cash)
{
	return Cash(0, cash.GetInCents() * multiple);
}
