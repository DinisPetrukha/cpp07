#include "Array.hpp"

int main() {
	try {
		// 1. Testar criação de array vazio
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		// 2. Testar criação de array com 5 elementos
		Array<int> numbers(5);
		std::cout << "Numbers array size: " << numbers.size() << std::endl;

		// 3. Atribuir valores
		for (unsigned int i = 0; i < numbers.size(); i++)
			numbers[i] = (i + 1) * 10; // 10, 20, 30, 40, 50

		// 4. Mostrar valores
		std::cout << "Numbers array contents: ";
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << " ";
		std::cout << std::endl;

		// 5. Testar cópia (copy constructor)
		Array<int> copyNumbers(numbers);
		std::cout << "Copied array contents: ";
		for (unsigned int i = 0; i < copyNumbers.size(); i++)
			std::cout << copyNumbers[i] << " ";
		std::cout << std::endl;

		// 6. Alterar o original e garantir que a cópia não muda
		numbers[0] = 999;
		std::cout << "After modification:" << std::endl;
		std::cout << "Original array first element: " << numbers[0] << std::endl;
		std::cout << "Copied array first element: " << copyNumbers[0] << std::endl;

		// 7. Testar operador de atribuição
		Array<std::string> words(3);
		words[0] = "Hello";
		words[1] = "World";
		words[2] = "!";
		Array<std::string> otherWords;
		otherWords = words;

		std::cout << "Words array contents: ";
		for (unsigned int i = 0; i < otherWords.size(); i++)
			std::cout << otherWords[i] << " ";
		std::cout << std::endl;

		// 8. Testar exceção ao aceder índice inválido
		std::cout << "Trying to access invalid index..." << std::endl;
		std::cout << numbers[100] << std::endl; // deve lançar exceção
	}
	catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}
