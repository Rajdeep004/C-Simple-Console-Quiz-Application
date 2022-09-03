//
// Created by Rajdeep on 11-11-2021.
//Copyright to "ncert guru for "
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class mcq {
    string que;
    string op1;
    string op2;
    string op3;
    string op4;
    char ans;
public:
    mcq(string Que,string Op1,string Op2,string Op3,string Op4,char Ans){
        que = move(Que);
        op1 = move(Op1);
        op2 = move(Op2);
        op3 = move(Op3);
        op4 = move(Op4);
        ans = Ans;
    }//to avoid the extra copy variable & use less memory
    void showQue(){
        cout<<que<<endl;
        cout<<"Option A : "<<op1<<endl;
        cout<<"Option B : "<<op2<<endl;
        cout<<"Option C : "<<op3<<endl;
        cout<<"Option D : "<<op4<<endl;

    }
    bool checkAns(char uAns) {
        if (uAns == ans) return true;
        return false;
    }
};

vector<mcq> list;
void makeQue(){
    mcq* q1 = new mcq (
            "What is ur name?",
            "Raju",
            "Sunny",
            "Spike",
            "Rajdeep",
            'A'
    );list.push_back(*q1);
    mcq* q2 = new mcq(
            "What is ur class?",
            "10th",
            "11th",
            "12th",
            "Fy Eng.",
            'C'
    );list.push_back(*q2);
    mcq* q3 = new mcq(
            "What is ur age?",
            "16",
            "17",
            "18",
            "19",
            'B'
    );list.push_back(*q3);
    mcq* q4 = new mcq(
            "Which among the following headstreams meets the Ganges in last?",
            "Alaknanda",
            "Pindar",
            "Mandakini",
            "Bhagirathi",
            'D'
    );list.push_back(*q4);
    mcq* q5 = new mcq(
            "The metal whose salts are sensitive to light is?",
            "Zinc",
            "Silver",
            "Copper",
            "Aluminum",
            'B'
    );list.push_back(*q5);
   mcq* q6 = new mcq(
           "Patanjali is well known for the compilation of –",
           " Yoga Sutra",
           "Panchatantra",
           "Brahma Sutra",
           " Ayurveda",
           'A'
   );list.push_back(*q6);
   mcq* q7 = new mcq(
           "River Luni originates near Pushkar and drains into which one of the following?",
           "Rann of Kachchh",
           "Arabian Sea",
           "Gulf of Cambay",
           "Lake Sambhar",
           'A'
   );list.push_back(*q7);
   mcq* q8 = new mcq(
           "Which one of the following rivers originates in Brahmagiri range of Western Ghats?",
           "Pennar",
           "Cauvery",
           "Krishna",
           " Tapti",
           'B'
   );list.push_back(q8);
   mcq* q9 = new mcq(
           "The country that has the highest in Barley Production?",
           "China",
           "India",
           "Russia",
           "France",
           'C'
   );list.push_back(*q9);
   mcq* q1 = new mcq0(
           "Tsunamis are not caused by",
           "Hurricanes",
           "Earthquakes",
           "Undersea landslides",
           "Volcanic eruptions",
           'A'
   );list.push_back(*q10);
}