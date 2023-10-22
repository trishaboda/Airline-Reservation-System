#include <iostream>
using namespace std;

int domesticPNR = 34871;
int internationalPNR = 889121;

class domesticBooking
{
protected:
    int domestic_PNR, domesticChoice, domesticMeal;
    string domesticDeparture;
    int departure, arrival;

public:
    void generateDomesticPNR()
    {
        domestic_PNR = ++domesticPNR;
    }

    void travelDetails()
    {
        char departure, arrival;
        string domesticDeparture;
        cout << "Enter the date of departure as DD/MM/YYYY: ";
        cin >> domesticDeparture;

        cout << "-----DEPARTURE-----" << endl;
        cout << "(1) Pune" << endl;
        cout << "(2) Bangalore" << endl;
        cout << "(3) Mumbai" << endl;
        cout << "(4) Delhi" << endl;
        cout << "Enter departure city: ";
        cin >> departure;
        cout << endl;

        cout << "-----ARRIVAL-----" << endl;
        cout << "(1) Pune" << endl;
        cout << "(2) Bangalore" << endl;
        cout << "(3) Mumbai" << endl;
        cout << "(4) Delhi" << endl;
        cout << "Enter arrival city: ";
        cin >> arrival;
        cout << endl;

        if ((departure == '1' && arrival == '2') ||
            (departure == '2' && arrival == '1'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)IndiGo    \t4:40        \t7:30      \tRs.3,720\n"
                 << endl;
            cout << "(2)SpiceJet  \t7:25        \t9:40      \tRs.4,400\n"
                 << endl;
            cout << "(3)Air India \t13:55       \t15:05     \tRs.5,890\n"
                 << endl;
            cout << "(4)AkasaAir  \t20:40       \t21:30     \tRs.4,870\n"
                 << endl;
        }
        else if ((departure == '1' && arrival == '3') ||
                 (departure == '3' && arrival == '1'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)IndiGo    \t4:40        \t7:30      \tRs.3,720\n"
                 << endl;
            cout << "(2)SpiceJet  \t7:25        \t9:40      \tRs.4,400\n"
                 << endl;
            cout << "(3)Air India \t13:55       \t15:05     \tRs.5,890\n"
                 << endl;
            cout << "(4)AkasaAir  \t20:40       \t21:30     \tRs.4,870\n"
                 << endl;
        }
        else if ((departure == '1' && arrival == '4') ||
                 (departure == '4' && arrival == '1'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)IndiGo    \t4:40        \t7:30      \tRs.3,720\n"
                 << endl;
            cout << "(2)SpiceJet  \t7:25        \t9:40      \tRs.4,400\n"
                 << endl;
            cout << "(3)Air India \t13:55       \t15:05     \tRs.5,890\n"
                 << endl;
            cout << "(4)AkasaAir  \t20:40       \t21:30     \tRs.4,870\n"
                 << endl;
        }
        else if ((departure == '2' && arrival == '3') ||
                 (departure == '3' && arrival == '2'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)IndiGo    \t4:40        \t7:30      \tRs.3,720\n"
                 << endl;
            cout << "(2)SpiceJet  \t7:25        \t9:40      \tRs.4,400\n"
                 << endl;
            cout << "(3)Air India \t13:55       \t15:05     \tRs.5,890\n"
                 << endl;
            cout << "(4)AkasaAir  \t20:40       \t21:30     \tRs.4,870\n"
                 << endl;
        }
        else if ((departure == '2' && arrival == '4') ||
                 (departure == '4' && arrival == '2'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)IndiGo    \t4:40        \t7:30      \tRs.3,720\n"
                 << endl;
            cout << "(2)SpiceJet  \t7:25        \t9:40      \tRs.4,400\n"
                 << endl;
            cout << "(3)Air India \t13:55       \t15:05     \tRs.5,890\n"
                 << endl;
            cout << "(4)AkasaAir  \t20:40       \t21:30     \tRs.4,870\n"
                 << endl;
        }
        else if ((departure == '3' && arrival == '4') ||
                 (departure == '4' && arrival == '3'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)IndiGo    \t4:40        \t7:30      \tRs.3,720\n"
                 << endl;
            cout << "(2)SpiceJet  \t7:25        \t9:40      \tRs.4,400\n"
                 << endl;
            cout << "(3)Air India \t13:55       \t15:05     \tRs.5,890\n"
                 << endl;
            cout << "(4)AkasaAir  \t20:40       \t21:30     \tRs.4,870\n"
                 << endl;
        }
        else
        {
            cout << "You have entered incorrect details. Try Again." << endl;
            travelDetails();
        }
    }

