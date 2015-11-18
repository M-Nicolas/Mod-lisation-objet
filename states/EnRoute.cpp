#include "states/Enroute.h"
#include "states/Current_state.h"
#include "states/Fige.h"

Current_state *EnRoute::figer() {
	return Fige::Instance();
}