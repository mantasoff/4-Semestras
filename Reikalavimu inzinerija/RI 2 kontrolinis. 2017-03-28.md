## RI antrasis kontrolinis darbas

### Nefunkciniai reikalavimai

Nefunkciniai reikalavimai aprašo sistemos savybes ir jos ribojimus:

- Dažnai nefunkciniai reikalavimai yra netgi svarbesniuž funkcinius;
- Sunku suformuot tiksliai, o jeigu netikslūs, tai tampa neverifikuojami ir praranda prasmę.
- Jei nefunkciniai reiklavimai netenkinami, sistema yra niekam nereikalingą!

**Problemos:**

Dažnai vartotojas arba užsakovas dažniausiai pagrindinį dėmesį skiria bendriems uždaviniams, kaip paprasta naudotis, sistemos gebėjimas greitai atsigauti po trykių arba greitas atsakas į vartotojo užklausas. Lieka vietos **interpretacijai**;

Pavyzdžiui, sistema turi būti lengvai naudojama medicinos personalo ir turi būti organizuota taip, kad vartotojų klaidų kiekis būtų minimanizuotas.

Perdarius taip, kad būtų **verifikuojamas**: 

Medicinos personalas turi gebėti naudotis visomis sistemos funkcijomis po to, kai išklausė keturių valandų mokymus kaip naudotis sistema. Po šitų mokymų pažengusio vartotojo daromų klaidų vidurkis neturi viršyti dviejų klaidų per darbo su sistema valanda.

**Nefunkciniai reikalavimai aprašo:**
- Interfeiso ribojimus;
- Veikimo ribojimus;
- Ekonominius ribojimus;
- Politinius ribojimus;
- Teisinius ribojimus.

Interfeiso ribojimai riboja sistemos ir jos aplinkos sąveikos būdus.

Programų sistemos aplinką sudaro:
- Vartotojai;
- Kitos dalykinės programų sistemos;
- Operacinė sistema;
- Duomenų bazės;
- Kompiuterių tinklas;
- Programavimo kalbos;
- Dokumentai;

### Interfeiso reikalavimai

Funkciniai reikalavimai gali aprašyti kiekvienam sistemos aplinkos elementui reikalingas paslaugas ir funkcijas, bet ne sąveikos su jais būdus (komandų sintaksę, dialogines formas, funkcinius klavišus, pelės naudojimą ir pan.).

- Interfeiso reikalavimai nieko nekalba apie tai, ką sistema daro. Jie aprašo, kaip tomis galimubėmis galima pasinaudoti.
- Pažeidus interfeiso reikalavimus, sistema išlieka korektiška, bet ji praranda sąveikos su tam tikrais savo aplinkos elementais galimybes. (nors sistema ir vykod visas numatytas funkcijas, tačiau jomis nebegalima pasinaudoti)

**Interfeiso ribojimai**

Interfeiso reikalavimai atsako į klausimus:
- Kaip turi atrodyti vartotojo interfeisai?
- Kaip programų sistemos interfeisai turi susieti tą sistemą su jos aplinkos elementais?

Interfeiso ribojimai:
- vartotojų interfeisų reikalavimai;
- sąveikos su operacine sistema reikalavimai;
- sąveikos su duomenų bazėmis reikalavimai;
- sąveikos su programavimo aplinkomis reikalavimai;
- dokumentų mainų reikalavimai;
- sąveikos su kitomis dalyinėmis programų sistemomis reikalavimai.

**Vartotojo interfeiso reikalavimai:**
- Užduočių formulavimo kalbos (UFK) reikalavimai;
- Naudojimo paprastumo (easy-to-use) reikalavimai;
- Patogumo vartotojui (user-friendless) reikalavimai;
- Ergonominiai reikalavimai;

### Vartotojo interfeisas: UFK

**Kalbos semantinė galia**

UFK konceptų abstrakcijos lygmuo:
- Nelabai kvalifikuoto specialisto požiūris: "Tai per daug bendra, kad būtų galima suprasti, ką gi konkrečiai padarys sistema pateikus tokią užduotį".
- Kvalifikuoto specialisto požiūris: "Tai per daug konkretu. Formuluodamas tokias užduotis, aš susipainioju detalėse."
- Dauguma žmonių mąsto tam tikro abstakcijos lygmens terminais ir nervinasi, jei jie yra verčiami mąstyti kito lygmens terminais.

Viskas priklauso nuo konkretaus vartotojo:  turi būti kuo paprasčiau, bet ne per daug supaprastinta!

**Kalbos procedūriškumas**

Algoritmo samprata, kuria grindžiama UFK:
- esti procedūrinės (pvz., Pascal), deklaratyviosios (pvz., Prolog), funkcinės (pvz., Lisp), objektinės (pvz., SmallTalk) ir hibridinės (pvz., C++) programavimo kalbos;
- UFK irgi gali būti grindžiama bet kuria iš šių paradigmų;

Procedūrinėse kalbose algoritmai yra aprašomi naudojant Tiuringo mašinų formalizmą:
- tai reiškia, kad užduotis yra aprašoma kaip (nebūtinai tiesinė) seka komandų, keičiančių tam tikro kintamųjų rinkinio (atminties) reikšmes;
- procedūrinėse kalbose išreikštiniu būdu (nors galbūt aukšto abstrakcijos lygmens komandomis) specifikuojamas užduoties vykdymo algoritmas;

Deklaratyviose kalbose algoritmai yra aprašomi naudojant Markovo natūrinių algoritmų formalizmą:
- tai reiškia, kad užduotis yra aprašoma kaip rinkinys faktų ir loginių taisyklių, nusakančių kaip iš turimų faktų gauti norimus rezultatus;
- deklaratyviosiose kalbose aprašoma, ką užduotis turi padaryti, bet nėra nurodoma, kokiu būdu gauti rezultatus;




