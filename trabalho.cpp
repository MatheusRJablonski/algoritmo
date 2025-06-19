#include <bits/stdc++.h>

using namespace std;

vector<string> times = {
        "Avai", // 1
        "Barra", // 2
        "Brusque", // 3
        "Caravaggio", // 4
        "Chapecoense", // 5
        "Concordia", // 6
        "Criciuma", // 7
        "Figueirense", // 8
        "Hercilio Luz", // 9
        "Joinville", // 10
        "Marcilio Dias", // 11
        "Santa Catarina", // 12
        "Nenhum" // 13
    };

bool idTime(string time, int i = 0){
//verificar se o time esta no campeonato ou nao
    if(time == times[i]){
        return true;
    }if(i==(times.size()-1)){//caso tenham mais times  o .size ajuda a ter controle da quantidade
        return false; 
    }else{
        return idTime(time,++i); // ++i soma 1 a i
    }

    
}

int main(){
    vector<bool>verificartime = { true , true};
    int i;
    string time1,time2;
    cout << "Qual seu primeiro time e segundo time:" << endl<< endl;
    
        for(i = 0;i < times.size();i++){ // escrever os times na tela
        cout << times[i] << endl;
    
        }
        
    while(verificartime[0]||verificartime[1]){//enquanto true reescreva valor
        cin >> time1 >> time2; //input dos times
        while(time1==time2){
            cout << "nao insira valores iguais, tente novamente"<< endl;
            cin >> time2;
        }
        if(idTime(time1)){ //verificar se digitou um time valido
            cout << "time 1 valido" << endl;
            verificartime[0] = false;
        }else{
            cout << "time 1 invalido" << endl;
        }
        if(idTime(time2)){ //verificar se digitou um time valido
            cout << "time 2 valido" << endl;
            verificartime[1] = false;
        }else{
            cout << "time 2 invalido" << endl;
        }
        if(verificartime[0]||verificartime[1]){
            cout << "verifique se escreveu corretamente" <<endl;
        }
        
    }

}
