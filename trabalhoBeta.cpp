#include <bits/stdc++.h>

using namespace std;

vector<string> BDtimes = {
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
        "SantaCatarina", // 12
        "Nenhum" // 13
    };
vector<string> BDfases = {
            "Qualquer", // tratado como 0 apos verificação e assim por diante
            "Grupos", // tratado como 1
            "Mata-Mata", // tratado como 2
        };



string buscarJogosGrupos(int a, int b) {
    
    
    vector<vector<string>> jogosGrupos(14, vector<string>(14));
 //JOGOS COM O TIME MANDANTE

    vector<vector<string>> possiveisJogos(12, vector<string>(2));
        
    // POSSIVEIS JOGOS DOS TIMES MANDANTES
        possiveisJogos[0][0] = {
            "| FASE DE GRUPOS |\n"
            "AVAÍ x SANTA CATARINA\n"
            "AVAÍ x FIGUEIRENSE\n"
            "AVAÍ x JOINVILLE\n"
            "AVAÍ x MARCÍLIO DIAS\n"
            "AVAÍ x CONCÓRDIA\n"
            "AVAÍ x CRICIÚMA\n"
            "| MATA-MATA |\n"
            "AVAÍ x FIGUEIRENSE\n"
            "AVAÍ x CHAPECOENSE"
        };

        possiveisJogos[1][0] = {
            "| FASE DE GRUPOS |\n"
            "BARRA x JOINVILLE\n"
            "BARRA x SANTA CATARINA\n"
            "BARRA x HERCÍLIO LUZ\n"
            "BARRA x CHAPECOENSE\n"
            "BARRA x FIGUEIRENSE\n"
            "BARRA x AVAÍ"
        };

        possiveisJogos[2][0] = {
            "| FASE DE GRUPOS |\n"
            "BRUSQUE x AVAÍ\n"
            "BRUSQUE x CHAPECOENSE\n"
            "BRUSQUE x CARAVAGGIO\n"
            "BRUSQUE x BARRA\n"
            "BRUSQUE x CRICIÚMA\n"
            "BRUSQUE x HERCÍLIO LUZ\n"
            "| MATA-MATA |\n"
            "BRUSQUE x CHAPECOENSE"
        };

        possiveisJogos[3][0] = {
            "| FASE DE GRUPOS |\n"
            "CARAVAGGIO x CHAPECOENSE\n"
            "CARAVAGGIO x AVAÍ\n"
            "CARAVAGGIO x HERCÍLIO LUZ\n"
            "CARAVAGGIO x JOINVILLE\n"
            "CARAVAGGIO x BARRA"
        };

        possiveisJogos[4][0] = {
            "| FASE DE GRUPOS |\n"
            "CHAPECOENSE x MARCÍLIO DIAS\n"
            "CHAPECOENSE x AVAÍ\n"
            "CHAPECOENSE x CRICIÚMA\n"
            "CHAPECOENSE x SANTA CATARINA\n"
            "CHAPECOENSE x JOINVILLE\n"
            "| MATA-MATA |\n"
            "CHAPECOENSE x JOINVILLE\n"
            "CHAPECOENSE x AVAÍ"
        };

        possiveisJogos[5][0] = {
            "| FASE DE GRUPOS |\n"
            "CONCÓRDIA x BARRA\n"
            "CONCÓRDIA x CHAPECOENSE\n"
            "CONCÓRDIA x CARAVAGGIO\n"
            "CONCÓRDIA x HERCÍLIO LUZ\n"
            "CONCÓRDIA x BRUSQUE"
        };

        possiveisJogos[6][0] = {
            "| FASE DE GRUPOS |\n"
            "CRICIÚMA x CONCÓRDIA\n"
            "CRICIÚMA x BARRA\n"
            "CRICIÚMA x JOINVILLE\n"
            "CRICIÚMA x SANTA CATARINA\n"
            "CRICIÚMA x CARAVAGGIO\n"
            "CRICIÚMA x MARCÍLIO DIAS\n"
            "| MATA-MATA |\n"
            "CRICIÚMA x JOINVILLE"
        };

        possiveisJogos[7][0] = {
            "| FASE DE GRUPOS |\n"
            "FIGUEIRENSE x HERCÍLIO LUZ\n"
            "FIGUEIRENSE x CRICIÚMA\n"
            "FIGUEIRENSE x CONCÓRDIA\n"
            "FIGUEIRENSE x BRUSQUE\n"
            "FIGUEIRENSE x CHAPECOENSE\n"
            "FIGUEIRENSE x CARAVAGGIO"
        };

        possiveisJogos[8][0] = {
            "| FASE DE GRUPOS |\n"
            "HERCÍLIO LUZ x CRICIÚMA\n"
            "HERCÍLIO LUZ x SANTA CATARINA\n"
            "HERCÍLIO LUZ x AVAÍ\n"
            "HERCÍLIO LUZ x JOINVILLE\n"
            "HERCÍLIO LUZ x CHAPECOENSE"
        };

        possiveisJogos[9][0] = {
            "| FASE DE GRUPOS |\n"
            "JOINVILLE x FIGUERENSE\n"
            "JOINVILLE x CONCÓRDIA\n"
            "JOINVILLE x BRUSQUE\n"
            "JOINVILLE x MARCÍLIO DIAS\n"
            "JOINVILLE x SANTA CATARINA"
        };

        possiveisJogos[10][0] = {
            "| FASE DE GRUPOS |\n"
            "MARCÍLIO DIAS x BRUSQUE\n"
            "MARCÍLIO DIAS x HERCÍLIO LUZ\n"
            "MARCÍLIO DIAS x CARAVAGGIO\n"
            "MARCÍLIO DIAS x CONCÓRDIA\n"
            "MARCÍLIO DIAS x BARRA\n"
            "MARCÍLIO DIAS x FIGUEIRENSE"
        };

        possiveisJogos[11][0] = {
            "| FASE DE GRUPOS |\n"
            "SANTA CATARINA x CARAVAGGIO\n"
            "SANTA CATARINA x MARCÍLIO DIAS\n"
            "SANTA CATARINA x FIGUERENSE\n"
            "SANTA CATARINA x BRUSQUE\n"
            "SANTA CATARINA x CONCÓRDIA\n"
            "| MATA-MATA |\n"
            "SANTA CATARINA x MARCÍLIO DIAS\n"
            "SANTA CATARINA x AVAÍ"
        };

    // POSSIVEIS JOGOS COM O TIME VISITANTE

        possiveisJogos[0][1] = {
            "| FASE DE GRUPOS |\n"
            "BRUSQUE x AVAÍ\n"
            "CARAVAGGIO x AVAÍ\n"
            "CHAPECOENSE x AVAÍ\n"
            "HERCÍLIO LUZ x AVAÍ\n"
            "BARRA x AVAÍ\n"
            "| MATA-MATA |\n"
            "SANTA CATARINA x AVAÍ\n"
            "CHAPECOENSE x AVAÍ"
        };

        possiveisJogos[1][1] = {
            "| FASE DE GRUPOS |\n"
            "CONCÓRDIA x BARRA\n"
            "CRICIÚMA x BARRA\n"
            "BRUSQUE x BARRA\n"
            "MARCÍLIO DIAS x BARRA\n"
            "CARAVAGGIO x BARRA"
        };

        possiveisJogos[2][1] = {
            "| FASE DE GRUPOS |\n"
            "MARCÍLIO DIAS x BRUSQUE\n"
            "JOINVILLE x BRUSQUE\n"
            "SANTA CATARINA x BRUSQUE\n"
            "CONCÓRDIA x BRUSQUE"
        };

        possiveisJogos[3][1] = {
            "| FASE DE GRUPOS |\n"
            "SANTA CATARINA x CARAVAGGIO\n"
            "MARCÍLIO DIAS x CARAVAGGIO\n"
            "BRUSQUE x CARAVAGGIO\n"
            "CONCÓRDIA x CARAVAGGIO\n"
            "CRICIÚMA x CARAVAGGIO\n"
            "FIGUEIRENSE x CARAVAGGIO"
        };

        possiveisJogos[4][1] = {
            "| FASE DE GRUPOS |\n"
            "CARAVAGGIO x CHAPECOENSE\n"
            "BRUSQUE x CHAPECOENSE\n"
            "CONCÓRDIA x CHAPECOENSE\n"
            "BARRA x CHAPECOENSE\n"
            "FIGUEIRENSE x CHAPECOENSE\n"
            "HERCÍLIO LUZ x CHAPECOENSE\n"
            "| MATA-MATA |\n"
            "BRUSQUE x CHAPECOENSE\n"
            "AVAÍ x CHAPECOENSE"
        };

        possiveisJogos[5][1] = {
            "| FASE DE GRUPOS |\n"
            "CRICIÚMA x CONCÓRDIA\n"
            "JOINVILLE x CONCÓRDIA\n"
            "FIGUEIRENSE x CONCÓRDIA\n"
            "MARCÍLIO DIAS x CONCÓRDIA\n"
            "AVAÍ x CONCÓRDIA\n"
            "SANTA CATARINA x CONCÓRDIA"
        };

        possiveisJogos[6][1] = {
            "| FASE DE GRUPOS |\n"
            "HERCÍLIO LUZ x CRICIÚMA\n"
            "FIGUEIRENSE x CRICIÚMA\n"
            "CHAPECOENSE x CRICIÚMA\n"
            "BRUSQUE x CRICIÚMA\n"
            "AVAÍ x CRICIÚMA"
        };

        possiveisJogos[7][1] = {
            "| FASE DE GRUPOS |\n"
            "BARRA x FIGUEIRENSE\n"
            "MARCÍLIO DIAS x FIGUEIRENSE\n"
            "JOINVILLE x FIGUEIRENSE\n"
            "AVAÍ x FIGUEIRENSE\n"
            "SANTA CATARINA x FIGUEIRENSE\n"
            "| MATA-MATA |\n"
            "AVAÍ x FIGUEIRENSE"
        };

        possiveisJogos[8][1] = {
            "| FASE DE GRUPOS |\n"
            "FIGUEIRENSE x HERCÍLIO LUZ\n"
            "MARCÍLIO DIAS x HERCÍLIO LUZ\n"
            "BARRA x HERCÍLIO LUZ\n"
            "CARAVAGGIO x HERCÍLIO LUZ\n"
            "CONCÓRDIA x HERCÍLIO LUZ\n"
            "BRUSQUE x HERCÍLIO LUZ"
        };

        possiveisJogos[9][1] = {
            "| FASE DE GRUPOS |\n"
            "BARRA x JOINVILLE\n"
            "CRÍCIUMA x JOINVILLE\n"
            "AVAÍ x JOINVILLE\n"
            "CARAVAGGIO x JOINVILLE\n"
            "HERCÍLIO LUZ x JOINVILLE\n"
            "CHAPECOENSE x JOINVILLE\n"
            "| MATA-MATA |\n"
            "CRICIÚMA x JOINVILLE\n"
            "CHAPECOENSE x JOINVILLE"
        };

        possiveisJogos[10][1] = {
            "| FASE DE GRUPOS |\n"
            "CHAPECOENSE x MARCÍLIO DIAS\n"
            "SANTA CATARINA x MARCÍLIO DIAS\n"
            "JOINVILLE x MARCÍLIO DIAS\n"
            "AVAÍ x MARCÍLIO DIAS\n"
            "CRICIÚMA x MARCÍLIO DIAS\n"
            "| MATA-MATA |\n"
            "SANTA CATARINA x MARCÍLIO DIAS"
        };

        possiveisJogos[11][1] = {
            "| FASE DE GRUPOS |\n"
            "AVAÍ x SANTA CATARINA\n"
            "BARRA x SANTA CATARINA\n"
            "HERCÍLIO LUZ x SANTA CATARINA\n"
            "CRICIÚMA x SANTA CATARINA\n"
            "CHAPECOENSE x SANTA CATARINA\n"
            "JOINVILLE x SANTA CATARINA"
        };



    //JOGOS DAS FASES DE GRUPOS

        jogosGrupos[1][12] = {
            "JOGO: AVAÍ x SANTA CATARINA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Primeira Rodada\n"
            "CARTOES AMARELOS: 8\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 15/01/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio da Ressacada"
        };

        jogosGrupos[1][8] = {
            "JOGO: AVAÍ x FIGUEIRENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 1\n"
            "RODADA: Quarta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 25/01/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio da Ressacada"
        };
        
        jogosGrupos[1][11] = {
            "JOGO: AVAÍ x MARCÍLIO DIAS\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 0\n"
            "RODADA: Oitava Rodada\n"
            "CARTOES AMARELOS: 3\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 09/02/2025\n"
            "HORÁRIO: 18:00\n"
            "ESTÁDIO: Estádio da Ressacada"
        };
        jogosGrupos[1][10] = {
            "JOGO: AVAÍ x JOINVILLE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 0\n"
            "RODADA: Sexta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 01/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio da Ressacada"
        };

        jogosGrupos[1][6] = {
            "JOGO: AVAÍ x CONCÓRDIA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 1\n"
            "RODADA: Nona Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 12/02/2025\n"
            "HORÁRIO: 21:00\n"
            "ESTÁDIO: Estádio da Ressacada"
        };

        jogosGrupos[1][7] = {
            "JOGO: AVAÍ x CRICIÚMA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 3\n"
            "RODADA: Décima Primeira Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio da Ressacada"
        };
        jogosGrupos[2][10] = {
            "JOGO: BARRA x JOINVILLE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Segunda Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 19/01/2025\n"
            "HORÁRIO: 18:15\n"
            "ESTÁDIO: Arena Barra Futebol Clube"
        };

        jogosGrupos[2][12] = {
            "JOGO: BARRA x SANTA CATARINA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 2\n"
            "RODADA: Terceira Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 23/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Arena Barra Futebol Clube"
        };

        jogosGrupos[2][9] = {
            "JOGO: BARRA x HERCÍLIO LUZ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Quinta Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 29/01/2025\n"
            "HORÁRIO: 19:30\n"
            "ESTÁDIO: Arena Barra Futebol Clube"
        };

        jogosGrupos[2][5] = {
            "JOGO: BARRA x CHAPECOENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Sétima Rodada\n"
            "CARTOES AMARELOS: 3\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 05/02/2025\n"
            "HORÁRIO: 19:30\n"
            "ESTÁDIO: Arena Barra Futebol Clube"
        };

        jogosGrupos[2][8] = {
            "JOGO: BARRA x FIGUEIRENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Oitava Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 08/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Arena Barra Futebol Clube"
        };

        jogosGrupos[2][1] = {
            "JOGO: BARRA x AVAÍ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Décima Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 15/02/2025\n"
            "HORÁRIO: 18:00\n"
            "ESTÁDIO: Arena Barra Futebol Clube"
        };

        jogosGrupos[3][1] = {
            "JOGO: BRUSQUE x AVAÍ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Segunda Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 18/01/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio Augusto Bauer"
        };

        jogosGrupos[3][5] = {
            "JOGO: BRUSQUE x CHAPECOENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 2\n"
            "RODADA: Terceira Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/01/2025\n"
            "HORÁRIO: 19:30\n"
            "ESTÁDIO: Estádio Augusto Bauer"
        };

        jogosGrupos[3][4] = {
            "JOGO: BRUSQUE x CARAVAGGIO\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Quinta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 29/01/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Estádio Augusto Bauer"
        };

        jogosGrupos[3][2] = {
            "JOGO: BRUSQUE x BARRA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 0\n"
            "RODADA: Sexta Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 01/02/2025\n"
            "HORÁRIO: 18:00\n"
            "ESTÁDIO: Estádio Augusto Bauer"
        };

        jogosGrupos[3][7] = {
            "JOGO: BRUSQUE x CRICIÚMA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Oitava Rodada\n"
            "CARTOES AMARELOS: 1\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 08/02/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio Augusto Bauer"
        };

        jogosGrupos[3][9] = {
            "JOGO: BRUSQUE x HERCÍLIO LUZ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 1\n"
            "RODADA: Décima Primeira Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio Augusto Bauer"
        };

        jogosGrupos[4][5] = {
            "JOGO: CARAVAGGIO x CHAPECOENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Primeira Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 15/01/2025\n"
            "HORÁRIO: 19:30\n"
            "ESTÁDIO: Estádio da Montanha"
        };

        jogosGrupos[4][1] = {
            "JOGO: CARAVAGGIO x AVAÍ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Terceira Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio da Montanha"
        };

        jogosGrupos[4][9] = {
            "JOGO: CARAVAGGIO x HERCÍLIO LUZ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Sexta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 02/02/2025\n"
            "HORÁRIO: 18:30\n"
            "ESTÁDIO: Estádio da Montanha"
        };

        jogosGrupos[4][10] = {
            "JOGO: CARAVAGGIO x JOINVILLE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 1\n"
            "RODADA: Oitava Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 09/02/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio da Montanha"
        };

        jogosGrupos[4][2] = {
            "JOGO: CARAVAGGIO x BARRA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Décima Primeira Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio da Montanha"
        };

        jogosGrupos[5][11] = {
            "JOGO: CHAPECOENSE x MARCÍLIO DIAS\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Segunda Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 19/01/2025\n"
            "HORÁRIO: 16:00\n"
            "ESTÁDIO: Estádio Municipal Josué Annoni"
        };

        jogosGrupos[5][1] = {
            "JOGO: CHAPECOENSE x AVAÍ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Quinta Rodada\n"
            "CARTOES AMARELOS: 3\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 29/01/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio Municipal Josué Annoni"
        };

        jogosGrupos[5][7] = {
            "JOGO: CHAPECOENSE x CRICIÚMA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Sexta Rodada\n"
            "CARTOES AMARELOS: 0\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 01/02/2025\n"
            "HORÁRIO: 16:00\n"
            "ESTÁDIO: Estádio Municipal Josué Annoni"
        };

        jogosGrupos[5][12] = {
            "JOGO: CHAPECOENSE x SANTA CATARINA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Oitava Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 09/02/2025\n"
            "HORÁRIO: 17:00\n"
            "ESTÁDIO: Estádio Municipal Josué Annoni"
        };

        jogosGrupos[5][10] = {
            "JOGO: CHAPECOENSE x JOINVILLE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Décima Primeira Rodada\n"
            "CARTOES AMARELOS: 1\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio Municipal Josué Annoni"
        };

        jogosGrupos[6][2] = {
            "JOGO: CONCÓRDIA x BARRA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Primeira Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 15/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio Domingos Machado De Lima"
        };

        jogosGrupos[6][5] = {
            "JOGO: CONCÓRDIA x CHAPECOENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 1\n"
            "RODADA: Quarta Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 26/01/2025\n"
            "HORÁRIO: 18:00\n"
            "ESTÁDIO: Estádio Domingos Machado De Lima"
        };
        jogosGrupos[6][4] = {
            "JOGO: CONCÓRDIA x CARAVAGGIO\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 0\n"
            "RODADA: Sétima Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 06/02/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio Domingos Machado De Lima"
        };

        jogosGrupos[6][9] = {
            "JOGO: CONCÓRDIA x HERCÍLIO LUZ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Oitava Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 09/02/2025\n"
            "HORÁRIO: 17:00\n"
            "ESTÁDIO: Estádio Domingos Machado De Lima"
        };

        jogosGrupos[6][3] = {
            "JOGO: CONCÓRDIA x BRUSQUE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 4\n"
            "RODADA: Décima Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 16/02/2025\n"
            "HORÁRIO: 18:00\n"
            "ESTÁDIO: Estádio Domingos Machado De Lima"
        };

        jogosGrupos[7][6] = {
            "JOGO: CRICIÚMA x CONCÓRDIA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 0\n"
            "RODADA: Segunda Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 19/01/2025\n"
            "HORÁRIO: 16:00\n"
            "ESTÁDIO: Estádio Heriberto Hulse"
        };

        jogosGrupos[7][2] = {
            "JOGO: CRICIÚMA x BARRA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Quarta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 26/01/2025\n"
            "HORÁRIO: 18:30\n"
            "ESTÁDIO: Estádio Heriberto Hulse"
        };

        jogosGrupos[7][10] = {
            "JOGO: CRICIÚMA x JOINVILLE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 0\n"
            "RODADA: Quinta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 29/01/2025\n"
            "HORÁRIO: 21:00\n"
            "ESTÁDIO: Estádio Heriberto Hulse"
        };

        jogosGrupos[7][12] = {
            "JOGO: CRICIÚMA x SANTA CATARINA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Sétima Rodada\n"
            "CARTOES AMARELOS: 1\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 05/02/2025\n"
            "HORÁRIO: 21:00\n"
            "ESTÁDIO: Estádio Heriberto Hulse"
        };

        jogosGrupos[7][4] = {
            "JOGO: CRICIÚMA x CARAVAGGIO\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 2\n"
            "RODADA: Nona Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 2\n"
            "DATA: 12/02/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio Heriberto Hulse"
        };

        jogosGrupos[7][11] = {
            "JOGO: CRICIÚMA x MARCÍLIO DIAS\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Décima Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 15/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio Heriberto Hulse"
        };

        jogosGrupos[8][9] = {
            "JOGO: FIGUEIRENSE x HERCÍLIO LUZ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Segunda Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 18/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio Orlando Scarpelli"
        };

        jogosGrupos[8][7] = {
            "JOGO: FIGUEIRENSE x CRICIÚMA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 3\n"
            "RODADA: Terceira Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/01/2025\n"
            "HORÁRIO: 21:00\n"
            "ESTÁDIO: Estádio Orlando Scarpelli"
        };

        jogosGrupos[8][6] = {
            "JOGO: FIGUEIRENSE x CONCÓRDIA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 4 x 1\n"
            "RODADA: Quinta Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 29/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio Orlando Scarpelli"
        };

        jogosGrupos[8][3] = {
            "JOGO: FIGUEIRENSE x BRUSQUE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Sétima Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 05/02/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Estádio Orlando Scarpelli"
        };

        jogosGrupos[8][5] = {
            "JOGO: FIGUEIRENSE x CHAPECOENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 4\n"
            "RODADA: Nona Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 13/02/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio Orlando Scarpelli"
        };

        jogosGrupos[8][4] = {
            "JOGO: FIGUEIRENSE x CARAVAGGIO\n"
            "FASE: GRUPOS\n"
            "PLACAR: 5 x 1\n"
            "RODADA: Décima Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 16/02/2025\n"
            "HORÁRIO: 18:30\n"
            "ESTÁDIO: Estádio Orlando Scarpelli"
        };

        jogosGrupos[9][7] = {
            "JOGO: HERCÍLIO LUZ x CRICIÚMA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 1\n"
            "RODADA: Primeira Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 19/02/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio Anibal Torres Costa"
        };

        jogosGrupos[9][12] = {
            "JOGO: HERCÍLIO LUZ x SANTA CATARINA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 1\n"
            "RODADA: Quarta Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 26/01/2025\n"
            "HORÁRIO: 17:00\n"
            "ESTÁDIO: Estádio Anibal Torres Costa"
        };

        jogosGrupos[9][1] = {
            "JOGO: HERCÍLIO LUZ x AVAÍ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 3\n"
            "RODADA: Sétima Rodada\n"
            "CARTOES AMARELOS: 8\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 05/02/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio Anibal Torres Costa"
        };

        jogosGrupos[9][10] = {
            "JOGO: HERCÍLIO LUZ x JOINVILLE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 1\n"
            "RODADA: Nona Rodada\n"
            "CARTOES AMARELOS: 9\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 13/02/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Estádio Anibal Torres Costa"
        };
        jogosGrupos[9][5] = {
            "JOGO: HERCÍLIO LUZ x CHAPECOENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 2\n"
            "RODADA: Décima Rodada\n"
            "CARTOES AMARELOS: 6\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 16/02/2025\n"
            "HORÁRIO: 17:00\n"
            "ESTÁDIO: Estádio Anibal Torres Costa"
        };

        jogosGrupos[10][8] = {
            "JOGO: JOINVILLE x FIGUEIRENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Primeira Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 11/01/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Arena Joinville"
        };

        jogosGrupos[10][6] = {
            "JOGO: JOINVILLE x CONCÓRDIA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 1\n"
            "RODADA: Terceira Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Arena Joinville"
        };

        jogosGrupos[10][3] = {
            "JOGO: JOINVILLE x BRUSQUE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Quarta Rodada\n"
            "CARTOES AMARELOS: 3\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 25/01/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Arena Joinville"
        };

        jogosGrupos[10][11] = {
            "JOGO: JOINVILLE x MARCÍLIO DIAS\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Sétima Rodada\n"
            "CARTOES AMARELOS: 8\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 06/02/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Arena Joinville"
        };

        jogosGrupos[10][12] = {
            "JOGO: JOINVILLE x SANTA CATARINA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 4 x 3\n"
            "RODADA: Décima Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 16/02/2025\n"
            "HORÁRIO: 18:00\n"
            "ESTÁDIO: Arena Joinville"
        };

        jogosGrupos[11][3] = {
            "JOGO: MARCÍLIO DIAS x BRUSQUE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Primeira Rodada\n"
            "CARTOES AMARELOS: 8\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 15/01/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Estádio Dr. Hercílio Luz"
        };

        jogosGrupos[11][9] = {
            "JOGO: MARCÍLIO DIAS x HERCÍLIO LUZ\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Terceira Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 1\n"
            "DATA: 23/01/2025\n"
            "HORÁRIO: 21:00\n"
            "ESTÁDIO: Estádio Dr. Hercílio Luz"
        };

        jogosGrupos[11][4] = {
            "JOGO: MARCÍLIO DIAS x CARAVAGGIO\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 1\n"
            "RODADA: Quarta Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 26/01/2025\n"
            "HORÁRIO: 17:30\n"
            "ESTÁDIO: Estádio Dr. Hercílio Luz"
        };

        jogosGrupos[11][6] = {
            "JOGO: MARCÍLIO DIAS x CONCÓRDIA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 0 x 0\n"
            "RODADA: Sexta Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 02/02/2025\n"
            "HORÁRIO: 19:00\n"
            "ESTÁDIO: Estádio Dr. Hercílio Luz"
        };

        jogosGrupos[11][2] = {
            "JOGO: MARCÍLIO DIAS x BARRA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 0\n"
            "RODADA: Nona Rodada\n"
            "CARTOES AMARELOS: 2\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 12/02/2025\n"
            "HORÁRIO: 20:30\n"
            "ESTÁDIO: Estádio Dr. Hercílio Luz"
        };

        jogosGrupos[11][8] = {
            "JOGO: MARCÍLIO DIAS x FIGUEIRENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 1\n"
            "RODADA: Décima Primeira Rodada\n"
            "CARTOES AMARELOS: 3\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio Dr. Hercílio Luz"
        };

        jogosGrupos[12][4] = {
            "JOGO: SANTA CATARINA x CARAVAGGIO\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 1\n"
            "RODADA: Segunda Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 19/01/2025\n"
            "HORÁRIO: 16:00\n"
            "ESTÁDIO: Estádio Municipal Alfredo João Krieck"
        };

        jogosGrupos[12][11] = {
            "JOGO: SANTA CATARINA x MARCÍLIO DIAS\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 1\n"
            "RODADA: Quinta Rodada\n"
            "CARTOES AMARELOS: 4\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 30/01/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Estádio Municipal Alfredo João Krieck"
        };

        jogosGrupos[12][8] = {
            "JOGO: SANTA CATARINA x FIGUEIRENSE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 2 x 2\n"
            "RODADA: Sexta Rodada\n"
            "CARTOES AMARELOS: 7\n"
            "CARTOES VERMELHOS: 2\n"
            "DATA: 02/02/2025\n"
            "HORÁRIO: 17:00\n"
            "ESTÁDIO: Estádio Municipal Alfredo João Krieck"
        };

        jogosGrupos[12][3] = {
            "JOGO: SANTA CATARINA x BRUSQUE\n"
            "FASE: GRUPOS\n"
            "PLACAR: 1 x 0\n"
            "RODADA: Nona Rodada\n"
            "CARTOES AMARELOS: 8\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 12/02/2025\n"
            "HORÁRIO: 20:00\n"
            "ESTÁDIO: Estádio Municipal Alfredo João Krieck"
        };

        jogosGrupos[12][6] = {
            "JOGO: SANTA CATARINA x CONCÓRDIA\n"
            "FASE: GRUPOS\n"
            "PLACAR: 3 x 0\n"
            "RODADA: Décima Primeira Rodada\n"
            "CARTOES AMARELOS: 5\n"
            "CARTOES VERMELHOS: 0\n"
            "DATA: 22/02/2025\n"
            "HORÁRIO: 16:30\n"
            "ESTÁDIO: Estádio Municipal Alfredo João Krieck"
        };



    //
   
        
    if (jogosGrupos[a][b].empty()) return "Esse jogo não existe";
    string resultado;
    for (const auto& jogo : jogosGrupos[a][b]) {
        resultado += jogo + "\n";
    }
    return resultado;
}


