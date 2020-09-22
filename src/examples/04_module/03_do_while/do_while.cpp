#include "do_while.h"


//Write code for void function prompt_user to loop until
//user opts not to continue.  

void prompt_user()
{
int menu_choice;
	do
	{
		display_menu();
        cout<<"Select A Number: \n";
        cin>>menu_choice;

        excecute_menu_choice(menu_choice);



	} while (menu_choice != 4);
	

}

void display_menu()
{
    cout<<"1 - Accounts Receivable\n";
    cout<<"2 - Accounts Payable\n";
    cout<<"3 - Payroll\n";
    cout<<"4 - Exit\n";
    
}

void excecute_menu_choice(int num)
{
    switch(num)
    {
        case 1:
            cout<<"you selected Accounts Receivable\n";
            break;
        case 2:
            cout<<"you selected Accounts Payable\n";
            break;
        case 3:
            cout<<"you selected Payroll\n";
            break;
        case 4:
            cout<<"you selected Exit\n";
            break;
        default:
            cout<<"Invalid Option\n";
    }
}

