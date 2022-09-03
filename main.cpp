#include <iostream>
#include "Que.cpp"
int main (){
    cout<<"--------------------------------Welcome the Quiz App!--------------------------------"<<endl
        <<"==> Answer the following question "
        <<"+4 for correct answer and -1 for wrong"<<endl
        <<"Press Enter To start the Quiz ";
        system("pause>0");
    int score = 0,i=1;
    makeQue();
    for (auto it : list){
        cout<<"------------------------------------------------------------------------------------"<<endl;
        cout<<"-> Que "<<i++<<" ";
        (it).showQue();
        char uAns;
        cin>>uAns;
        if (uAns == 'A' || uAns == 'B'|| uAns == 'C'|| uAns == 'D') {
            if (it.checkAns(uAns)) score += 4;
            else score -= 1;
        }
        else cout<<"Invalid Option"<<endl;
    }cout<<"************************************************************************************"<<endl;
    cout<<"Your score is "<<score;
    return 0;
}