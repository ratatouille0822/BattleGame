#include <iostream>
#include "CSVFileManager.h"

using namespace std;

void test01()
{
	CSVFileManager csv_file_manager;
	string file_path = "./Heros.csv";
	
	csv_file_manager.ReadCSVFiles(file_path);
}

int main()
{
	test01();
    std::cout << "Hello World!\n"; 
}

