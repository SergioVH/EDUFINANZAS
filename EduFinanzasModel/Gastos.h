#pragma once
using namespace System;
namespace EduFinanzasModel {
    [Serializable]
        public ref class Gastos {

        public://para que pueda ehredar sus atributos
            property String^ cantidadGastos;
            property String^ descripcionGastos;
           
            //Implementacion de constructores
        public:
            Gastos();
            Gastos(String^ cantidadGastos, String^ descripcionGastos);

    };
}
