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
	computer_one.RAM = 4 GB DDr 4;
	computer_one.proc_speed = 2.6 GHz;

	Computer computer_two;
	computer_two.name = "1080p-Video-Renderer 9001";
	computer_two.RAM = 8 GB Ddr 4;
	computer_two.proc_speed = 3 GHz;
	
	computer_one.output_information();
	computer_two.output_information();

	return 0;
}
