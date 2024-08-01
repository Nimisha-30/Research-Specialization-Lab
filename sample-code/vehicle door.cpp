#include <iostream>

using namespace std;

// Define the states of the door
enum DoorState {
  CLOSED,
  OPENING,
  OPEN,
  CLOSING
};

// Define the door object
class Door {
public:
  DoorState state;
  int position;

  // Constructor
  Door() {
    state = CLOSED;
    position = 0;
    cout<<"Door created"<<endl;
  }

  // Methods to change the state of the door
  void open() {
    state = OPENING;
    position = 100;
    cout<<"Door openened"<<endl;
  }

  void close() {
    state = CLOSING;
    position = 0;
    cout<<"Door closed"<<endl;
  }

  // Method to update the position of the door
  void updatePosition() {
    if (state == OPENING) {
      position += 1;
      cout<<"Updated position: open"<<endl;
    } else if (state == CLOSING) {
      position -= 1;
      cout<<"Updated position: closed"<<endl;
    }
  }
};

// Main function
int main() {
  // Create a door object
  Door door;

  // Open the door
  door.open();

  // Update the position of the door
  door.updatePosition();

  // Close the door
  door.close();

  // Update the position of the door
  door.updatePosition();

  return 0;
}