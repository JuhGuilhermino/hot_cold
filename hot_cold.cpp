#include <iostream>
using namespace std;

//exibe as regras do jogo
void game_rules(){
    cout << "===================================================" << endl;
    cout << "Welcome to the Hot-Cold Guess game!"<< endl;
    cout << "___________________________________________________" << endl;
    cout << "These are the rules:" << endl;
    cout << " * I’ll choose a random number in [1,30]. Your job is to guess that number." << endl;
    cout << " * From the second guess onward, I’ll tell you if your guessis hot (closer than the previous guess) or cold (farther fromthe previous guess)." << endl;
    cout << " * If you wish to quit the game, just type in a negative number." << endl;
    cout << "Good luck!" << endl;
    cout << "===================================================" << endl; 
};

//exibe como ultilzar o programa
void usage(){
    cout << "===================================================" << endl;
    cout << "Usage:" << endl;
    cout << "  >>> O valor do parâmetro deve ser de 0 - 100." << endl;
    cout << "  >>> Caso o parâmetro não seja informado o valor máximo sera 30." << endl;
    cout << "  >>> Só são permitridos chutes entre 1 - 100." << endl;
    cout << "===================================================" << endl;
};

//mecânica do jogo
void game(int valor_escolhido, int valor_maximo) {

};

//arcg: 2; //passa dois argumentos
//argv: {"./hot_cold" "50";}
int main(int argc, char *argv[]) {
     
    //conferindo a quantidade de parâmetros
    if (argc > 2) {
        cout << " >>> Argumentos em excesso." << endl;
        usage();
        exit(1); 
    }

    int valor_maximo = 100;
    int valor_padrao = 30;
    int valor_escolhido = stoi(argv[1]);

    if (argc == 1) { //TA DANDO ERRO AQUI, NÃO TA LENDO 2 ARGUMENTOS ENTÃO NÃO TEM COMO TESTAR A CONDIÇÃO
        cout << "Valor máximo é o valor padrão: " << valor_padrao << endl;
        game_rules();
    } else {
        cout << "Valor máximo é: " << valor_escolhido << endl;
        game_rules();
        game(valor_escolhido, valor_maximo);
    }
    
    return 0;
}