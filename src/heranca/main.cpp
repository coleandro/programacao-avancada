#include <iostream>
#include "Veiculo.h"
#include "Carro.h"
#include "Caminhao.h"
#include "Caminhonete.h"

int main() {
    // Veiculos
    Veiculo vei1("ABC-1234", 1000.0, 180.0, 63000.0);
    Veiculo vei2("BCD-2345", 1280.0, 220.0, 84900.0);

    // Carros
    Carro car1("DEF-3456", 1080.0, 220.0, 62500.0, "VW UP CROSS TSI", "BRANCO");
    Carro car2("FGH-4567", 1250.0, 240.0, 125000.0, "VW GOLF GTI", "PRATA");
    
    // Caminhoes
    Caminhao cam1("HIJ-7890", 26000.0, 120.0, 384000.0, 80.0, 6.8, 3.7);
    Caminhao cam2("JKL-0123", 28000.0, 120.0, 410000.0, 70.0, 6.7, 3.5);

    // Caminhonetes
    Caminhonete cat1("MNO-4567", 2185.0, 190.0, 191990.0, "VW AMAROK HIGHLINE 3.0 V6 4X4 AT CD", "AZUL", 1105.0, 5254.0, 1834.0);
    Caminhonete cat2("PQR-8901", 2582.0, 160.0, 490000.0, "FORD F-150 RAPTOR 3.5 V6 TURBO CD", "AZUL", 549.0, 5890.0, 1994.0);

    return 0;
}