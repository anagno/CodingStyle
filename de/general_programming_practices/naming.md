# Regeln der Namensgebung 

Die Namenswahl (von Programmdateien, Variablen, Funktionen, usw.) ist eines
der wichtigsten Elemente, die den Quellcode verständlicher macht. Die Weise,
worauf man einen Variablennamen schreibt, kann uns unmittelbar informieren,
was dieses Element repräsentiert, wie z. B. ob eine Variable, Funktion,
Konstant usw. ist, ohne die Registrierung dieses Elementes suchen zu müssen.
Ferner  müssen die Namen irgendeinen Sinn haben und dem Entwickler die Möglichkeit geben, den Quellcode leichter zu begreifen und zu lesen.
Ein Name, der anmutig ist, oder leicht zu tippen ist, kann später bei
jemandem Probleme hervorrufen, der den Quellcode zu verstehen. Der Quellcode wird mehrmals gelesen, aber nur einmal geschrieben. Aus diesem Grund spielt
die Namenskonventionen eine entscheidende Rolle und der Variablenname muss
die Variable, die er repräsentiert, vollends und genau beschreiben
({{ "site:fx_alpha" |cite }},{{ "site:taligent" |cite }},
{{ "site:google_style" |cite }}).

Die Namenskonventionen sind ziemlich willkürlich, und aus diesem Grund sind
die Konventionen, die weiter unten aufgeführt werden, eher Empfehlungen oder Konventionen, die von einem großen Entwicklerteil adoptiert worden sind, und keine Regeln. 

Was da von Bedeutung ist, ist die konsequente Einhaltung der etwaigen
Konventionen, die gewählt worden sind, oder die ursprünglichen Schöpfer des
Quellcodes gebraucht {{ "site:google_style" |cite }}.

## Generalnamenskonventionen ({{ "site:google_style" |cite }},{{ "site:fx_alpha" |cite }},{{ "site:geosoft" |cite }},{{ "sutter2004c" |cite }},{{ "kernighan1988c" |cite }})


* Eine wirksame Technik für die Auffindung repräsentativer Namen ist die
Erklärung mit Worten, was die Variable repräsentiert.

* Die Namen, die man wählt, müssen repräsentativ sein, so dass der Quellcode
sofort verständlich ist. Man darf keine Abkürzungen gebrauchen, die
denjenigen unklar oder unbekannt sind, die den Quellcode zum ersten Mal
lesen. Ferner darf man keine Abkürzungen durch das Streichen  von
Buchstaben innerhalb der Wörter gebrauchen. Weiter unten folgen einige "gute"
und "schlechte" Variablennamen.

[include](../../code_examples/naming_1.cpp)

* Die Variablenlänge muss ihre Reichweite widerspiegeln. Eine Lokal-Variable
hat eine geringe Reichweite, folglich braucht auch der Name nicht so
beschreibend zu sein. Im Gegenteil muss eine Global-Variable von großer
Reichweite einen repräsentativen und beschreibenden Namen haben, damit sie
leicht zu unterscheiden ist.

* Die Abkürzungen und Kurzformen müssen großgeschrieben werden, wenn sie 
als Variablennamen gebraucht werden.

* In der Wiederholungsschleifen müssen Namen mit bestimmter Bedeutung
gebraucht werden, wie in den weiter unten stehenden Beispielen:

[include](../../code_examples/naming_2.cpp)

## Namenskonventionen

Die weiter oben Einheit erwähnt einige von den verbreitesten Regeln, die bei
den Namenskonventionen gebraucht werden. In erster Linie werden Regeln für
die C++ umfasst, aber sie können auch in die übrigen Programmsprachen
verallgemeinert werden. 

### Programmdateien

* Für die Programmdateien muss man einen Namen aussuchen, der den Inhalt der
Datei widerspiegelt.
* Die Dateinamen müssen alle (in Klein-buchstaben sein) kleingeschrieben
werden und sie können den Unterstrich (_) oder den Oberstrich (-) umfassen. 
* Die Programmdateien von C++ müssen in .cpp und von C in .c, aber die 
Header-Dateien in .h enden. 

[include](../../code_examples/naming_files.cpp)

### Defines & Macros

* Die Prozessordeklarationen und die Macros müssen in Großbuchstaben sein.
Ferner müssen die Prozessordeklarationen für die Programmdateien mit einem
Unterstrich (_) enden.

[include](../../code_examples/naming_defines.cpp)


### Variable

