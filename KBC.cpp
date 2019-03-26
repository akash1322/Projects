#include<iostream>
#include<conio.h>
using namespace std;
char name[50];
class KBC{
	public:
		int kbc(){
		cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
		cout<<"                           KBC                                 \n";
		cout<<"                  KAUN BANEGA CROREPATI                        \n";
		cout<<"_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n";
		cout<<"Welcome To KBC \n";
		cout<<"Enter Your Name \n"<<name;
		cin>>name;
		cout<<"Welcome  \n"<<name<<endl;
		cout<<"\n";
	
		return 0;
		}
};
class Rules:virtual public KBC{
	public:
		int rules(){
			
			cout<<"RULES \n";
			cout<<"1. Their are 3 stages \n";
			cout<<"First Stage-When you reach Q4 \n";
			cout<<"Second Stage-When you reach Q8 \n";
			cout<<"Third Stage-When you reach Q15 \n";
			cout<<"After giving wrong ans when you clear first stage you will able to win Rupees 40000 \n";
			cout<<"After giving wrong ans when you clear second stage you will able to win Rupees 640000 \n";
			cout<<"\n";
		
			return 0;
		}
};
class Question:public Rules,virtual public KBC{
public: 
    int x;
    int main(){
	char a,b,c,d,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;

	cout<<"Q1 In which kingdom is the story of the Bahubali series of films mainly set? \n";
    cout<<"a Magadh \n";
    cout<<"b Mahishmati \n";
    cout<<"c Kalinga \n";
    cout<<"d Badami \n";
    cout<<"Enter Your Answer \n"<<ans1;
    cout<<"\n";
    cin>>ans1;
    if(ans1=='b'){
	cout<<"Your answer is correct  "<<b<<endl;
    x=5000;
    cout<<"you won Rupees "<<x<<endl;
    cout<<"Next Question \n";
    cout<<"\n";
    }else{
	cout<<"Sorry, your answer is wrong..correct ans was 'b' \n";
	cout<<"\n";
    return 0;
}
    cout<<"Q2 Currency notes of what denomination were demonetised in November last year by the Reserve Bank of India ? \n";
 	cout<<"a) Rs 500 & Rs 1000 \n";
 	cout<<"b) Rs 1000 & Rs 10000 \n";
 	cout<<"c) Rs 10 & Rs 100 \n";
 	cout<<"d) Rs 50 & Rs 1000 \n";
 	cout<<"Enter Your Answer \n"<<ans2;
 	cin>>ans2;
 	cout<<"\n";
 	if(ans2=='a'){
 		cout<<"Your ans is correct "<<endl;
 		x=10000;
 		cout<<"You won Rupees "<<x<<endl;
	    cout<<"\n";
	 }else{
	 	cout<<"Sorry,your answer is wrong..correct ans was 'a' \n";
	    cout<<"You Win nothing \n";
	    cout<<"\n";
		    return 0;
	 }cout<<"Q3 Which is the largest banana producing country in the world? \n";
	  cout<<"a)Brazil \n";
	  cout<<"b)India \n";
	  cout<<"c)Mexico \n";
	  cout<<"d)China \n";
	  cout<<"Enter Your Answer \n"<<ans3;
	  cin>>ans3;
	  cout<<"\n";
	  if(ans3=='b'){
	  	cout<<"Your Answer Is correct \n";
	  	x=20000;
	  	cout<<"You won Rupees "<<x<<endl;
	    cout<<"\n";
	  }else{
	  cout<<"Sorry,your answer is wrong..correct ans was 'b' \n";
	   cout<<"You Won nothing \n";
	   cout<<"\n";
		   return 0;}
	   cout<<"Next Question \n";
	   cout<<"Q4 Who is the first woman amputee in the world to summit Mount Everest ? \n";
	   cout<<"a) Tashi Malik \n";
	   cout<<"b) Raha Moharrak \n";
	   cout<<"c) Samina Baig \n";
	   cout<<"d) Arunima Sinha \n";
	   cout<<"Enter your Answer \n"<<ans4;
	   cin>>ans4;
	   cout<<"\n";
	  if(ans4=='d'){
	   	cout<<"Your Answer Is correct \n";
	   	x=40000;
	   	cout<<"You won Rupees "<<x<<endl;
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'd'\n";
	    cout<<"You Won nothing \n";
	    cout<<"\n";
	    return 0;
	   }
	   cout<<"Next Question \n";
	   cout<<"Q5 The tomb of which Governor-General of India is located in Ghazipur in Uttar Pradesh? \n";
	   cout<<"a) Sir John Shore \n";
	   cout<<"b) Lord Curzon \n";
	   cout<<"c) Lord Cornvallis \n";
	   cout<<"d) Lord Chelmesford \n";
	   cout<<"Enter Your Answer \n"<<ans5;
	   cout<<"\n";
	   cin>>ans5;
	   if(ans5==c){
	   	cout<<"Your Answer Is correct \n";
	    x=80000;
	    cout<<"You won Rupees "<<x<<endl;
	    cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'd'\n";
	     cout<<"You Won Only Rupees 40000 \n";
	     cout<<"\n";
		 return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q6 Which of these is a piece of the game called as chess? \n";
	   cout<<"a) Wazir \n";
	   cout<<"b) Nawab \n";
	   cout<<"c) Sarpanch \n";
	   cout<<"b) Patbiri \n";
	   cout<<"Enter Your Answer \n"<<ans6;
	   cout<<"\n";
	   cin>>ans6;
	   
	   if(ans6=='a'){
	   	cout<<"Your Answer Is correct \n";
	   	x=160000;
	   	cout<<"You won Rupees "<<x<<endl;
	   	cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'd'\n";
	   	 cout<<"You Won Only Rupees 40000 \n";
         cout<<"\n";	
	   	 return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q7 In the Ramayana, who reminded kaikeyi about the two boons given to her by Dasharatha ? \n";
	   cout<<"a) Sumrita \n";
	   cout<<"b) Bharata \n";
	   cout<<"c) Dasharatha \n";
	   cout<<"d) Manthara \n";
	   cout<<"Enter Your Answer \n"<<ans7;
	   cout<<"\n";
	   cin>>ans7;
	   if(ans7=='d'){
	   	cout<<"Your Answer Is correct \n";
	   	x=320000;
	   	cout<<"You won Rupees "<<x<<endl;
	   cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'd'\n";
	    cout<<"You Won Only Rupees 40000 \n";
		cout<<"\n";
		return 0;  
	   }cout<<"Next Question \n";
	   cout<<"Q8 What Social Compaign was launched by Farhan Akhtar in 2013 against rape and discrimination of women? \n";
	   cout<<"a) AADMI \n";
	   cout<<"b) PURUSH \n";
	   cout<<"c) MARD \n";
	   cout<<"d) MAANAV \n";
	   cout<<"Enter your answer \n"<<ans8;
	   cout<<"\n";
	   cin>>ans8;
	   
	   if(ans8=='c'){
	   
	   cout<<"Your Answer Is correct \n";
	   x=640000;
	   cout<<"You won Rupees "<<x<<endl;
 cout<<"\n";
 }else{
 	cout<<"Sorry,your answer is wrong..correct ans was 'c'\n";
 	cout<<"You Won Only Rupees 40000 \n";
 	cout<<"\n";
	 return 0;
 }   cout<<"Next Question \n";
   cout<<"Q9 In Which of these regions would you find the town of Kishtwar ? \n";
   cout<<"a) Jammu \n";
   cout<<"b) Vidharba \n";
   cout<<"c) Saurashtra \n";
   cout<<"d) Bundelkhand \n";
   cout<<"Enter your answer \n"<<ans9;
 cout<<"\n";
   cin>>ans9;
   if(ans9=='a'){
   	cout<<"Your Answer Is correct \n";
   	x=1250000;
   	cout<<"You won Rupees "<<x<<endl;
   	cout<<"\n";
	   }else{
   		cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
   		cout<<"You Won Only Rupees 640000 \n";
   		cout<<"\n";
		   return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q10 After whom is the Centigrade system of tempreature measurement named? \n";
	   cout<<"a) Andres Celcius \n";
	   cout<<"b) Daniel Farenhiet \n";
	   cout<<"c) Lord Kelvin \n";
	   cout<<"d) Gabirele Centi \n";
	   cout<<"Enter your answer \n"<<ans10;
	   cout<<"\n";
	   cin>>ans10;
	   if(ans10=='a'){
	   	cout<<"Your Answer Is correct \n";
	   	x=2500000;
	   	cout<<"You won Rupees "<<x<<endl;
	    cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
	    cout<<"You Won Only Rupees 640000 \n";
	    cout<<"\n";
		return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q11 Which of these festivals is celebratedin honor of an avatar of Lord Vishnu? \n";
	   cout<<"a) Jammashtami \n";
	   cout<<"b) Ganesha Chaturthi \n";
	   cout<<"c) Vishwakarma \n";
	   cout<<"d) Maha Shivrati \n";
	   cout<<"Enter your answer \n"<<ans11;
	   cout<<"\n";
	   cin>>ans11;
	   if(ans11=='a'){
	   cout<<"Your Answer Is correct \n";
	   x=5000000;
	   cout<<"You won Rupees "<<x<<endl;
	   cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
	   	cout<<"You Won Only Rupees 640000 \n";
	   	return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q12 Which of these spices that are given here cost most among them? \n";
	   cout<<"a) Vanilla \n";
	   cout<<"b) Cardamon \n";
	   cout<<"c) Black Pepper \n";
	   cout<<"d) Saffron \n";
	   cout<<"Enter yor answer \n"<<ans12;
	   cout<<"\n";
	   cin>>ans12;
	   if(ans12=='d'){
	   	cout<<"Your Answer Is correct \n";
	   	x=10000000;
	   	cout<<"You won Rupees "<<x<<endl;
	    cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
	   	cout<<"You Won Only Rupees 640000 \n";
	   	cout<<"\n";
		   return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q13 Which actress changed her name from Nafisa before her debut movie in 2007? \n";
	   cout<<"a) Jia Khan \n";
	   cout<<"b) Dia Mirza \n";
	   cout<<"c) Ayeshia Thakia \n";
	   cout<<"d) Asin \n";
	   cout<<"Enter your Answer \n "<<ans13;
	   cin>>ans13;
	   cout<<"\n";
	   if(ans13=='a'){
	   	cout<<"Your Answer Is correct \n";
	   	x=30000000;
	   	cout<<"You won Rupees "<<x<<endl;
	   	cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
	    cout<<"You Won Only Rupees 640000 \n";
	    cout<<"\n";
		return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q14 In July 2013, Indian highest judicial court issued a rule that anybody who wants to buy which of these these has to show his identity card. \n";
	   cout<<"a) Alcohol \n";
	   cout<<"b) Sandalwood \n";
	   cout<<"c) Gold \n";
	   cout<<"d) Acid \n";
	   cout<<"Enter your answer \n"<<ans14;
	   cout<<"\n";
	   cin>>ans14;
	   if(ans14=='d'){
	   	cout<<"Your Answer Is correct \n";
	   	x=50000000;
	   	cout<<"You won Rupees "<<x<<endl;
	    cout<<"\n";
	   }else{
	   	cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
	   	cout<<"You Won Only Rupees 640000 \n";
	   	cout<<"\n";
		   return 0;
	   }cout<<"Next Question \n";
	   cout<<"Q15 Gandhiji's thought of 'See no evil, hear no evil, speak no evil' is usually depicted by which animal? \n";
	   cout<<"a) Lion \n";
	   cout<<"b) Dog \n";
	   cout<<"c) Monkey \n";
	   cout<<"d) Rabbit \n";
	   cout<<"Enter your answer \n"<<ans15;
	  cout<<"\n";
	   cin>>ans15;
	   if(ans15=='c'){
	   	cout<<"Your Answer Is correct \n";
	   	x=70000000;
	   	cout<<"You won Rupees "<<x<<endl;
	   	cout<<"Congratualtion You won The game..You are now Crorepati \n";
	   	}else{
	   		cout<<"Sorry,your answer is wrong..correct ans was 'a'\n";
	   		cout<<"You Won Only Rupees 640000 \n";
	   		cout<<"Bad Luck \n";
	   		return 0;
		   }
  }
};
 int main(){
       
       Question obj;
       cout<<"\n";
       obj.kbc();
       cout<<"\n";
	   obj.rules();
	   cout<<"\n";
       obj.main();
       cout<<"\n";
       
   	   getch();
       return 0;
}