    void selectDomesticFlight()
    {
        int domesticChoice;
        cout << "Enter your choice: ";
        cin >> domesticChoice;

        switch (domesticChoice)
        {
        case 1:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: IndiGo" << endl;
            cout << "PNR Number: " << domesticPNR << endl;
            cout << "Departure Time: 4:40 hrs" << endl;
            cout << "Arrival Time: 7:30 hrs" << endl;
            break;

        case 2:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: SpiceJet" << endl;
            cout << "PNR Number: " << domesticPNR << endl;
            cout << "Departure Time: 7:25 hrs" << endl;
            cout << "Arrival Time: 9:40 hrs" << endl;
            break;

        case 3:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: AirIndia" << endl;
            cout << "PNR Number: " << domesticPNR << endl;
            cout << "Departure Time: 13:55 hrs" << endl;
            cout << "Arrival Time: 15:05 hrs" << endl;
            break;

        case 4:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: AkasaAir" << endl;
            cout << "PNR Number: " << domesticPNR << endl;
            cout << "Departure Time: 20:40 hrs" << endl;
            cout << "Arrival Time: 21:30 hrs" << endl;
            break;

        default:
            cout << "You have entered incorrect input. Try again." << endl;
            selectDomesticFlight();
        }
    }

    void domestic_Meals()
    {
        int domesticMeal;
        cout << "-----MEALS-----" << endl;
        cout << "(1) Vegetarian Meal: Rs. 550" << endl;
        cout << "(2) Non-Vegetarian Meal: Rs. 750" << endl;
        cout << "(3) No Meal" << endl;
        cout << "Enter your meal preference: ";
        cin >> domesticMeal;

        while (domesticMeal > 3 || domesticMeal < 1)
        {
            cout << "You have entered incorrect input. Try Again.";
            cin >> domesticMeal;
        }

        if (domesticMeal == 1)
        {
            cout << "Meal Choice: Vegetarian meal" << endl;
        }
        else if (domesticMeal == 2)
        {
            cout << "Meal Choice: Non-Vegetarian meal" << endl;
        }
        else
        {
            cout << "Meal Choice: No meal" << endl;
        }
    }
};

class internationalBooking
{
protected:
    int international_PNR, internationalChoice, internationalMeal;
    string internationalDeparture;
    int internationalSource, internationalArrival;

public:
    void generateInternationalPNR()
    {
        international_PNR = ++internationalPNR;
    }

    void travelDetails()
    {
        string internationalDeparture;
        char internationalSource, internationalArrival;
        cout << "Enter the date of departure as DD/MM/YYYY: ";
        cin >> internationalDeparture;

        cout << "-----DEPARTURE-----" << endl;
        cout << "(1)New Delhi" << endl;
        cout << "(2)Dubai" << endl;
        cout << "(3)New York" << endl;
        cout << "(4)Hong Kong" << endl;
        cout << "Enter departure city: ";
        cin >> internationalSource;
        cout << endl;

        cout << "-----ARRIVAL-----" << endl;
        cout << "(1)New Delhi" << endl;
        cout << "(2)Dubai" << endl;
        cout << "(3)New York" << endl;
        cout << "(4)Hong Kong" << endl;
        cout << "Enter arrival city: ";
        cin >> internationalArrival;
        cout << endl;

        if ((internationalSource == '1' && internationalArrival == '2') ||
            (internationalSource == '2' && internationalArrival == '1'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES      \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)Emirates       \t3:40        \t6:05      \tRs.44,370\n"
                 << endl;
            cout << "(2)Qatar Airways  \t7:25        \t10:40     \tRs.31,900\n"
                 << endl;
            cout << "(3)Lufthansa      \t14:25       \t16:55     \tRs.28,090\n"
                 << endl;
            cout << "(4)Cathay Pacific \t20:40       \t23:10     \tRs.28,780\n"
                 << endl;
        }
        else if ((internationalSource == '1' && internationalArrival == '3') ||
                 (internationalSource == '3' && internationalArrival == '1'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES      \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)Emirates       \t3:40        \t6:05      \tRs.44,370\n"
                 << endl;
            cout << "(2)Qatar Airways  \t7:25        \t10:40     \tRs.31,900\n"
                 << endl;
            cout << "(3)Lufthansa      \t14:25       \t16:55     \tRs.28,090\n"
                 << endl;
            cout << "(4)Cathay Pacific \t20:40       \t23:10     \tRs.28,780\n"
                 << endl;
        }
        else if ((internationalSource == '1' && internationalArrival == '4') ||
                 (internationalSource == '4' && internationalArrival == '1'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES      \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)Emirates       \t3:40        \t6:05      \tRs.44,370\n"
                 << endl;
            cout << "(2)Qatar Airways  \t7:25        \t10:40     \tRs.31,900\n"
                 << endl;
            cout << "(3)Lufthansa      \t14:25       \t16:55     \tRs.28,090\n"
                 << endl;
            cout << "(4)Cathay Pacific \t20:40       \t23:10     \tRs.28,780\n"
                 << endl;
        }
        else if ((internationalSource == '2' && internationalArrival == '3') ||
                 (internationalSource == '3' && internationalArrival == '2'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES      \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)Emirates       \t3:40        \t6:05      \tRs.44,370\n"
                 << endl;
            cout << "(2)Qatar Airways  \t7:25        \t10:40     \tRs.31,900\n"
                 << endl;
            cout << "(3)Lufthansa      \t14:25       \t16:55     \tRs.28,090\n"
                 << endl;
            cout << "(4)Cathay Pacific \t20:40       \t23:10     \tRs.28,780\n"
                 << endl;
        }
        else if ((internationalSource == '2' && internationalArrival == '4') ||
                 (internationalSource == '4' && internationalArrival == '2'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES      \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)Emirates       \t3:40        \t6:05      \tRs.44,370\n"
                 << endl;
            cout << "(2)Qatar Airways  \t7:25        \t10:40     \tRs.31,900\n"
                 << endl;
            cout << "(3)Lufthansa      \t14:25       \t16:55     \tRs.28,090\n"
                 << endl;
            cout << "(4)Cathay Pacific \t20:40       \t23:10     \tRs.28,780\n"
                 << endl;
        }
        else if ((internationalSource == '3' && internationalArrival == '4') ||
                 (internationalSource == '4' && internationalArrival == '3'))
        {
            cout << "-----AVAILABLE FLIGHTS-----" << endl;
            cout << "AIRLINES      \tDEPARTURE TIME \tARRIVAL TIME \tPRICE\n"
                 << endl;
            cout << "(1)Emirates       \t3:40        \t6:05      \tRs.44,370\n"
                 << endl;
            cout << "(2)Qatar Airways  \t7:25        \t10:40     \tRs.31,900\n"
                 << endl;
            cout << "(3)Lufthansa      \t14:25       \t16:55     \tRs.28,090\n"
                 << endl;
            cout << "(4)Cathay Pacific \t20:40       \t23:10     \tRs.28,780\n"
                 << endl;
        }
        else
        {
            cout << "You have entered incorrect details. Try Again." << endl;
            travelDetails();
        }
    }

