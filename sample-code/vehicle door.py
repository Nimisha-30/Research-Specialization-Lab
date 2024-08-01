from enum import Enum

# Define the states of the door


class DoorState(Enum):
    CLOSED = 0
    OPENING = 1
    OPEN = 2
    CLOSING = 3

# Define the door object


class Door:
    def __init__(self):
        self.state = DoorState.CLOSED
        self.position = 0
        print("Door created")

    # Methods to change the state of the door
    def open(self):
        self.state = DoorState.OPENING
        self.position = 100
        print("Door openened")

    def close(self):
        self.state = DoorState.CLOSING
        self.position = 0
        print("Door closed")

    # Method to update the position of the door
    def update_position(self):
        if self.state == DoorState.OPENING:
            self.position += 1
            print("Updated position: open")
        elif self.state == DoorState.CLOSING:
            self.position -= 1
            print("Updated position: closed")

# Main function


def main():
    # Create a door object
    door = Door()

    # Open the door
    door.open()

    # Update the position of the door
    door.update_position()

    # Close the door
    door.close()

    # Update the position of the door
    door.update_position()


if __name__ == "__main__":
    main()
