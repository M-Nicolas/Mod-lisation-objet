#include "states/Enroute.h"
#include "states/Current_state.h"
#include "states/Figer.h"

Current_state EnRoute::figer() {
	return Fige::Instance();
}