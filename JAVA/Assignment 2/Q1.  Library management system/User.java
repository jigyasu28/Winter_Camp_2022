class User extends Books {
    // Books available in the library (show the book whose availability is true)
    void booksAvailable() {
    };

    // Rent available book to the user and make availability boolean array false for
    // that particular book.
    void rentBook(String Book) {
        try {
            // If book does not exist in AllBooks ArrayList, it will throw
            // invalidBookException.
            throw new invalidBookException("This book is not available in the library");
        } catch (invalidBookException e) {
            System.out.println("invalidBookException occured:" + e);
        }
    };

    // Change availability for that book to be true;
    void returnBook(String Book) {
        try {
            // If book does not exist in AllBooks ArrayList, it will throw
            // invalidBookException.
            throw new invalidBookException("This book does not belong to this library.");
        } catch (invalidBookException e) {
            System.out.println("invalidBookException occured:" + e);
        }
    };
}