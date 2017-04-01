## RI antrasis kontrolinis darbas

### Nefunkciniai reikalavimai

Nefunkciniai reikalavimai aprašo sistemos savybes ir jos ribojimus:

- Dažnai nefunkciniai reikalavimai yra netgi svarbesni už funkcinius;
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

Deklaratyviose kalbose algoritmai yra aprašomi naudojant Markovo natūrinių algoritmų formalizmą:Funkcinėse kalbose algoritmai yra aprašomi naudojant rekursyviųjų funkcijų formalizmą.
- tai reiškia, kad užduotis yra aprašoma kaip tam tikra funkcijų (atvaizdžių) kompozicija.
- tai reiškia, kad užduotis yra aprašoma kaip rinkinys faktų ir loginių taisyklių, nusakančių kaip iš turimų faktų gauti norimus rezultatus;
- deklaratyviosiose kalbose aprašoma, ką užduotis turi padaryti, bet nėra nurodoma, kokiu būdu gauti rezultatus;

Funkcinėse kalbose algoritmai yra aprašomi naudojant rekursyviųjų funkcijų formalizmą.
- tai reiškia, kad užduotis yra aprašoma kaip tam tikra funkcijų (atvaizdžių) kompozicija.
- Funkcinėse kalbose aprašoma kaip, vienų funkcijų rezultatams taikant kitas funkcijas, iš pradinių duomenų gauti norimus rezultatus.

Objektinėse kalbose algoritmai yra aprašomi naudojant vadinamąjį aktorių formalizmą.
- tai reiškia, kad užduotis yra aprašoma pranešimų (reikalavimų atlikti operacijas) seka;
- objektinėse kalbose aprašoma, kaip pakeisti pradines tam tikram rinkiniui priklausančių objektų būsenas į norimas (tai ir yra užduoties rezultatas).

Kokio tipo UFK geriau pasirinkti, priklauso ir nuo programų sistemos probleminės srities, ir nuo to, per kokią sąvokų sistemą vartotojai suvokia tą probleminę sritį.
- t.y. nuo to, kaip jų nuomone turėtų būti aprašinėjami algoritmai.

**Kalbos dalykinė orientacija** 

Kalbos dalykinė orientacija priklauso nuo metaforos, kuria grindžiama kalba.
- Žmonės naujus dalykus perpranta naudodamiesi savo turimomis žiniomis ir patirtimi;
- Bent jau pradžioje, naujas sąvokas stengiamasi išreikšti per jau žinomas sąvokas.
- Vartotojai, bent jau pradžioje, tiap pat ando programų sistemą suvokti per tai, ką jie jau žino apie dalykinę sritį, t.y. jie bando mąstyti dalykinės srities metaforos terminais.

**Metaforizavimo principas**: naujas pažinimo struktūras žmonės kuria metaforizuodamami esmas (jau išstudijuotas) pažinimo struktūras.

Pavyzdys:
- Įstaigos vadovas įsisavindamas naują duomenų apdorojimo sistemą bando ją "matyti" per įstaigą aprašančių sąvokų prizmę.
- Tai apima įstaigos tikslus, naudojama biuro įrangą, darbuotojų vaidmenis, jų vykdomas užduotis ir darbo metu kylančių problemų sprendimo būdus.
- Sistemos projektuotojai privalo perprasti įstaigos sąvokų sistemą ir projektuoti užduočių formulavimo kalbą taip, kad įstaigos vadovas (o taip pat ir kiti darbuotojai) galėtų formuoti užduotis jiems įprastais terminais (o ne programuotojų žargonu)
- Kad metafora būtų  naudinga, ji turi būti išreikštiniu būdu susiseta su tuo, ką norima metaforizuoti t.. su problemine sritimi.
- Svarbi tokios sąsajos (atvaizdžio) savybė yra jos kongruentiškumas: probleminės srities esybės ir ryšiai turi būti tiesiogiai atvaizduojami į interfeiso esybes (pikrogramas, komandų pavadinimus, objektų pavadinimus ir t.t.) ir ryšius taro jų. (galima konstruoti tik vadovaujantis konceptualizacijos principu)


**Kalbos selektyvinė geba**

