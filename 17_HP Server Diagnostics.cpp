/* HP Server Diagnostics : Question 3 : Assignment 2
   Written by Abdullah Khan : DS-N : 20I-0894         */
   
#include <iostream>
using namespace std;

int main()
{
    char new_server_check, configuration_change, condition_check;
    bool exit_flag = false;
    cout << "Starting General Diagnosis Program.\n";
    cout << "Recording symptoms information. -DONE\n";
    cout << "Rebooting server to see if condition still exists. -DONE\n";
    cout << "Is this a newly installed server? Press y or n: ";
    cin >> new_server_check;
    if (new_server_check == 'y')
    {
        cout << "Please reseat any components that may have come loose during shipping. -DONE\n";
        cout << "Does condition still exist? Press y or n: ";
        cin >> condition_check;
    }
    if (condition_check == 'n')
        exit_flag = true;
    if ((condition_check == 'y' || new_server_check == 'n') && exit_flag == false)
    {
        cout << "Were options added or was the configuration changed recently? Press y or n: ";
        cin >> configuration_change;
        if (configuration_change == 'y' && exit_flag == false)
        {
            cout << "Isolate what has changed. Verify it was installed correctly. Restore the server to last known working state or original shipped configuration. -DONE\n";
            cout << "Does condition still exist? Press y or n: ";
            cin >> condition_check;
        }
        else
        {
            cout << "Check for service notifications. -DONE\n";
            cout << "Download the latest software and firmware from the HP website. -DONE\n";
            cout << "Does condition still exist? Press y or n: ";
            cin >> condition_check;
        }
        if (condition_check == 'n')
            exit_flag = true;
        else
        {
            cout << "Isolate and minimize the memory configuration. -DONE\n";
            cout << "Does condition still exist? Press y or n: ";
            cin >> condition_check;
            if (condition_check == 'n')
            exit_flag = true;
            else
            {
                cout << "Break server down to minimal configuration. -DONE\n";
                cout << "Does condition still exist? Press y or n: ";
                cin >> condition_check;
                if (condition_check == 'y')
                {
                    cout << "Troubleshoot or replace basic server spare parts. -DONE\n";
                    cout << "Does condition still exist? Press y or n: ";
                    cin >> condition_check;
                    if (condition_check == 'n')
                    {
                        cout << "Record symptom & error information on repair tag if sending back a failed part.\n";
                        exit_flag == true;
                    }
                    else
                        cout << "Ensure the following information is\navailable:\nSurvey configuration snapshots\nOS event log file\nFull crash dump\nCall HP Service Provider\n";
                }        
                else        
                    cout << "Ensure the following information is\navailable:\nSurvey configuration snapshots\nOS event log file\nFull crash dump\nCall HP Service Provider\n";   
            }   
        }    
    }
    if (exit_flag == true)
        cout << "Record action taken.\n";
    
    return 0;                             
}	


