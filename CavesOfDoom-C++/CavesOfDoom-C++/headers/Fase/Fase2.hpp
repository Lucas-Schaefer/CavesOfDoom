#pragma once

#include "Fase.hpp"


namespace Fase {

    class Fase2 : public Fase {
    private:
        void recuperarJogada(const std::vector<std::string> vectorEntidades, const std::vector<std::string> vectorInfoFase);
    public:
        Fase2();
        ~Fase2();
        void criarFundo();
        void criarMapa(const IDs::IDs ID_Mapa);
    };

}