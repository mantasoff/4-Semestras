﻿## Pagrindiniai (1-31):

**1.Pateikite visą informaciją iš SALGRADE lentelės**
desc salgrade;

**2. Pateikite visą informacijai iš EMP lentelės apie darbuotojus, užimančius MANAGER pareigas.**
select * from emp where upper(JOB) = 'MANAGER';

**3. Pateikite darbuotojų, gaunančių atlyginimą nuo 1600 iki 3000, sąrašą (pavardę, skyriaus numerį, atlyginimą).**
 select ename, deptno, sal from emp where sal>=1600 and sal<3000;

**4. Pateikite skyrių numerių ir pavadinimų sąrašą, surūšiuotą pagal skyriaus pavadinimą abėcėlės tvarka (lentelė DEPT).**
select deptno, dname from dept order by dname;

**5.Pateikite sąrašą darbuotojų pareigų. Pareigų pavadinimai neturi kartotis. Surūšiuokite atbuline abėcėlei tvarka.**
select distinct job from emp order by job desc;

**6.Pateikite 10-o ir 30-o skyrių darbuotojų sąrašą, surūšiuotą pagal darbuotojo vardą abėcėlės tvarka (darbuotojo numerį, pavardę, pareigas, viršininko numerį, priėmimo į darbą datą, atlyginimą, komisinius, skyriaus numerį)**
select empno,ename,job,mgr,hiredate,sal,comm,deptno from emp where deptno=10 OR deptno=30 order by ename;

**7.Pateikite visų pardavėjų (Salesman), kurių mėnesinis atlyginimas yra didesnis už komisinius, pavardes, metinius atlyginimus ir komisinius. Išveskite šia informaciją į ekraną, rūšiuodami pagal atlyginimo dydį, pradėdami nuo didžiausio**
select ename, sal*12, comm from emp where upper(JOB) = 'SALESMAN' AND sal>comm order by sal desc;

**8. Pateikite tarnautojų (CLERK), dirbančių 20-ame skyriuje, pavardes ir pareigas**
select ename, job from emp where deptno=20 and upper(job) = 'CLERK';

**9. Pateikite informaciją apie darbuotojus (pavardę, pareigas, viršininko numerį, atlyginimą), kurie turi vadovą (stulpelis MGR).**
select ename, job, mgr, sal from emp where mgr is not null;

**10. Pateikite darbuotojų vardus ir jų metines pajamas;**
select ename, 12(sal*nvl(comm,0)) from emp;

**11. Pateikite darbuotojų, priimtų į darbą 1983 metais, sąrašą (pavardę, skyriaus numerį, priėmimo į darbą datą).**
select ename, deptno, hiredate from emp where extract(year from 
hiredate) = 1983;

**12. Pateikite darbuotojų pavardes ir atlyginimus, padidintus 15% ir išreikštus sveikais skaičiais**
select ename,trunc(sal*1.15) from emp;

**13. Išveskite į ekraną darbuotojų pavardes, jų priėmimo į darbą ir atlyginimo peržiūrėjimo datas. Tarkime, kad atlyginimo peržiūrėjimo data (stulpelį pavadinkite REVIEW) yra po metų nuo priėmimo į darbą datos. Duomenis pateikite surūšiavus pagal atlyginimo peržiūrėjimo datos didėjimo tvarka.**
select ename, hiredate, add_months(hiredate,12) as REVIEW from emp;

**14. Pastebėta, kad 30-ame skyriuje ne visi pardavėjai vyrai. Išveskite į ekraną informaciją, kaip parodyta žemiau, pakeisdami SALESMAN į SALESPERSON.**
select ename, deptno, case when initcap(job) = 'Salesman' THEN 'Salesperson' else initcap(job) end from emp; 

**15. Suraskite mažiausią darbuotojų atlyginimą**
select min(sal) from emp;

**16. . Suraskite darbuotojų didžiausią, mažiausią ir vidutinį  atlyginimus.**
select max(sal), min(sal), avg(sal) from emp;

**17. Pateikite mažiausią ir didžiausią atlyginimus kiekvienoms pareigoms.**
select job, max(sal) from emp group by job;

**18. Suraskite, kiek yra vadovų, neišvardinant jų.**
select count(*) from emp where upper(job) = 'MANAGER';

**19. Paskaičiuokite atlyginimų vidurkį ir visų pajamų vidurkį kiekvienoms pareigoms. Nepamirškite, kad pardavėjai uždirba komisinius.**
select job, avg(sal), case when upper(job)='SALESMAN' then avg(sal+comm) ELSE avg(sal) from emp group by job;

