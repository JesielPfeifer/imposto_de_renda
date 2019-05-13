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

    void cadastro(string nomeDoContribuint, string profissao, string escolaridade, float rendaMensal,
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

ImpostoDeRenda::ImpostoDeRenda(string nomeDoContribuinte_, string profissao_, string escolaridade_, float rendaMensal_,
                               float aliquota_, int numeroDependentes_, int anoNascimento_) {
    nomeDoContribuinte = nomeDoContribuinte_;
    profissao = profissao_;
    escolaridade = escolaridade_;
    rendaMensal = rendaMensal_;
    aliquota = aliquota_;
    numeroDependentes = numeroDependentes_;
    anoNascimento = anoNascimento_;
}

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
        int idade = anoNascimento - 2019;
        return idade;
    }
}

int main() {
    ImpostoDeRenda();
    cout << "Digite o nome do contribuinte: ";
    return 0;
}