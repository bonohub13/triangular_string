#include <iostream>
#include <string>
#include <vector>

class TriangularEcho
{
public:
	explicit TriangularEcho(int &argc, char **&argv);
private:
	std::vector<std::string> str_buffer;
public:
	void run();
};
TriangularEcho::TriangularEcho(int &argc, char **&argv)
{
	std::string full_buffer = "";
	std::string short_buffer = "";

	for (int i=1; i<argc; i++)
		full_buffer = (full_buffer == "") ? std::string(argv[i]) : full_buffer + " " + std::string(argv[i]);

	for (auto &c : full_buffer)
	{
		short_buffer = c + short_buffer;
		short_buffer;
		str_buffer.push_back(short_buffer);
	}
}
void TriangularEcho::run()
{
	for (auto &property : str_buffer)
		std::cout << property << std::endl;
}

int main(int argc, char **argv)
{
	TriangularEcho tri_echo(argc, argv);
	tri_echo.run();
}
