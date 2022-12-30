#include <iostream>
using namespace std;

int main()
{
	int x;
	std::cout << "Gitmek Istediginiz Siteyi Seciniz(1->Youtube/2->Udemy):";
	std::cin >> x;
	if (x == 1) {
		system("start https://www.youtube.com/");
	}
	else if(x == 2) {
		system("start https://www.udemy.com/");
	}
else {
	std::cout << "Yanlis Numara Girdiniz!";
}
}