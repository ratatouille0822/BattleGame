#include "CSVFileManager.h"

CSVFileManager::CSVFileManager()
{
}


CSVFileManager::~CSVFileManager()
{
}

void CSVFileManager::ReadCSVFiles(string file_path)
{
	string table_titles;
	ifstream i_file_stream;
	i_file_stream.open(file_path, ios::in);
	
	i_file_stream >> table_titles;

	cout << table_titles << endl;
}
