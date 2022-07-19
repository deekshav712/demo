create table BRANCH(branchid varchar(10) primary key,
bname char(20) not null,
hod char(20) not null);

mysql> desc branch;
+-------+----------+------+-----+---------+-------+
| Field | Type     | Null | Key | Default | Extra |
+-------+----------+------+-----+---------+-------+
| bid   | char(10) | NO   | PRI | NULL    |       |
| bname | char(20) | NO   |     | NULL    |       |
| hod   | char(20) | NO   |     | NULL    |       |
+-------+----------+------+-----+---------+-------+

insert into BRANCH values('B1','MCA','Dr.Vandana B.S');
insert into BRANCH values('B2','MBA','Dr.Shekar Iyer');
insert into BRANCH values('B3','CS','Prof.Krishnamohana');
insert into BRANCH values('B4','AIML','Dr.Govindaraju');
insert into BRANCH values('B5','Mech','Dr.Manujesh B.J');

mysql> select * from BRANCH;
+----------+-------+--------------------+
| branchid | bname | hod                |
+----------+-------+--------------------+
| B1       | MCA   | Dr.Vandana B.S     |
| B2       | MBA   | Dr.Shekar Iyer     |
| B3       | CS    | Prof.Krishnamohana |
| B4       | AIML  | Dr.Govindaraju     |
| B5       | Mech  | Dr.Manujesh B.J    |
+----------+-------+--------------------+



create table STUDENT( USN varchar(20) primary key,
name varchar(20) not null,
address varchar(30)not null,
branchid varchar(10),
sem int(10),
foreign key(branchid) references BRANCH(branchid));

mysql> desc STUDENT;
+----------+-------------+------+-----+---------+-------+
| Field    | Type        | Null | Key | Default | Extra |
+----------+-------------+------+-----+---------+-------+
| USN      | varchar(20) | NO   | PRI | NULL    |       |
| name     | varchar(20) | NO   |     | NULL    |       |
| address  | varchar(30) | NO   |     | NULL    |       |
| branchid | varchar(10) | YES  | MUL | NULL    |       |
| sem      | int         | YES  |     | NULL    |       |
+----------+-------------+------+-----+---------+-------+
insert into STUDENT values('4VP18CS058','Varun','Puttur','B3',8);
insert into STUDENT values('4VP19ME021','Sunil','Puttur','B5',6);
insert into STUDENT values('4VP20AI040','Anagha','Puttur','B4',4);
insert into STUDENT values('4VP20MB010','Teja','Puttur','B2',4);
insert into STUDENT values('4VP21MC001','Aishwarya','Puttur','B1',2);
insert into STUDENT values('4VP21MC002','Akash Krishna','Puttur','B1',2);
insert into STUDENT values('4VP21MC003','Charithra','Puttur','B1',2);
insert into STUDENT values('4VP21MC031','Rakshith GT','Puttur','B1',2);
insert into STUDENT values('4VP21MC053','Tushar Shetty','Puttur','B1',2);

mysql> SELECT * FROM STUDENT;
+------------+---------------+---------+----------+------+
| USN        | name          | address | branchid | sem  |
+------------+---------------+---------+----------+------+
| 4VP18CS058 | Varun         | Puttur  | B3       |    8 |
| 4VP19ME021 | Sunil         | Puttur  | B5       |    6 |
| 4VP20AI040 | Anagha        | Puttur  | B4       |    4 |
| 4VP20MB010 | Teja          | Puttur  | B2       |    4 |
| 4VP21MC001 | Aishwarya     | Puttur  | B1       |    2 |
| 4VP21MC002 | Akash Krishna | Puttur  | B1       |    2 |
| 4VP21MC003 | Charithra     | Puttur  | B1       |    2 |
| 4VP21MC031 | Rakshith GT   | Puttur  | B1       |    2 |
| 4VP21MC053 | Tushar Shetty | Puttur  | B1       |    2 |
+------------+---------------+---------+----------+------+

insert into STUDENT values('4VP18CS058','Varun','Puttur','B3',8);
insert into STUDENT values('4VP19ME021','Sunil','Puttur','B5',6);
insert into STUDENT values('4VP20AI040','Anagha','Puttur','B4',4);
insert into STUDENT values('4VP20MB010','Teja','Puttur','B2',4);
insert into STUDENT values('4VP21MC001','Aishwarya','Puttur','B1',2);
insert into STUDENT values('4VP21MC002','Akash Krishna','Puttur','B1',2);
insert into STUDENT values('4VP21MC003','Charithra','Puttur','B1',2);
insert into STUDENT values('4VP21MC031','Rakshith GT','Puttur','B1',2);
insert into STUDENT values('4VP21MC053','Tushar Shetty','Puttur','B1',2);