    void selectInternationalFlight()
    {
        int internationalChoice;
        cout << "Enter your choice: ";
        cin >> internationalChoice;

        switch (internationalChoice)
        {
        case 1:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: Emirates" << endl;
            cout << "PNR Number: " << internationalPNR << endl;
            cout << "Departure Time: 3:40 hrs" << endl;
            cout << "Arrival Time: 6:05 hrs" << endl;
            break;

        case 2:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: Qatar Airways" << endl;
            cout << "PNR Number: " << internationalPNR << endl;
            cout << "Departure Time: 7:25 hrs" << endl;
            cout << "Arrival Time: 10:40 hrs" << endl;
            break;

        case 3:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: Lufthansa" << endl;
            cout << "PNR Number: " << internationalPNR << endl;
            cout << "Departure Time: 14:25 hrs" << endl;
            cout << "Arrival Time: 16:55 hrs" << endl;
            break;

        case 4:
            cout << "---TRAVEL INFORMATION---" << endl;
            cout << "Airline: Cathay Pacific" << endl;
            cout << "PNR Number: " << internationalPNR << endl;
            cout << "Departure Time: 20:40 hrs" << endl;
            cout << "Arrival Time: 23:10 hrs" << endl;
            break;
        default:
            cout << "You have entered incorrect input. Try again." << endl;
            selectInternationalFlight();
        }
    }

    void international_Meals()
    {
        char internationalMeal;
        cout << "-----MEALS-----" << endl;
        cout << "\n(1)Vegeterian Meal: \tRs. 2550" << endl;
        cout << "\n(2)Non-Vegeterian Meal: \tRs. 3050" << endl;
        cout << "\n(3)No Meal";
        cout << "\nEnter your meal preference: ";
        cin >> internationalMeal;

        while (internationalMeal > '3' || internationalMeal < '1')
        {
            cout << "You have entered incorrect input. Try Again.";
            cin >> internationalMeal;
        }
        if (internationalMeal == '1')
        {
            cout << "Meal Choice: Vegetarian meal" << endl;
        }
        else if (internationalMeal == '2')
        {
            cout << "Meal Choice: Non-Vegetarian meal" << endl;
        }
        else
        {
            cout << "Meal Choice: No meal" << endl;
        }
    }
};

class passenger : public domesticBooking, public internationalBooking // hybrid inheritance - derived from base classes domesticBooking and international booking
{
public:
    string name, gender, phNumber, eMailID, passportNumber;
    int typeOfBooking;

