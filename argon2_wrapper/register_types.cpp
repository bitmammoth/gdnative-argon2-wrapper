#include "register_types.h"

#ifdef GODOT4
	#include "core/object/class_db.h"
#else
	#include "core/class_db.h"
#endif

#include "argon2_wrapper.hpp"

void register_argon2_wrapper_types() {
    ClassDB::register_class<godot::Argon2Wrapper>();
}

void unregister_argon2_wrapper_types() {}
