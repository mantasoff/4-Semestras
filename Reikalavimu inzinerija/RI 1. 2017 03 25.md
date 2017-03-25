## Reikalavimų inžinerijos pirmas atsiskaitymas

**Kas yra vadinama reikalavimu?**

PS reikalavimu vadinama sandoriu su užsakovu, specifikacija, standartu arba kokiu nors kitu juridinę galią turinčiu dokumentu numatyta tos sistemos savybė. Jie gali bûti visiškai abstraktūs, arba tikslūs. Turi atsakyti į šiuos klausimus:
- Kokia išeigą generuos sistema?
- Kokia tvarka bus pateikti rezultatai?
- Ar programa rašys į pradinį duomenų failą ir t.t.

**Kas yra reikalavimo nustatymas?**

Procesas, kuriuo nustatoma, kokias paslaugas turi teikti sistema ir kokius ribojimus ta sistema turi tenkinti teikdama tas paslaugas.

**Kokios yra reikalavimų rūšys?**

- Vartotojo poreikiai (operaciniai poreikiai): Turi taip aprašyti reikalavimus, kad jie būtų suprantami žmonėms, tik paviršutiniškai susipažinusiems su tuo, kas yra kompiuteriai ir programø sistemos. (skirti vartotojams ir užsakovams)
- Sistemos reikalavimai: Tam tikru specialiu būdu struktūrizuotas detalus sistemos teikiamų paslaugų ir jos tenkinamų ribojimų aprašas. (rašomi kaip sudėtinė užsakovo ir vykdytojo sandorio dalis.
- Projektiniai reikalavimai: Abstraktus programų sistemos įgyvendinimo būdo aprašas, naudojamas kaip išeities ribojimai detaliai projektuojant sistemą. (skirti vykdytojams)

Vartotojo ir sistemos reikalavimai yra skirtingo lygmens, nes juos skaito skirtingi skaitytojai ir jie naudojami kitiems tikslams:
- Vartotojam nesvarbu kaip sistema bus įgyvendinta.
- Sistemos reikalavimuose reikia tiksliai žinoti ką sistema turi atlikti, nes skaitytojai turės tai įgyvendinti.

**Kas yra reikalavimø formulavimas?**

Procesas, kuriuo operaciniai poreikiai yra pertvarkomi į tikslų išsamų aprašą, ką sistema darys ir kaip ji veiks. 
Daug svarbių programų sistemų žlunga dar kūrimo stadijoje kai yra blogai tvarkomasi su reikalavimais. Privaloma suformuluoti pilnai reikalavimus ir jų nekaitalioti.

**Kas yra reikalavimų specifikacija?**

Tai dokumentas, aprašantis ką turi daryti sistema ir kokius kitus reikalavimus ji turi tenkinti. 

**Kodėl reikia formuluoti reikalavimus?**

Pradedant programavimo darbus, neturint reikalavimus, bandoma sutaupyti laiko ir pinigų. Tačiau tai tik iliuzija, kadangi ką pavykstama sutaupyti tokiu būdu yra prarandama dėl žemos sistemos kokybės ir sunkumo ką nors joje pakeisti.

**Koks reikalavimas turi būti:**
1. Abstraktus: tai toks, jei jis suformuluotas juodosios dėžės principu: kai nėra kalbama kaip tai reikia realizuoti sistemoje.
2. Išsamus: kai jis gali bûti nagrinėjimas ne tik kai nagrinėjimas su kitais reikalavimais, bet ir atskirai.
3. Tikslus: visi jame vartojami terminai turi tik griežtas apibrėžtas reikšmes. (jokių maždaug beveik, apytiksliai, patogus, nedaug, greitas). Formalios specifikacijos yra tikslios, bet jas sudėtinga aprašyti ir sunku skaityti. Naturaliąja kalba aprašyti yra lengva, bet dažnai yra netikslûs.
4. Vienareikšmis: negalima interpretuoti keliais skirtingais būdais. 
5. Verifikuojamas: žinomas ir prieinamas baigtinis ir kainos bei kitais požiūriais priimtinas procesas (testavimas, analizë) kurį taikant galima nustatyti ar reikalavimas yra įgyvendintas. (netikslus neverifikuomas.
6. Įgyvendinimas: žinomas ir prieinamas ekonominiu, juridiniu bei kitais poþiūriais priimtinas technologinis procesas, kurio inovaciniai slenksščiai gali bûti pašalinti per priimtiną laikotarpį ir už priimtiną kainą ir kurį taikant galima sukurti sistemà, turinčią tuo reikalavimu specifikuojamą savybę.
7. Integruojamas: sujungus su kitais reikalavimais, yra gaunamas tarpusavyje suderintų reikalavimų rinkinys.
8. Lokalizuojamas: susiejamas su vienu ar keliais konkrenčiais sistemos komponentais, įgyvendinančiais tą reikalavimą. (ne visi yra lokalizuojami. Sistemos aplinkos reikalavimai, projektavimo standartai galioja visiems komponentams)
9. Trasuojamas: Vienareikšmiškai įvardinamas ir turi nuorodą į savo šaltinį. (turi unikalų numerį). Trasavimas reikalingas reikalavimo valdymui. Padarius kokius nors reikalavimo pakeitimus, trasuojant nustatoma, kokie aukštesniojo ir žemesniojo lygmens reikalavimai yra susiję su keičiamu reikalavimu. Sprendžiama ar reikia keisti.
10. Unikalus: Nėra kartojama kituose reikalavimuose pateikta informacija.
11. Glaustas: nėra pagrindimo, apibrėžimų ar kitų nebutinų dalykų.
12. Suprantamas: paraštas nevartojant tik specialistams suprantamų terminų ir yra aiškiai pasakyta, kokią funkcinę ar nefunkcinę savybę privalo turėti sistema.

**Funkciniai ir nefunkciniai reikalavimai:**

- Funkciniai reikalavimai: kokias paslaugas privalo teikti sistema, kokia turi būti jos reakcja į konkrečius stimulus ir kaip ji turi elgtis konkrečiose situacijose.
- Nefunkciniai reikalaviai: ribojimai potencialiai galimų projektinių sprendimų aibei. Apima ribojimus teikimo bûdu (pvz, trukmė), įgyvendinamoms funkcijoms (pvz, patikimumas), standartai. Vykdymo reikalavimai yra nefunkciniai reikalavimai.

**Funkciniai reikalavimai:**

Aprašo sistemos funkcionalumą bei jos teikiamas paslaugas. Paslaugų pobūdis priklauso nuo kuriamos įrangos pobûdžio ir vartotojo pobūdžio.
Vartotojo lygmens funckiniai rekalavimai gali gana bendrai aprašyti, ką turi daryti sistema, bet sistemos lygmens funckiniai reikalavimai privalo specifikuoti labai detaliai. Pvz.:
•	Vartotojui turi bûti leista egzamino rezultatus peržiûrëti ekrane.
•	Studentui turi bûti sudaryta galimybė laikyti egzaminą per internetą.
•	Sistema privalo įvertinti studento atsakymus.

**Vartotojo lygmens funckiniai reikalavimai:** 
- Kokias įeigas (komandas, duomenis) sistema turi gebėti apdoroti.
- Kokius rezultatus sistema turi generuoti.
- Kokius duomenis sistema privalo įsiminti ir padaryti prieinamus kitoms sistemoms.
- Kokius skaičiavimus sitema privalo atlikti.

**Funkciniai reikalavimai aprašo:**
- Pagrindinį (probleminį) sistemos funkcionalumą; (t.y. funkcionalumą, kurio reikia patenkinti vartotojo operacinius poreikius, nusakytus užduotimis koncepciniame verslo modelyje).
- Pagalbinį funcionalumą. (t.y. funkcionalumą, kurio reikia sitemai aptarnauti prižiūrėti, admininstruoti arba darbui su ja palengvinti.
Aprašo visas sistemos įgyvendinamas funkcijas:
- Poreikių specifikacijoje apraðytus operacinius vart. poreikius .
- Funckiniai reikalavimai yra išvedami iš verslo koncepciniame modelyje specifikuotų užduočių.