Duomenų filtravimas - tai procesas, naudojant kurį iš įvesties ar išvesties duomenų srauto yra išrenkamas nurodytas sąlygas tenkinantis duomenų poaibis, pvz:
-INCLUDE IN ATASKAITA DARBUOTOJUS WHERE ATLYGINIMAS >= 50000;

Filtrai aprašomi naudojant kvalifikavimo išraiškas. Kvalifikavimo išraišką sudaro loginės operacijomis (IR,ARBA,NE t.t.) sujungti predikatai (t.y. sąlygos).

Kalbos selektyvinė geba priklauso nuo to, kokios kvalifikavimo išraiškos yra leidžiamos užduočių formulavimo kalboje.
- Selektyvinė geba nusako kokiu tikslumu galima filtruoti įvesties ir išvesties duomenis. Kitaip tariant, ji lemia kokiu tikslumu vartotojas gali aprašyti užduoties pradinius duomenis ir užduoties rezultatus. (pvz, ką ir kokia tvarka spausdinti norimoje gauti ataskaitoje.)

**Kalbos raiškos galia (išsamumas)**

UFK yra išsami jei jos raiškos priemonėmis galima specifikuoti visus užduoties aspektus.
- Kartais UFK turi priemones tik skaičiuojamiesiems užduoties aspektams aprašyti, nes kiti aspektai (pvz., duomenų rašymas į bazes ar ataskaitų generavimas) yra aprašomi kitomis kalbomis.

Kartais, kuriant UFK, nepavyksta tiksliai specifikuoti visų galimų užduočių aibę. aigi, neįmanoma ir tiksliai numatyti, kokių priemonių prireiks užduotims specifikuoti. Tokiais atvejais kalboje numatoma išplėsties taško konstrukcija ir leidžiama prie užduoties aprašymo jungti plėtinius parašytis skriptų programavimo kalbose (Perl, JavaScript ir kt.)

**Sintaksė**'

UFK gali būti suprojektuota kaip:
- tekstinė kalba (pvz., sakiniai, primentantys lietuvių kalbos sakinius);
- meniu kalba;
- formų jakba;
- grafinė kalba;
- pikrogramų kalba;
-  hiperteksto kalba;
- ir t.t.

**Užduoties pateikties protokolas (UPP)**

- Užduoties aprašas yra pateikiamas sistemai pagal taisykles, numatytas atitinkamu protokolu. Formuluojant interfeiso ribojimus turi būti suformuluoti ir užduočių pateikties protokolo reikalavimai.
- UPP aprašo, kokiais pranešimais, pateikdamas užduotį, vartotojas keičiasi su sistema, kokia eilės tvarka pranešimai yra pateikiami ir kaip, pasinaudojant atitinkama technine įranga (klaviatūra, pele ar pan.) pranešimai yra formuluojami ir perduodami.

**Naudojimo paprastumo (easy-to-use) reikalavimai**
- Vidinė darna: komandų formato standartas, klavišų naudojimo priklausomybė nuo konteksto, pranešimuose vartojamų terminų darna, manipuliavimo ekranu operacijų standartas ir t.t.
- Išorinė darna: atitikimas išoriniams standartams (pvz., GUI standartams).
- Akivaizdumas: interfeisas suprojektuotas metaforos teriminais.
- Informatyvumas: informuoja apie padarytų klaidų pobūdį, aiškina kaip elgtis ir pan.
- Prasmingumas: visi sistemos pranešimai yra glausti, informatyvūs ir formuluojami metaforos terminais.

**Patogumo vartotojui (user-friendliness) reikalavimai**
- Informavimo priemonių tinkamumas (helpfulness): ką reikia įtraukti į informavimo (help) failus ir kaip tie failai turi būti organizuoti.
- Patrauklumas: kaip vartotojas gali individualizuoti (pritaikyti savo pomėgiams) interfeisą.

Ergoniminiai reikalavimai - kaip atsižvelgti į potencialių vartotojų psichofiziologines charakteristikas (pvz. aklus vartotojus).

## Veikimo ribojimai

**Veikimo ribojimai apima:**
- Tikslumo reikalavimus;
- Patikimumo reikalavimus;
- Gyvybingumo reikalavimus;
- Robastiškumo reikalavimus;
- Našumo reikalavimus;

