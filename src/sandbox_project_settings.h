#pragma once

#include <godot_cpp/variant/string.hpp>

using namespace godot;

class SandboxProjectSettings {
public:
	static void register_settings();

	static String get_docker_path();
};
