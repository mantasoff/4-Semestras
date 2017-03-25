## Reikalavimų inžinerijos pirmas atsiskaitymas

**Kas yra vadinama reikalavimu?**

PS reikalavimu vadinama sandoriu su uþsakovu, specifikacija, standartu arba kokiu nors kitu juridinæ galià turinèiu dokumentu numatyta tos sistemos savybë. Jie gali bûti visiðkai abstraktûs, arba tikslûs. Turi atsakyti á ðiuos klausimus:
- Kokià iðeigà generuos sistema?
- Kokia tvarka bus pateikti rezultatai?
- Ar programa raðys á pradiniø duomenø failà ir t.t.

**Kas yra reikalavimø nustatymas?**

Procesas, kuriuo nustatoma, kokias paslaugas turi teikti sistema ir kokius ribojimus ta sistema turi tenkinti teikdama tas paslaugas.

**Kokios yra reikalavimø rûðys?**

- Vartotojo poreikiai (operaciniai poreikiai): Turi taip apraðyti reikalavimus, kad jie bûtø suprantami þmonëms, tik pavirðutiniðkai susipaþinusiems su tuo, kas yra kompiuteriai ir programø sistemos. (skirti vartotojams ir uþsakovams)
- Sistemos reikalavimai: Tam tikru specialiu bûdu struktûrizuotas detalus sistemos teikiamø paslaugø ir jos tenkinamø ribojimø apraðas. (raðomi kaip sudëtinë uþsakovo ir vykdytojo sandorio dalis.
- Projektiniai reikalavimai: Abstraktus programø sistemos ágyvendinimo bûdo apraðas, naudojamas kaip iðeities ribojimai detaliai projektuojant sistemà. (skirti vykdytojams)

Vartotojo ir sistemos reikalavimai yra skirtingo lygmens, nes juos skaito skirtingi skaitytojai ir jie naudojami kitiems tikslams:
- Vartotojam nesvarbu kaip sistema bus ágyvendinta.
- Sistemos reikalavimuose reikia tiksliai þinoti kà sistema turi atlikti, nes skaitytojai turës tai ágyvendinti.

**Kas yra reikalavimø formulavimas?**

Procesas, kuriuo operaciniai poreikiai yra pertvarkomi á tikslø iðsamø apraðà, kà sistema darys ir kaip ji veiks. 
Daug svarbiø programø sistemø þlunga dar kûrimo stadijoje kai yra blogai tvarkomasi su reikalavimis. Privaloma suformuluoti pilnai reikalavimus ir jø nekaitalioti.


**Kas yra reikalavimø specifikacija?**

Tai dokumentas, apraðantis kà tur daryti sistema ir kokius kitus reikalavimus ji turi tenkinti. 

**Kodël reikia formuluoti reikalavimus?**

Pradedant programavimo darbus, neturint reikalavimus, bandoma sutaupyti laiko ir pinigø. Taèiau tai tik iliuzija, kadangi kà pavykstama sutaupyti tokiu bûdu yra prarandama dël þemos sistemos kokybës ir sunkumø kà nors joje pakeisti.

**Koks reikalavimas turi bûti:**
1. Abstraktus: tai toks, jei jis suformuluotas juodosios dëþës principu: kai nëra kalbama kaip tai reikia realizuoti sistemoje.
2. Iðsamus: kai jis gali bûti nagrinëjimas ne tik kai nagrinëjimas su kitais reikalavimais, bet ir atskirai.
3. Tikslus: visi jame vartojami terminai turi tik grieþtas apibrëþtas reikðmes. (jokiø maþdaug beveik, apytikslia, patogus, nedaug, greitas). Formalios specifikacijos yra tikslios, bet jas sudëtinga apraðyti ir sunku skaityti. Naturaliàja kalba apraðyti yra lengva, bet daþnai yra netikslûs.
4. Vienareikðmis: negalima interpretuoti keliais skirtingais bûdais. 
5. Verifikuojamas: þinomas ir prieitnamas baigtinis ir kainos bei kitais poþiûriais priimtinas procesas (testavimas, analizë) kurá taikant galima nustatyti ar reikalavimas yra ágyvendintas. (netiksûs neverifikuomas.
6. Ágyvendinimas: þinomas ir prieinamas ekonominiu, juridiniu bei kitais poþiûriais priimtinas technologinis procesas, kurio inovaciniai slenksèiai gali bûti paðalinti per priimtinà laikotarpá ir uþ priimtinà kainà ir kurá taikant galima sukurti sistemà, turinèià tuo reikalavimu specifikuojamà savybæ.
7. Integruojamas: sujungus su kitais reikalavimais, yra gaunamas tarpusavyje suderintø reikalavimø rinkinys.
8. Lokalizuojamas: susiejamas su vienu ar keliais konkrenèiais sistemos komponentais, ágyvendinanèiais tà reikalavimà. (ne visi yra lokalizuojami. Sistemos aplinkos reikalavimai, projektavimo standartai galioja visiems komponentams)
9. Transuojamas: Vienareikðmiðkai ávardinamas ir turi nuorodà á savo ðaltiná. (turi unikalø numerá). Trasavimas reikalingas reikalavimø valdymui. Padarius kokius nors reikalavimø pakeitimus, trasuojant nustatoma, kokie aukðtesniøjø ir þemesniøjø lygmenø reikalavimai yra susijæ su keièiamu reikalavimu. Sprendþiama ar reikia keisti.
10. Unikalus: Nëra kartojama kituose reikalavimuose pateikta informacija.
11. Glaustas: nëra pagrindimo, apibrëþèiø ar kitø nebûtinø dalykø.
12. Suprantamas: paraðytas nevartojant tik specialistams suprantamø terminø ir yra aiðkiai pasakyta, kokià funkcinæ ar nefunkcinæ savybæ privalo turëti sistema.

**Funkciniai ir nefunkciniai reikalavimai:**

- Funkciniai reikalavimai: kokias paslaugas privalo teikti sistema, kokia turi bûti jos reakcja á konkreèius stimulus ir kaip ji turi elgtis konkreèiose situacijose.
- Nefunkciniai reikalaviai: ribojimai potencialiai galimø projektiniø sprendimø aibei. Apiba ribojimus teikimo bûdu (pvz, trukmë), ágyvendinamoms funkcijoms (pvz, patikimumas), standartai. Vykdymo reikalavimai yra nefunkciniai reikalavimai.

**Funkciniai reikalavimai:**

Apraðo sistemos funkcionalumà bei jos teikiamas paslaugas. Paslaugø pobûdis priklauso nuo kuriamos árangos pobûdþio ir vartotojø pobûdþio.
Vartotojo lygmens funckiniai rekalavimai gali gana bendrai apraðyti, kà turi daryti sistema, bet sistemos lygmens funckiniai reikalavimai privalo specifikuoti labai detaliai. Pvz.:
•	Vartotojui turi bûti leista egzamino rezultatus perþiûrëti ekrane.
•	Studentui turi bûti sudaryta galimybë laikyti egzaminà per internetà.
•	Sistema privalo ávertinti studentø atsakymus.

**Vartotojo lygmens funckiniai reikalavimai:** 
- Kokias áeigas (komandas, duomenis) sistema turi gebëti apdoroti.
- Kokius rezultatus sistema turi generuoti.
- Kokius duomenis sistema privalo ásiminti ir padaryti prieinamus kitoms sistemoms.
- Kokius skaièiavimus sitema privalo atlikti.

**Funkciniai reikalavimai apraðo:**
- Pagrindiná (probleminá) sistemos funkcionalumà; (t.y. funkcionalumà, kurio reikia patenkinti vartotojø operacinius poreikius, nusakytus uþduotimis koncepciniame verslo modelyje).
- Pagalbiná funcionalumà. (t.y. funkcionalumà, kurio reikia sitemai aptarnauti priþiûrëti, admininstruoti arba darbui su ja palengvinti.
Apraðo visas sistemos ágyvendinamas funkcijas:
- Poreikiø specifikacijoje apraðytus operacinius vart. poreikius .
- Funckiniai reikalavimai yra iðvedami ið verslo koncepciniame modelyje specifikuotø uþduoèiø.


