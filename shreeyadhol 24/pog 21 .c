#include <time.h>


int main() {
    // Get the current time
    time_t currentTime;
    time(&currentTime);

    // Convert the current time to a string representation
    char* timeString = ctime(&currentTime);

     //Display the current date and time
   // std::cout << "Current Date & Time: " << timeString;

    return 0;
}

