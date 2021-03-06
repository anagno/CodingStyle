# Σχολιασμός και τεκμηρίωση (αγγλ. Commenting and Documentantion) ({{ "wikibook:cpp_style" |cite }})

Η τεκμηρίωση και ο σχολιασμός του πηγαίου κώδικα είναι μία από τις πιο
σημαντικές διαδικασίες κατά την παραγωγή του. Αν και δεν συνδέεται άμεσα με
την λειτουργικότητα του κώδικα, συνδέεται έμμεσα με την δυνατότητα επέκτασης
του, μιας και παρέχει με διορατικό τρόπο τις προθέσεις του αρχικού
προγραμματιστή. 

Κατάλληλα θέματα για την τεκμηρίωση συχνά περιλαμβάνουν:
* Γενική περιγραφή του προγράμματος. Πρέπει να περιλαμβάνει: 
  * Μία επισκόπηση για το τον σκοπό που δημιουργήθηκε το πρόγραμμα.
  * Ένα απλό παράδειγμα χρήσης του προγράμματος.
  * Οδηγίες εκμάθησης για την βασική χρήση του προγράμματος.
* Τεκμηρίωση του κώδικα. Η τεκμηρίωση του κώδικα περιλαμβάνει:
  * Περιγραφή των κλάσεων και των συναρτήσεων του προγράμματος.
  * Την σχέση μεταξύ των κλάσεων και των συναρτήσεων.
  * Για κάθε συνάρτηση, ανάλογα με την περίπτωση, μία περιγραφή, τις
απαιτήσεις για την σωστή λειτουργία της, τα αποτελέσματα της, την τιμή που
επιστρέφει καθώς και τυχόν σφάλματα που μπορεί να συμβούν.
  * Εντοπισμό σφαλμάτων και στρατηγικές για την αποφυγή τους.
  * Πως μεταγλωττίζεται και συνδέεται το πρόγραμμα.
  * Η εκδοσή του προγράμματος και τυχόν αλλαγές που έχουν συμβεί.
  * Αιτιολόγηση για τη λήψη αποφάσεων σχεδιασμού.
  * Τυχόν ευχαριστίες.

Με τα σχόλια και την τεκμηρίωση διασφαλίζεται ότι ο κώδικας έχει περιγραφτεί με επαρκείς λεπτομέρειες έτσι ώστε όταν κάποιος κοιτάζει τον πηγαίο κώδικα θα μπορεί εύκολα να καταλάβει το σχεδιασμό και το σκοπό του κώδικα
({{ "wikibook:cpp_style" |cite }}).

## Γενικά σχόλια ({{ "site:linux_style" |cite }},{{ "sutter2004c" |cite }},{{ "wiki:coding_practices" |cite }},{{ "site:google_style" |cite }})