Pažeidus veikimo reikalavimus, sistema išlieka korektiška. Nėra pažeidžiama ir jos sąveika su aplinka. Tačiau yra prarandama jos operacinė kokybė. (pvz., ji veikia lėčiau, yra mažiau patikima ar labiau pažeidžiama)

### Tikslumas

Nepakanka vien tik pasakyti, kad programų sistema turi mokėti paskaičiuoti, tarkime, įmonės mėnesines išlaidas gamybai:
- Kokiu tikslumu tai reikia paskaičiuoti?
- Ką turi daryti sistema tuo atveju, kai jai nepakanka duomenų?
- Kokie turi būti kiti kokybiniai tos funkcijos parametrai?

Programų sistemos geba skirti panašius objektus vieną nuo kito. (pvz., du asmenis ar du skaičius):
- Jei duomenų vaizdavimo tikslumas yra nepakankamas, sistema gali neskirti Jono Matusos (J. Matusa) ir Jurgio Matusos (J. Matusa);
- Keturis ženklus po kablelio turintys skaičiai yra mažiau tikslūs kaip tie, kurie turi šešis ženklus po kablelio;
- Tačiau teisingai suskaičiuotas keturis ženklus po kablelio turintis skaičius gali būti tikslesnis už neteisingai paskaičiuotą šešis ženklus po kablelio turintį skaičių.

Skaičiavimų tikslumas nusako, kokio dydžio paklaidos yra leistinos sistemoje. (paklaidos gali atsirasti ne tik atliekant skaičiavimus įprasta prasme, bet ir formuojant skaitmeninį objektą) Kitaip tariant, nusako rezultatų tikslumą.  

Paklaida - tai skirtumas tarp paskaičiuotos reikšmės ir tos, kuri turėtų būti gauta teoriškai.

Į sistemą vedami duomenys turi tenkinti verslo taisykles (reglamentuoja duomenų tikslumą ir išsamumą).

Kokio tikslumo reikia, priklauso nuo sistemos paskirties ir jos realizuojamų funkcijų pobūdžio.

### Patikimumas

Programų sistemos trykių neigiamo poveikio vartotojų verslo tikslams dydis. Normalaus veikimo trykių dažnio ir rimtumo matas. Pvz:
- vidutinis laikas tarp dviejų trykių;
- tikimybė, kad sistema nebus galima pasinaudoti;
- vidutinis trykių dažnis;
- dėl trykių prarandamo laiko procentas;

- GIST: reliability of the system.
- SCALE: the reliability that the system gives the right result on a search.
- METER: measurements obtained from 1000 searches during testing.
- MUST: More than 98% of the searches during testing;
- PLAN: more than 99% of the searches.
- WISH: 100 of the searcches.

### Gyvibingumas

Programų sistemos geba apsaugoti jos kritines funkcijas nuo trykių poveikio. (kokiu mastu sistema gebės vykdyti kritnes (gyvybines) funkcijas trykiams pažeidus kitas jos dalis)

### Robastiškumas

Programų sistemos geba automatiškai atkurti savo prarastą funkcionalumą, ypač, praradus jį dėl klaidingų duomenų arba dėl kokių nors ypatingų situacijų.

Nusako kokiu mastu sistema geba išvengti trykių pateikus jai neteisingus duomenis arba ja neteisingai naudojantis. Pvz:
- Operacinė sistema laikoma robastiška, jei ji geba išlikti korektiška jai pritrūkus operatyviosios ar išorinės atminties arba vykdant klaidų turinčią dalykinę programą arba tai programai elgiantis nekorektiškai, pavyzdžiui bandant pasinaudoti kitai programai priskirta atmintimi.

Matų pavyzdžiai:
- laikas, reikalingas sistemos funkcionalumui atkurti;
- trykius iššaukiančių įvykių procentas;
- tikimybė, kad trykio metu bus sugadinti duomenys.

### Našumas

Nusako kaip greitai sistema reaguoja į stimulus ir kiek resursų ji sunaudoja tai darydama.

Našumo aspektai:
- Reakcijos laikas (response time);
- Pralaidumas (throughput);
- Produktyvumas (efficiency);
- Gaišties laikas (latency);
- Masto keitimas (scalability);

**Reakcijos laikas**

