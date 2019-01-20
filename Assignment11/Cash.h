#pragma once
class Cash
{
public:
	Cash() = default;
	Cash(int dollars, int cents);
	Cash(const Cash& other);
	Cash& operator=(const Cash& other);

	Cash& operator++();
	Cash& operator--();
	Cash& operator++(int);
	Cash& operator--(int);

	Cash operator+(const Cash& other) const;
	Cash operator-(const Cash& other) const;
	Cash operator*(int multiple) const;

	Cash& operator+=(Cash& other);
	Cash& operator-=(Cash& other);
	Cash& operator*=(int multiple);

	bool operator>(const Cash& other) const;
	bool operator>=(const Cash& other) const;
	bool operator<(const Cash& other) const;
	bool operator<=(const Cash& other) const;
	bool operator==(const Cash& other) const;
	bool operator!=(const Cash& other) const;

	friend Cash operator*(int multiple, const Cash& cash);

	void ShowMeTheMoney() const;

protected:
	int GetInCents() const;

private:
	const int CENTS_PER_DOLLAR = 100;
	int mDollars;
	int mCents;
};

Cash operator*(int multiple, const Cash& cash);

