#include "Enroute.h"
#include "Current_state.h"
#include "Figer.h"

Current_state EnRoute::figer() {
	return Fige::Instance();
}