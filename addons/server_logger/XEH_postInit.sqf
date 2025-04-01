#include "script_component.hpp"

addMissionEventHandler ["ExtensionCallback", {
	params ["_name", "_function", "_data"];

    if(_name isNotEqualTo "btc_serverLogger") exitWith {};
    diag_log format ["%1: extension callback reporting: %2", __FILE__, _data];
}];