# Kommentar und Documentation (Engl. Commenting and Documentantion) ({{ "wikibook:cpp_style" |cite }})

Dokumentation und Kommentar des Quellcodes ist bei seiner Produktion einer
der wichtigsten Prozesse. Obwohl sie mit der Codezweckmäßigkeit
nicht direkt verbunden ist, ist sie indirekt mit seiner
Erweiterungsmöglichkeit verbunden, da sie weitsichtigerweise die Absichten
des ursprünglichen Entwicklers deutlich macht.

Für die Dokumentation geeignete Themen umfassen oft:
* Allgemeine Programmschilderung. Sie muss umfassen:
  * Einen Überblick über den Zweck, zu dem-wozu das Programm entwickelt wurde.
  * Ein einfaches Programmgebrauchsbeispiel.
  * Erlernungsanweisungen für den Grundprogrammgebrauch.
* Dokumentation des Quellcodes. Die Dokumentation des Codes umfasst:
  * Klassen- und Funktionsschilderung des Programms.
  * Den Zusammenhang zwischen den Klassen und Funktionen.
  * Für jede Funktion, je nach dem Fall, eine Beschreibung, die
Voraussetzungen  für ihre richtige Funktion, ihre Ergebnisse, den
Rückgabewert sowie mögliche Fehler, die vorkommen können.
  * Fehlerlokalisierung und Strategien für Ihre Vermeidung.
  * Wie kann das Programm kompiliert und gelinkt werden.
  * Die Programmversion und mögliche Änderungen, die gemacht worden sind.
  * Begründung für die Planungsbeschlussfassung.
  * Irgendein Dankeschön.

Με τα σχόλια και την τεκμηρίωση διασφαλίζεται ότι ο κώδικας έχει περιγραφτεί με επαρκείς λεπτομέρειες έτσι ώστε όταν κάποιος κοιτάζει τον πηγαίο κώδικα θα μπορεί εύκολα να καταλάβει το σχεδιασμό και το σκοπό του κώδικα
({{ "wikibook:cpp_style" |cite }}).

## Generalkommentare ({{ "site:linux_style" |cite }},{{ "sutter2004c" |cite }},{{ "wiki:coding_practices" |cite }},{{ "site:google_style" |cite }})

* Im Allgemeinen müssen die Kommentare im Quellcode beschreiben **WAS** und
nicht **WIE** sie machen.
* Die besten Kommentare im Quellcode ist der Quellcode selbst. Aus diesem
Grund muss sich der Quellcode von selbst belegen. Es ist besser, dass etwas
durch den Quellcode an und für sich erklärt wird (z.B. durch den Gebrauch
irgendeines komplexen Variablennamens), anstatt später Kommentare zu
gebrauchen, die erklären, wozu die Quellcode dient.
* Kommentaren müssen in:
  1. komplexe, 
  1. nicht offenkundige, 
  1. interessante oder
  1. wichtige Quellcodestellen aufgestellt werden.

Vor diesen Stellen müssen kleine Kommentare aufgestellt werden, die
erläutern, was der Quellcode tut. Zum Beispiel: 

[include](../../code_examples/documentation_comments.cpp)

* Wenn sich die Kommentare in ziemlich vielen Linien ausstrecken, kann sie
die Ausrichtung leichter lesbar machen.  Zum Beispiel:

[include](../../code_examples/documentation_comments_2.cpp)

## Entitätskommentare

In diesem Kapitel erwähnt einige von den verbreitetesten Arten, die gebraucht werden, um die Quellcodeentitäten zu erläutern. 

### Programmdateien

* Jede Datei muss die Quellcodelizenz enthalten (z.B. Apache 2.0, BSD, LGPL,
GPL). Die Lizenzauswahl ist sehr eine komplexe Prozedur, die dennoch nicht
vernachlässigt werden muss.
* Der Quellcodeautor muss enthalten werden.
* Jede Datei muss einen Kommentar haben, der ihre Inhalte beschreibt. 

[include](../../code_examples/documentation_files.cpp)

### Variablen

* Im Allgemeinen muss der Variablenname ziemlich  beschreibend sein, so dass
er dem Entwickler die Möglichkeit gibt, zu verstehen, aus welchem Grund die
gewisse Variable gebraucht wird. In bestimmten Fällen braucht man noch einige
Kommentare. 

[include](../../code_examples/documentation_variables.cpp)

### Funktionen (1)

* Jede Funktionsdeklaration muss Kommentare haben, die der Funktion
vorausgehen und beschreiben, was die Funktion macht und wie sie gebraucht
wird. Im Allgemeinen beschreiben die Kommentare über der Funktionsdeklaration
den Gebrauch einer Funktion, während die Kommentare in der
Funktionsrealisierung deren Funktionsrolle beschreiben.
* Bei der Funktionsdeklaration müssen folgende Punkte erwähnt werden:
  * Die Eingabevariablen und die Variablen, die die Funktion zurückgibt.
  * Wenn die Funktion Speicher einnimmt, den der Entwickler frei machen muss
(Das ist der Fall in Programmsprachen, wobei sie keinen Speicherabfallsammler
besitzen (Εngl. garbage collection), wie C++). 
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




