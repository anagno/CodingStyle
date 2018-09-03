## [Vertikale Ausrichtung](#alignment)

Es ist oft nützlich, dass  ähnliche Elemente vertikal  ausgerichtet werden, 
damit die Schreibfehler sichtbar sind {{ "wiki:Programming_style" | cite }}.
Zum Beispiel:

[include, title:"Vertikale Ausrichtung (1)"](../../code_examples/alignment_1.cpp)

und

[include, title:"Vertikale Ausrichtung (2)"](../../code_examples/alignment_2.cpp)

Das letzte Beispiel macht zwei Dinge intuitiv klar, die es vorher nicht waren:

* die Variablen search und replacement sind miteinander verwandt
* und es gibt noch ein Element  in der Variable search als in der Variable
replacement. Wenn es um irgendeinen Fehler geht, ist jetzt wahrscheinlicher, 
dass er lokalisiert wird. 

Dennoch wird bemerkt, dass es viele Argumente gegen die vertikale Ausrichtung
gibt, wie:

* **Zerbrechlichkeit:** Wenn ein Entwickler irgendeine Änderung auf der 
"Tabelle" macht und sie nicht ordnet, hat das die Verschlechterung der
Elementseherscheinung als Ergebnis, die bei jeder Änderung noch schlechter
wird. 
* **Schwierigkeit bei der Wartung:** Die Tabellenformatierung erfordert mehr Bemühung, um erhalten zu bleiben.

{% references %} {% endreferences %}
