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

    float valorIr(float aliquota);

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
    numeroDependentes = 0;
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
    if (anoNascimento <= 2019) {
        int idade = 2019 - anoNascimento ;
        cout << "Idade eh: " << idade << endl;
        return idade;
    }
}

float rendaAnual(float rendaMensal) {
    int rendaAnual = rendaMensal * 12;
    return rendaAnual;
}

float rendaPerCapitaMensal(float rendaMensal, int numeroDependentes) {
}

float aliquotaIrMax(float aliquota) {
}

float aliquotaIrEf (float aliquota) {
}

float valoIr(float aliquota) {
}

void cadastro(string nomeDoContribuinte, string profissao, string escolaridade, float rendaMensal,
              float aliquota, int numeroDepedentes, int anoNascimento) {
}

void ImpostoDeRenda::imprimir(string nomeDoContribuinte, string profissao, string escolaridade, int idade) {
    cout << "Nome: " << nomeDoContribuinte << endl;
    cout << "Ano de nascimento: " << idade << endl;
    cout << "Profissao: " << profissao << endl;
    cout << "Escolaridade: " << escolaridade << endl;
}

int main() {
    string _nome, _escolaridade, _profissao;
    int _ano;

    ImpostoDeRenda Dados; //objeto

    cout << "Digite o nome do contribuinte: ";
    cin >> _nome;
    cout << endl;

    cout << "Digite o ano de nascimento: ";
    cin >> _ano;
    cout << endl;

    cout << "Digite sua escolaridade: " ;
    cin >> _escolaridade;
    cout << endl;

    cout << "Digite sua profissao: " ;
    cin >> _profissao;
    cout << endl;

    Dados.imprimir(_nome, _escolaridade, _profissao, _ano);
    cout << endl;

    return 0;
}