* Die Variablennamen (engl. Variables) sind alle in kleingeschrieben, mit
Strichen zwischen den Wörtern.
* Für die globalen Variablen gibt es keine besonderen Ansprüche, da ihr
Gebrauch selten ist, aber wenn auf jeden Fall manche gebraucht wird, wäre es
gut, differenziert zu werden, indem man ein g_ oder irgendein anderes Merkmal
voranstellt, das sie von den Lokal-Variablen differenziert. 

[include](../../code_examples/naming_variables.cpp)

### Funktionen

* Die Funktionen (Engl. functions) müssen camelCased[^1] sein und die
Variablen müssen  kleingeschrieben  sein, mit Unterstrich zwischen den
Wörtern.
* Der Rückgabetyp jeder Funktion muss in eine andere Zeile gesetzt werden.
* Man muss ein Verb als Namen auswählen,  das die Funktionstätigkeit
reflektiert. Man sollte Namen auswählen/es sollten Namen gewählt werden, die
die Problemelemente reflektieren und nicht die Problemlösung. 

[include](../../code_examples/naming_functions.cpp)

### Typennamen

* Die Typennamen (Engl. Type names) sind CamelCased. Das heißt, dass sie mit
einem Großbuchstaben anfangen und auch jedes neue Wort mit einem
Großbuchstaben anfangen muss, ohne dass ein Unterstrich (_) davor steht.

[include](../../code_examples/naming_type_names.cpp)

### Strukturen

* Die Glieder/Teile einer Struktur müssen als normale Lokalvariablen
aufgeschrieben werden.

[include](../../code_examples/naming_struct.cpp)

### Enum

* Die Glieder der Aufzählungen (Engl. enumerations) müssen großgeschrieben
sein, mit Strichen zwischen den Wörtern. Mit den Großbuchstaben werden diese
Variablen in einem Programm unterschieden und sie werden nicht mit den
einfachen Variablen verwechselt. 

[include](../../code_examples/naming_enum.cpp)

### Klassen (1)

* Die Teile einer Klasse müssen folgendermaßen eingeordnet werden:
öffentlich, geschützt (Engl. public, protected) und privat (Engl. private).
So dass die Entwickler, die die Klasse einfach gebrauchen wollen, nicht auch
die privaten Klassenglieder lesen müssen.

* Die privaten Klassenglieder sind genau so wie die einfachen Variablen, nur
dass sie mit einem Unterstrich (_) enden müssen. Wenn man die Breite
mit einem Unterstrich markiert, macht man die Klassenvariablen-trennung 
der gebrauchten  Lokal-Variablen leichter.

[include](../../code_examples/naming_class.cpp)

### Klassen (2)

* Eine Klasse muss in einer Header-Datei (Engl. header file) deklariert
und in einer Quelldatei (Engl. source file) definiert werden, deren Dateinamen so wie die Klassennamen dieselben  sind, so dass die Auffindung
der entsprechenden Dateien leichter ist. Die Header-Datei muss eine
Schnittstelle deklarieren und die Quelldatei muss sie realisieren.
* Die Dateien, die die Klassen realisieren, haben die Endung .hpp .
* Die Abfragefunktion (Engl. aceessors,mutators) oder Funktionen get und set) müssen mit dem Variablennamen gleich sein, auf den sie sich beziehen


[include](../../code_examples/naming_class_2.cpp)

## Unterordner

In weiter unten wird die typische Ordnerstruktur eines typischen Programms
präsentiert. Gleichfalls  auch da sind diese Ordner die meistens benutzten
Ordner. 

| Υπο-φάκελος   | Περιεχόμενα                             |
| :------------ |:--------------                          |
| include       | Die Header-Dateien.                     |
| include/impl/ | Die die Klassen realisierenden Dateien. |
| src           | Die Quelldateien, die für die Programmkompilierung nötig sind.                                                     |
| build         | Die ausführbaren Programmdateien.       |
| doc           | Die ausführbaren Programmdateien.       |


[^1]: CamelCase ist die Praxis der zusammengesetzten Wörter- oder Phrasen/Satzschriften, so dass jedes Wort  oder jede Abkürzung mit einem Großbuchstaben beginnt. Das ermöglicht die Verringerung der Größe der Sätze, da kein  Abstand oder irgendein anderer spezifischer Charakter zwischen den Wörtern gebraucht werden (z.B. "_" {{ "wiki:camelCase" |cite }},{{ "site:yolinux" |cite }})

{% references %} {% endreferences %}

