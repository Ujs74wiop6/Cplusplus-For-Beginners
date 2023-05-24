#include <iostream>
#include <cstring>

/*
Token generation from the content of a String/char[] variable
*/

void StrRand();

int main(){
    
    int opc = 0;

    std::cout << "1) - To generate a Token based on the contents of a variable\n2) - To generate a random Token\n: ";
    std::cin >> opc;

    if(opc == 1){
        std::string str = "operation = x + y name = 'Fabricio'";
        char * pstr = nullptr;
        pstr = std::strtok(&str[0], " ");
        while (pstr != NULL){
        std::cout << "\n" << pstr;
        pstr = std::strtok(NULL, " =");
    }
    }else if(opc == 2){
        StrRand();
    }else{
        std::cout << "Opção Inválida";
    }

   return 0;
}

void StrRand(){
    const char *validchars = "abcdefghijklmnopqrstuvwxiz";
    char *novastr;
    int str_len;
    srand(time(NULL));
    str_len = (rand() % 30 );
    str_len += str_len < 5 ? 5 : 0;
    novastr = (char*)malloc((str_len + 1)* sizeof(char));
    for (int i = 0; i < str_len; i++ ) {
        novastr[i] = validchars[ rand() % strlen(validchars) ];
        novastr[i + 1] = 0x0;
    }
    std::cout << novastr << "\n";
}