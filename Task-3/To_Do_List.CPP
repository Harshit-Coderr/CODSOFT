#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    string task[50] = {""};
    int Task_Number = 0, del_task, mark;
    int task_output = 0 ;
    cout << " ________________________________________________________________________________________________________________________________________________________________________________________________\n";
    cout << "|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        |\n";
    cout << "|\t\t\t\t\t\t\t\t\t\t-----WELCOME TO  YOUR TODO   LIST-----\t\t\t\t\t\t\t\t\t        |\n";
    cout << "|_______________________________________________________________________________________________________________________________________________________________________________________________|\n\n";

    while (task_output != 5)
    {
        cout << "\n ______________________ \t\t ____________________ \t\t\t _____________________________ \t\t\t ______________________ \t\t__________________________"
             << "\n 1 - TO ENTER THE TASK \t\t\t 2 - TO VIEW THE TASK \t\t\t 3 - TO MARK TASK IS COMPLETED \t\t\t 4 - TO DELETE THE TASK \t\t5 - TO TERMINATE THE TASK"
             << "\n ----------------------\t\t\t --------------------- \t\t\t ----------------------------- \t\t\t ---------------------- \t\t--------------------------"
             << "\n\n\n\t\t\t\t\t\t\t\t\t\t>>  ";
        cin >> task_output;
        switch (task_output)
        {
        case 1:
            if (Task_Number > 9)
            {
                cout << "YOUR TASK IS FULL ";
            }
            else
            {
                cout << " Enter your task = ";
                cin.ignore();
                getline(cin, task[Task_Number]);
                cout << "\n\n";
                Task_Number++;
            }
            break;
        case 2:
            cout << "Task To Do \n";
            for (int i = 0; i < Task_Number; i++)
            {
                cout << "Task " << i << "  :  " << task[i] << "\n";
            };
            break;

        case 3:
            cout << " Enter a task to mark as completed  =  ";
            cin >> mark;
            if (mark < 0 || mark > 9)
            {
                cout << "You enter invaild task number   ";
                break;
            }
            task[mark] = "Your " + task[mark] + " task is completed ";

            break;
        case 4:
            cout << " Enter a task to delete ";
            cin >> del_task;
            if (del_task < 0 || del_task > 9)
            {
                cout << "You enter invaild task number  =  ";
                break;
            }
            for (int i = del_task; i < Task_Number - 1; i++)
            {
                task[i] = task[i + 1];
            }
            Task_Number--;
            break;
        case 5:
            cout << "  TERMINATING THE PROGRAM __ ________ ____________";
            break;
        default:
            cout << "YOU ENTER INVAILD VALUE";
            break;
        }
    }
    return 0;
}