string buscarJogosMata(int a, int b) {
    vector<vector<string>> jogosMataMata(20, vector<string>(20));

    jogosMataMata[3][5] =
        "JOGO: BRUSQUE x CHAPECOENSE\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 0 (4) x 0 (5)\n"
        "RODADA: Quartas de final\n"
        "CARTOES AMARELOS: 8\n"
        "CARTOES VERMELHOS: 0\n"
        "DATA: 01/03/2025\n"
        "HORÁRIO: 18:30\n"
        "ESTÁDIO: Estádio Augusto Bauer";

    jogosMataMata[7][10] =
        "JOGO: CRICIÚMA x JOINVILLE\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 0 (7) x 0 (8)\n"
        "RODADA: Quartas de final\n"
        "CARTOES AMARELOS: 6\n"
        "CARTOES VERMELHOS: 0\n"
        "DATA: 02/03/2025\n"
        "HORÁRIO: 19:00\n"
        "ESTÁDIO: Estádio Heriberto Hülse";

    jogosMataMata[12][11] =
        "JOGO: SANTA CATARINA x MARCÍLIO DIAS\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 2 x 0\n"
        "RODADA: Quartas de final\n"
        "CARTOES AMARELOS: 9\n"
        "CARTOES VERMELHOS: 1\n"
        "DATA: 04/03/2025\n"
        "HORÁRIO: 20:30\n"
        "ESTÁDIO: Estádio Municipal Alfredo João Krieck";

    jogosMataMata[1][8] =
        "JOGO: AVAÍ x FIGUEIRENSE\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 1 (4) x 1 (2)\n"
        "RODADA: Quartas de final\n"
        "CARTOES AMARELOS: 2\n"
        "CARTOES VERMELHOS: 0\n"
        "DATA: 05/03/2025\n"
        "HORÁRIO: 21:30\n"
        "ESTÁDIO: Estádio da Ressacada";

    jogosMataMata[12][1] =
        "JOGO: SANTA CATARINA x AVAÍ\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 1 (7) x 1 (8)\n"
        "RODADA: Semifinal\n"
        "CARTOES AMARELOS: 2\n"
        "CARTOES VERMELHOS: 0\n"
        "DATA: 08/03/2025\n"
        "HORÁRIO: 17:45\n"
        "ESTÁDIO: Estádio Municipal Alfredo João Krieck";

    jogosMataMata[5][10] =
        "JOGO: CHAPECOENSE x JOINVILLE\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 2 x 1\n"
        "RODADA: Semifinal\n"
        "CARTOES AMARELOS: 12\n"
        "CARTOES VERMELHOS: 0\n"
        "DATA: 09/03/2025\n"
        "HORÁRIO: 17:00\n"
        "ESTÁDIO: Estádio Municipal Josué Annoni";

    jogosMataMata[5][1] =
        "JOGO: CHAPECOENSE x AVAÍ\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 2 x 2\n"
        "RODADA: Final, Jogo 1\n"
        "CARTOES AMARELOS: 0\n"
        "CARTOES VERMELHOS: 0\n"
        "DATA: 15/03/2025\n"
        "HORÁRIO: 16:30\n"
        "ESTÁDIO: Estádio Municipal Josué Annoni";

    jogosMataMata[1][5] =
        "JOGO: AVAÍ x CHAPECOENSE\n"
        "FASE: MATA-MATA\n"
        "PLACAR: 1 x 1 (AVAI CAMPEAO)\n"
        "RODADA: Final, Jogo 2\n"
        "CARTOES AMARELOS: 12\n"
        "CARTOES VERMELHOS: 4\n"
        "DATA: 22/03/2025\n"
        "HORÁRIO: 16:30\n"
        "ESTÁDIO: Estádio da Ressacada";



        // Se a posição não tiver jogos, retorna string que nao tem
        if (jogosMataMata[a][b].empty()) return "Esse jogo não existe";

        string resultado;
        for (const auto& jogo : jogosMataMata[a][b]) {
            resultado += jogo + "\n";
        }
        return resultado;
    
    
}

