#include <iostream>

using namespace std;

int main()
{
    double userWeight;
    int userPlanetChoice;
    
    cout << "Welcome to the Space Health Application. This Application will determine your weight in other planets in the galaxy!" << endl;
    cout << "Our weight differs significantly from each planet due to the differences in gravity and atmospheric pressure." << endl;
    cout << "Please Enter Your Weight in Pounds: ";
    cin >> userWeight;
    
    cout << "Now, you are going to choose the planet you want to check your weight in" << endl;
    cout << "Press: \n 1 for Mercury \n 2 for Venus \n 3 for Earth \n 4 for Mars \n 5 for Jupiter \n 6 for Saturn \n 7 for Uranus \n 8 for Neptune" << endl;
    cout << "Type the number here: ";
    cin >> userPlanetChoice;
    
    switch(userPlanetChoice)
    {
        case 1:
            cout << "You will weigh " << userWeight * 0.38 << " pounds on Mercury" << endl;
            break;
            
        case 2:
            cout << "You will weigh " << userWeight * 0.91 << " pounds on Venus" << endl;
            break;
            
        case 3:
            cout << "You will weigh " << userWeight * 1 << " pounds on Earth" << endl;
            break;
            
        case 4:
            cout << "You  will weigh " << userWeight * 0.38 << " pounds on Mars" << endl;
            break;
            
        case 5:
            cout << "You will weigh " << userWeight * 2.53 << " pounds on Jupiter" << endl;
            break;
            
        case 6:
            cout << "You will weigh " << userWeight * 1.07 << " pounds on Saturn" << endl;
            break;
            
        case 7:
            cout << "You will weigh " << userWeight * 0.91 << " pounds on Uranus" << endl;
            break;
            
        case 8:
            cout << "You will weigh " << userWeight * 1.14 << " pounds on Neptune" << endl;
            break;
            
        default:
            cout << "ERROR! You must choose a number between 1 and 8 as per the planet list. Run the code to try again." << endl;
    }
    
    
    return 0;
}