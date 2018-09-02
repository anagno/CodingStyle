# Einführung

Kodierungskonventionen sind die Gesamtheit  von Regeln oder Richtlinien, 
die bei der Verfassung des Quellcodes eines Computerprogramms in einer 
bestimmten Programmiersprache verwendet werden, die vorschreiben, welche 
bestimmten Praktiken und Methoden für jeden Teil eines Programms in der 
bestimmten Sprache verwendet werden sollen. Zweck der Kodierungskonventionen 
ist abzusichern, dass der Quellcodex so geschrieben ist, dass sowohl seine
Lesbarkeit als auch seine Wartungsmöglichkeit verbessert wird 
({{ "wiki:coding_convetions" | cite }}, {{ "wiki:Programming_style" | cite }},
{{ "ala2004supporting" | cite }}, {{ "Mohan" | cite }}, {{ "Oman" | cite }}).

Die Gesamtheit der Regeln, die beim Verfassen des Quellcodes gelten, können in 4 Bereiche geordnet werden {{ "Mohan" | cite }}:

![Η ταξινόμηση του προγραμματιστικού στυλ {{ "Oman1991287" |cite }}.
](../images/style_taxonomy.png)


* **Typographische Stile:** Regeln ,die mit der Anordnung und Erscheinung des
Quellcodes sowie Kommentarverwendung zu tun haben, aber nicht mit der
Programmausführung. 
* **Generelle Programmierpraktiken:** Regeln und Richtlinien bezüglich der
Methodologie und Sprache, die verwendet werden und den Quellcodex beeinflussen. 
* **Kontrollstrukturen:** Regeln bezüglich der Algorithmennutzung und 
-realisierung.
* **Informationsstrukturen:** Regeln bezüglich von Datenstrukturen, 
Programmfluss sowie Datenspeicherung und -behandlung. 