int idTime(string time, int i = 0){
    //verificar se o time esta no campeonato ou nao
    if(time == BDtimes[i]){
        return (i+1);
    }if(i==(BDtimes.size()-1)){//caso tenham mais times  o .size ajuda a ter controle da quantidade
        return 0; 
    }else{
        return idTime(time,++i); // ++i soma 1 a i
    }

    
}
int idFase(string fase, int i = 0){

    if(fase == BDfases[i]){
        return i+1;
    }if(i==(BDfases.size()-1)){
        return 0; 
    }else{
        return idTime(fase,++i); 
    }
}
int main(){
    vector<bool>verificarDados = { true , true, true};
    int i;
    int time1Int, time2Int, faseInt;
    string time1,time2,fase;
    cout << "Qual seu primeiro time e segundo time:" << endl<< endl;
    
        for(i = 0;i < BDtimes.size();i++){ // escrever os times na tela
        cout << "|" << BDtimes[i] << "|" << endl;
    
        }
        
        
    while(verificarDados[0]||verificarDados[1]){//enquanto true reescreva valor
        cin >> time1 >> time2; //input dos BDtimes
        while(time1==time2){
            cout << "nao insira valores iguais, tente novamente"<< endl;
            cin >> time2;
        }
        cout << "";
        if(idTime(time1)){ //verificar se digitou um time valido
            cout << "time 1 valido" << endl;
            time1Int = idTime(time1) - 1;
            verificarDados[0] = false;
        }else{
            cout << "time 1 invalido" << endl;
        }
        if(idTime(time2)){ //verificar se digitou um time valido
            cout << "time 2 valido" << endl;
             time2Int = idTime(time2) - 1;
            verificarDados[1] = false;
        }else{
            cout << "time 2 invalido" << endl;
        }
        if(verificarDados[0]||verificarDados[1]){
            cout << "verifique se escreveu corretamente o time" <<endl;
        }
        
    }
    
    cout << endl << "Qual fase voce deseja ver ? " << endl;
    for(i = 0;i < BDfases.size();i++){ // escrever as possiveis fases na tela
        cout << BDfases[i] << endl;
    
        }
    while(verificarDados[2]){
        cin >> fase;
        if(idFase(fase)){ //validar o valor
            verificarDados[2] = false;
            faseInt = idFase(fase) - 1;
        }else{
            cout << "verifique se escreveu corretamente a fase" << endl;
        }

    }

    if(time1Int == 12 || time2Int == 12){
        if(time1Int == 12){
            cout << possiveisJogos[time2Int][1] //BUSCANDO PELO VISITANTE

        }else{
            cout << possiveisJogos[time1Int][0]//BUSCANDO PELO MANDANTE
        }
    }else{
        if(faseInt == 1){
            cout << buscarJogosGrupos(time1Int,time2Int);
        }else if (faseInt == 2){
            cout << buscarJogosMata(time1Int,time2Int);
        }else{
            cout << buscarJogosGrupos(time1Int,time2Int);
            cout << buscarJogosMata(time1Int,time2Int);
        }
        
    }

}
