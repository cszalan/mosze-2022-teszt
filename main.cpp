#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hiányzik az alulvonás
    int *b = new int[N_ELEMENTS];
    // Nincsen pontosvessző a sor végén, rossz aposztóf használata
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // hiányzik a léptetés
    for (int i = 0; i < N_ELEMENTS; i++)
    {
    // 0-tól 99-ig dupláz... 1-től 100-ig kéne
        b[i] = (i + 1) * 2;
    }
    // a ciklus vezérlő hibás, mindig hamisra fut így nem lép be a ciklusba
    for (int i = 0; i < N_ELEMENTS; i++)
    {
    // magát az értéket nem írjuk ki, illetve hiányzik a pontos vessző a sor végéről
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //nincs kezdőértéke a változónak
    int atlag = 0;
    // hiányzik egy pontosvessző
    for (int i = 0; i < N_ELEMENTS; i++)
    {
    // szintén hiányzik egy pontos vessző
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}