In dieser Arbeit werden die zwei ersten Themen entwickelt werden (Typographischer Stil und Generelle Programmierpraktiken). Diese Richtlinien dienen zur strukturellen Softwarequalität [^1] (Engl. Software structural quality)
Es kommt oft das Argument vor, wenn einer Kodierungskonvention gefolgt wird, 
kann sie beim Lesen und Verständnis des Quellcodes (helfen) und noch mehr bei 
der Fehlervermeidung und der Qualitätsbesserung des Quellcodes helfen ({{ "ala2004supporting" | cite }}, ({{ "Ayerbe" | cite }}, 
({{ "Cox" | cite }}, ({{ "WangZH08" | cite }}). 

![Η σχέση μεταξύ προγραμματιστικού στυλ και ποιότητας λογισμικού 
{{ "WangZH08" |cite }}.](../images/coding_standard_to_software_quality.png)

Die Vereinbarungen, die erfolgen, wenn einer bestimmten Kodierungskonvention
gefolgt wird, helfen  nur den Programmquellcodewärtern und -korrektoren. Die
Kodierungskonventionen werden vom Compiler nicht auferlegt. So hat ein Programm,
das manche oder alle Regeln nicht befolgt, keinen Einfluss auf die ausführbare
Programmdatei, die vom Quellcode geschaffen wurde
({{ "wiki:coding_convetions" |cite }},{{ "wiki:Programming_style" |cite }}).

Der Verfassungsstil ist ein Element, das oft übersehen wird, aber er ist
ein sehr kritisches Merkmal der Kodierungskonventionen. Der Kodierungsstil
beeinflusst direkt die Wiedererkennbarkeit und Verständnis des Endprodukts.
Ebenso auch die Kodierungskonventionen, die das Quellcodeverfassen in einer
Programmsprache ist, leiden auch an diesem Übersehen. Die Programme müssen 
lesbar und verständlich sein, nicht nur von den Maschinen sondern auch vom 
Menschen. Diese Forderung ist wichtig für die Herstellung von qualitativen
Produkten, die nicht nur den Benutzerbedürfnissen entsprechen, sondern sie 
können auch innerhalb eines Zeitplanes und vorberechneten  Kosten entwickelt 
werden. Das wirksame Quellcodeverfassen ist schon seit langer Zeit untersucht
worden, d.h. seit den ersten vorhandenen Programmsprachen, wie Fortan 
{{ "Kernighan" |cite }} aber es ist immer noch ein Brennpunkt  - eine 
wichtige Frage ({{ "ala2004supporting" |cite }},{{ "Kondoh200682}" |cite }}). 

Der Programmierungsstil, der in einem Programm gebraucht wird, können auf 
den Kodierungskonventionen beruhen, die eine Firma oder ein anderer Träger
gemacht hat, die sich mit dem Quellcodeverfassen beschäftigt (z.B. 
{{ "gnu_coding" |cite }}, {{ "site:gnu_style" |cite }},
{{ "site:google_cpp" |cite }}, {{ "site:google_style" |cite }},
{{ "site:gnu_conventions" |cite }}, {{ "site:boost_guidelines" |cite }},
{{ "site:linux_style" |cite }}}) sowie die Vorlieben des Autors selbst. 
Es gibt zahlreiche Schriftkonventionen, die gebraucht werden, um einen 
konsequenten  Code  sicherzustellen. Die Schriftkonventionen sind für die
Softwareentwickler sehr wichtig, denn sie können ziemlich viele Vorteile 
anbieten wie ({{ "wikibook:cpp_style" |cite }}, 
{{ "wiki:coding_convetions" |cite }}, {{ "sutter2004c" |cite}}):

* **Software-Wartung (Engl. Software maintenance):**Softwarewartung 
repräsentiert mindestens 50% der Softwaredauerkosten ({{ "Mohan" |cite }}, 
während in anderen Forschungen steht, dass 40% bis 80% der 
Softwaredauerkosten für die Softwarewartung ausgegeben werden
(({{ "robert2003facts" |cite }}, ({{ "wiki:coding_convetions" |cite }}). 
Die Wartungskostenreduzierung ist der häufigst genannte Grund für den 
Gebrauch der Kodierungskonventionen. Fast kein Programm wird vom 
anfänglichen Schöpfer erhalten-gewartet. So helfen diese 
Kodierungskonventionen beim besseren.

* **Softwarequalität (Engl. Software quality):** Die Codeevaluierung
und -verbesserung schließt oft das Quellcodelesen von Dritten ein. 
Per Definition hat nur der anfängliche Autor den Quellcode vor seiner 
Bewertung gelesen. Der Quellcode, der einige Konventionen einhält, ist 
für die anderen verständlicher und folglich wird das 
Fehlerermittlungsverfahren leichter. 

* **Sie reduzieren die Komplexität:** Je komplexer ein Softwarewerk ist,
desto wahrscheinlicher ist, Fehler zu haben. Die richtigen 
Kodierungskonventionen helfen bei der Auffindung dieser Fehler und bei der
Quellcodekomplexitätsreduzierung.

* **Verbesserte Entwicklungsschnelligkeit und bessere Gruppenarbeit:** 
Entwickler brauchen nicht immer von Grund auf neu  anzufangen und sie haben 
eine solide Basis für die Softwareentwicklung, während gleichzeitig die
Kodierungskonventionen zur Reduzierung der überflüssigen Diskussionen über
unwichtige Fragen beitragen, und die Zusammenarbeit zwischen den
Entwicklern erleichtern.


Endlich werden die Felder, die von der Wahl der Kodierungskonventionen beeinflusst werden, kurz in der Grafik abgebildet.

![Τα πεδία που επηρεάζονται από την επιλογή ενός στυλ κώδικα
{{ "ala2004supporting" |cite }}.](../images/style_quality.png)


[^1]: Die strukturelle Softwarequalität bezieht sich darauf, wie die nicht funktionalen Aspekte (z.B. Kommentare, usw.), bei der Realisierung der funktionalen Aspekte helfen, wie die Programmzuverlässigkeit oder die Erleichterung der Programmwartung ({{ "wiki:Software_quality" | cite }}).

{% references %} {% endreferences %}






