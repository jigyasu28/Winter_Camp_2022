class Admin extends Books {
    print __ = new print();

    // Default books available in library
    void defaultBooks() {
        AllBooks.add("The Alchemist");
        Availability.add(true);
        AllBooks.add("Wings of fire");
        Availability.add(true);
        AllBooks.add("Introduction to Algorithms");
        Availability.add(true);
    }

    // Shows all books of library along with availability.
    void showAll() {

    }

    // Admin can add book.
    void addBook(String book) {
    };

    // Admin can remove book.
    void removeBook(String book) {
        try {
            // If book does not exist in AllBooks ArrayList, it will throw
            // invalidBookException.
            throw new invalidBookException("This book is not available in the library");
        } catch (invalidBookException e) {
            System.out.println("invalidBookException occured:" + e);
        }
    };

}