create table AUTHOR(authorid int(10) primary key,
authorname char(20),
country char(20),
age int(10)); 

mysql> desc AUTHOR;
+------------+----------+------+-----+---------+-------+
| Field      | Type     | Null | Key | Default | Extra |
+------------+----------+------+-----+---------+-------+
| authorid   | int      | NO   | PRI | NULL    |       |
| authorname | char(20) | YES  |     | NULL    |       |
| country    | char(20) | YES  |     | NULL    |       |
| age        | int      | YES  |     | NULL    |       |
+------------+----------+------+-----+---------+-------+
insert into AUTHOR values(1,'Ramez Elmasri','Arlinthon',51);
insert into AUTHOR values(2,'Baidyanath Mishra','India',52);
insert into AUTHOR values(3,'Ellis Horowitz','US',41);
insert into AUTHOR values(4,'Deepak Kehmani','India',39);
insert into AUTHOR values(5,'Yunus','Japan',34);

mysql> select * from AUTHOR;
+----------+-------------------+-----------+------+
| authorid | authorname        | country   | age  |
+----------+-------------------+-----------+------+
|        1 | Ramez Elmasri     | arlinthon |   51 |
|        2 | Baidyanath Mishra | India     |   52 |
|        3 | Ellis Horowitz    | US        |   41 |
|        4 | Deepak Kehmani    | India     |   39 |
|        5 | Yunus             | Japan     |   34 |
+----------+-------------------+-----------+------+

create table BOOK(bookid varchar(10) primary key,
bookname char(20),
authorid int(10),
publisher char(20),
branchid varchar(10),
foreign key(branchid) references BRANCH(branchid),
foreign key(authorid) references AUTHOR(authorid));

mysql> desc BOOK;
+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| bookid    | varchar(10) | NO   | PRI | NULL    |       |
| bookname  | char(20)    | YES  |     | NULL    |       |
| authorid  | int         | YES  | MUL | NULL    |       |
| publisher | char(20)    | YES  |     | NULL    |       |
| branchid  | varchar(10) | YES  | MUL | NULL    |       |
+-----------+-------------+------+-----+---------+-------+

insert into BOOK values('BK1','DBMS',1,'PEARSON','B1');
insert into BOOK values('BK2','Research Methodology',2,'PEARSON','B2');
insert into BOOK values('BK3','Data Structure',3,'MC Graw Hill','B3');
insert into BOOK values('BK4','Artificial Intelligence',4,'MC Graw Hill','B4');
insert into BOOK values('BK5','Thermo Dynamics',5,'taylor','B5');

mysql> SELECT * FROM BOOK;
+--------+----------------------+----------+--------------+----------+
| bookid | bookname             | authorid | publisher    | branchid |
+--------+----------------------+----------+--------------+----------+
| BK1    | DBMS                 |        1 | PEARSON      | B1       |
| BK2    | Research Methodology |        2 | PEARSON      | B2       |
| BK3    | Data Structure       |        3 | MC Graw Hill | B3       |
| BK5    | Thermo Dynamics      |        5 | taylor       | B5       |
+--------+----------------------+----------+--------------+----------+


create table BORROW(usn varchar(20),
bookid varchar(10),
borrowed_date date,
primary key(usn,bookid),
foreign key(usn) references STUDENT(usn),
foreign key(bookid) references BOOK(bookid));


mysql> desc BORROW;
+---------------+-------------+------+-----+---------+-------+
| Field         | Type        | Null | Key | Default | Extra |
+---------------+-------------+------+-----+---------+-------+
| usn           | varchar(20) | NO   | PRI | NULL    |       |
| bookid        | varchar(10) | NO   | PRI | NULL    |       |
| borrowed_date | date        | YES  |     | NULL    |       |
+---------------+-------------+------+-----+---------+-------+

insert into BORROW values('4VP18CS058','BK3','2010-05-21');
insert into BORROW values('4VP19ME021','BK5','2018-11-11');
insert into BORROW values('4VP20AI040','BK4','2009-02-10');
insert into BORROW values('4VP20MB010','BK2','2019-12-13');
insert into BORROW values('4VP21MC002','BK1','2004-01-01');

mysql> SELECT * FROM BORROW;
+------------+--------+---------------+
| usn        | bookid | borrowed_date |
+------------+--------+---------------+
| 4VP18CS058 | BK3    | 2010-05-21    |
| 4VP19ME021 | BK5    | 2018-11-11    |
| 4VP20MB010 | BK2    | 2019-12-13    |
| 4VP21MC002 | BK1    | 2004-01-01    |
+------------+--------+---------------+



select * from student,branch
where branchid=(select * from branch
where branchname='MECH');

SELECT USN,NAME 
FROM STUDENT,BRANCH
WHERE STUDENT.BRANCHID=BRANCH.BRANCHID AND
bname="MCA";


