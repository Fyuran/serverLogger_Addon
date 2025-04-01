#define MAINPREFIX z
#define PREFIX btc
#define COMPONENT serverLogger

#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
#undef PREP
#define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
#undef PREP
#define PREP(fncName) [ QPATHTOF(functions\DOUBLES(fnc,fncName).sqf),QFUNC(fncName) ] call CBA_fnc_compileFunction
#endif

// BEGIN ACE3 reference macros

#define ACE_PREFIX ace

#define ACE_ADDON(component) DOUBLES(ACE_PREFIX,component)

#define ACEGVAR(module,var) TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var) QUOTE(ACEGVAR(modulevar))
#define QQACEGVAR(module,var) QUOTE(QACEGVAR(module,var))

#define ACEFUNC(module,function) TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function) QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string) QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACELLSTRING(module,string) localize ACELSTRING(module,string)
#define ACECSTRING(module,string) QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

#define ACEPATHTOF(component,path) \z\ace\addons\component\path
#define QACEPATHTOF(component,path) QUOTE(ACEPATHTOF(component,path))