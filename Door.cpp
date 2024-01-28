#include <iostream>
using namespace std;

class Door {
private:	
	bool isOpen;
	bool isLocked;
public:
	Door();
	void openDoor();
	void closeDoor();
	void lockDoor();
	void unlock();
	bool isDoorOpen() const;
	bool isDoorLocked() const;
};

Door::closeDoor()
{
	cout << "Door is close";
}

int main() {
	return 0;
}