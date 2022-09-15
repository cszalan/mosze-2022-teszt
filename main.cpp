#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hiányzik az alulvonás
    int *b = new int[NELEMENTS];
    // Nincsen pontosvessző a sor végén, rossz aposztóf használata
    std::cout << '1-100 ertekek duplazasa'
    // hiányzik a léptetés
    for (int i = 0;)
    {
        // 0-tól 99-ig dupláz... 1-től 100-ig kéne
        b[i] = i * 2;
    }
    // a ciklus vezérlő hibás, mindig hamisra fut így nem lép be a ciklusba
    for (int i = 0; i; i++)
    {
    // magát az értéket nem írjuk ki, illetve hiányzik a pontos vessző a sor végéről
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //nincs kezdőértéke a változónak
    int atlag;
    // hiányzik egy pontosvessző
    for (int i = 0; i < N_ELEMENTS, i++)
    {
    // szintén hiányzik egy pontos vessző
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
