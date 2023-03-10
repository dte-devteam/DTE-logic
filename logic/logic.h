#pragma once
#pragma warning(disable:4275) //solve this later!
#include "function/include/functionfactory.h"
#include "function/include/defaultvalues.h"
#include "function/include/errorvalues.h"
#include "token_data.h"
using namespace functionfactory;
namespace functions {
	namespace logic {
		namespace primitive {
			struct primitive_logic : basicfunction {
				using basicfunction::basicfunction;
				bool environment_variables(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, char*& in_1, char*& in_2, char*& out, size_t& size);
			};
			//~, |, &, ^, ==, <, >
			//constructors
			struct bit_not : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct bit_or : primitive_logic {
				using primitive_logic::primitive_logic;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct bit_and : primitive_logic {
				using primitive_logic::primitive_logic;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct bit_xor : primitive_logic {
				using primitive_logic::primitive_logic;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			/*
			struct bit_equal : primitive_logic {
				using primitive_logic::primitive_logic;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct bit_bigger : primitive_logic {
				using primitive_logic::primitive_logic;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct bit_less : primitive_logic {
				using primitive_logic::primitive_logic;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			*/
			//instances
			static bit_not bit_not_operator{
				token_data::token_name_to_id(L"bit_not_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				}
			};
			static bit_or bit_or_operator{
				token_data::token_name_to_id(L"bit_or_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				} 
			};
			static bit_and bit_and_operator{
				token_data::token_name_to_id(L"bit_and_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				}
			};
			static bit_xor bit_xor_operator{
				token_data::token_name_to_id(L"bit_xor_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				}
			};
			/*
			static bit_equal bit_equal_operator{
				token_data::token_name_to_id(L"bit_equal_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				}
			};
			static bit_bigger bit_bigger_operator{
				token_data::token_name_to_id(L"bit_bigger_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				}
			};
			static bit_less bit_less_operator{
				token_data::token_name_to_id(L"bit_less_operator"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr,
					(void*)&defaultvalues::POINTER_SIZE
				}
			};
			*/
		}
		namespace advanced {
			//||, &&, >=, <=, !=, !
			//constructors
			struct OR : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct AND : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct BIGGER_EQUAL : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct BIGGER_LESS : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct NOT_EQUAL : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
		}
		namespace shifts {
			//<<, >>
			//constructors
		}
	}
}