**20. Suraskite skirtumą tarp didžiausio ir mažiausio darbo užmokesčio.**
select max(sal)-min(sal) from emp;

**21. Suraskite visus skyrius, kuriuose dirba daugiau kaip 3 darbuotojai.**
select dept.deptno, dept.dname from dept where 3<=(select count(*) from emp where emp.deptno=dept.deptno);

**22. Patikrinkite, ar darbuotojų numeriai iš tikrųjų nepasikartoja.**
select empno,count(*) from emp group by empno;

**23. Pateikite kiekvieno vadovo mažiausiai apmokamo darbuotojo atlyginimą. Neįtraukite tų grupių, kur atlyginimas yra mažesnis už 1000. Informaciją pateikite atlyginimų didėjimo tvarka.**
select mgr, min(sal) from emp group by mgr having mgr is not null and min(sal) > 1000 order by min(sal);

**24. Pateikite darbuotojų pavardes ir skyrių, kuriuose jie dirba, pavadinimus. Informaciją surūšiuokite pagal skyrių pavadinimus.**
select emp.ename, dept.dname from emp inner join dept on dept.deptno = emp.deptno;

**25. Pateikite visų darbuotojų pavardes, skyrių, kuriuose jie dirba, pavadinimus ir skyrių numerius.**
select emp.ename, dept.dname, dept.deptno from emp inner join dept on dept.deptno = emp.deptno;

**26. . Pateikite darbuotojų, kurių mėnesinis atlyginimas didesnis už 1500, pavardes, miestų ir skyrių, kuriuose jie dirba, pavadinimus**
select emp.ename, dept.loc, dept.dname, sal from emp inner join dept on emp.deptno = dept.deptno where emp.sal>1500;

**27. Pateikite darbuotojų sąrašą (pavardę, pareigas, atlyginimą) ir jų atlyginimų lygius (Grade).**
select ename,job,sal,salgrade.grade from emp inner join salgrade on sal>=losal AND sal<=hisal;

**28. Pateikite tą pačią informaciją apie darbuotojus, kurių 3 atlyginimo lygis.**
select ename,job,sal,salgrade.grade from emp inner join salgrade on sal>=losal and sal<=hisal where salgrade.grade=3;

**29. Pateikite informaciją apie darbuotojus, dirbančius Dalase (pavardes, atlyginimus, miestą, kuriame dirba darbuotojas)**
select ename, sal, dept.loc from emp inner join dept on dept.deptno = emp.deptno where upper(dept.loc) = 'DALLAS';

**30. Išvardinkite skyrius, kuriuose nedirba nei vienas darbuotojas.** 
select deptno,dname from ept where (select count (*) from emp where dept.deptno=emp.deptno)=3;

**31. Pateikite skyrių pavadinimus ir mažiausią bei didžiausią atlyginimus tuose skyriuose.**
select dname, (select min(sal) from emp group by emp.deptno having emp.deptno=dept.deptno) as MIN, (select max(sal) from emp group by emp.deptno having emp.deptno=dept.deptno) as MAX from dept;

## Papildomi:

**1. Sukurkite užklausą, pateikiančią informaciją apie visus darbuotojus dirbančius nurodytose pareigose. Pareigas aprašykite pasinaudoję kintamuoju. Patikrinimo tikslu įvykdykite šią
užklausą kelis kartus**
define kintamasis = 'CLERK'; 
select ename, job,sal, mgr, deptno from emp where upper(job) = upper('&kintamasis');

**2. Apibrėžkite kintamąjį darbuotojų metiniam atlyginimui skaičiuoti. Panaudokite šį kintamąjį užklausoje, kuri išvardintų visus darbuotojus, uždirbančius per metus 30 000 ir daugiau.
(Pavardė ir metinis atlyginimas)**
define kintamasis = 30000;
select ename,sal*12 from emp where sal*12>=&kintamasis;

**3. Išveskite į ekraną informaciją žemiau parodytu būdu.**
select concat(ename, concat(substr('                        ',length(ename),15-length(job)-length(ename)),job)) from emp;

**4. Parašykite užklausą, pateikiančią, kiek laiko darbuotojas dirba įmonėje. Galite naudoti DEFINE komandą, kad nereikėtų pakartotinai suvedinėti išraiškų.**
define kintamasis = '7839';
select ename, trunc(months_between(sysdate,hiredate)/12) , trunc(mod(months_between(systade,hiredate)/12,12))from emp;