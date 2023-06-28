//fuctions location for inventorySystemGUI

#include "InventroySystemwithGUI.h"

using namespace std;

class InventoryFile {        // The class
	public:          // Access specifier

		void add_item(string name, int item_number, string description, int quantity);
		/*string display_inventory();
		void remove_items();
		string select_items_sell();
		string create_invoice();*/

		InventoryFile(string path, string description) {	// Constructor 
			ofstream outfile;
			outfile.open(path, ios::out);
			outfile << description;
			outfile.close();

			this->path = path; 
			this->description = description;
		}

	private:
		string path;  // Attribute
		string description;  // Attribute
		int number_of_items = 0;
};

/*InventoryFile::InventoryFile(string path, string description) {
	ofstream outfile;
	outfile.open(path, ios::out);
	outfile << description;
	outfile.close();

	this->path = path;
	this->description = description;
}*/



void InventoryFile::add_item(string name, int item_number, string description, int quantity) {
	//append to the inventory file
	ofstream outfile;
	outfile.open(path, ios::app);
	outfile << fixed << setprecision(1);
	outfile << number_of_items++ << '\t' << name << '\t' << description << '\t' << quantity << '\t';
	outfile.close();
}



/*void InventoryFile::remove_items(string item_number) {

}*/