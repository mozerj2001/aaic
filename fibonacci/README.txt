2023 Március - Mózer József

Sejtés: A Fibonacci keresés ciklusos megvalósítása gyorsabb, mint a rekurzív megvalósítása,
mert a függvényhívások sorozata sok fölösleges processzorutasítással jár.

Teszt tervezet: 
    1. Fibonacci keresés megvalósítása rekurzívan és ciklusban.
    2. Algoritmusok összehasonlítása véletlenszerűen generált számhalmazokon.
    3. Lehetséges optimalizációk elvégzése.
    2. Algoritmusok újbóli összehasonlítása véletlenszerűen generált számhalmazokon.

PROGRAMOZÁS KÖZBENI ÉSSZREVÉTEL: A rekurzív megoldás programkódját jelentősen
komplikálja annak az esetnek a kezelése, amelyben a keresett elem nincs benne a
tömbben, ugyanis minden iterációban ellenőrizni kell, hogy -1-et adott-e vissza
a függvény. Így a rekurzív megoldás valószínűleg nem csak lassabb, de kevésbé
elegáns is lesz.