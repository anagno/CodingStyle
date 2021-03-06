# Μαγικοί αριθμοί

Η πρακτική της ενσωμάτωσης δεδομένων εισόδου ή οποιοδήποτε άλλων δεδομένων
στον πηγαίο κώδικα συναντάται στην βιβλιογραφία ως "μαγικοί αριθμοί" 
(αγγλ. magic numbers ή hard coding) και αποτελεί μία κακή προγραμματιστική
τεχνική. Η χρησιμοποίηση τέτοιων αριθμών παράγουν κώδικα ο οποίος είναι
δύσκολο να συντηρηθεί καθώς δεν δίνουν κάποια χρήσιμη πληροφορία σε κάποιον
που διαβάζει τον πηγαίο κώδικα και είναι δύσκολο να αλλάξουν με συστηματικό
τρόπο, αν είναι διεσπαρμένες μέσα στον πηγαίο κώδικα.

Εάν οι αριθμοί που χρησιμοποιούνται στον πηγαίο κώδικα δεν έχουν μία προφανή
σημασία από μόνοι τους, τότε η αναγνωσιμότητα του πηγαίου κώδικα μπορεί να
βελτιωθεί χρησιμοποιώντας μεταβλητές στην θέση των αριθμών. Εναλλακτικά
μπορεί να χρησιμοποιηθεί και μία συνάρτηση που επιστρέφει την επιθυμητή
τιμή. Στο παρακάτω πρόγραμμα φαίνεται ένα ακριβώς τέτοιο παράδειγμα στο
οποίο έχουν ενσωματωθεί "μαγικοί αριθμοί" μέσα στον πηγαίο κώδικα. 

[include](../../code_examples/magic_numbers.cpp)

Αντιθέτως στο παρακάτω πρόγραμμα που πλέον οι αριθμοί μέσα στο πηγαίο κώδικα
έχουν αντικατασταθεί από μεταβλητές φαίνεται ξεκάθαρα η χρησιμότητα τους.

[include](../../code_examples/magic_numbers_2.cpp)

