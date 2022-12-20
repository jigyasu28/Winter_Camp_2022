import java.io.*;
import java.util.*;


public class LibraryManagementSystem {
    static print __ = new print();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean quit = false;
        while (true) {
            __.print("1. Admin Login\n 2. User Login\n3.Exit System");
            __.print("Please select login type: ");
            int option_selected = sc.nextInt();
            switch (option_selected) {
                case 1: {
                    Admin ad = new Admin();
                    __.print("1. Add Book\n 2. Remove Book\n3.LogOut");
                    __.print("Please select one operation: ");
                    int menu_option = sc.nextInt();
                    switch (menu_option) {
                        case 1: {
                            String newBook = sc.nextLine();
                            ad.addBook(newBook);
                            break;
                        }
                        case 2: {
                            String removeBook = sc.nextLine();
                            ad.removeBook(removeBook);
                            break;
                        }
                        case 3: {
                            break;
                        }
                        default: {
                            __.println("Please select valid option");
                        }
                    }
                    break;
                }
                case 2: {
                    User user = new User();
                    __.print("1. Show Available Books\n 2. Rent Book\n3. Return Book\n4.LogOut");
                    __.print("Please select one operation: ");
                    int menu_option = sc.nextInt();
                    switch (menu_option) {
                        case 1: {
                            user.booksAvailable();
                            break;
                        }
                        case 2: {
                            String Book = sc.nextLine();
                            user.rentBook(Book);
                            break;
                        }
                        case 3: {
                            String Book = sc.nextLine();
                            user.returnBook(Book);
                            break;
                        }
                        case 4: {
                            break;
                        }
                        default: {
                            __.println("Please select valid option");
                        }
                    }
                    break;
                }
                case 3: {
                    quit = true;
                    break;
                }
                default: {
                    __.println("Please select valid option");
                }
            }
            if (quit)
                break;
        }
    }
}
