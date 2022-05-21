// C++ Tutorial - Loops and Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    // count up from 1 to 10 and sum the numbers together
    int sum = 0;

    // for loop
    // Loop initialisation (run once): int number = 1
    // Loop condition (run every time and must be true to run): number <= 10
    // Loop update (run after every time the block of code is run: ++number
    // Loop block is
    // {
    //  sum += number;
    // }
    for (int number = 1; number <= 10; ++number)
    {
        // check if the number is even and if it is then continue (ie. skip to the end of the loop)
        if ((number % 2) == 0)
            continue;

        // check if the sum is above 10 and if it is exit the loop
        if (sum > 10)
            break;

        sum += number;
    }

    std::cout << "The sum is " << sum << std::endl;

    // while loop
    // loop condition is value < 10
    // loop body is
	//{
	//	value += 1;
	//}
    int value = 0;
    while (value < 10)
    {
		value += 1;

		// check if value is even and if it is then continue (ie. skip to the end of the loop)
		if ((value % 2) == 0)
			continue;

        std::cout << value << std::endl;
    }

    // create a vector of numbers
    std::vector<int> vectorOfNumbers;
    vectorOfNumbers.push_back(2);
    vectorOfNumbers.push_back(4);
	vectorOfNumbers.push_back(6);
	vectorOfNumbers.push_back(0);
	vectorOfNumbers.push_back(1);

    // loop through the vector using a simple for loop
    for (size_t numberIndex = 0; numberIndex < vectorOfNumbers.size(); ++numberIndex)
    {
        std::cout << vectorOfNumbers[numberIndex];
    }
    std::cout << std::endl;

    // this will clear out the vector
    // vectorOfNumbers.clear();

    // insert the value 9 at 1 after the beginning of the vector
    // vectorOfNumbers.insert(vectorOfNumbers.begin() + 1, 9);

    // remove the last value in the vector
    // vectorOfNumbers.pop_back();

    // loop through the vector using a ranged for loop
    for (int value : vectorOfNumbers)
    {
        std::cout << value;
    }
    std::cout << std::endl;

    // loop through the vector using iterators
//	for (std::vector<int>::iterator numberIt = vectorOfNumbers.begin(); numberIt != vectorOfNumbers.end(); ++numberIt)
	for (auto numberIt = vectorOfNumbers.begin(); numberIt != vectorOfNumbers.end(); ++numberIt)
    {
        std::cout << *numberIt;
    }
    std::cout << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
