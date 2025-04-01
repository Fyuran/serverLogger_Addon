#include "script_component.hpp"

class CfgPatches { 
	class ADDON {
		name = "=BTC= Server Logger";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"cba_main"};
		url = "https://www.blacktemplars.it/";
		author = "=BTC= Black Templars Clan";
        authors[] = {"=BTC= Fyuran"};
		requiredVersion = "2.18";
	};
}; 


class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

//class Extended_InitPost_EventHandlers {};