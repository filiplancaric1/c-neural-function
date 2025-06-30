# c-neural-function

Tento projekt slúži na výpočet a zobrazenie tabuliek s hodnotami najčastejších aktivačných funkcií neurónov.

Program je napísaný v jazyku C. Preklad a spustenie:

Program je napísaný v jazyku C. Preklad a spustenie:

gcc z1.c -o z1 -lm
./z1

Vstupné údaje
Pri spustení program očakáva nasledujúce hodnoty zo štandardného vstupu:

Kopírovať
Upraviť
xstart xstop step precision width [funkcie...] X
xstart, xstop – rozsah hodnôt x (napr. -5 5)

step – krok medzi hodnotami (napr. 0.5)

precision – počet desatinných miest vo výstupe

width – šírka stĺpca vo výpise

funkcie – voliteľné čísla aktivačných funkcií (napr. 1 2 5)

X – nenumerický znak na ukončenie vstupu (napr. x alebo m)

Aktivačné funkcie
Číslo	Funkcia
1	Binárna skoková funkcia
2	ReLU
3	Squareplus
4	Gaussova
5	Hyperbolický tangens
6	Swish

Príklady použitia
Auto režim (vypočíta všetky funkcie)
bash
Kopírovať
Upraviť
./z1
-5 5 1 2 10 x

Manuálny režim (len vybrané funkcie)
bash
Kopírovať
Upraviť
./z1
-2 2 0.5 3 8 1 3 5 m
Chybové hlášky
E1 – neúplné alebo nečíselné vstupy

E2 – xstart ≥ xstop (neplatný interval)