Reakcijos laiko į įvykius (behavioural response time) reikalavimai apibūdina vartotojo sąveika su sistema:
- Vartotojas tikisi, kad programa jam atsakys per kelias sekundes, nepriklausomai nuo kompiuterio.
- Sistema turėtų parodyti, kad ji priėmė vartotojo pateiktą užduotį.
- Svarbu, kad sistema atsakytų į vartotojo veiksmus.

**Rezultatų pateikties laiko (operational response time) reikalavimai**

Jei programų sistema kompiuterizuoja kokias nors rankiens procedūras, kurioms atlikti reikėjo visos savaitės, o dabar pakanka ienos valandos, tai be abejo jau yra didelis pasiekimas;

Formuojant rezultatų pateikties laiko reikalavimus, visų pirma reikia galvoti apie tai, kiek laiko galima skirti atitinkamai verslo operacijai atlikti. (Kaip greitai turi veikti sistema, kad būtų pasiekti organizacijos verslo tikslai)

**Gaišties laikas (latency)** 
 
Kiek laiko prie nurodyto apkrovos (pvz., apdorojamų duomenų apimčių) dydžio gali sugaišti sistema vienam įvykiui apdoroti?

**Pralaidumas (thoughput)**

Kiek įvykių per nurodytą laiko tarpą prie nurodyto apkrovos dydžio turi gebėti apdoroti sistema? (apdorojamų duomenų apimčių)

**Produktyvumas**

Kiek resursų galima sunaudoti nurodytiems pralaidumu ir produktyvumu užtikrinti?

**Masto keitimas (scalability)**

Kiek papildomų resursų galima sunaudoti nurodytiems pralaidumu ir produktyvumui užtikrinti didinant sistemos apkrovas?

**Response Time**

- TAG: ResponseTime
- GIST: The fastness of the search
- SCALE: The response time of a search.
- METER: Measurements obtained from 1000 searches during testing;
- MUST: No more than 2 seconds 100% of the time.
- WISG: No more than 1 second 100% of the time.

## Ekonominiai ribojimai

Ekonominiai ribojimai formuluojami siekiant sumažinti ilgalaikes išlaidas sistemai.
Pažeidus ekonominius ribojimus, užsakovas ir/arba vykdytojai be reikalo praranda tam tikras pinigų sumas ir tai atsitinka todėl, kad tam tikros sistemos savybės buvo nepakankamai gerai apgalvotos.

Sistema išlieka korektiška, jei jos saveika su aplinka nėra pažeidžiama ir nepraranda veikimo kokybės. 

Vartotojas tiesiogiai nepajunta jokių ekonominių ribojimų pažeidimo pasekmių.

Lėšos gali būti prarastos dėl to, kad su sistema sunku dirbti ją diegiant, aptarnaujant ar prižūrint, arba dėl to, kad jos komponentų negalima tiražuoti t.y. pakartotinai panaudoti kituose projektuose. 

Iš ekonominių ribojimų išplaukia:
- Diagiamumo reikalavimai;
- Aptarnaujamumo reikalavimai;
- Prižiūrimumo reikalavimai;
- Tiražuojamumo reikalavimai.

### Diegiamumo reikalavimai

**Instaliuojamumas**

Ruošinio patikimumas, instaliavimo trukmė, instaliavimo procedūros, parametrizavimas, konfigūravimo galimybės, resursų poreikis (instaliavimui).

**Įsisavinumas**

Matas: tai tikimybė per laiką [t1,t2] atitinkamą išsilavinimą turintis asmuo sugebės išmokti dirbti su sistema ir ją administruoti

**Pastangos duomenų bazėms sukurti**

**Išmokstamumas**

Priklauso nuo:
- Suprantamumo;
- Sudėtingumo;

Suprantamumas priklauso nuo koncepcinės skaidros ir virtualumo.

Proramų sistema yra koncepciškai skaidri, jei ji turi darnų, akivaizdų, informatyvų, prasmingą vartotojo interfeisą ir yra komunikatyvi (tiek jos įvesties, tiek ir išvesties duomenys yra glausti, prasmingi ir pateikiami vartotojui lengvai suprantama forma.)

