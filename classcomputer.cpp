#include <iostream>
#include <string>

using namespace std;

class Computer {
	public:
			void output_information()
	{
		cout << "Name: "<< name;
		cout << "\nRAM: "<< RAM;
		cout << "\nProcessor Speed: "<< proc_speed;
		cout << "\n";
	}
};
