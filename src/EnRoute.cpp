#include "Enroute.h"
#include "Current_state.h"
#include "Fige.h"

Current_state *EnRoute::figer() {
	return Fige::Instance();
}