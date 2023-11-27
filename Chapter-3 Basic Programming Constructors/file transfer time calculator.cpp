#include <iostream>
#include <cmath> // For ceil function
using namespace std;

int main() {
  
    int transmissionRate = 960; // the transmission rate in characters per second
    int fileSize; 
  
    //Input file size  
    cout<<"Enter the file size to be transferred: ";
    cin>>fileSize;

    // Calculate time to send the file (in seconds)
    double timeInSeconds = static_cast<double>(fileSize) / transmissionRate; 

    // Convert time to minutes and hours
    int timeInMinutes = static_cast<int>(ceil(timeInSeconds / 60));
    int timeInHours = static_cast<int>(ceil(timeInMinutes / 60));

    // Display the results
    cout << "File Size: " << fileSize << " bytes" << endl;
    cout << "Transmission Rate: " << transmissionRate << " characters/second" << endl;
    cout << "Time to send the file:" << endl;
    cout << "Seconds: " << timeInSeconds << " seconds" << endl;
    cout << "Minutes: " << timeInMinutes << " minutes" << endl;
    cout << "Hours: " << timeInHours << " hours" << endl;

    return 0;
}
