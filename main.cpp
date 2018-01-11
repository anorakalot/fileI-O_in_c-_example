#include <iostream>
#include <string>
//fstream is library for reading and writing files
#include <fstream>
#include <vector>

/*writing to file
std::ofstream myfile;
myfile.open("something.txt");
myfile << something
myfile.close()
*/

/*
reading a file
std::ifstream myotherfile("something.txt")
if (myotherfile.is_open())
int c;
{
	//myotherfile >> c goes on until whole file is read
	while(myotherfile >> c)
	{
	std::cout << c << std::endl;
}
myotherfile.close();
}
*/

//ZOMBIE INVENTORY CHECKER
int main(){
/*
	//WRITING TO A FILE : INTS
	std::cout  << "Ints"<< std::endl;
	std::ofstream myfile;
	myfile.open("ints.txt");


	std::vector<int> myvect_1;

	for (int x = 0; x < 11; ++x){
		myvect_1.push_back(x);
	}
	for (int x = 0; x < myvect_1.size(); ++x){
		myfile << myvect_1.at(x);
		myfile << " ";
	}
	myfile.close();


	//READING A FILE : INTS
	std::ifstream myotherfile ("ints.txt");
	int c;
	std::vector<int> myvect_2;
  	if (myotherfile.is_open())
  		{

    		while (myotherfile >> c)
    			{
						myvect_2.push_back(c);
						std::cout << c<<std::endl;
    			}

    	myotherfile.close();
  	}
*/

		//WRITING A FILE: STRING
		std::cout << "Strings" << std::endl;
		std::vector<std::string> str_vect(2);

		str_vect.at(0) = "I like apples.";
		str_vect.at(1) = "Just kidding I despise apples";
		std::ofstream str_file;
		str_file.open("strings.txt");
		/*
		std::cout << str_vect.at(0) << std::endl<<std::endl;
		std::cout << str_vect.at(1) << std::endl<<std::endl;
		*/
		for(int x = 0; x < str_vect.size(); ++x){
			str_file << str_vect.at(x);//<< "\n";
			str_file << "   ";
		}
		str_file.close();

		//READING A FILE: STRING
		std::string line;
		//std::vector<std::string> line;
		std::vector<std::string> str_vect_2;
		std::ifstream str_file_2("strings.txt");
		if (str_file_2.is_open()){
			while (str_file_2 >> line)
			{
				str_vect_2.push_back(line);
			}
			str_file_2.close();
		}

		for(int x = 0; x < str_vect_2.size(); ++x){
			std::cout << str_vect_2.at(x)<<std::endl;
		}
//end of the program
return 0;
}
