#include <iostream> // Required for std::cout and std::cin

// Calculate the height of the ball given the towers height, after x seconds, and return value to caller.
double calculateBallHeight(double towerHeight, short seconds)
{
    double ballHeight{towerHeight - (9.8 * (seconds * seconds)) / 2};
    return ballHeight;
}

// Print the current height of the ball if above the ground, or print ball is on ground if ball's height not above 0.
void printBallHeight(double towerHeight, short seconds)
{
    // Calculate the ball's height and store to ballHeight
    double ballHeight{calculateBallHeight(towerHeight, seconds)};
    
    if (ballHeight > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Multiple function calls to printBallHeight() with seconds ranging from 0 through 5 (for loop not introduced yet).
void functionCalls(double towerHeight)
{
    printBallHeight(towerHeight, 0);
    printBallHeight(towerHeight, 1);
    printBallHeight(towerHeight, 2);
    printBallHeight(towerHeight, 3);
    printBallHeight(towerHeight, 4);
    printBallHeight(towerHeight, 5);
}

// Get the height of the tower from the user and return to caller.
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

int main()
{
    // Get tower height, and pass along to functionCalls().
    functionCalls(getTowerHeight());
}