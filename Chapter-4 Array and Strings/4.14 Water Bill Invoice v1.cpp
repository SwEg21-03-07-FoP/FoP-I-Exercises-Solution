/******************************************************************************
            Water Bill Invoice Program Version 1
Write a program that reads monthly water consumption and prints the invoice. 
The program should maintain the customer billing code and initial reading.
The invoice rate is 3.15 ETB per M3 reading. 
The program also allows the user to see its billing history by entering. 

*******************************************************************************/
#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    float water_bill[5][4]= {{11, 0}, 
                             {22, 0}, 
                             {33, 0},
                             {44, 0},
                             {55, 0} }; // this initialize the 1st two cells of each row
   
    int menu, code; // used hold the user menu choice and bill code entered from user
    while (true) {
        system("clear");   // this function used to clear previous output on screen
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
                     cout<<"Enter current reading: ";
                     cin>>water_bill[i][2];
                     
                     //Check if the current reading is greater than the previous month
                     if (water_bill[i][2] < water_bill[i][1]) {
                        cout<<"The current reading must be greater than pthe revious month"<<endl;
                        sleep(2);
                        break;
                     }
                     water_bill[i][3] = (water_bill[i][2] - water_bill[i][1])* 3.15;
                     water_bill[i][1] = water_bill[i][2];
                     cout<<"This month invoice is "<<water_bill[i][3]<<endl;
                     sleep(2);
                     break;
                    }
                    else if (i+1 == 5 ) {
                        cout<<"The billing code doesn't exist. Wait for 3 seconds"<<endl;
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
                            cout<<"Water consumption: "<<water_bill[i][2]<<endl;
                            cout<<"Total bill paid: "<<water_bill[i][3]<<endl;
                            sleep(3);
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
