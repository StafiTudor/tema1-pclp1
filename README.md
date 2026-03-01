314CA-Stafi Tudor
Problema1:Un produs infinit
Citim perechi de numere a si b, (citirea se face cu %o pentru baza 8)
pe care le prelucram pentru a calcula suma produselor(produs scalar)/ al doilea cel
mai mare numar din fiecare dintre cei doi vectori. La final se calculeaza
radicalul din suma valorilor la patrat din fiecare vector. Afisarea se face cu %.7 pentru
a se afisa doar 7 zecimale, in cazul in care exista mai multe.

Problema2:Perfectionarea punctajelor
Se citeste n, si apoi 2*n numere: primele n se salveaza intr-un vector reprezentand
mediile lui Mihai la anumite materii, iar urmatoarele n, numarul de credite corespunzatoare
fiecarei materii. Inca din citire se calculeaza punctajul total, creand si un 
vector nou care contine doar punctajele la care elevul nu are deja 10. Acest 
vector se sorteaza descrescator. Punctajul total se compara cu o valoare citita de la
tastatura. Daca aceasta este mai mica, se va aduna cate un element din vectorul sortat,
si se vor compara din nou, contorizandu-se intr-o variabila cate elemente au fost
adunate pana cand se atinge valoarea sau se depaseste. Se va afisa -1 in cazul in 
care nu se poate atinge valoarea.

Problema3:Gigel si tabla de sah
Dupa citirea datelor de intrare, pentru a evita parcurgerea liniei/coloanei de prea multe ori 
in cazul unei valori mari dintr-un anumit patrat, se calculeaza restul impartirii valorii la 
n ( nr de linii ). Pentru a evita parcurgerea liniei/coloanei de prea multe ori in 
cazul unei valori mari dintr-un anumit patrat, se calculeaza restul impartirii
valorii la n ( nr de linii ). Se marcheaza in repetitiva while fiecare patrat
deja atins cu valorea INT_MAX. Se verifica daca suma indicilor este para sau impara. 
Pentru valoare para ne aflam pe un patrat alb, si pe unul negru pentru impara.
Apoi in functie de paritate, se verifica daca valoarea este pozitiva/negativa. Pentru
fiecare dintre cele 4 cazuri(par pozitiv/par negativ/impar negativ/impar pozitiv) se
calculeaza pozitia viitoare prin formule specifice, deduse matematic. Se tine minte
suma modulelor tuturor valorilor din patratele parcurse. Repetitiva se opreste daca
se ajunge din nou la valorea INT_MAX(deja parcurs). Daca valoarea coloanei depaseste 25,
fiind numerotate de la 0 la 25(A=0, Z=25), se calculeaza perechile de litere prin 
formule deduse matematic: c1 = y / 26 + 64; c2 = y - (y / 26) * 26 + 65; 26 fiind 
numarul total de litere din alfabetul englez, 65 codul ASCII al lui A. Daca y este 
mai mic decat 25, se aduna cu 64(y se numeroteaza de la 0), si se afiseaza convertit
char. 

Problema4:Nomogram checker
Dupa citirea datelor de intrare, le-am introdus in doua matrice: una dintre acestea
contine numarul si dimensiunea grupurilor de patrate negre de pe linii, sub forma 
de vector de linii, iar cealalta contine numarul si dimensiunea grupurilor de patrate
negre de pe coloane sub forma de matrice de coloane. Se creeaza o functie de 
verificare a fiecarei matrice, parcurgandu-se de doua ori gridul. Se compara constant,
pana la finalul fiecarei linii/coloane si se verifica astfel: daca valoarea deja introdusa
in matrice este egala cu valoarea calculata la fiecare iteratie.(se calculeaza dimensiunile
fiecarei formatiuni de valori de 1 alaturate). Se returneaza 0 daca valoarea gasita nu 
coincide cu cea din matrice, si 1 daca toate sunt corecte, afisandu-se mesajul corespunzator.
Se trece apoi la urmatorul pas din repetitiva while, pana cand t-ul devine 0(numarul 
de matrice de verificat).