// InventroySystemwithGUI.cpp : Defines the entry point for the application.
//

#include "InventroySystemwithGUI.h"

#include "functions.cpp"

using namespace std;

/*void cegui_initilization() {
	CEGUI::Direct3D9Renderer& myRenderer = CEGUI::Direct3D9Renderer::create(myD3D9Device);


	CEGUI::System::create(myRenderer);

	CEGUI::System::destroy();
	CEGUI::Direct3D9Renderer::destroy(static_cast<CEGUI::Direct3D9Renderer&>(*myD3D9Device));


	// Start the scene
	myD3D9Device->BeginScene();
	// clear display
	myD3D9Device->Clear(0, 0, D3DCLEAR_TARGET, D3DCOLOR_XRGB(0, 0, 0), 1.0f, 0);
	// user function to draw 3D scene
	draw3DScene();
	// draw GUI
	CEGUI::System::getSingleton().renderAllGUIContexts();
	// end the scene
	myD3D9Device->EndScene();
	// finally present the frame.
	myD3D9Device->Present(0, 0, 0, 0);
}*/



int main()
{
	char u_in = 'y';
	while (u_in == 'y') {
		//Menu
		cout << "1: Add\n"
			<< "2: remove\n"
			<< "3: display inventory\n"
			<< "4: select items to sell\n"
			<< "5: create invoic\n"
			<< "6: create a new inentory" << endl;

		int user_selection;
		cin >> user_selection;
		//calling the functions based on user selection
		switch (user_selection) {
		case 1://add
			break;
		case 2://remove
			break;
		case 3://display inventory
			break;
		case 4:// select items to sell
			break;
		case 5:// create inventory
			break;
		case 6:
			string inventoryn;
			cout << "Please enter a name for the inventory>> " << endl;
			cin >> inventoryn;
			
		}

		cout << "Would you like to go back to the menu? y/n.";
		cin >> u_in;

		if (u_in == 'n') {
			cout << "Bye!";
			break;
		}

	}




	return 0;
}
