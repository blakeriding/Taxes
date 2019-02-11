//
//  main.cpp
//  Project_1
//
//  Created by Blake Riding on 1/14/19.
//  Copyright © 2019 Blake Riding. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    double income = 0.0;
    
    double taxRate = 0;
    char answer = 'y';
    char mOrS;
    double tax = 0.0;
    int addRate = 0;
    int subtractRate = 0;
    while (answer == 'y')
    {
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        

        //Asks user to enter their income
        cout << "Please enter in your taxable income." << endl << "(This must be a positive value): " << endl;
        //Stores the users income in income
        cin >> income;
        if (income < 0)
        {
            cout << "Please enter in your taxable income." << endl << "(This must be a positive value): " << endl;
            //Stores the users income in income
            cin >> income;
        }

            
        
        

        cout << "Please enter m if married and filing joint return, or s if filing a single return: ";
        cin >> mOrS;
       
        if(mOrS == 'm')
        {
            //Income 0 - 1726
            if ((income > 0) && (income <= 1726))
            {
                taxRate = 0.023;
                subtractRate = 0;
                addRate = 0;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a joint return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
            //Income 1727 - 5176
            else if (income <= 5176)
            {
                taxRate = 0.033;
                subtractRate = 1726;
                addRate = 40;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a joint return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
            //Income 5177 - 8626
            else if (income <= 8626)
            {
                taxRate = 0.052;
                subtractRate = 5176;
                addRate = 175;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a joint return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
            //Income over 8626
            else
            {
                taxRate = 0.075;
                subtractRate = 8626;
                addRate = 390;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a joint return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
        }
        else if (mOrS == 's')
        {
            //Income 0 - 863
            if ((income > 0) && (income <= 863))
            {
                taxRate = 0.023;
                subtractRate = 0;
                addRate = 0;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a single return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
            //Income 864 - 2588
            else if (income <= 2588)
            {
                taxRate = 0.033;
                subtractRate = 863;
                addRate = 25;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a single return." << endl;
                cout << "Your income tax will be $" << tax << endl;
                
            }
            //Income 2589 - 4313
            else if (income <= 4313)
            {
                taxRate = 0.052;
                subtractRate = 2588;
                addRate = 85;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a single return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
            //Income over 4313
            else
            {
                taxRate = 0.075;
                subtractRate = 4313;
                addRate = 181;
                
                tax = (income - subtractRate) * taxRate + addRate;
                cout << endl << "Your taxable income is $" << income << endl << "and you are filing a single return." << endl;
                cout << "Your income tax will be $" << tax << endl;
            }
        }
        
        else
        {
            cout << "Please enter 's' or 'm'" << endl;
        }
       
        
        
        cout << endl << "Would you like to do another calculation (y or n)?";
        cin >> answer;
    }
    

}
