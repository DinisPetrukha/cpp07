#include "Array.hpp"

// int main() {
// 	try {
// 		// 1. Testar criação de array vazio
// 		Array<int> emptyArray;
// 		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

// 		// 2. Testar criação de array com 5 elementos
// 		Array<int> numbers(5);
// 		std::cout << "Numbers array size: " << numbers.size() << std::endl;

// 		// 3. Atribuir valores
// 		for (unsigned int i = 0; i < numbers.size(); i++)
// 			numbers[i] = (i + 1) * 10; // 10, 20, 30, 40, 50

// 		// 4. Mostrar valores
// 		std::cout << "Numbers array contents: ";
// 		for (unsigned int i = 0; i < numbers.size(); i++)
// 			std::cout << numbers[i] << " ";
// 		std::cout << std::endl;

// 		// 5. Testar cópia (copy constructor)
// 		Array<int> copyNumbers(numbers);
// 		std::cout << "Copied array contents: ";
// 		for (unsigned int i = 0; i < copyNumbers.size(); i++)
// 			std::cout << copyNumbers[i] << " ";
// 		std::cout << std::endl;

// 		// 6. Alterar o original e garantir que a cópia não muda
// 		numbers[0] = 999;
// 		std::cout << "After modification:" << std::endl;
// 		std::cout << "Original array first element: " << numbers[0] << std::endl;
// 		std::cout << "Copied array first element: " << copyNumbers[0] << std::endl;

// 		// 7. Testar operador de atribuição
// 		Array<std::string> words(3);
// 		words[0] = "Hello";
// 		words[1] = "World";
// 		words[2] = "!";
// 		Array<std::string> otherWords;
// 		otherWords = words;

// 		std::cout << "Words array contents: ";
// 		for (unsigned int i = 0; i < otherWords.size(); i++)
// 			std::cout << otherWords[i] << " ";
// 		std::cout << std::endl;

// 		// 8. Testar exceção ao aceder índice inválido
// 		std::cout << "Trying to access invalid index..." << std::endl;
// 		std::cout << numbers[100] << std::endl; // deve lançar exceção
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << "Caught exception: " << e.what() << std::endl;
// 	}

// 	return 0;
// }

int main() {
    try {

        try {
            Array<int> emptyArray(0);
            std::cout << "emptyArray[" << 0 << "] = " << emptyArray[0] << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << "Caught exception: " << e.what() << std::endl;
        }

        Array<int> intArray(5);
        std::cout << "intArray (size 5) initialized with default values:" << std::endl;
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        Array<double> doubleArray(3);
        std::cout << "\ndoubleArray (size 3) initialized with default values:" << std::endl;
        for (unsigned int i = 0; i < doubleArray.size(); ++i) {
            std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
        }

        Array<std::string> sArray(3);
        std::cout << "\nsArray (size 3) initialized with default values:" << std::endl;
        for (unsigned int i = 0; i < sArray.size(); ++i) {
            std::cout << "sArray[" << i << "] = " << sArray[i] << std::endl;
        }

        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }

        std::cout << "\nintArray after assignment:" << std::endl;
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        Array<int> copyIntArray = intArray;
        std::cout << "\ncopyIntArray (created by copy constructor):" << std::endl;
        for (unsigned int i = 0; i < copyIntArray.size(); ++i) {
            std::cout << "copyIntArray[" << i << "] = " << copyIntArray[i] << std::endl;
        }

        intArray[0] = 100;
        std::cout << "\nintArray after modification:" << std::endl;
        std::cout << "intArray[0] = " << intArray[0] << std::endl;
        std::cout << "copyIntArray[0] = " << copyIntArray[0] << std::endl;

        Array<int> assignedArray(1);
        assignedArray = intArray;
        std::cout << "\nassignedArray (created by assignment operator):" << std::endl;
        for (unsigned int i = 0; i < assignedArray.size(); ++i) {
            std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
        }

        intArray[1] = 200;
        std::cout << "\nintArray after assignment modification:" << std::endl;
        std::cout << "intArray[1] = " << intArray[1] << std::endl;
        std::cout << "assignedArray[1] = " << assignedArray[1] << std::endl;

        std::cout << "\nTrying to access an out-of-bounds element:" << std::endl;
        try {
            for (unsigned int i = 0; i < 100; ++i) {
                std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
            }
        } catch (const std::out_of_range& e) {
            std::cerr << "Caught exception: " << e.what() << std::endl;
        }

        Array<std::string> stringArray(3);
        stringArray[0] = "hello";
        stringArray[1] = "world";
        stringArray[2] = "!";
        std::cout << "\nstringArray (size 3):" << std::endl;
        for (unsigned int i = 0; i < stringArray.size(); ++i) {
            std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}