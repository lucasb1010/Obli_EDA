#include "definiciones.h"
#include "cargo.h"

#include <iostream>
#include <string.h> 


struct nodoCargo {
	Cadena nombreCargo;
	Cargo cargoHijo;
	Cargo cargoHermano;
	Cargo cargoPadre;
};


// CREA EL CARGO A TRAVÉS DE LA CADENA QUE SE LE PASA
Cargo crearCargo (Cadena cadenaCargo) {
	Cargo cargo = new(nodoCargo);
	cargo->nombreCargo = new(char[MAX_COMANDO]);
	strcpy(cargo->nombreCargo, cadenaCargo);
	cargo->cargoHijo = NULL; 
	cargo->cargoHermano = NULL;
	cargo->cargoPadre = NULL;
	return cargo;
}
