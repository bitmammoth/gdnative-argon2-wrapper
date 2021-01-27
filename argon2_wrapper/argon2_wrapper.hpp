#pragma once

#include <cstring>
#include <argon2.h>

#ifdef GODOT4
	#include "core/object/class_db.h"
	#include "core/object/reference.h"
	#include "core/string/ustring.h"
	#include "core/object/method_bind.h"
#else
	#include "core/class_db.h"
	#include "core/ustring.h"
	#include "core/print_string.h"
	#include "core/reference.h"
	#include "core/method_bind_ext.gen.inc"
#endif

#define DEFAULT_HASH_LEN 32
#define DEFAULT_ENCODED_LEN 108

namespace godot {

class Argon2Wrapper : public Reference {
    GDCLASS(Argon2Wrapper, Reference)

protected:
    static void _bind_methods();

public:
    Argon2Wrapper();
    ~Argon2Wrapper();

    String argon2_hash(String password, String salt, int t_cost, int m_cost, int parallelism, String type);
    bool argon2_verify(String hash, String password, String type);
};

}
