#include <bits/stdc++.h>

using namespace std;

vector<string> times = {
        "Avai",
        "Barra",
        "Brusque",
        "Chapecoense",
        "Concordia",
        "Criciuma",
        "Figueirense",
        "Hercilio Luz",
        "Inter de Lages",
        "Joinville",
        "Marcilio Dias",
        "Nacao"
    };

bool idTime(string time, int i = 0){
//verificar se o time esta no campionato ou nao
    if(time == times[i]){
        return true;
    }if(i==(times.size()-1)){//caso tenham mais times  o .size ajuda a ter controle da quantidade
        return false; 
    }else{
        return idTime(time,++i);
    }

    
}

int main(){
    
    string time1,time2;
    cout << "Qual seu primeiro time e segundo time:" << endl<< endl;
    
        for(int i = 0;i < times.size();i++){ // escrever os times na tela
        cout << times[i] << endl;
    
        }
        
    cin >> time1 >> time2; //input dos times


    if(idTime(time1)){ //verificar se digitou um time valido
        cout << "time 1 valido" << endl;
    }else{
        cout << "time 1 invalido" << endl;
    }
    if(idTime(time2)){ //verificar se digitou um time valido
        cout << "time 2 valido" << endl;
    }else{
        cout << "time 2 invalido" << endl;
    }

}
