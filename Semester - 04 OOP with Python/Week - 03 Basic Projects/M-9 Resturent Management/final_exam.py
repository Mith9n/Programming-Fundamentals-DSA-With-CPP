# Class: Bus
class Bus:
    def __init__(self,number,route,total_seats):
        self.number = number
        self.route = route
        self.total_seats = total_seats
        self.booked_seats = 0

    def available_seats(self):  
        return self.total_seats - self.booked_seats

    def book_seat(self): 
        if self.available_seats() > 0:
            self.booked_seats += 1
            return True
        return False


# Class: Passenger 
class Passenger:
    def __init__(self,name,phone,bus):
        self.name = name
        self.phone = phone
        self.bus = bus

#class: Admin
class Admin:
    def __init__(self,username,password):
        self.username = username
        self.password = password

    def login(self, username, password):
        return self.username == username and self.password == password


#class: BusSystem
class BusSystem:
    def __init__(self):
        self.buses = []
        self.passengers = []

    def add_bus(self,number,route,seats):
        bus = Bus(number,route,seats)
        self.buses.append(bus)
        print("Bus added successfully!")

    def show_buses(self):
        if not self.buses:
            print("No buses available.")
            return
        for bus in self.buses:
            print(f"Bus No: {bus.number} | Route: {bus.route} | Available Seats: {bus.available_seats()}")

    def book_ticket(self,number,name,phone):
        for bus in self.buses:
            if bus.number == number:
                if bus.book_seat():
                    passenger = Passenger(name,phone,bus)
                    self.passengers.append(passenger)
                    print(f"Ticket booked for {name}. Fixed Fare: ৳500")
                    return
                else:
                    print("No seats available.")
                    return
        print("Bus not found.")


# Object: Admin
admin = Admin("admin", "1234")

# Object: System
system = BusSystem()


# Main Menu 
def main_menu():
    while True:
        print("\n===== Bangladesh Bus Ticket Booking System =====")
        print("1. Admin Login")
        print("2. Book Ticket")
        print("3. View Buses")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            username = input("Enter admin username: ")
            password = input("Enter admin password: ")
            if admin.login(username,password):
                print("Admin login successful!")
                admin_menu()
            else:
                print("Invalid admin credentials.")
        elif choice == "2":
            number = input("Enter Bus Number: ")
            name = input("Enter Your Name: ")
            phone = input("Enter Your Phone Number: ")
            system.book_ticket(number,name,phone)
        elif choice == "3":
            system.show_buses()
        elif choice == "4":
            print("Exiting the system.Thank you!")
            break
        else:
            print("Invalid choice.Try again.")


# Admin Menu
def admin_menu():
    while True:
        print("\n--- Admin Menu ---")
        print("1. Add Bus")
        print("2. View All Buses")
        print("3. Logout")
        choice = input("Enter your choice: ")

        if choice == "1":
            number = input("Enter Bus Number: ")
            route = input("Enter Route: ")
            try:
                seats = int(input("Enter Total Seats: "))
                system.add_bus(number, route, seats)
            except ValueError:
                print("Please enter a valid number for seats.")
        elif choice == "2":
            system.show_buses()
        elif choice == "3":
            print("Logged out from Admin panel.")
            break
        else:
            print("Invalid choice. Try again.")


# Run the program
main_menu()
