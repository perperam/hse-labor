# HSE Fragen -> Antworten
## Aufgabenteil B
- Beim Auslesen des ADC1 wird dert wert aus dem regular Data SFRs gelesen.(Im Debugger oben rechts auf SFRs klicken und regularData eingeben.) Im Datenblatt in Kapitel 13.5.14 oder Seite 301

- Wenn man die Spannung nah am Schwellwert einstellt, beginnt ein Flackern bzw. dimmen der LED. Dies geschieht, weil die gemessene Spannung nicht ganz konstant ist und zwischen an und aus umherr springt.

- Der Gleitende Mittelwert wird umso besser darin ein flakern/dimmen heraus zu filtern je größer das Fenster bzw. N gewählt wird. Allerdings verbrauchen größere Fester auch mehr Speicher, weil der Buffer gespeichert werden muss. Außerdem macht es das reagieren auf den Eingang träge.

- Der gleitende Mittelwert berechnet besser den momentanen Zustand im gegensatz zum Mittelwert über den gemsanten Zeitraum. Außerdem benötigt die rekusieve Formel weniger Rechenaufwand, weil die gesamte Summe über alle Datenwerte nicht jedes mal neu berechnet werden muss.

- Ein Soft- oder Hardware Seitieger Schmitt-Trigger könnte den Mittelwertsfilter ersetzen

## Aufgabenteil C
- Der Timer wird mit einem Prescaler von 64 auf 1Mhz gestellt. Das heißt der Zähler des Timers wird alle 1/1Mhz = 1µs erhöht.
- Das Menschliche Auge sieht änderungen von ca. 30 fps = 33 ms.
- Die Periodendauer des PWM Timers (Counter Period) kann nun auf 10000 eingesellt werden, das heißt 10ms welche bei einem Duty Cycle von 50% also 5ms nicht sichtbar sind.
- Erst ab einer Periodendauer von ca. 60ms also einer Counter Period von 60000 kann das Auge das Flackern sehen

## Aufgabenteil D
- Das Entprellen kan mittels RC-Filter oder Schmitt-Trigger erreicht werden.
Annahmen: Highacitve logic und Taster schließt beim drücken 

- Rising Edge > Trigger beim loslassen des blauen Tasters (Pull-Up Widerstand)
- Falling Edge > Trigger beim drücken des blauen Tasters (Pull-Up Widerstand)