Programų sistmea vadinama virtualia jei ji nuo vartotojo slepia kompiuterinę platformą. (t.y sistema galima pasinaudoti neturint jokių (arba minimalias) žinių apie techninės įrangos, sisteminės PĮ ar kompiuterio tinklo ypatumus.

Sudėtingumas priklauso nuo jos realizuojamų funkcijų skaičiaus, tų funkcijų semantinės galios ir jų tarpusavio sąryšių.

**Pastangos duomenų bazėms sukurti**

Siekiant palengvinti pradinį DB kūrimą, sistemoje reikia numatyti specialiai tam skirtas funkcijas (duomenims skaitmenizuoti, naujoms DB kurti, liktinėms DB transformuoti į naują formatą ir t.t.)

### Aptarnaujamumo reikalavimai

Vartotojų (įskaitant sistemą administruojantį personalą) pastangos, kurių prireikia naudojanti sistemą savo užduotims vykdyti.

Galimybė pritaikyti sistemą prie vartotojo įgūdžių lygmens, sistemos veiksmų siejimas su užduočių vykdymo kontekstu, specialus dažnai vykdomų operacijų palaikymas, "karštieji" klavišai ir t.t.

### Prižiūrimumo reikalavimai

Nuo jų priklauso sistemos darnos palaikymo ir jos perdarymų išlaidos.

Prižiūrimumas priklauso nuo:
- **Taisomumo**: Kiek pastangų reikia klaidoms pašalinti?
- **Keičiamumo**: kiek pastangų reikia sistemai pritaikyti prie jos reikalavimų pokyčių?
- **Plečiammo**: kiek pastangų reikia sistemos komponentam pakeisti ir jos funkcionalumui išplėsti?
- **Perkeliamumo**: kiek pastangų reikia sistemai į kitą platformą perkelti?
- **Komponuojamumo**: kiek pastangų reikia sistemos sąveikai su kitomis sistemomis organizuoti?
- **Testuojamumo**: kiek pastangų reikia testams sistemos savybėms patikrinti suprojektuoti ir sukurti?

### Tiražuojamumo reikalavimai

- Kurie komponentai turi būti tiražuojami?
- Kokius reikalavimus turi tenkinti tiražuojami komponentai? (t.y. kokie komponentų tiražavimo metodai planuojami naudoti)

**Portability:**
- TITLE: Application portability
- DESC: The application should be portable with iOS and Android.
- RAT: The adaptable platform for the application to run on.
- DEP: none.

## Politiniai ribojimai

Politiniai ribojimai išplaukia iš organizacijos verslo politikos ypatumų. Tai, visų pirma, verslo paslapčių apsaugos klausimai. Sistemai pažeidus verslo ribojimus, yra pažeidžiama organizacijos verslo politika.

### Apsaugos reikalavimai

Apibrėžia, kokiu mastu sistema turi būti apsaugota nuo galimybių ja pasinaudoti neteisėtai. Teisėtu ps naudojimu vadinamas sistemos naudojimas pagal jos paskirtį, atliekamas tam oficialus įgaliojimus turinčio asmens ar proceso.

- Gėsmės, nuo kurių turi būti apsaugota sistema;
- Vartotojų ir procesų registravimo procedūros.
- Vartotojų ir procesų skirstymo į klases ir teisių priskyrimo toms klasėms taisyklės.
- Vartotojų ir procesų  atuorizavimo taisyklės.
- Duomenų sistemos funkcijų klasifikavimo pagal slaptumo kategorijas taisyklės ir tų klasių apsaugos lygmenys.

**Security**
- TAG: CommunicationSecurity
- GIST: Security of the communication between the systaem and server,
- SCALE: THe messages should be encrypted for log-in communications, so others cannot get user-name and password from those messages.
- METER: Attempts to get user-name and password through obtained messages on 1000 log0in session during testing.
- MUST: 100% of the communication messages in the communication of a log-in session should be encrybped.
- Communication messages: Every exchanged of information between client and server.

- TAG: RestaurantOwnerLoginAccountSecurity.
- GIST: Security of accounts.
- SCALE: if a restaurant owner tries to log in to the web portal with a non-existing account the the restauran owner shoud not be legged in. The restaurant owner should be notified about log-in failure.
- METER: 1000 attempts to log-in with a non-existing user account during testing/
- MUST: 100% of the time.

## Teisiniai ribojimai



