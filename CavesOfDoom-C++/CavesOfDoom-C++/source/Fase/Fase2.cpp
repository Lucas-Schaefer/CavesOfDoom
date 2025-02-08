#include "../../headers/Fase/Fase2.hpp"


namespace Fase {

    Fase2::Fase2() :
        Fase(IDs::IDs::fase_fase2, IDs::IDs::fundo_fase2)
    {

    }

    Fase2::~Fase2() {

    }

    void Fase2::recuperarJogada(const std::vector<std::string> vectorEntidades, const std::vector<std::string> vectorInfoFase) {
        //terminar...
    }

    void Fase2::criarFundo() {
        fundo.addCamada("imagens/Fase2/fase2background1.png", 0.0f);
        fundo.addCamada("imagens/Fase2/fase2background2.png", 0.1f);
        fundo.addCamada("imagens/Fase2/fase2background3.png", 0.3f);
        fundo.addCamada("imagens/Fase2/fase2background4.png", 0.5f);
    }

    void Fase2::criarMapa(const IDs::IDs ID_Mapa) {
        //terminar...
    }

}
