#include "InventroySystemwithGUI.h"

std::map<std::string, InventoryFile> inventories;

void create_inventory(std::string inventroy_name, std::string path, std::string description) {

	inventories.emplace(inventroy_name, InventoryFile{});
}

