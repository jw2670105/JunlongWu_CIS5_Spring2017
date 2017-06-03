/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  BlackJack Game
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int total;
int calculatebet(int bet[][5]){
    total=(bet[1][0]*bet[0][0])+(bet[1][1]*bet[0][1])+(bet[1][2]*bet[0][2])+(bet[1][3]*bet[0][3])+(bet[1][4]*bet[0][4]);
return total;
}

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int ncP1,ncP2,totalP1,totalP2,suit,money=300;
    string suitP1,suitP2,veriable,cashChoice = " ",ranking = " ",message;
    cout<<"Welcome to Black Jack game"<<endl;
    cout<<"Do you want to see the ranking list?"<<endl;
    cin>>ranking;
    if(ranking == "yes"){
        int a,b,c,d,e,oldmoney;
        ifstream infile;
        infile.open("ranking.txt");
        infile>>a>>b>>c>>d>>e;
        int array[]={a,b,c,d,e};
        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                int temp=0;
                if (array[i]<array[j]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        cout<<array[0]<<endl;
        cout<<array[1]<<endl;
        cout<<array[2]<<endl;
        cout<<array[3]<<endl;
        cout<<array[4]<<endl;
        cout<<"Your highest score is "<<array[0]<<endl;
            infile.close();
        ofstream giveFile("ranking.txt");
        ifstream readFile;
        readFile.open("oldcash.txt");
        if(readFile.is_open()){
            readFile>>oldmoney;
        }
        readFile.close();
        giveFile<<array[0]<<endl;
        giveFile<<array[1]<<endl;
        giveFile<<array[2]<<endl;
        giveFile<<array[3]<<endl;
        array[4]=oldmoney;
        giveFile<<array[4]<<endl;
        
        }      
    
    cout<<"Do you want to use Player's Last Amount of Cash (old)?"<<endl;;
    cin>>cashChoice;
    if(cashChoice=="yes"){
        ifstream readFile;
        readFile.open("oldcash.txt");
        if(readFile.is_open()){
            readFile>>money;
        }
        readFile.close();
    
    }
    cout<<"___________________________________"<<endl;
    int bet[2][5]={{0,10,50,100,200},{}};
    cout<<"Your hand is"<<endl;
    ncP1= rand()%13+1;
    suit=rand()%4;
    if (suit==0){
        suitP1="diamond";
    }
    else if (suit==1){
        suitP1="heart";
    }
    else if (suit==2){
        suitP1="clover";
    }
    else if (suit==3){
        suitP1="spade";
    }
    cout<<suitP1<<" "<<ncP1<<endl;
    if (ncP1==11||ncP1==12||ncP1==13){
        totalP1=10;
    }
    else {
        totalP1=ncP1;
    }
    ncP1= rand()%13+1;
    suit=rand()%4;
    if (suit==0){
        suitP1="diamond";
    }
    else if (suit==1){
        suitP1="heart";
    }
    else if (suit==2){
        suitP1="clover";
    }
    else if (suit==3){
        suitP1="spade";
    }
    cout<<suitP1<<" "<<ncP1<<endl;
  if (ncP1==11||ncP1==12||ncP1==13){
        totalP1=10+totalP1;
    }
    else {
        totalP1+=ncP1;
    }
    cout<<"The total is "<<totalP1<<endl;
    totalP2=rand()%19+2;       
   
    do{
        cout<<"Do you want to bet $10,$50,$100 or $200?"<<endl;
        cin>>veriable;
        if(veriable=="0"){
        bet[1][0]++;
       }
        if(veriable=="10"){
        bet[1][1]++;
       }
       if(veriable=="50"){
        bet[1][2]++;
       }
       if(veriable=="100"){
        bet[1][3]++;
       }
       if(veriable=="200"){
        bet[1][4]++;
       }
        char choice;
        cout<<"Type 1 to hit and type 2 to stand"<<endl;
        cin>>choice;
        
        
        switch(choice){
            case '1':  
                ncP1= rand()%13+1;
                suit=rand()%4;
                if (suit==0){
                    suitP1="diamond";
                }
                else if (suit==1){
                   suitP1="heart";
                }
                else if (suit==2){
                   suitP1="clover";
                }
                else if (suit==3){
                   suitP1="spade";
                }
                cout<<suitP1<<" "<<ncP1<<endl;
                if (ncP1==11||ncP1==12||ncP1==13){
                   totalP1=10+totalP1;                  
                }
                else {
                   totalP1+=ncP1;
                }
                cout<<"Your total is "<<totalP1<<endl;  
                if (totalP1>21) {
                    cout<<"You bust ,so you lose"<<endl;
                    money=money-calculatebet(bet);
                    cout<<"You have $ "<<money<<" right now"<<endl;
                    goto leave_loop;
                    
                    }
                   
                
                if (totalP2<18) {
                    totalP2=totalP2+rand()%13+1;
                        if (totalP2>21){
                        cout<<"Your opponent bust, and you win "<<endl;
                        cout<<"Your opponent's total is "<<totalP2<<endl;
                        money=money+calculatebet(bet);
                        cout<<"You have $ "<<money<<" right now"<<endl;
                        goto leave_loop;
                        
                    }
                }
                if (totalP1==21) {
                    cout<<"You win "<<endl;
                    money=money+calculatebet(bet);
                    cout<<"You have $ "<<money<<" right now"<<endl;
                    goto leave_loop;
                }
                if (totalP2==21) {
                    cout<<"Your opponent win "<<endl;
                    money=money-calculatebet(bet);
                    cout<<"You have $ "<<money<<" right now"<<endl;
                    goto leave_loop;
                }
        
        
                break;
            case '2': 
                cout<<"Your opponent's total is "<<totalP2<<endl;
                if (totalP1<totalP2) {
                    if (totalP2>21){
                        cout<<"Your opponent bust, and you win "<<endl;
                        money=money+calculatebet(bet);
                        cout<<"You have $ "<<money<<" right now"<<endl;
                        goto leave_loop;
                    }
                    cout<<"You lose "<<endl;
                    money=money-calculatebet(bet);
                    cout<<"You have $ "<<money<<" right now"<<endl;
                    goto leave_loop;
                }
                else if (totalP1>totalP2) {
                    cout<<"You win "<<endl;
                    money=money+calculatebet(bet);
                    cout<<"You have $ "<<money<<" right now"<<endl;
                    goto leave_loop;
                }
                else if (totalP1==totalP2) {
                    cout<<"You tie "<<endl;
                    cout<<"You have $ "<<money<<" right now"<<endl;
                    goto leave_loop;
                }
                break;
            default:
                cout<<"You press the wrong number "<<endl;
                return 0;
           }
    }while(1);
    leave_loop: ;
    ofstream writeFile("oldcash.txt");
    writeFile<<money;

    
    
    
    
    //Exit stage right!
    return 0;
}