* Σε γενικές γραμμές, χρειάζεται τα σχόλια να λένε **ΤΙ** κάνουν στον κώδικα
και όχι **ΠΩΣ** το κάνουν.
* Τα καλύτερα σχόλια στον πηγαίο κώδικα είναι ο ίδιος ο πηγαίος κώδικας. 
Γι` αυτό το λόγο ο κώδικας θα πρέπει να "αυτο-τεκμηριώνεται". Είναι
προτιμητέο να εξηγείτε κάτι μέσα από τον ίδιο τον πηγαίο κώδικα (π.χ. με 
την χρήση κάποιου πολύπλοκου ονόματος μεταβλητής) παρά να χρησιμοποιούνται
αργότερα σχόλια τα οποία εξηγούν τί κάνει ο συγκεκριμένος κώδικας.
* Σχόλια πρέπει να τοποθετούνται:
  1. σε πολύπλοκα, 
  1. μη προφανή, 
  1. ενδιαφέροντα ή 
  1. σημαντικά σημεία
του πηγαίου κώδικα. 

Πριν από αυτά τα σημεία θα πρέπει να τοποθετούνται μικρά σχόλια τα οποία
επεξηγούν τί κάνει ο κώδικας. Παραδείγματος χάρη: 

[include](../../code_examples/documentation_comments.cpp)

* Αν τα σχόλια εκτείνονται σε αρκετές γραμμές, μπορεί η στοίχιση τους να τα
κάνει πιο ευανάγνωστα. Παραδείγματος χάρη:

[include](../../code_examples/documentation_comments_2.cpp)

## Σχόλια οντοτήτων

Η παρακάτω ενότητα αναφέρει μερικούς από τους πιο διαδεδομένους τρόπους που
χρησιμοποιούνται για να σχολιάσουν τις οντότητες του πηγαίου κώδικα.

### Αρχεία

* Κάθε αρχείο πρέπει να περιέχει την άδεια χρήσης του πηγαίου κώδικα (π.χ.
Apache 2.0, BSD, LGPL, GPL). Η επιλογή της κατάλληλης άδειας χρήσης είναι
πολύπλοκη διαδικασία η οποία όμως δεν πρέπει να αμελείται.
* Πρέπει να περιέχεται ο συγγραφέας του πηγαίου.
* Κάθε αρχείο πρέπει να έχει ένα σχόλιο το οποίο περιγράφει τα περιεχόμενα
του.

[include](../../code_examples/documentation_files.cpp)

### Μεταβλητές

* Σε γενικές γραμμές το όνομα μίας μεταβλητής θα πρέπει να είναι αρκετά
περιγραφικό ώστε να δίνει την δυνατότητα στον προγραμματιστή να καταλάβει
για ποιο λόγο χρησιμοποιείται η συγκεκριμένη μεταβλητή. Σε ορισμένες
περιπτώσεις, μερικά παραπάνω σχόλια χρειάζονται.

[include](../../code_examples/documentation_variables.cpp)

### Συναρτήσεις(1)

* Κάθε δήλωση συνάρτησης θα πρέπει να έχει σχόλια τα οποία προηγούνται της
συνάρτησης και περιγράφουν τί κάνει η συνάρτηση και πως να χρησιμοποιείται.
Γενικά τα σχόλια στην δήλωση μίας συνάρτησης περιγράφουν την χρήση της
συνάρτησης, ενώ τα σχόλια στην υλοποίηση μίας συνάρτησης περιγράφουν την
λειτουργίας της.
* Κατά την δήλωση μίας συνάρτησης πρέπει να αναφέρονται: 
  * Οι μεταβλητές εισόδου και οι μεταβλητές που επιστρέφει η συνάρτηση.
  *  Εάν η συνάρτηση δεσμεύει μνήμη την οποία ο προγραμματιστής θα πρέπει να
την αποδεσμεύσει (αυτό ισχύει σε γλώσσες που δεν έχουν συλλογή απορριμάτων
(αγγλ. garbage collection) όπως η C++).
  * Εάν κάποια από τις μεταβλητές εισόδου ή εξόδου θα πρέπει να είναι
δείκτης στο κενό. 
  * Εάν υπάρχει οποιαδήποτε επίπτωση στην απόδοση με την χρησιμοποίηση της
συνάρτησης. 

[include](../../code_examples/documentation_functions.cpp)

### Συναρτήσεις(2)

* Εάν υπάρχει κάποιο πολύπλοκο κομμάτι για το πως μίας συνάρτηση κάνει την
δουλειά της τότε θα πρέπει να υπάρχει ένα επεξηγηματικό σχόλιο στην δήλωση
της συνάρτησης το οποίο θα περιγράφει
  * οποιοδήποτε κόλπα χρησιμοποιήθηκαν κατά την δημιουργία της συνάρτησης
αυτής,
  * θα παρουσιάζει συνοπτικά τα βήματα που εκτελούνται κατά την λειτουργία
της συνάρτησης
  * και θα εξηγεί γιατί δεν προτιμήθηκε κάποιος άλλος τρόπος υλοποίησης.
*  Όταν σε μία συνάρτηση περνιούνται σαν ορίσματα μεταβλητές boolean, ή
ακέραιες μεταβλητές, ή κενοί δείκτες θα πρέπει να υπάρχουν σχόλια τα οποία
θα επεξηγούν τί κάνουν αυτές οι τιμές.

[include](../../code_examples/documentation_functions_2.cpp)

### Κλάσεις


* Κάθε κλάση πρέπει να έχει ένα συνοδευτικό σχόλιο το οποίο θα περιγράφει
την κλάση και πως πρέπει να χρησιμοποιείται.
* Τα μέλη των συναρτήσεων θα πρέπει να έχουν ένα σχόλιο το οποίο περιγράφει
την χρήση τους. Ακόμα αν μπορούν να λάβουν τιμές με ιδιαίτερη σημασία θα
πρέπει να αναφέρονται στα σχόλια.
* Γενικά ένα αρχείο επικεφαλίδας θα περιγράφει τις κλάσεις που δηλώνονται
μέσα στο αρχείο με μία επισκόπηση στο τί κάνει η κάθε κλάση και πως
χρησιμοποιείται. Αντιθέτως ένα πηγαίο αρχείο πρέπει να περιέχει περισσότερες
πληροφορίες για την υλοποίηση της κλάσης ή πολύπλοκων αλγορίθμων.

[include](../../code_examples/documentation_class.cpp)

{% references %} {% endreferences %}




