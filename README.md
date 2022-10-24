# Anteckningar-2022-10-24
Implementering av externa avbrott på mikrodator ATmega328P.

Filen header.h innehåller diverse definitioner och inkluderingsdirektiv för ett inbyggt system innehållande två lysdioder
anslutna till pin9 - 10 samt två tryckknapp anslutna till pin  2 - 3.

Filen main.c innehåller implementeringen av programmet, där det inbyggda systemet initieras vid start. Eftersom resterande program är
helt avbrottsdrivet så används en while-sats enbart för att hålla igång programmet så länge matningsspänning tillförs.

Filen setup.c innehåller initieringsrutiner för att konfigurera I/O-portar samt aktivera externa avbrott INT0 - INT1 på pin 2 - 3.

Filen led.c innehåller en togglingsfunktion för lysdioderna, som möjliggör toggling av specificerad lysdiod.

Filen interrupts.c innehåller avbrottsrutiner för externa avbrott INT0 - INT1, som medför toggling av respektive lysdiod,
beroende på vilken avbrottsrutin som anropas.

Filen 2022-10-24 Fördjupning.zip utgör en mer avancerad version av systemet, där lysdioderna togglas mellan att blinka i en slinga
samt vara avstängda. Pekare används för att direkt avbryta eventuell blinkning ifall en given lysdiod inaktiveras.
