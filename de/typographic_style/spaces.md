## Abstände

Die Kodierungskonventionen, die mit den Abständen im Zusammenhang stehen [^1],
werden zur Verstärkung der Lesbarkeit des Quellcodes gebraucht. Es gibt keine
bekannten Forschungen, die behaupten, dass die Abstände bei der 
Quellcodelesbarkeit helfen würden, aber bei einem einfachen Vergleich des 
weiter unten liegenden Codes wird es gezeigt, dass sie schwach beim besseren
Codeverständnis helfen. Zum Beispiel {{ "wiki:Programming_style" | cite }}: 

[include, title:"Abstände (1)"](../../code_examples/spaces_1.cpp)

έναντι

[include, title:"Abstände (2)"](../../code_examples/spaces_2.cpp)

Der Gebrauch von Abständen im Quellcode ist gleich wie in den Regeln der 
englischen Sprache. Das bedeutet {{ "site:codding_matters" | cite }}:

1. Die meisten Grundsymbole in den Programmiersprachen (z.B. ”=”, ”+”, u.v.a.)
müssen wenigstens einen  Abstand vorher-davor  und einen Abstand danach haben, 
mit den unten liegenden Ausnahmen:
  1. Es gibt keinen Abstand vor einem Komma oder vor einem Fragezeichen.
  1. Es gibt keinen  Abstand vor oder nach einem Punkt.
  1. Es gibt keinen Abstand zwischen den Binäroperatoren (z.B. ”->”, ”++”).
1. Mehr als ein Abstand kann für die Elementausrichtung gebraucht werden 
(wie bei der Vertikale Ausrichtung).
1. Leere Zeilen können auch für die Separation logischer Codeblocks gebraucht 
werden, wie
  1. Am Anfang des Quellcodes, wo es Direktive include, const, typedef, usw. 
gibt.
  1. und in Quellcodestücken, die ausgedehnt sind und in denen-worin es separate Teile gibt und die durch eine leere Zeile separiert werden können.

[^1]: Die Abstände, die tabs und die Zeilenwechsel heißen Abstände

{% references %} {% endreferences %}
