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
	string name;
	int RAM;
	double proc_speed;
};

int main()
{
	Computer computer_one;
	computer_one.name = "Work-a-tron 5000";
	computer_one.RAM = 4;
	computer_one.proc_speed = 2.6;

	Computer computer_two;
	computer_two.name = "1080p-Video-Renderer 9001";
	computer_two.RAM = 8;
	computer_two.proc_speed = 3;
