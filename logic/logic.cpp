#include "logic.h"
namespace functions {
	namespace logic {
		namespace primitive {
			bool primitive_logic::environment_variables(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, char* &in_1, char* &in_2, char* &out, size_t& size) {
				std::vector<void*> values;
				filldefaultvalues(argumentspointer, values);
				if (!(values[0] && !values[1] && !values[3])) {
					if (errorcodepointer) {
						*errorcodepointer = errorvalues::NULLPTR;
					}
					return true;
				}
				size = *(size_t*)values[3];
				in_1 = (char*)values[0];
				in_2 = (char*)values[1];
				if (!values[2]) {
					out = in_1;
				}
				else {
					out = (char*)values[2];
				}
				return false;
			}
			void bit_not::execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
				std::vector<void*> values;
				filldefaultvalues(argumentspointer, values);
				if (!(values[0] && values[2])) {
					if (errorcodepointer) {
						*errorcodepointer = errorvalues::NULLPTR;
					}
					return;
				}
				size_t size = *(size_t*)values[2];
				char* in = (char*)values[0];
				char* out;
				if (!values[1]) {
					out = in;
				}
				else {
					out = (char*)values[1];
				}
				while (size--) {
					*out++ = ~*in++;
				}
			}
			void bit_or::execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
				size_t size;
				char* in_1, *in_2, *out;
				if (environment_variables(argumentspointer, errorcodepointer, in_1, in_2, out, size)) {
					return;
				}
				while (size--) {
					*out++ = *in_1++ | *in_2++;
				}
			}
			void bit_and::execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
				size_t size;
				char* in_1, *in_2, *out;
				if (environment_variables(argumentspointer, errorcodepointer, in_1, in_2, out, size)) {
					return;
				}
				while (size--) {
					*out++ = *in_1++ & *in_2++;
				}
			}
			void bit_xor::execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
				size_t size;
				char* in_1, *in_2, *out;
				if (environment_variables(argumentspointer, errorcodepointer, in_1, in_2, out, size)) {
					return;
				}
				while (size--) {
					*out++ = *in_1++ ^ *in_2++;
				}
			}
		}
	}
}