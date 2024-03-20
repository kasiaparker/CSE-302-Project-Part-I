// Define a constant for the maximum size of the AUList to prevent exceeding array bounds.
#define MAXSIZE 200

// Define a struct for holding data about an individual iris flower.
struct IrisRecord {
    double sepalLength; // Length of the sepal in centimeters.
    double sepalWidth;  // Width of the sepal in centimeters.
    double petalLength; // Length of the petal in centimeters.
    double petalWidth;  // Width of the petal in centimeters.
    string species;     // The species name of the iris flower.
};

// Declare a class for managing a list of IrisRecord objects.
class AUList {
public:
    AUList(); // Constructor initializes a new instance of the list.
    void MakeEmpty(); // Resets the list to be empty by setting its length to zero.
    bool IsFull() const; // Checks if the list has reached its maximum capacity.
    int GetLength() const; // Returns the current number of items in the list.
    void PutItem(IrisRecord item); // Adds a new IrisRecord to the list.
    void ResetList(); // Prepares the list for sequential access with GetNextItem.
    bool HasNextItem(); // Checks if there are more items to access sequentially.
    IrisRecord GetNextItem(); // Returns the next item in the sequence.
    void PrintList(); // Prints all items in the list to standard output.

private:
    int length; // The current number of items in the list.
    IrisRecord ListItems[MAXSIZE]; // Array to store the list items.
    int currentPos; // The current position for sequential access.
};
