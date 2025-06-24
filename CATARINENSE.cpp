#include <bits/stdc++.h>
#include "funcoes.hpp"

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
        "HercilioLuz", // 9
        "Joinville", // 10
        "MarcilioDias", // 11
        "SantaCatarina", // 12
        "Nenhum" // 13
    };



int main(){
  
    cout << endl;
    
    int i;
    

    cout << "Esses são os times disponíveis, se quiser verificar os jogos de algum time específico digite o time e nenhum. Lembre-se de digitar de acordo com o nome dos times acima" << endl;

    for(i = 0;i < times.size();i++){ // escrever os times na tela
    cout << times[i] << endl;
    }

    cout << endl;

    cout << "Digite a quantidade de jogos que você quer visualizar" << endl;
    int nJogos; cin >> nJogos;
        

    while(nJogos--){
        cout << endl;
        
        string fase;
        int time1Int, time2Int;
        string time1, time2;

        cout << "Digite a fase que você quer visualizar (Grupos ou Mata-Mata)" << endl;
        cin >> fase;

        cout << "Qual seu primeiro time:  (Caso o time tenha dois nomes siga o exemplo: SantaCatarina)" << endl;
        cin >> time1;

        cout << "Qual o seu segundo time: (Caso o time tenha dois nomes siga o exemplo: SantaCatarina)" << endl;
        cin >> time2;

        cout << endl;

        time1Int = valorTime1(time1);
        time2Int = valorTime2(time2);

            
        


        if(time1Int == 20 || time2Int == 20){
            cout << "Você digitou algum time errado, tente novamente" << endl;
            nJogos++;
        }
        
        else if(time1Int == 13){
            cout << JogosGrupos(time1Int, time2Int) << endl;
            nJogos++;
            cout << "Digite algum desses jogos" << endl;
        }

        else if(time2Int == 13){
            cout << JogosGrupos(time1Int, time2Int) << endl;
            nJogos++;
            cout << "Digite algum desses jogos" << endl;
        }

        else if(fase == "Grupos"){
            cout << JogosGrupos(time1Int, time2Int) << endl;
        }

        else if(fase == "Mata-Mata"){
            cout << JogosMata(time1Int, time2Int) << endl;
        }

    }

}


