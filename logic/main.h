#pragma once
#include "logic.h"
#include "memory/include/metatable.h"
using namespace memory::table;
namespace functions {
	namespace logic {
		static std::vector<basicfunction*>* dllfunctions = new std::vector<basicfunction*>{

		};
		std::vector<basicfunction*>* getfunctions() {
			return dllfunctions;
		}
		std::vector<typedesc*>* gettypes() {
			return nullptr;
		}
	}
}