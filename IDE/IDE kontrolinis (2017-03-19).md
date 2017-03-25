## IDE

**Kas yra IDE?**

Tai yra vieninga aplinka, kurioje galima atlikti visus veiksmus susijusius su program kūrimu, t.y. šioje aplinkoje galima pasinaudoti visomis reikiamomis programomis (teksto redaktorium, transliatoriumi, ryšio redaktoriumi, derintoju).
Pavyzdžiai:
Agile, Scrum, Redmine
Scrum<Agile<Lean<SystemsThinking.

**Agile scrum metodas:**

 Projekto valdymo metodas produkto ar paslaugos kūrimas organizuojamas kuo trumpesniais ciklais. Gavus pradinę versiją, aiðkiau suprantamas dydis projekto, rizikos ir t.t.

**Scrum metodas:**

Backlog -> Išdalinam į dalis ir paskirstom scrum lentelėje sprintais -> Produktas.

**Kas yra redmine?**
Atvirojo kodo internetinė projekto ir darbø valdymo Sistema.

**Kas yra projekto organizavimas?** 
a) Užduočių paskirstymas.
b) Klaidų registravimas.
c) Pakeitimo vykdymo sekimas

**Kas yra integruotos programų kūrimo aplinkos?**

Programos, kurios turi daug priemonių, palengvinančių ir pagreitinančių programinės įrangos kūrimo procesą.

**Vystymosi raida:**

Pirmoji: Dartmouth BASIC, Komando pagrindu.
Populiariausios: Eclipse, Visual Studio, PHPStorm.

**IDE savybės:**
•	Patogi grafinë vartotojo sàsaja.
•	Automatinis teksto pabaigimas ir generavimas
•	Galimybė derinti programas;
•	Patogus versijų kontrolės sistemos klientas;
•	Integruotas kompiliatoriaus valdymas ar pats kompiliatorius
•	Grafinis programos struktūros vaizdavimas;

##Versijavimas

**Kas yra versijavimas?** 

To reikia, nes:
a) Išlaikoma kodo pakeitimo istorija su komentarais.
b) Naujos funkcijos yra fiksuojamos ðakoje (branch) ir jei prireiks, galite grįžti į pradinę versiją (nuo kurios pradėjote).
c) Dažna situacija – įpusėjus kurime, klientas randa bug‘ą (arba pats pastebiu). Tokiu atvėju, visą progresą po bugo įdedam į atskirą branch‘ą, ir master branch‘e sutvarkom bugà.
d) Dirbant komandoje tenka apsikeisti kodo pakeitimais.

**Tikslai:*

Pagrindinis tikslas – pasiekti, kad bûtų lengva atsekti kokie darbai kokioje versijoje realizuoti, prie ko dirbama, kada testuojama, kokie darbai skirti ateities versijoms. 

**Populiarios sitemos?**

CVS,SVN,GIT,MERCURIAL.

**Kodėl GIT?**

a) Patogus darbas su šakomis;
b) Aiškus kodo susiejimas į bendrą projektą (merge)
c) Platus informacijos pakeitimas;
Git yra tekstinių failų versijavimo technologija, kuri dažnai bûna įdiegta programuotojams skirtose programose ir Linux operacinėse sistemose.
Git veikia aplanko lygyje. (t.y. į tą pačią versiją įtraukiami visi failo pasikeitimai, tada atstatant senesnę versiją, nereikia atskirai analizuoti atstatinėti visų susijusių failų.

**Pranašumai:**
•	Git išsiskiria tuo, kad jos versijos gali šakotis. T.Y paraleliai gali bûti vedamos kelios chronologinës istorijos. Neturi priimti galutinës versijos. Galima dirbti su visomis vienu metu.
•	Visas versijas lengva skaidyti ir sujungti. Tai leidžia su tuo pačiu tekstu dirbti visai komandai, paskui lengvai sujungti geriausias dalis iš visų bandymų.
•	Naudojamas dažniausiai programavmo istorijos kontrolei. Tačiau ją naudoja ir knygų rašymui, straipsnių, scenarijų ir pan.

**Funkcijos:**

a) Commit – fiksuojami tik pilni darbai.  Jei turime visa reikalinga informacija. Jei darbo užbaigti neišeina, reikėtų sukurti šaką ir į ją sudėti pakeitimus darbui. Poto daromas fiksavimas (amend commit) ir liktų visi pakeitimai po vienu fiksavimu.

**Šakos:** 

Trys pagrindinės šakos:
•	Master; (pagrindinis) 
•	Develop (plėtojamas)
•	Testing (testuojamas)
Papildomos:
•	Hotfix (pataisa)
•	Feature (funkcija)
a) Develop – Visi keitimai pirmiausia fiksuojami develop (plėtojimo) ðakoje. Pirmiausia daromi aukščiausio prioriteto atrimiausios versijos darbai, kadangi bûtinas testavimas, testing ðaka jungiama á develop.
b) Testavimo (testing) – daromi tik pataisymai. Naujo funkcionalumo realizuoti ðioje ðakoje negalima.  Ištestavus jungiama su master ir develop šaka.
C) Pagrindinė (master) – ištestuoja pilnai funkcionuojanti versija. Įjungus testavimo šaką į pagrindinę turi bûti nurodyta žymė su versijos numeriu. Tiesiogiai pakeitimai nedaromi.
d) Hotfix (pataisa) – jei randama klaida ir negalima traukti iki kitos versijos išleidimo, kuriama pataisos šaka. Ištaisomi ir testuojami pasikeitimai. Kai viskas atlikta, jungiama su master šaka ir jei tai su paskutinës šakos pataisymai, jungiama ir su plëtojimo. Taisyti ne paskutinæ versijà nepatartina, nes teks leisti kiekvienai versijai.
e) Funkcija (feature) reikalinga papildomos ateities versijoms, kuriø ðiuo metu nereikia diegti ar rodyti klientui.

**Git komandos:**

a) Git add – įdedama į lokalią pakeitimų kopiją.
b) Git commit – keliami pakeitimai į repozitoriją, nurodant paskirtį.
c) Git clone -  galima paimti kitą kodo repozitorijos ir jas parsisiųsti su visa Git struktūra.
d) Git push – jei norima įkelti  nutolusią repozitoriją (pvz. github)

Prasmingiausias darbas tada, kada su repozitorija dirba daugiau nei vienas žmogus. 

**Pakeitimai konfliktai ir jų sprendimo bûdai:**

Daþniausiai atidaromi trys skirtingi failai. Dabartinė  lokali nauja kopija, sena lokali kopija ir naujausia versija esanti tam tikroje šakoje. (M.P. Pats sukûriau, use at your own risk)
a) Atšakos ir git merge komanda  - kartais apsimoka kodą rašyti atskiroje šakoje, kurios niekas nemato, kol jūs neprijungiate jos prie pagrindinės šakoje.
b) GIT ignore – norint nieko nedaryti su failais ir jų neįkelti į repozitoriją.

**Git extensions**

Grafinė vartotojo sąsaja, kuri leidžia kontroliuoti kodo versijavimą nenaudojant komandinės eilutės.

**Gitlab**

Skirtas talpinti įvairius projektus IT specialistams. Leidžia kurti atsargines kopijas, bei redaguoti projekto failus ir tvarkyti klaidas.

**Github**

Paprastas ir lengvai valdomas įrankis, kuris padeda dalintis informacija apie projekto vystimasi
