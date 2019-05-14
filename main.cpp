#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class ImpostoDeRenda {

private:
    string nomeDoContribuinte, profissao, escolaridade;
    float rendaMensal, aliquota;
    int numeroDependentes, anoNascimento;

public:
    ImpostoDeRenda();

    ImpostoDeRenda(string nomeDoContribuinte_, string profissao_, string escolaridade_, float rendaMensal_,
                   float aliquota_,
                   int numeroDependentes_, int anoNascimento_);

    ~ImpostoDeRenda();

    int idade(int anoNascimento);

    float rendaAnual(float rendaMensal);

    float rendaPerCapitaMensal(float rendaMensal, int numeroDependentes);

    float aliquotaIrMax(float aliquota);

    float aliquotaIrEf(float aliquota);

    float valorIr(float rendaAnual);

    void imprimir(string nomeDoContribuinte, string profissao, string escolaridade, int idade);

    void cadastro(string nomeDoContribuinte, string profissao, string escolaridade, float rendaMensal,
                  float aliquota, int numeroDepedentes, int anoNascimento);
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

/*ImpostoDeRenda::ImpostoDeRenda(string nomeDoContribuinte_, string profissao_, string escolaridade_, float rendaMensal_,
                               float aliquota_, int numeroDependentes_, int anoNascimento_)
{
    nomeDoContribuinte = nomeDoContribuinte_;
    profissao = profissao_;
    escolaridade = escolaridade_;
    rendaMensal = rendaMensal_;
    aliquota = aliquota_;
    numeroDependentes = numeroDependentes_;
    anoNascimento = anoNascimento_;
}*/

ImpostoDeRenda::~ImpostoDeRenda() {
}

void ImpostoDeRenda::cadastro(string nomeDoContribuinte_, string profissao_, string escolaridade_, float rendaMensal_,
                              float aliquota_, int numeroDepedentes_, int anoNascimento_) {
    nomeDoContribuinte = nomeDoContribuinte_;
    profissao = profissao_;
    escolaridade = escolaridade_;
    rendaMensal = rendaMensal_;
    aliquota = aliquota_;
    numeroDependentes = numeroDepedentes_;
    anoNascimento = anoNascimento_;
}

int ImpostoDeRenda::idade(int anoNascimento) {
    int idade;
    if (anoNascimento <= 2019) {
        idade = 2019 - anoNascimento;
        cout << "Idade: " << idade << endl;
    } else {
        cout << "Idade invalida" << endl;
    }
    return idade;
}

float ImpostoDeRenda::rendaAnual(float rendaMensal) {
    float rendaAnual = rendaMensal * 12;
    cout << "Renda anual: " << rendaAnual << endl;
    this->valorIr(rendaAnual);
    return rendaAnual;
}

float ImpostoDeRenda::rendaPerCapitaMensal(float rendaMensal, int numeroDependentesDigitado) {
    float rendaPCM = rendaMensal / (numeroDependentesDigitado + 1);
    cout << "Renda Per Capita Mensal: " << rendaPCM << endl;
    return rendaPCM;
}
/*
float ImpostoDeRenda::aliquotaIrMax(float RendaMensalPerCapita){
}

float ImpostoDeRenda::aliquotaIrEf(float aliquota){
}
*/

float ImpostoDeRenda::valorIr(float rendaAnual){
    cout << "TESTE TESTE: " << rendaAnual << endl;
}

/*
void ImpostoDeRenda::cadastro(string nomeDoContribuinte, string profissao, string escolaridade, float rendaMensal,
                              float aliquota, int numeroDepedentes, int anoNascimento){
}
*/


void ImpostoDeRenda::imprimir(string nomeDoContribuinte, string profissao, string escolaridade, int ano) {

    cout << "Nome: " << nomeDoContribuinte << endl;
    cout << "Ano de nascimento: " << ano << endl;
    cout << "Profissao: " << profissao << endl;
    cout << "Escolaridade: " << escolaridade << endl;

}

int main() {
    string _nome, _escolaridade, _profissao;
    int _ano, numerosDependentes;
    float RendaMensal;
    ImpostoDeRenda *Dados = new ImpostoDeRenda();

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

    Dados->imprimir(_nome, _escolaridade, _profissao, _ano);
    Dados->idade(_ano);
    Dados->rendaAnual(RendaMensal);
    Dados->rendaPerCapitaMensal(RendaMensal, numerosDependentes);

    cout << endl;

    return 0;
}
