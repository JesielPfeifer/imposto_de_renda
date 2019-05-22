#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class ImpostoDeRenda {

private:
    string nomeDoContribuinte, profissao, escolaridade;
    float rendaMensal, aliquota;
    int numeroDependentes, anoNascimento, idade;

public:
    ImpostoDeRenda();

    ImpostoDeRenda(string nomeDoContribuinte_, string profissao_, string escolaridade_, float rendaMensal_,
                   float aliquota_,
                   int numeroDependentes_, int anoNascimento_);

    ~ImpostoDeRenda();

//    int idade();

    float rendaAnual();

    float rendaPerCapitaMensal();

    float aliquotaIrMax();

    float aliquotaIrEf();

    float valorIr();

    void imprimir();

    int voltaIdade(int aN);

};

ImpostoDeRenda::ImpostoDeRenda() {
    cout << fixed << setprecision(2);
    nomeDoContribuinte = "";
    profissao = "";
    escolaridade = "";
    rendaMensal = 0.0;
    aliquota = 0.0;
    numeroDependentes = 0.0;
    anoNascimento = 0;
}

ImpostoDeRenda::ImpostoDeRenda(string nomeDoContribuinte_, string profissao_, string escolaridade_, float rendaMensal_,
                               float aliquota_, int numeroDependentes_, int anoNascimento_) {

    nomeDoContribuinte = nomeDoContribuinte_;
    profissao = profissao_;
    escolaridade = escolaridade_;
    rendaMensal = rendaMensal_;
    aliquota = aliquota_;
    numeroDependentes = numeroDependentes_;
    anoNascimento = anoNascimento_;
    idade = voltaIdade(anoNascimento);
}

ImpostoDeRenda::voltaIdade(int aN) {
    return 2019-aN;
}

ImpostoDeRenda::~ImpostoDeRenda() {
}


//int ImpostoDeRenda::idade() {
//    int idade;
//    if (anoNascimento <= 2019) {
//        idade = 2019 - anoNascimento;
//    }
//    return idade;
//}

float ImpostoDeRenda::rendaAnual() {
    float rendaAnual = this->rendaMensal * 12;
    return rendaAnual;
}

float ImpostoDeRenda::rendaPerCapitaMensal() {
    float rendaPCM = this->rendaMensal / (this->numeroDependentes + 1);
    cout << "Renda Per Capita Mensal: " << rendaPCM << endl;
    return rendaPCM;
}

/*
float ImpostoDeRenda::aliquotaIrMax(float RendaMensalPerCapita){
}

float ImpostoDeRenda::aliquotaIrEf(float aliquota){
}
*/

float ImpostoDeRenda::valorIr() {

}

void ImpostoDeRenda::imprimir() {

    imprimir(this->nomeDoContribuinte);
    //cout << rendaAnual();
}
void ImpostoDeRenda::imprimir(string nome) {

    cout << "Nome: " << this->nomeDoContribuinte << endl;
    cout << "Ano de nascimento: " << this->anoNascimento << endl;
    cout << "Profissao: " << this->profissao << endl;
    cout << "Escolaridade: " << this->escolaridade << endl;
    cout << "Idade: " << this->idade << endl;
    //cout << rendaAnual();
}

int main() {
    string _nome, _escolaridade, _profissao;

    int _ano, numerosDependentes;

    float RendaMensal, aliquota = 0.0;

    cout << "Digite o nome do contribuinte: ";
    cin >> _nome;
    cout << endl;

    cout << "Digite o ano de nascimento: ";
    cin >> _ano;
    cout << endl;

    cout << "Digite sua escolaridade: ";
    cin >> _escolaridade;
    cout << endl;

    cout << "Digite sua profissao: ";
    cin >> _profissao;
    cout << endl;

    cout << "Digite sua renda mensal: ";
    cin >> RendaMensal;
    cout << endl;

    cout << "Digite numero de dependentes: ";
    cin >> numerosDependentes;
    cout << endl;

    ImpostoDeRenda *dados = new ImpostoDeRenda(_nome, _profissao, _escolaridade, RendaMensal, aliquota,
                                               numerosDependentes, _ano);

    dados->imprimir(_nome);
//    dados->idade();
    dados->rendaAnual();
    dados->rendaPerCapitaMensal();

    cout << endl;

    return 0;
}
