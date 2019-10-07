#include <iostream>
#include<string>

using namespace std;

bool shutdownCondition = false;
string e;

int initialise() {
	return 0;
}

void input() {

}

void update() {

	//makes it so when you input "e" you exit the program
	cin >> e;
	if (e == "e") {
		shutdownCondition = true;
	}
}

void render() {

}

int shutdown() {
	return 0;
}


int main()
{
	initialise();

	while (!shutdownCondition) {
		input();
		update();
		render();
	}

	return(shutdown());

}