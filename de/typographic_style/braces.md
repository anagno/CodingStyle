## [Klammern](#braces)

In den Programmiersprachen, die Klammern erlauben, ist es üblich, dass sie 
gebraucht werden, selbst wenn ihr Gebrauch nicht notwendig ist. Ihr Gebrauch
ist in-bei allen Wiederholungsschleifen und Kontrollstrukturen erlaubt. 
Zum Beispiel: 

[include, title:"Klammern (1)"](../../code_examples/braces_1.cpp)

Bei Klammergebrauch kann man logische Fehler abwenden, die meistens auch
zeitaufwändig δαπανηρό zeitraubend ληστρικό zu lokalisieren sind, wie wenn 
ein Zielfragezeichen im  Quellcode fälschlicherweise eingeführt wird.

[include, title:"Klammern (2)"](../../code_examples/braces_2.cpp)
 
Ein ähnlicher Fehler kommt vor, wenn eine zusätzliche Zeile vor die erste
Zeile hinzugefügt wird:

[include, title:"Klammern (3)"](../../code_examples/braces_3.cpp)

Aus diesem Grund ist der Klammergebrauch etabliert-eingeführt worden, wie im:

[include, title:"Klammern (4)"](../../code_examples/braces_4.cpp)

Im weiter oben Algorithmus sowohl der Anfang als auch das Ende des 
Befehleblocks deutlich zu sehen. Es gibt auch weitere Methoden zum Aufstellen
der Klammern (wie z.B. die erste/anfängliche Klammer wird gleich nach der
Wiederholungsschleife aufgestellt, wie auch in dem ersten Algorithmus), die
sich nicht von der Weise unterscheiden, die im oben liegenden Algorithmus 
beschrieben werden. Diese kleinen Unterschiede beeinflussen die 
Quellcodelesbarkeit nicht, aber es muss beim Klammergebrauch eine gewisse
Konsequenz geben {{ "sutter2004c" | cite }}.

{% references %} {% endreferences %}

