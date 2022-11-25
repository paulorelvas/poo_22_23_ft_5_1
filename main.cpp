#include <iostream>
#include "MSG.h"

using namespace std;

void func(MSG* &a, MSG* &b) {
    a = new MSG("msgA");
    b = new MSG("msgB");
    cout << "objetos criados" << endl;
}

int main() {
    cout << "---- FT5_01::memória dinâmica (objetos)" << endl;

    /* ----- alinea a) e b) ---------- */
/*
    MSG * a = new MSG {"ana"};
    MSG * b = new MSG {"rita"};

   delete b;
   delete a;

*/
    /* ----- alinea c) ---------- */
/*
    MSG *a = nullptr;
    MSG *b = nullptr;
    func(a, b);

    delete a;
    a = nullptr; // boa prática colocar o ponteiro a apontar para nullptr

    delete b;
    b = nullptr;

    cout << endl << "objetos libertados" << endl;
*/
    /* ----- alinea d) e e) ---------- */
    MSG *md = new MSG[3];
    delete[] md;

    return 0;
}
