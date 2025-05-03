#include <iostream>
#include <string>
#include <cctype>
#include "iter.hpp"

// ===== Funções para uso com iter() =====

template <typename T>
void printElement(T const& element) {
	std::cout << element << " ";
}

template <typename T>
void doubleValue(T& element) {
	element *= 2;
}

void toUpperCase(char& c) {
	c = static_cast<char>(std::toupper(c));
}

void addExclamation(std::string& str) {
	str += "!";
}

// ===== MAIN DE TESTES =====

int main() {
	// Teste com inteiros
	int arr[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Inteiros (antes): ";
	iter(arr, length, printElement<int>);
	std::cout << "\nInteiros (dobrado): ";
	iter(arr, length, doubleValue<int>);
	iter(arr, length, printElement<int>);
	std::cout << "\n\n";

	// Teste com floats
	float fArr[] = {1.5f, 2.5f, 3.5f};
	size_t fLen = sizeof(fArr) / sizeof(fArr[0]);

	std::cout << "Floats (antes): ";
	iter(fArr, fLen, printElement<float>);
	std::cout << "\nFloats (dobrado): ";
	iter(fArr, fLen, doubleValue<float>);
	iter(fArr, fLen, printElement<float>);
	std::cout << "\n\n";

	// Teste com doubles
	double dArr[] = {0.1, 0.2, 0.3, 0.4};
	size_t dLen = sizeof(dArr) / sizeof(dArr[0]);

	std::cout << "Doubles (antes): ";
	iter(dArr, dLen, printElement<double>);
	std::cout << "\nDoubles (dobrado): ";
	iter(dArr, dLen, doubleValue<double>);
	iter(dArr, dLen, printElement<double>);
	std::cout << "\n\n";

	// Teste com caracteres
	char cArr[] = {'a', 'b', 'c', 'd'};
	size_t cLen = sizeof(cArr) / sizeof(cArr[0]);

	std::cout << "Chars (antes): ";
	iter(cArr, cLen, printElement<char>);
	std::cout << "\nChars (upper): ";
	iter(cArr, cLen, toUpperCase);
	iter(cArr, cLen, printElement<char>);
	std::cout << "\n\n";

	// Teste com strings
	std::string sArr[] = {"Olá", "Iter", "C++"};
	size_t sLen = sizeof(sArr) / sizeof(sArr[0]);

	std::cout << "Strings (antes): ";
	iter(sArr, sLen, printElement<std::string>);
	std::cout << "\nStrings (com '!'): ";
	iter(sArr, sLen, addExclamation);
	iter(sArr, sLen, printElement<std::string>);
	std::cout << "\n\n";

	// Teste com bool (só print, pois alterar bools seria pouco visível)
	bool bArr[] = {true, false, true};
	size_t bLen = sizeof(bArr) / sizeof(bArr[0]);

	std::cout << "Booleans: ";
	iter(bArr, bLen, printElement<bool>);
	std::cout << "\n";

	return 0;
}
