#include <iostream>
#include <string>
#include <cctype>

template <typename T1, typename T2, typename T3>
class Geek {
	public:
		T1 x;
		T2 y;
		T3 z;

	// Constructor initialization
	Geek(T1 var1, T2 var2, T3 var3):
		x(var1), y(var2), z(var3) {}

	// Method to get values
	void	getValues() {
		std::cout << x << " " << y << " " << z;
	}
};

int	main() {
	Geek<int, double, std::string> intDoubleStringGeek(10, 3.14, "Hello");
	Geek<char, float, bool> charFloatBoolGeek('A', 5.67f, true);

	intDoubleStringGeek.getValues();
	std::cout << std::endl;
	charFloatBoolGeek.getValues();
	return (0);
}