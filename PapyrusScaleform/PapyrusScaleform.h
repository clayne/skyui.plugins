#pragma once

#include "GameTypes.h"

struct StaticFunctionTag;
class VMClassRegistry;

namespace papyrusScaleform
{
	void RegisterFuncs(VMClassRegistry* registry);

	void SetBool(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target, bool value);
	void SetNumber(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target, float value);
	void SetString(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target, BSFixedString value);
	
	bool GetBool(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target);
	float GetNumber(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target);
	BSFixedString GetString(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target);

	void Invoke(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target);
	void InvokeBool(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target, bool arg);
	void InvokeNumber(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target, float arg);
	void InvokeString(StaticFunctionTag* thisInput, BSFixedString menu, BSFixedString target, BSFixedString arg);

	bool IsMenuOpen(StaticFunctionTag* thisInput, BSFixedString menu);
}