SELECT ALL branchid;

SELECT * FROM AUTHOR 
WHERE COUNTRY LIKE "%nd%";
+----------+-------------------+---------+------+
| authorid | authorname        | country | age  |
+----------+-------------------+---------+------+
|        2 | Baidyanath Mishra | India   |   52 |
|        4 | Deepak Kehmani    | India   |   39 |
+----------+-------------------+---------+------+


SELECT * FROM AUTHOR
WHERE COUNTRY LIKE "_ND__";
+----------+-------------------+---------+------+
| authorid | authorname        | country | age  |
+----------+-------------------+---------+------+
|        2 | Baidyanath Mishra | India   |   52 |
|        4 | Deepak Kehmani    | India   |   39 |
+----------+-------------------+---------+------+

SELECT * FROM AUTHOR
WHERE age between 42 and 52;
+----------+-------------------+-----------+------+
| authorid | authorname        | country   | age  |
+----------+-------------------+-----------+------+
|        1 | Ramez Elmasri     | Arlinthon |   51 |
|        2 | Baidyanath Mishra | India     |   52 |
+----------+-------------------+-----------+------+

SELECT USN,NAME
FROM STUDENT,BRANCH
WHERE bname="MCA" AND 
STUDENT.branchid=BRANCH.branchid
ORDER BY NAME
DESC;

+------------+---------------+
| USN        | NAME          |
+------------+---------------+
| 4VP21MC053 | Tushar Shetty |
| 4VP21MC031 | Rakshith GT   |
| 4VP21MC003 | Charithra     |
| 4VP21MC002 | Akash Krishna |
| 4VP21MC001 | Aishwarya     |
+------------+---------------+

SELECT USN FROM
STUDENT
UNION
SELECT USN FROM BORROW;

+------------+
| USN        |
+------------+
| 4VP21MC001 |
| 4VP21MC002 |
| 4VP21MC003 |
| 4VP21MC031 |
| 4VP21MC053 |
| 4VP20MB010 |
| 4VP18CS058 |
| 4VP20AI040 |
| 4VP19ME021 |
+------------+

SELECT USN FROM
STUDENT
WHERE SEM IS NULL;

SELECT DISTINCT NAME FROM
STUDENT,BORROW
WHERE STUDENT.USN=BORROW.USN;

+---------------+
| NAME          |
+---------------+
| Akash Krishna |
| Teja          |
| Varun         |
| Sunil         |
+---------------+

SELECT DISTINCT NAME
FROM STUDENT,BORROW
WHERE STUDENT.USN IN
(SELECT USN FROM BORROW);
+---------------+
| NAME          |
+---------------+
| Varun         |
| Sunil         |
| Teja          |
| Akash Krishna |
+---------------+
  
SELECT DISTINCT NAME
FROM STUDENT,BORROW
WHERE STUDENT.USN NOT IN
(SELECT USN FROM BORROW);
+---------------+
| NAME          |
+---------------+
| Anagha        |
| Aishwarya     |
| Charithra     |
| Rakshith GT   |
| Tushar Shetty |
+---------------+

SELECT BOOK.AUTHORID,AUTHORNAME,COUNT(*)  "NO OF BOOKS"
FROM BOOK,AUTHOR
WHERE BOOK.AUTHORID=AUTHOR.AUTHORID
GROUP BY BOOK.AUTHORID;
+----------+-------------------+-------------+
| AUTHORID | AUTHORNAME        | NO OF BOOKS |
+----------+-------------------+-------------+
|        1 | Ramez Elmasri     |           1 |
|        2 | Baidyanath Mishra |           1 |
|        3 | Ellis Horowitz    |           1 |
|        5 | Yunus             |           1 |
+----------+-------------------+-------------+

SELECT STUDENT.USN,NAME,BNAME,BOOKNAME,BORROWED_DATE
FROM STUDENT,BRANCH,BOOK,AUTHOR,BORROW
WHERE STUDENT.USN=BORROW.USN AND
STUDENT.BRANCHID=BRANCH.BRANCHID AND
BORROW.BOOKID=BOOK.BOOKID AND
BOOK.AUTHORID=AUTHOR.AUTHORID AND
STUDENT.SEM=2 AND BRANCH.BNAME="MCA";

+------------+---------------+-------+----------+---------------+
| USN        | NAME          | BNAME | BOOKNAME | BORROWED_DATE |
+------------+---------------+-------+----------+---------------+
| 4VP21MC002 | Akash Krishna | MCA   | DBMS     | 2004-01-01    |
+------------+---------------+-------+----------+---------------+


SELECT * FROM STUDENT
WHERE USN IN
(SELECT USN FROM BORROW GROUP BY 
USN HAVING COUNT(USN)>=2);