    void takeDetails()
    {
        cout << "\n---ENTER DETAILS---" << endl;
        cout << "Passenger Name: ";
        cin >> name;
        cout << "Gender: ";
        cin >> gender;
        cout << "Contact Number: ";
        cin >> phNumber;
        cout << "eMail ID: ";
        cin >> eMailID;
        cout << "Enter Passport Number: ";
        cin >> passportNumber;
    }

    void displayPassengerDetails()
    {
        cout << "\n----PASSENGER DETAILS----" << endl;
        cout << "Passenger Name: " << name;
        cout << "\nGender: " << gender;
        cout << "\nContact Number: " << phNumber;
        cout << "\neMail ID: " << eMailID;
        cout << "\nPassport Number: " << passportNumber;

        cout << "\nPress any key to proceed" << endl;
        cin.ignore();
        cin.get();
    }

    void internationaltravelDetails()          // define function in derived class so that they can be called
    {                                          // in the main functionbecuase functions of parent class cannot be
        internationalBooking::travelDetails(); // called in main by object of child class
    }

    void domestictravelDetails()          // define function in derived class so that they can be called
    {                                     // in the main functionbecuase functions of parent class cannot be
        domesticBooking::travelDetails(); // called in main by object of child class
    }

    void getDomesticPNR()
    {
        generateDomesticPNR();
    }

    void getInternationalPNR()
    {
        generateInternationalPNR();
    }
};

class payment
{
protected:
    int modeOfPayment, CardNumber, CVV, bank, userID;
    string expiryDate, password, upiID;

public:
    void paymentDetails()
    {
        cout << "---PAYMENT MODE---\n";
        cout << "Mode Of Payment:" << endl;
        cout << "(1) Credit card" << endl;
        cout << "(2) Debit Card" << endl;
        cout << "(3) Net Banking" << endl;
        cout << "(4) UPI" << endl;
        cout << "Select a mode of payment: ";
        cin >> modeOfPayment;

        switch (modeOfPayment)
        {
        case 1:
            cout << "Enter Credit Card Number: ";
            cin >> CardNumber;
            cout << "Enter date of expiry as DD/MM/YYYY: ";
            cin >> expiryDate;
            cout << "Enter CVV number: ";
            cin >> CVV;
            cout << "\n\nTransaction is being processed...";
            cout << "\nTransaction Successful!";
            cout << "\nYour booking has been confirmed!";
            break;

        case 2:
            cout << "Enter Credit Card Number: ";
            cin >> CardNumber;
            cout << "Enter date of expiry as DD/MM/YYYY: ";
            cin >> expiryDate;
            cout << "Enter CVV number: ";
            cin >> CVV;
            cout << "\n\nTransaction is being processed...";
            cout << "\nTransaction Successful!";
            cout << "\nYour booking has been confirmed!";
            break;

        case 3:
            cout << "Select a bank:" << endl;
            cout << "(1) HDFC Bank" << endl;
            cout << "(2) ICICI Bank" << endl;
            cout << "(3) SBI Bank" << endl;
            cout << "(4) Axis Bank" << endl;
            cout << "Enter your bank choice: ";
            cin >> bank;
            cout << "Enter user ID: ";
            cin >> userID;
            cout << "\n\nTransaction is being processed...";
            cout << "\nTransaction Successful!";
            cout << "\nYour booking has been confirmed!";
            break;

        case 4:
            cout << "Enter UPI ID: ";
            cin >> upiID;
            cout << "\n\nTransaction is being processed...";
            cout << "\nTransaction Successful!";
            cout << "\nYour booking has been confirmed!";
            break;

        default:
            cout << "Invalid Input! Try Again!" << endl;
            paymentDetails();
        }
    }
};

int main()
{
    passenger pass;
    payment pay;
    int choice;
    cout << "WELCOME TO OUR AIRLINE RESERVATION SYSTEM" << endl;
    cout << "\nChoose type of booking: " << endl;
    cout << "(1) Domestic Booking" << endl;
    cout << "(2) International Booking" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    pass.typeOfBooking = choice;

    if (choice == 1)
    {
        pass.domestictravelDetails(); // function overriding - runtime poly
        pass.selectDomesticFlight();
        pass.domestic_Meals();
        pass.takeDetails();
        pass.getDomesticPNR();
        pass.displayPassengerDetails();
        pay.paymentDetails();
    }
    else if (choice == 2)
    {
        pass.internationaltravelDetails(); // function overriding - runtime poly
        pass.selectInternationalFlight();
        pass.international_Meals();
        pass.takeDetails();
        pass.getInternationalPNR();
        pass.displayPassengerDetails();
        pay.paymentDetails();
    }
    else
    {
        cout << "Invalid Input! Try Again." << endl;
        main();
    }
    return 0;
}