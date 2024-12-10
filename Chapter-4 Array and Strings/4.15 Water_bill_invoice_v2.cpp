/******************************************************************************
            Water Bill Invoice Program Version 1
Write a program that read monthly water consumption and print the invoice. 
The program should maintain the customer billing code and initial reading.
The invoice rate is 3.15 ETB per M3 reading. 
The program also allow the user to see its billing history by entering. 

Note:
- In this program two multi-dimensional arrays are used.
- The first 2D array named 'water_bill' which is 5x5 will used to store the following information for five 5-customers
       #1 billing code - 1st row
       #2 MIN - 2nd row
       #3 MAX - 3rd row
       #4 Total water consumption - 4th row
       #5 total bill amount
                                                         
- The second 3D array is used to maintain monthly water consumption and corresponding invoice for 5-customers, for 12-months.
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main()
{
    float water_bill[5][5]= {{11}, {22},{33},{44},{55}}; //initializing the 1st cells of each row of the 2D array
    float monthly_bill [5][12][2] = {0};  // 3D array - 5-customers, for 12-months to maintain current reading and bill amount
    int menu, code, month; // used hold the user menu choice, bill code and month entered from user
    
    while (true) {
        system("clear");   // this function used to clear previous output on screen.
        cout<<"***** MENU*******"<<endl;
        cout<<"Press 1 to INPUT record.\n";
        cout<<"Press 2 to See history.\n";
        cout<<"Press 0 to terminate. \n";
        cin>>menu;
        
        switch (menu) {
            case 1:
                cout<<"Enter billing code: ";
                cin>>code;
                
                for (int i = 0; i<5; i++) {
                    if (code == water_bill[i][0]) {
                     cout<<"Enter month [1-12]: ";
                     cin>>month;
                     if (month < 1 || month > 12) {
                         cout<<"\nThe month should be between 1 and 12!"<<endl;
                         cout<<"Wait a moment . . . "<<endl;
                         sleep(2);
                         break;
                     }
                     int cm = month - 1; //cm - used to locate the current month index  
                     
                     float c_reading; // hold current water meter reading 
                     cout<<"Enter current month reading: ";
                     cin>>c_reading;
                     
                     // check if the current reading is greater than the total meter reading which is the total of all previous month
                     if (c_reading < water_bill[i][3]) {
                        cout<<"\nThe current reading must be greater than the previous reading."<<endl;
                        cout<<"Wait a moment . . . "<<endl;
                        sleep(2);
                        break;
                     }
                     c_reading -= water_bill[i][3];  // the actual water consumption of this month
                     monthly_bill[i][cm][1] = c_reading * 3.15; // find current month invoice
                     
                     
                     if (water_bill[i][1] == 0 || water_bill[i][1] < c_reading) // find the MIN
                        water_bill[i][1] = c_reading;
                    
                     if (water_bill[i][2] == 0 || water_bill[i][1] > c_reading)
                        water_bill[i][2] = c_reading;
                    
                     monthly_bill[i][cm][0] = c_reading;
                     water_bill[i][3] += c_reading;    // compute total consumption
                     water_bill[i][4] += monthly_bill[i][cm][1]; // compute total invoice
                    
                     cout<<"This month consumption is "<<c_reading<<" and the invoice is "<<monthly_bill[i][cm][1]<<endl;
                     cout<<"\nWait for a moment . . ."<<endl;
                     sleep(2);
                     break;
                    }
                    else if (i+1 == 5 ) {
                        cout<<"\nThe billing code doesn't exist. \nWait for 3 seconds"<<endl;
                        sleep(2); // make the output paused for 3 second
                    }
                }
                break;
            case 2:
                    cout<<"\nPlease enter your billing code: ";
                    cin>>code;
                    for (int i = 0; i<5; i++) {
                        if (code == water_bill[i][0]) {
                            cout<<"\nYour Billing History\n";
                            cout<<"Water bill code: "<<water_bill[i][0]<<endl;
                            cout<<"Total bill paid: "<<water_bill[i][4]<<endl;
                            cout<<"Total water consumption: "<<water_bill[i][3]<<endl;
                            cout<<"Min water consumption: "<<water_bill[i][1]<<endl;
                            cout<<"Max water consumption: "<<water_bill[i][2]<<endl;
                            cout<<"******************************"<<endl;
                            cout<<"    Monthly Details\n "<<endl;
                            cout<<"  Month \t Consumption in M3 \t Invoice"<<endl;
                            cout<<"---------------------------------------------------"<<endl;
                            for (int j=0; j<12; j++) {
                                cout<<setw(5)<<j+1<<setw(20)<<monthly_bill[i][j][0]<<setw(20)<<monthly_bill[i][j][1]<<endl;
                            }
                            sleep(4);
                            break;  
                        }
                        else if (i+1 == 5 ) {
                        cout<<"The billing code doesn't exist. Wait for 3 seconds"<<endl;
                        sleep(2); // make the output paused for 3 second
                    }
                    }
                break;
            case 0:
                cout<<"\nThe program is terminated! Bye..."<<endl;
                return 0;
        }
    }
    return 0;
}
