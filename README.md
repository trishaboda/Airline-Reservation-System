# Airline-Reservation-System
INTRODUCTION  
ADT Airline reservation is a console based application designed to book airline tickets. It allows users to book domestic and international flights, select flights, choose meals, take passenger details and make payments.

PROBLEM STATEMENT  
The airline reservation system aims to provide a user-friendly interface for booking domestic and international flights. The airline reservation system has the following features:  
(1)	Choose between domestic and international flights.   
(2)	Select departure and arrival cities.  
(3)	Display available flights based on chosen cities.  
(4)	Choose flight from available options.  
(5)	Choose meal preferences.  
(6)	Take input of passenger details (name, gender, contact information etc).  
(7)	Make payment (via credit card/ debit card/ net banking / UPI).  
(8)	Generate a Passenger Name Record (PNR) for the booking.  
(9)	Display booking details and confirmation.  

EXPLANATION  
The code is divided into several classes to represent the different aspects of the airline reservation system.  
(1)	‘domesticBooking’ and ‘internationalBooking’ classes represent domestic and international flight booking functionality, respectively. They include methods for selecting cities, displaying available flights, and choosing meals.  
(2)	‘passenger’ class inherits from both ‘domesticBooking’ and ‘internationalBooking’, allowing it to use functionalities of both the classes. It is also responsible for gathering passenger details, selecting flight preferences, and gathering PNRs.  
(3)	‘payment’ class handles the payment process, allowing the users to choose from payment modes and completing the booking. 
The main function acts as an entry point for the program. It presents a menu for the users to choose between domestic and international bookings. Depending on the choice, it triggers relevant methods for booking, selecting flights, choosing meals, gathering passenger details, and making payments.

CLASS DIAGRAM  
![AirlinwReservationClassDiagram](https://github.com/trishaboda/Airline-Reservation-System/assets/141979558/037f9f16-7b70-4b75-9391-46f7adecfed5)

COLLABORATORS  
1. [@trishaboda](https://www.github.com/trishaboda)  
2. [@divyanshpanwar03](https://www.github.com/divyanshpanwar03)    
3. [@aryan-bhoi](https://www.github.com/aryan-bhoi)  
