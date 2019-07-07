#pragma once

#include "common.h"
#include "patcher.h"
#include "Vehicle.h"

enum
{
	TRAIN_DOOR_STATE2 = 2
};

class CTrain : public CVehicle
{
public:
	// 0x288
	uint8 stuff1[20];
	uint8 m_trackId;
	uint8 stuff2[7];
	int16 m_doorState;
	uint8 stuff3[62];

	CTrain(int, uint8);
	CTrain* ctor(int, uint8);
	void dtor(void) { this->CTrain::~CTrain(); }
};
static_assert(sizeof(CTrain) == 0x2E4, "CTrain: error");