# Σύγκριση με βάση το αριστερό μέλος ({{ "wikibook:cpp_style" |cite }},{{ "deitel2011c" |cite }}, {{ "programming2003high" |cite }})

Στις γλώσσες προγραμματισμού που χρησιμοποιούν διαφορετικά σύμβολα για την
ανάθεση τιμής (συνήθως ένα σύμβολο ίσον (=) ) και για την σύγκριση 
(συνήθως δύο ίσον (==) ) (π.χ. C/C++, Java και η πλειοψηφία των γλωσσών 
τα τελευταία 15 χρόνια), και όπου οι αναθέσεις τιμών είναι συντακτικά 
σωστές μέσα σε δομές ελέγχου ή επαναληπτικούς βρόχους υπάρχει ένα
πλεονέκτημα στην υιοθέτηση της σύγκρισης με βάσης το αριστερό μέρος και 
την τοποθέτηση των σταθερών ή των εκφράσεων προς τα αριστερά σε κάθε
σύγκριση.

Στα επόμενα προγράμματα φαίνονται τα πλεονεκτήματα της υιοθέτησης της
σύγκρισης με βάση το αριστερό μέλος. Και στις δύο περιπτώσεις θέλουμε να
συγκρίνουμε την τιμή του a με το 42. Στο πρώτο πρόγραμμα δεν υπάρχει κάποια
διαφορά μιας και στις δύο περιπτώσεις η σύγκριση πραγματοποιείται σωστά.

[include](../../code_examples/comparison_1.cpp)

Η διαφορά και το πλεονέκτημα της σύγκρισης με βάση το αριστερό μέρος
προκύπτει όταν ένας προγραμματιστής πληκτρολογήσει = αντί για ==.

[include](../../code_examples/comparison_2.cpp)


Στην πρώτη περίπτωση λοιπόν η τιμή του a θα αλλάξει σε 42, με αποτέλεσμα ο
κώδικας μέσα στην δομή ελέγχου if να εκτελείται πάντα και καθώς
η έκφραση αυτή είναι συντακτικά σωστή, το σφάλμα μπορεί να περάσει
απαρατήρητο από το προγραμματιστή, και το λογισμικό μπορεί να κυκλοφορήσει
με σφάλμα. Αντιθέτως στην δεύτερη περίπτωση θα έχουμε σφάλμα κατά την
μεταγλώττιση του προγράμματος, καθώς δεν μπορούμε να αναθέσουμε τιμές σε
αριθμητικές τιμές. Επομένως το σφάλμα θα διορθωθεί σίγουρα.


{% references %} {% endreferences %}
 






