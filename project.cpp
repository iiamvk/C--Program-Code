
#include<iostream>

using namespace std;
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

class test
{  
	char ans;
	int marks;
public:void start();
};
void test::start()
{
	 marks=0;
 
	 clrscr();
 
	 cout<<"\n\n\n\n\n              GET  READY FOR YOUR 1ST ROUND QUESTIONS..............";
	 delay(2000);
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(1) WHAT IS THE MEANING OF 'KHALSA' ?";
	 cout<<"\n\n (a) GOOD\t\t(b) PURE\n(c) TEMPLE\t\t(d) NONE";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if(( ans== 'b')||(ans=='B'))
	 {  
		sound(100);
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n YOU ARE RIGHT !! ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		cout<<"\n SORRY YOU ARE WRONG :(((";
		delay(2000);
	 }
	clrscr();
	cout<<"\n\n\n =========================================================================";
	cout<<"\n(2) WHICH OF THE FOLLOWING MEANS 'A SENSE OF HUMOUR'?";
	cout<<"\n\n (a) JOVIAL BONE\t\t(b) FUNNY BONE\n(c) FUNNY FARM\t\t(d) WISH BONE";
	cout<<"\n =========================================================================";
	cin>>ans;
	if((ans=='b')||(ans=='B'))
	 {  
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n THATS RIGHT !! ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n THATS NOT THE RIGHT ANSWER :(((";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(3) THE COUNTRY WITH THE LARGEST BUDHIST POPULATION IS :";
	 cout<<"\n\n (a) JAPAN\t\t(b) THAILAND\n(c) CHINA\t\t(d) INDIA";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 { 
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n PERFECT ANSWER !!, KEEP IT UP ^_^";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n OOPS YOU ARE WRONG !";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(4) WHICH ONE OF THE FOLLOWING IS THE LARGEST ISLAND IN THE WORLD ?";
	 cout<<"\n\n (a) GREENLAND\t\t(b) ANDAMAN & NICOBAR\n(c) IRELAND\t\t(d) NEWZEALAND";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if((ans=='a')||(ans=='A'))
	 {    
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n YES THATS THE ONE ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n THATS A STUPID REPLY BUDDY ";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n =========================================================================";
	 cout<<"\n(5) WHERE DID THE RECENTLY EXTINCT BIRD DODO LIVE ?";
	 cout<<"\n\n (a) INDIA\t\t(b) SOUTH AMERICA\n(c) MAURITIUS\t\t(d) NEPAL";
	 cout<<"\n =========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {   
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n MAURITIUS IS THE .......... RIGHT ANSWER !!!!!!!!";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n WRONG ANSWER :(((";
		 delay(2000);
	 }
 
 
	 if( marks>=3)
	 {
		clrscr();
		cout< <"\n\n\n************************************************************************";
		cout<<"\n                  RESULT OF FIRST ROUND( EASY ROUND) ";
		cout<<"\n************************************************************************";
 
		cout<<"\nYOUR MARKS IS     "<<marks<<"        ";
		cout<<"\n\n\nYOUR SCORE TELLS US THAT YOU CAN ENTER THE 2ND ROUND NOW, GO ON AND CRACK THE QUIZ !!";
		delay(5000);
		clrscr();
		cout<<"\n\n\n ========================================================================";
		cout<<"\n (6) WHICH IS THE TALLEST TOWER IN INDIA ?";
		cout<<"\n\n (a) QUTUB MINAR, DELHI\t\t(b) EXPRESS TOWER, MUMBAI\n(c) CLOCK TOWER,DELHI\t\t(d) TV TOWER,PITAMPURA,DELHI";
		cout<<"\n ========================================================================";
		cin>>ans;
		if((ans=='d')||(ans=='D'))
	 {   
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n KEEP IT UP DEAR !";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n SORRY DEAR, THATS NOT THE RIGHT ANSWER";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n (7) OF WHICH MATERIAL IS GLASS MADE ?";
	 cout<<"\n\n(a) MICA\t\t(b) SAND\n(c) DIAMOND\t\t(d) QUARTZ";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='b')||(ans=='B'))
	 {  
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n SAND IS RIGHT ANSWER :)))";
		delay(2000);
		marks++;
	 }
	 else
	 {
		cout<<"\n WRONG ANSWER :((";
		delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(8) WHO WAS THE FIRST TEST-TUBE BABY ?";
	 cout<<"\n\n(a) LOUISE BROWN\t\t(b) CHANDLER DAVIS\n(c) JAMES DANIEL\t\t(d) ELIZABETH PAL";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='a')||(ans=='A'))
	 {   
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n YAPIII!! THATS RIGHT ^_^";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n :((( NOT THE CORRECT ANSWER";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(9) WHO FIRST TREATED ZERO AS A NUMBER ?";
	 cout<<"\n\n (a) BHASKARA\t\t(b) ARISTOTLE\n(c) BRAHMAGUPTA\t\t(d) PYTHAGORAS";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {   
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n DONT WORRY U DIDNT GOT ZERO HERE !!";
		delay(2000);
	    marks++;
	 }
	 else
	 {
		 cout<<"\n NO BUDDY YOUR ANSWER "<<ans<<" GIVES U ZERO";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(10) WHICH IS THE OLDEST RAILWAY STATION IN THE WORLD ?";
	 cout<<"\n\n (a) LIVERPOOL\t\t(b) SONPUR\n(c) LONDON\t\t(d) LENINGRAD";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='a')||(ans=='A'))
	 {  
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n LIVERPOOL IS THE RIGHT ANSWER !!";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n WRONG ANSWER ";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(11) IN TENNIS , LOVE MEANS : ";
	 cout<<"\n\n (a) LATE\t\t(b) ZERO\n(c) FIGHT\t\t(d) VICTORY";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='b')||(ans=='B'))
	 {     
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n UR ANSWER IS RIGHT , LOVIN IT ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n WRONG ANSWER ";
		 delay(2000);
	 }
	 clrscr();
	 cout<<"\n\n\n ========================================================================";
	 cout<<"\n(12) THERE ARE FOUR STARS ON THE NATIONAL FLAG OF: ";
	 cout<<"\n\n (a) PANAMA/t/t(b) CHINA\n(c) NEW ZEALAND\t\t(d) LIBERIA";
	 cout<<"\n========================================================================";
	 cin>>ans;
	 if((ans=='c')||(ans=='C'))
	 {  
		sound(523);
		sound(523);
		sound(100);
		sound(223);
		delay(500);
		nosound();
		cout< <"\n THAT WAS THE LAST AND THE RIGHT ANSWER OF THIS ROUND ";
		delay(2000);
		marks++;
	 }
	 else
	 {
		 cout<<"\n THAT WAS THE LAST AND THE WRONG ANSWER OF THIS ROUND";
		 delay(2000);
	 }
 
		 if(marks>=8)
		 {
			clrscr();
			cout< <"\n ************************************************************************";
			cout<<"\n                  RESULT OF SECOND ROUND( MEDIUM ROUND) ";
			cout<<"\n ************************************************************************";
			cout<<"\n YOUR MARKS IS     "<<marks<<"        ";
			cout<<"\n HEY ! YOU HAVE DONE IT , U CAN ENTER THE NEXT AND THE LAST ROUND";
			delay(5000);
			clrscr();
			cout<<"\n\n\n\n\n THIS IS A HARD ROUND, SO TAKE TIME TO ANSWER, BEST OF LUCK!!";
		    delay(2000);
			clrscr();
			cout<<"\n\n\n ======================================================================";
	        cout<<"\n(13) WHO IS KNOWN AS THE FATHER OF CELLULAR PHONE ?";
			cout<<"\n\n (a) JOHN LUDWIG\t\t(b) FRANK WHITTLE\n(c) JAMES WRIGHT\t\t(d) MARTIN COOPER";
			cout<<"\n======================================================================";
			cin>>ans;
			if((ans=='d')||(ans=='D'))
			 {   
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <" KEEP IT UP BUDDY !!";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n YOUR ANSWER "<<ans<<" IS WRONG :((";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n ======================================================================";
			 cout<<"\n(14) TAI CHI IS THE :";
			 cout<<"\n\n (a) ANCIENT MARTIAL ART\t\t(b) A TEA PECUILIAR TO CHINA\n(c) PART OF THE GREAR WALL\t\t(d) CHINESE EMPEROR";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='a')||(ans=='A'))
			 {    
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <"\n YAHOOH! THATS THE RIGHT ANSWER ^_^";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n THATS THE WRONG ANSWER";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n ======================================================================";
	         cout<<"\n(15) 'CHARLES THE MAD' WAS THE KING OF:";
			 cout<<"\n\n (a) ENGLAND\t\t(b) DENMARK\n(c) FRANCE\t\t(d) CHINA";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='c')||(ans=='C'))
			 { 
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <"\n\n FRANCE IS THE RIGHT ANSWER !!!";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n DONT BE MAD, BUT THATS NOT THE RIGHT ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
	         cout<<"\n(16) INDIA FIRST TESTED ITS NUCLEAR CAPACITY AT POKHRAN IN 1974 ON:";
			 cout<<"\n\n (a) GANDHI JAYANTI\t\t(b) INDEPENDENCE DAY\n(c) REPUBLIC DAY\t\t(d) BUDHA PURNIMA";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='d')||(ans=='D'))
			 {  
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout< <"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n=====================================================================";
	         cout<<"\n(17) WHICH OF THIS MEANS A HANDSOME MAN";
			 cout<<"\n\n (a) DIVINER\t\t(b) GREEK GOD\n(c) GREEN MAN\t\t(d) GROOM";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='b')||(ans=='B'))
			 {    
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <"\n THATS A HANDSOME ANSWER!! :)))";
				delay(2000);
			    marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
	         cout<<"\n(18) THE FAMOUS RHYME 'TWINKLE TWINKLE' WAS WRITTEN BY:";
			 cout<<"\n\n (a) ANNE & JIMMY BELL\t\t(b) AMI & JOHNY TAYLOR\n(c) ANN & JAME TAYLOR\t\t(d) NONE OF THE ABOVE";
			 cout<<"\n=======================================================================";
			 cin>>ans;
			 if((ans=='c')||(ans=='C'))
			 {  
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <"\n TWINKLE TWINKLE, U R RRRRIGHT  :)))";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
	         cout<<"\n(19) WHO FOUNDED GOLCONDA DYNASTY ?";
			 cout<<"\n\n (a) QULI QUTUB SHAH\t\t(b) BAHMAN SHAH\n(c) MOHAMMAD GOVAM\t\t(d) ADIL SHAH";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='a')||(ans=='A'))
			 {  
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <"\n YEP! THATS THE RIGHT ANSWER :)))";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n YOUR ANSWER "<<ans<<"WRONG ";
				 delay(2000);
			 }
			 clrscr();
			 cout<<"\n\n\n======================================================================";
	         cout<<"\n(20) WHO WAS THE FOUNDER OF THE DOCTRINE OF ADVAITA OR MONISM ?";
			 cout<<"\n\n (a) RAMANUJA\t\t(b) MADVA\n(c) ABHINAVA\t\t(d) SANKARA";
			 cout<<"\n======================================================================";
			 cin>>ans;
			 if((ans=='d')||(ans=='D'))
			 {    
				sound(523);
				sound(523);
				sound(100);
				sound(223);
				delay(500);
				nosound();
				cout< <"\n SANKARA IS THE RIGHT ANSWER :)))";
				delay(2000);
				marks++;
			 }
			 else
			 {
				 cout<<"\n SORRY THATS NOT THE ANSWER ";
				 delay(2000);
			 }
			 if( marks>=16)
			 {
				clrscr();
				cout< <"\n\n\n\n********************************************************************";
				cout<<"\n                  RESULT OF FINAL ROUND( HARD ROUND) ";
				cout<<"\n*********************************************************************";
				cout<<"\n                             CONGRATS !!!!";
				cout<<"\n YOUR MARKS IS     "<<marks<<"        ";
				cout<<"\n THAT MEANS YOU HAVE DONE ALL THE ANSWER IN THIS ROUND CORRECT !!";
				cout<<"\n YOU GET A PRIZE FROM SASUMA CORP. TO CLAIM UR PRIZE, CONTACT AT: sayeri@cheerful.com";
				cout<<"\n\n\n\n                ^--------------^";
				cout<<"\n VISIT US AGAIN !!";
				delay(5000);
			 }
			 else
			 {
				clrscr();
				cout<<"\n\n\n\n*********************************************************************";
				cout<<"\n                  RESULT OF FINAL ROUND( HARD ROUND) ";
				cout<<"\n*********************************************************************";
				cout<<"\n YOUR MARKS IS     "<<marks<<"              ";
				cout<<"\n SORRY YOUR MARKS COULD NOT GET U ON THE TOP, SO U DONT WIN ANYTHING :(((";
				clrscr();
				cout<<"\n\n\n\n\n THANX FOR PLAYING :)))";
				delay(5000);
 
			 }
		}
		else
		{
			clrscr();
			cout<<"\n\n\n\n\n*********************************************************************";
			cout<<"\n                  RESULT OF SECOND ROUND( MEDIUM ROUND) ";
			cout<<"\n *********************************************************************";
			cout<<"\n YOUR MARKS IS     "<<marks<<"        ";
			cout<<"\n  SORRY YOU ARE NOT ALLOWED TO THE NEXT ROUND";
			delay(5000);
			clrscr();
			cout<<"\n\n\n\n\n THANX FOR YOUR INTEREST !";
			delay(2500);
		}
 
 
 
 
		}
		else
		{ 
			clrscr();
			cout<<"\n************************************************************************";
			cout<<"\n                  RESULT OF FIRST ROUND( EASY ROUND) ";
			cout<<"\n************************************************************************";
			cout<<"\nYOUR MARKS IS     "<<marks<<"        ";
			cout<<"\n\nYOUR SCORE IS NOT SATISFACTORY , SO U WONT BE ABLE TO ENTER THE NEXT ROUND, SORRY :((";
			delay(5000);
			clrscr();
			cout<<"\n\n\n\n\n         THANX FOR YOUR INTEREST :)))";
			delay(2500);
		}
 
 
 
 
}
void main()
{
	test s;
	int ch,roll;
	char name[30],choice,join;
	clrscr();
 
	cout<<"\n\t!!  !!  !!  !!!!!!  !!     !!!!!!  !!!!!!  !!!!!!!!!!  !!!!!! ";
	cout<<"\n\t!!  !!  !!  !!      !!     !!      !!  !!  !!  !!  !!  !!         ";
	cout<<"\n\t!!  !!  !!  !!!!!!  !!     !!      !!  !!  !!  !!  !!  !!!!!!   ";
	cout<<"\n\t!!  !!  !!  !!      !!     !!      !!  !!  !!  !!  !!  !!          ";
	cout<<"\n\t!!!!!!!!!!  !!!!!!  !!!!!  !!!!!!  !!!!!!  !!  !!  !!  !!!!!!   ";
	cout<<"\n\t=============================================================\n";
	cout<<"\n\t\t\t*****************   ***********";
	cout<<"\n\t\t\t       ***          ***     ***";
	cout<<"\n\t\t\t       ***          ***     ***";
	cout<<"\n\t\t\t       ***          ***     ***";
	cout<<"\n\t\t\t       ***          ***     ***";
	cout<<"\n\t\t\t       ***          ***     ***";
	cout<<"\n\t\t\t       ***          ***********";
	cout<<"\n\t\t\t===============================\n";
	cout<<"\n######  ####  ##    ##   ######  ####  ##  #####   ###### ##### ##### ######";
	cout<<"\n##  ##  ## ## ## __ ##     ##    ## ## ##  ##        ##   ##    ##      ##";
	cout<<"\n##  ##  ## ## ##    ##     ##    ## ## ##  #####     ##   ##### #####   ##";
	cout<<"\n##  ##  ## #####    ##     ##    ## #####  ##        ##   ##       ##   ## ";
	cout<<"\n######  ## #####    #### ######  ## #####  #####     ##   ##### #####   ##";
	cout<<"\n===========================================================================";
	cout<<"\n\t\t\t DO U WANT TO JOIN US (Y/N)?";
	cin>>join;
	if((join=='y')||(join=='Y'))
{       
	sound(100);
    sound(523);
    sound(100);
    sound(593);
    sound(100);
    sound(523);
    sound(100);
    sound(543);
    sound(100);
    sound(523);
    sound(523);
    sound(100);
    sound(223);
    delay(3006);
    nosound();
    sound(440);
    delay(500);
	nosound();
    sound(440);
	delay(500);
	nosound();
    sound(440);
	delay(500);
	nosound();
    sound(1000);
    delay(2100);
    sound(1000);
    delay(200);
    nosound();
    sound(440);
    delay(500);
	nosound();
	sound(1000);
    delay(200);
    nosound();
    sound(1000);
    delay(200);
    nosound();
    sound(1000);
    delay(200);
    nosound();
    sound(440);
    sound(100);
	sound(523);
	sound(100);
	sound(523);
	sound(100);
	sound(543);
	delay(500);
	nosound();
	cout< <"\n |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||||||||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||||||";
	delay(700);
	cout<<"\n |||||||||||||||";
	delay(700);
	cout<<"\n ||||||||||||";
	delay(700);
	cout<<"\n ||||||||||";
	delay(700);
	cout<<"\n ||||||||";
	delay(700);
	cout<<"\n ||||||";
	delay(700);
	cout<<"\n ||||";
	delay(700);
	cout<<"\n |||";
	delay(500);
	clrscr();
	cout<<"\n *****************************************************************";
	cout<<"\n                            M E N U ";
	cout<<"\n *****************************************************************";
	cout<<"\n\n\t\t\t START QUIZ";
	cout<<"\n\t\t\t QUIT";
	cin>>ch;
	switch(ch)
	{
 
		case 1:
		clrscr();
		cout< <"\n\n\n\n ################################################################";
		cout<<"\n                        I N S T R U C T I O N";
		cout<<"\n ################################################################";
		cout<<"\n\n* THERE ARE 3 ROUNDS IN THIS QUIZ:-";
		cout<<"\n\n    1) EASY ROUND\n   2) MEDIUM ROUND\n   3) HARD ROUND";
		cout<<"\n\n * TO ENTER THE LAST ROUND YOU HAVE TO COMPLETE THE FIRST TWO ROUNDS";
		cout<<"\n\n * THE EASY ROUND CONSIST OF 5 EASY QUESTIONS OUT OF WHICH U HAVE TO GET 3/5 OF THE ANSWER RIGHT TO ENTER THE MEDIUM ROUND";
		cout<<"\n \n* THE MEDIUM ROUND CONSISTS OF 7 QUESTIONS AND YOU HAVE TO ANSWER 5 OF THEM CORRECTLY";
		cout<<"\n\n * THE HARD ROUND CONSISTS OF 8 QUESTIONS WHICH CAN BE REALLY TOUGH ";
		cout<<"\n\n* AND IF U COMPLETE U GET AN EXCITING GIFT ";
		cout<<"\n \n*             SO , BEST OF LUCK !!!";
		cout<<"\n\n\n\n\n\n  DO YOU WANT TO PLAY & WIN ? (Y/N)";
		cin>>choice;
		if((choice=='y')||(choice=='Y'))
		 {
 
			clrscr();
			cout< <"\n ******************************************************";
			cout<<"\n ENTER YOUR NAME:-";
			cin>>name;
			cout< <"\n ENTER YOUR ROLL:-";
			cin>>roll;
			cout< <"\n********************************************************";
			clrscr();
			s.start();
		 }
		 else
		 {
			 exit(0);
		 }
			break;
 
		case 2:
 
			 exit(0);
 
 
 
	 }
}
else
{
	exit(0);
}
 
 
}

  

 