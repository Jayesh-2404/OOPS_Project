#include<iostream> 
#include<string> 
#include<Windows.h>
using namespace std;
string un; 
string pwd; 
struct bill 
{
	string bildto, dcrp1, dcrp2, dcrp3, sig, bid, d, y, m;
	double price, price2, price3, quantity, quantity1, quantity2, to, tax, nt;
};
struct food 
{
	string fdname;
	string fid;
	double price;
	int qunty;
	string price1;
	string quantity1;
};
food foodarray[23]; 
food addfood[1]; 
				
void mainmenu();
void adminlogin();
void adminmenu();
void userlogin();
void acntlogin();
void flist();
void avalablelist();
void exitc();
void search();
void help();
void adduser();
void searchuser();
void addproduct();
void usermenu();
void ubill();
void useritemlist();
void usersearch();
void acntmenu();
void acountilist();
void acontsearch();
void createbill();
void searchuserswitch();
void error();

//MAIN FUNCTION
int main() 
{
	mainmenu();
	return 0;
}

// this function used to store all food arrys
void flist()
{
	foodarray[1].fdname = "Butter cake";
	foodarray[1].fid = "11";
	foodarray[1].price = 1500;
	foodarray[1].qunty = 50;

	foodarray[2].fdname = "Chocolate Cake";
	foodarray[2].fid = "12";
	foodarray[2].price = 3000;
	foodarray[2].qunty = 50;

	foodarray[3].fdname = "Apple Cake";
	foodarray[3].fid = "13";
	foodarray[3].price = 1000;
	foodarray[3].qunty = 50;

	foodarray[4].fdname = "Pol cake";
	foodarray[4].fid = "14";
	foodarray[4].price = 1250;
	foodarray[4].qunty = 50;

	foodarray[5].fdname = "Vegetable Roll";
	foodarray[5].fid = "15";
	foodarray[5].price = 50;
	foodarray[5].qunty = 50;

	foodarray[6].fdname = "Somoza";
	foodarray[6].fid = "16";
	foodarray[6].price = 50;
	foodarray[6].qunty = 50;

	foodarray[7].fdname = "Seeni Sambol Bun";
	foodarray[7].fid = "17";
	foodarray[7].price = 50;
	foodarray[7].qunty = 50;

	foodarray[8].fdname = "Fish Bun";
	foodarray[8].fid = "18";
	foodarray[8].price = 50;
	foodarray[8].qunty = 50;

	foodarray[9].fdname = "Egg Bun";
	foodarray[9].fid = "19";
	foodarray[9].price = 50;
	foodarray[9].qunty = 50;

	foodarray[10].fdname = "Chiken Cutlet";
	foodarray[10].fid = "20";
	foodarray[10].price = 50;
	foodarray[10].qunty = 50;

	foodarray[11].fdname = "Chiken Roll";
	foodarray[11].fid = "21";
	foodarray[11].price = 60;
	foodarray[11].qunty = 50;

	foodarray[12].fdname = "Egg Roll";
	foodarray[12].fid = "22";
	foodarray[12].price = 45;
	foodarray[12].qunty = 50;

	foodarray[13].fdname = "Chiken Pie";
	foodarray[13].fid = "23";
	foodarray[13].price = 70;
	foodarray[13].qunty = 50;


	foodarray[14].fdname = "Beer.";
	foodarray[14].fid = "24";
	foodarray[14].price = 150;
	foodarray[14].qunty = 50;

	foodarray[15].fdname = "Coffe.";
	foodarray[15].fid = "25";
	foodarray[15].price = 15;
	foodarray[15].qunty = 50;

	foodarray[16].fdname = "Plan tea.";
	foodarray[16].fid = "26";
	foodarray[16].price = 10;
	foodarray[16].qunty = 50;

	foodarray[17].fdname = "Vodka.";
	foodarray[17].fid = "27";
	foodarray[17].price = 110;
	foodarray[17].qunty = 50;

	foodarray[18].fdname = "Wine.";
	foodarray[18].fid = "28";
	foodarray[18].price = 100;
	foodarray[18].qunty = 50;

	foodarray[19].fdname = "Milk Tea.";
	foodarray[19].fid = "29";
	foodarray[19].price = 20;
	foodarray[19].qunty = 50;

	foodarray[20].fdname = "Normal Pacakge.";
	foodarray[20].fid = "30";
	foodarray[20].price = 15000;
	foodarray[20].qunty = 50;

	foodarray[21].fdname = "Super Pacakge.";
	foodarray[21].fid = "31";
	foodarray[21].price = 20000;
	foodarray[21].qunty = 50;

}



// the main log in screen
void mainmenu()
{
	system("cls");
	system("color 2");
	char opt; // local varibles
	cout << "\n" << endl;
	cout << "\a\t\t-----------------------------------------" << endl;
	cout << "\t\t-\t\tLALA CAKE\t\t- " << endl;
	cout << "\a\t\t-----------------------------------------" << endl;
	cout << "\t\t-\t\tUser Log in\t\t-" << endl;
	cout << "\a\t\t-----------------------------------------" << endl;
	cout << "\t\t-\t1.Admin \t2.User\t\t-" << endl;
	cout << "\t\t-\t\t\t\t\t-" << endl;
	cout << "\t\t-\t3.Accountant \t4.Help\t\t-" << endl;
	cout << "\t\t-\t\t\t\t\t-" << endl;
	cout << "\t\t-\t5.Exit \t\t\t\t-" << endl;
	cout << "\t\t-\t\t\t\t\t-" << endl;
	cout << "\a\t\t-----------------------------------------" << endl;
	cout << "\a\t\t\tEnter your Number: ";
	cin >> opt;
	switch (opt)
	{
	case '1':
		adminlogin();// go to admin log in 
		break;
	case '2':
		userlogin();// go to user log in
		break;
	case '3':
		acntlogin();// go to Accountant log in
		break;
	case '4':help();// go to help menu
		break;
	case '5':exitc();// go to exit function
		break;
	default:
		error();// go to error message
		break;
	}
}
void adminlogin()//The admin login screen
{
	system("cls");
	system("color 3");

	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-\t\tLALA CAKE\t\t- " << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-            Admin Log in               -" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\tPlease enter your user name: ";
	cin >> un;
	cout << "\t\tPlease enter your user password: ";
	cin >> pwd;
	if ((un == "Jayesh") && (pwd == "1234"))//Admin name and password authentication
	{
		adminmenu();
	}
	else if ((un == "ADMIN") && (pwd == "A1234"))//Admin name and password authentication
	{
		adminmenu();
	}
	else if ((un == "admin") && (pwd == "A1234"))//Admin name and password authentication
	{
		adminmenu();
	}
	else
	{
		system("cls");
		system("color 4");
		char cv;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\t*                 INVALID  PASSWORD                 *" << endl;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\t*Invalid user Name or Password!                     *" << endl;
		cout << "\t\t*****************************************************" << endl;
		cout << "\tPress 1 for Re enter  Press 2 for Main menu:";
		cin >> cv;
		switch (cv)// local variables
		{
		case '1':system("cls");
			adminlogin();
			break;
		case '2':
			system("cls");
			mainmenu();
			break;
		default:
			error();
			break;

		}
	}
}
void adminmenu()//Admin menu screen
{
	system("cls");
	system("color 5");
	string opt1; // local variables
	cout << "\t\t--------------------------------------" << endl;
	cout << "\t\t-       LALA CAKE-Admin menu         -" << endl;
	cout << "\t\t--------------------------------------" << endl;
	cout << "\t\t- 1.Address-No;78,Aluthgama,Matugama\t-" << endl;
	cout << "\t\t-                                       -" << endl;
	cout << "\t\t- 2.Contact No-0717613775 3.Reg No-A124\t-" << endl;
	cout << "\t\t--------------------------------------" << endl;
	cout << "\t\t- 1.View all items 2.Search Items\t-" << endl;
	cout << "\t\t-\t\t\t\t\t-" << endl;
	cout << "\t\t- 3.Search User 4.Add User\t\t-" << endl;
	cout << "\t\t-\t\t\t\t\t-" << endl;
	cout << "\t\t- 5.Add Product  6.Back to main menu\t-" << endl;
	cout << "\t\t------------------------------------------" << endl;
	cout << "\t\t Enter your option:";
	cin >> opt1;
	if (opt1 == "1")
	{
		system("cls");
		avalablelist();// go to view all food items

	}
	else if (opt1 == "2")
	{
		system("cls");
		search();// go to search items
	}
	else if (opt1 == "3")
	{
		system("cls");
		searchuser(); //go to search user
	}
	else if (opt1 == "4")
	{
		system("cls");
		adduser();// go to add user
	}
	else if (opt1 == "5")
	{
		system("cls");
		addproduct();// go to add product
	}
	else if (opt1 == "6")
	{
		system("cls");
		mainmenu(); // go to main menu

	}
	else
	{
		system("cls");
		error();//go to error message
	}

}
void avalablelist() //  view all iteams 
{
	system("cls");
	system("color 6");
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                            LALA CAKE                          -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                         Cakes List                              " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t1.ID_No=11 |Name:Butter Cake     |Price LKR1500 |Quantity:50     " << endl;
	cout << "\t2.ID_No=12 |Name:Chocolate Cake  |Price LKR3000 |Quantity:50     " << endl;
	cout << "\t3.ID_No=13 |Name:Apple Cake      |Price LKR1000 |Quantity:50     " << endl;
	cout << "\t4.ID_No=14 |Name: Pol Cake       |Price LKR1250 |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                  Short   Eats     List                          " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t5.ID_No=15 |Name:Vegetable Roll  |Price LKR50   |Quantity:50     " << endl;
	cout << "\t6.ID_No=16 |Name:Somoza Price    |Price LKR50   |Quantity:50     " << endl;
	cout << "\t7.ID_No=17 |Name:Seeni Sambol Bun|Price LKR50   |Quantity:50     " << endl;
	cout << "\t8.ID_No=18 |Name:Fish Bun        |Price LKR50   |Quantity:50     " << endl;
	cout << "\t9.ID_No=19 |Name:Egg Bun         |Price LKR50   |Quantity:50     " << endl;
	cout << "\t10.ID_No=20|Name:Chiken Cutlet   |Price LKR50   |Quantity:50     " << endl;
	cout << "\t11.ID_No=21|Name:Chiken Roll     |Price LKR60   |Quantity:50     " << endl;
	cout << "\t12.ID_No=22|Name:Egg Roll        |Price LKR45   |Quantity:50     " << endl;
	cout << "\t13.ID_No=23|Name:Chiken Pie      |Price LKR45   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                           Beverages                             " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t14.ID_No=24|Name:Beer            |Price LKR150  |Quantity:50     " << endl;
	cout << "\t15.ID_No=25|Name:Coffe           |Price LKR15   |Quantity:50     " << endl;
	cout << "\t16.ID_No=26|Name:Plan Tea        |Price LKR10   |Quantity:50     " << endl;
	cout << "\t17.ID_No=27|Name:Vodka           |Price LKR110  |Quantity:50     " << endl;
	cout << "\t18.ID_No=28|Name:Wine            |Price LKR100  |Quantity:50     " << endl;
	cout << "\t19.ID_No=29|Name:Milk Tea        |Price LKR20   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                                 Packages                        " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t20.ID_No=30|Name:Normal Package  |Price LKR15000|Avalability:50  " << endl;
	cout << "\t21.ID_No=31|Name:Super Package   |Price LKR20000|Avalability:50  " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	string con; // local variable
	cout << "\t\tDo You want to Continue Y/N:";
	cin >> con;
	if (con == "Y")
	{
		system("cls");
		avalablelist();// go to view all items

	}
	else if (con == "y")
	{
		system("cls");
		avalablelist();// go to view all items
	}
	else if (con == "N")
	{
		system("cls");
		adminmenu();// go to admin menu
	}
	else if (con == "n")
	{
		system("cls");
		adminmenu(); // go to admin menu
	}

	else
	{
		system("cls");
		error();// go to error message
	}
}
void search()//serach  food item
{
	system("cls");
	system("color 7");
	flist();
	system("cls");
	string se;// local variables
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                           Search!!!                            -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t\tEnter Item Id:";
	cin >> se;
	int fn = 0;// local variables
			   // search food items
	for (int i = 0; i < 22; i++)
	{
		if (se == foodarray[i].fid)
		{
			fn = i;
			cout << "\t\t\tIteam Name is:" << foodarray[fn].fdname << endl;
			cout << "\t\t\tIteam ID is:" << foodarray[fn].fid << endl;
			cout << "\t\t\tItem Price is:" << foodarray[fn].price << endl;
			cout << "\t\t\tItem Quantity is:" << foodarray[fn].qunty << endl;

			string cont; // local variables
			cout << "\t\tDo You want to Continue Y/N:";
			cin >> cont;
			if (cont == "Y")
			{
				system("cls");
				search();// go to search item

			}
			else if (cont == "y")
			{
				system("cls");
				search();// go to search item
			}
			else if (cont == "N")
			{
				system("cls");
				adminmenu();// go to admin menu
			}
			else if (cont == "n")
			{
				system("cls");
				adminmenu();// go to admin menu
			}

			else
			{
				system("cls");
				error();// go to admin menu
			}
		}
	}

	cout << "\t\tNo Items Maching!!" << endl;
	string conti;// local variable
	cout << "\t\tDo You want to Continue Y/N:";
	cin >> conti;
	if (conti == "Y")
	{
		system("cls");
		search();// go to search item
	}
	else if (conti == "y")

	{
		system("cls");
		search();// go to search item
	}
	else if (conti == "N")
	{
		system("cls");
		adminmenu();// go to admin menu
	}
	else if (conti == "n")
	{
		system("cls");
		adminmenu(); // go to admin menu
	}
	else
	{
		system("cls");
		error();// go to error messge 
	}
}
void searchuser()// search user  details
{
	system("cls");
	system("color 8");
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                           Search!!!                            -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	string uid;// local variables
	char ch1;// local variable
	cout << "\t\tEnter user ID:";
	cin >> uid;
	if (uid == "01")
	{
		cout << "\t\tUser Name:Ishan Madhawa" << endl;
		cout << "\t\tUser ID:01" << endl;
		cout << "\t\tGender:Male" << endl;
		cout << "\t\tAdress:Matugama" << endl;
		cout << "\t\tAge:21" << endl;
		searchuserswitch(); // go to search user switch
	}
	else if (uid == "02")
	{
		cout << "\t\t User Name:Pavani Nisansala" << endl;
		cout << "\t\t User ID:02" << endl;
		cout << "\t\tGender:Fe male" << endl;
		cout << "\t\tAdress:Mahagama" << endl;
		cout << "\t\tAge 16" << endl;
		searchuserswitch();// go to search user switch
	}
	else if (uid == "03")
	{
		cout << "\t\tUser Name:Praveen Madu" << endl;
		cout << "\t\tUser ID:003" << endl;
		cout << "\t\tGender:Male" << endl;
		cout << "\t\tAdress:Dematagoda" << endl;
		cout << "\t\tAge:22" << endl;
		searchuserswitch();// go to search user switch
	}
	else if (uid == "04")
	{
		cout << "\t\tUser Name:Iresh Lakmal" << endl;
		cout << "\t\tUser ID:004" << endl;
		cout << "\t\tGender:Fe-Male" << endl;
		cout << "\t\tAdress:Balangoda" << endl;
		cout << "\t\tAge:21" << endl;
		searchuserswitch();// go to search user switch
	}
	else if (uid == "05")
	{
		cout << "\t\tUser Name:Sasindu Dulaj" << endl;
		cout << "\t\tUser ID:005" << endl;
		cout << "\t\tGender:Male" << endl;
		cout << "\t\tAdress:Kadana" << endl;
		cout << "\t\tAge:22" << endl;
		searchuserswitch();// go to search user switch
	}
	else // error message
	{
		system("cls");
		cout << "\t-----------------------------------------------------------------" << endl;
		cout << "\t\t                         No Users Matching                     " << endl;
		cout << "\t-----------------------------------------------------------------" << endl;
		cout << "\t\tDo you want to continue(Y/N):";
		cin >> ch1;
		switch (ch1)
		{
		case'y':system("cls");
			searchuser();// go to search user
			break;
		case'Y':system("cls");
			searchuser();// go to search user
			break;
		case'n':system("cls");
			adminmenu();// go to search user
			break;
		case 'N':
			system("cls");
			adminmenu(); // go to admin menu
			break;
		default:
			system("cls");
			error(); // go to error message
			break;
		}

	}
}
void searchuserswitch() // search user switch
{
	char ch5;
	cout << "\t\tDo you want to continue(Y/N)" << endl;
	cin >> ch5;
	switch (ch5)
	{
	case 'y':system("cls");
		searchuser();// go to search user
		break;

	case 'Y':system("cls");
		searchuser();// go to search user
		break;
	case'n':system("cls");
		adminmenu(); // go to admin menu
		break;
	case 'N':
		system("cls");
		adminmenu(); // go to admin menu
		break;
	default:
		system("cls");
		error(); // go to error message
		break;
	}
}
void adduser()// Add new user function
{
	system("cls");
	system("color 8");
	string uage, usid;// local variables
	char cha, cha1, cha2;// local varibles
	string uname, uadrs, ugender;// local variables
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-                 LALA CAKE             -" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-Please Enter User Details              -" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\tEnter New user Name:";
	cin >> uname;
	cout << "\t\tEnter user Id:";
	cin >> usid;
	cout << "\t\tEnter gender:";
	cin >> ugender;
	cout << "\t\tEnter User Address:";
	cin >> uadrs;
	cout << "\t\tEnter User Age:";
	cin >> uage;
	cout << "\t\tDo you want to continue?" << endl;
	cout << "\t\t(Press A for Show enter User Details,Y for Enter New user Details,N for Main menu):";
	cin >> cha;
	if (cha == 'a')
	{
		cout << "\t\tUser Name:" << uname << endl;;
		cout << "\t\tUser Id:" << usid << endl;
		cout << "\t\tGender" << ugender << endl;
		cout << "\t\tAddress:" << uadrs << endl;
		cout << "\t\tAge:" << uage << endl;
		cout << "\t\tDo you want to continue(Y/N)" << endl;
		cin >> cha1;
		switch (cha1)
		{
		case 'y':system("cls");
			adduser();// go to add user function
			break;

		case 'Y':system("cls");
			adduser();// go to add user function
			break;
		case'n':system("cls");
			adminmenu();// go to admin menu
			break;
		case 'N':
			system("cls");
			adminmenu();// go to admin menu
			break;
		default:
			error();// go to error message
			break;
		}

	}
	else if (cha == 'A')
	{
		cout << "\t\tUser Name:" << uname << endl;;
		cout << "\t\tUser Id:" << usid << endl;
		cout << "\t\tGender" << ugender << endl;
		cout << "\t\tAddress:" << uadrs << endl;
		cout << "\t\tAge:" << uage << endl;
		cout << "\t\tDo you want to continue(Y/N)" << endl;
		cin >> cha2;
		switch (cha2)
		{
		case 'y':system("cls");
			adduser();// go to add user function
			break;

		case 'Y':system("cls");
			adduser();// go to add user function
			break;
		case'n':system("cls");
			adminmenu();// go to admin menu
			break;
		case 'N':
			system("cls");
			adminmenu();// go to admin menu
			break;
		default:
			error();// go to error message
			break;
		}
	}
	else if (cha == 'y')
	{
		system("cls");
		adduser();// go to add user function

	}
	else if (cha == 'Y')
	{
		system("cls");
		adduser();// go to add user function

	}
	else if (cha == 'n')
	{
		system("cls");
		adminmenu();// go to admin menu
	}
	else if (cha == 'N')
	{
		system("cls");
		adminmenu(); // go to admin menu
	}
	else
	{
		error(); // go to error message
	}
}
void addproduct()// Add product functions
{
	system("cls");
	system("color 8");
	food additem;// food structure
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-                 LALA CAKE             -" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t                 ADD PRODUCT             " << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t-Please Enter Product Details           -" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\tEnter New Product/Pacakge Name:";
	cin >> additem.fdname;
	cout << "\t\tEnter Product Id number:";
	cin >> additem.fid;
	cout << "\t\tEnterProdut Price:";
	cin >> additem.price1;
	cout << "\t\tEnter Product Quantity:";
	cin >> additem.quantity1;
	cout << "\n" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\tView New add Product Details:                    " << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\tProduct Name:" << additem.fdname << endl;
	cout << "\t\tProduct Id:" << additem.fid << endl;
	cout << "\t\tProduct price:" << additem.price1 << endl;
	cout << "\t\tProduct quantity:" << additem.quantity1 << endl;
	cout << "\t\t----------------------------------------" << endl;
	string pa;// local variables
	cout << "\t\tDo You want to Continue Y/N:";
	cin >> pa;
	if (pa == "Y")
	{
		system("cls");
		addproduct();// go to add product

	}
	else if (pa == "y")
	{
		system("cls");
		addproduct();// go to add product
	}
	else if (pa == "N")
	{
		system("cls");
		adminmenu();// go to admin menu
	}
	else if (pa == "n")
	{
		system("cls");
		adminmenu();// go to admin menu
	}

	else
	{
		system("cls");
		error();// go error message
	}


}

void userlogin() // user log in
{
	system("cls");
	system("color 6");


	cout << "\t\t*****************************************" << endl;
	cout << "\t\t*\t\tUser Log in\t\t* " << endl;
	cout << "\t\t*****************************************" << endl;
	cout << "\t\tPlease enter your user name: ";
	cin >> un;
	cout << "\t\tPlease enter your user password: ";
	cin >> pwd;
	if ((un == "Prasad") && (pwd == "1234"))//User name and password authentication
	{
		usermenu(); // go to user menu
	}
	else if ((un == "User") && (pwd == "U1234"))//User name and password authentication
	{
		usermenu();// go to user menu
	}
	else if ((un == "user") && (pwd == "U1234"))//User name and password authentication
	{
		usermenu();// go to user menu
	}
	else // display error message and re enter password 
	{
		system("cls");
		char cvi;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\t*                      INVALID                      *" << endl;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\t*Invalid user Name Or Password!                     *" << endl;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\tPress 1 for Re enter  Press 2 for Main menu:";
		cin >> cvi;
		switch (cvi)
		{
		case '1':
			system("cls");
			userlogin();// go to user log in
			break;
		case '2':
			system("cls");
			mainmenu();// go to main menu
			break;
		default:
			error();// go to error message
			break;

		}
	}

}
void usermenu()// User menu
{
	system("cls");
	system("color 3");
	char opti;// local variables
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t*\t\tLALA CAKE\t\t* " << endl;
	cout << "\t\t*\t\t\t\t\t*" << endl;
	cout << "\t\t* 1.Address-No;72,Kaluthara,Matugama\t*" << endl;
	cout << "\t\t*\t\t\t\t\t*" << endl;
	cout << "\t\t* 2.Contact No-0717613776 3.Reg No-U124\t*" << endl;
	cout << "\t\t*\t\t\t\t\t*" << endl;
	cout << "\t\t--------------------------------------" << endl;
	cout << "\t\t*\t\t\t\t\t*" << endl;
	cout << "\t\t* 1.View all Products 2.Search Products\t*" << endl;
	cout << "\t\t*\t\t\t\t\t*" << endl;
	cout << "\t\t* 3.Purchase Item 4.Go to exit\t\t*" << endl;
	cout << "\t\t* 5.Back to main menu                   *" << endl;
	cout << "\t\t*\t\t\t\t\t*" << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t Enter your option:";
	cin >> opti;

	switch (opti)
	{
	case '1':
		system("cls");
		useritemlist();// go to user iteam list
		break;
	case '2':
		system("cls");
		usersearch();// go to search user
		break;
	case '3':
		system("cls");
		ubill(); // go to bill 
		break;
	case '4':
		system("cls");
		exitc();// go to exit
		break;
	case '5':system("cls");
		mainmenu();// go to main menu
		break;
	default:
		error();// go to error message
		break;
	}

}
void useritemlist()// user iteam list
{
	system("cls");
	system("color 4");
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                            LALA CAKE                          -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                         Cakes List                              " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t1.ID_No=11 |Name:Butter Cake     |Price LKR1500 |Quantity:50     " << endl;
	cout << "\t2.ID_No=12 |Name:Chocolate Cake  |Price LKR3000 |Quantity:50     " << endl;
	cout << "\t3.ID_No=13 |Name:Apple Cake      |Price LKR1000 |Quantity:50     " << endl;
	cout << "\t4.ID_No=14 |Name: Pol Cake       |Price LKR1250 |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                  Short   Eats     List                          " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t5.ID_No=15 |Name:Vegetable Roll  |Price LKR50   |Quantity:50     " << endl;
	cout << "\t6.ID_No=16 |Name:Somoza Price    |Price LKR50   |Quantity:50     " << endl;
	cout << "\t7.ID_No=17 |Name:Seeni Sambol Bun|Price LKR50   |Quantity:50     " << endl;
	cout << "\t8.ID_No=18 |Name:Fish Bun        |Price LKR50   |Quantity:50     " << endl;
	cout << "\t9.ID_No=19 |Name:Egg Bun         |Price LKR50   |Quantity:50     " << endl;
	cout << "\t10.ID_No=20|Name:Chiken Cutlet   |Price LKR50   |Quantity:50     " << endl;
	cout << "\t11.ID_No=21|Name:Chiken Roll     |Price LKR60   |Quantity:50     " << endl;
	cout << "\t12.ID_No=22|Name:Egg Roll        |Price LKR45   |Quantity:50     " << endl;
	cout << "\t13.ID_No=23|Name:Chiken Pie      |Price LKR45   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                           Beverages                             " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t14.ID_No=24|Name:Beer            |Price LKR150  |Quantity:50     " << endl;
	cout << "\t15.ID_No=25|Name:Coffe           |Price LKR15   |Quantity:50     " << endl;
	cout << "\t16.ID_No=26|Name:Plan Tea        |Price LKR10   |Quantity:50     " << endl;
	cout << "\t17.ID_No=27|Name:Vodka           |Price LKR110  |Quantity:50     " << endl;
	cout << "\t18.ID_No=28|Name:Wine            |Price LKR100  |Quantity:50     " << endl;
	cout << "\t19.ID_No=29|Name:Milk Tea        |Price LKR20   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                                 Packages                        " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t20.ID_No=30|Name:Normal Package  |Price LKR15000|Avalability:50  " << endl;
	cout << "\t21.ID_No=31|Name:Super Package   |Price LKR20000|Avalability:50  " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	string cond;
	cout << "\t\tDo You want to Continue Y/N:";
	cin >> cond;
	if (cond == "Y")
	{
		system("cls");
		useritemlist();// go to user iteam list

	}
	else if (cond == "y")
	{
		system("cls");
		useritemlist();// go to user iteam list
	}
	else if (cond == "N")
	{
		system("cls");
		usermenu();// go to user menu
	}
	else if (cond == "n")
	{
		system("cls");
		usermenu();// go to user menu
	}

	else
	{
		system("cls");
		error();// go to error message
	}

}
void usersearch() // user search
{
	system("cls");
	system("color 5");
	flist();
	system("cls");
	string sed;// local variables

	cout << "\a\t\t*****************************************" << endl;
	cout << "\a\t\t*\t\t\t\t\t*" << endl;
	cout << "\a\t\t*\t\tSEARCH\t\t\t* " << endl;
	cout << "\a\t\t*\t\t\t\t\t*" << endl;
	cout << "\a\t\t*****************************************" << endl;

	cout << "\t\tEnter Item Id:";
	cin >> sed;
	int fn1 = 0;// local variables
	for (int m = 0; m < 22; m++)
	{
		if (sed == foodarray[m].fid)
		{
			fn1 = m;
			cout << "\t\t\tIteam Name is:" << foodarray[fn1].fdname << endl;
			cout << "\t\t\tIteam ID is:" << foodarray[fn1].fid << endl;
			cout << "\t\t\tItem Price is" << foodarray[fn1].price << endl;
			cout << "\t\t\tItem Quantity is" << foodarray[fn1].qunty << endl;

			string oc;
			cout << "\t\tDo You want to Continue Y/N:";
			cin >> oc;
			if (oc == "Y")
			{
				system("cls");
				usersearch();// go to user search

			}
			else if (oc == "y")
			{
				system("cls");
				usersearch();// go to user search
			}
			else if (oc == "N")
			{
				system("cls");
				usermenu();// go to user menu
			}
			else if (oc == "n")
			{
				system("cls");
				usermenu();// go to user menu
			}

			else
			{
				system("cls");
				error();// go to error message
			}


		}

	}
	cout << "\t\tNo Items Maching!!" << endl;
	string ocn;// local variables
	cout << "\t\tDo You want to Continue Y/N:";
	cin >> ocn;
	if (ocn == "Y")
	{
		system("cls");
		usersearch();//go to user search

	}
	else if (ocn == "y")
	{
		system("cls");
		usersearch();// go to user search
	}
	else if (ocn == "N")
	{
		system("cls");
		usermenu();// go to user menu
	}
	else if (ocn == "n")
	{
		system("cls");
		usermenu();// go to user menu
	}

	else
	{
		system("cls");
		error();//go to error message
	}

}

void ubill() //bill
{

	system("cls");
	system("color 6");
	string uchoice;//local variable
	double total;// local variable
	double quantity;// local variable
	flist();
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                             LALA CAKE                           " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                         Cakes List                              " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t1.ID_No=11 |Name:Butter Cake     |Price LKR1500 |Quantity:50     " << endl;
	cout << "\t2.ID_No=12 |Name:Chocolate Cake  |Price LKR3000 |Quantity:50     " << endl;
	cout << "\t3.ID_No=13 |Name:Apple Cake      |Price LKR1000 |Quantity:50     " << endl;
	cout << "\t4.ID_No=14 |Name: Pol Cake       |Price LKR1250 |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                  Short   Eats     List                          " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t5.ID_No=15 |Name:Vegetable Roll  |Price LKR50   |Quantity:50     " << endl;
	cout << "\t6.ID_No=16 |Name:Somoza Price    |Price LKR50   |Quantity:50     " << endl;
	cout << "\t7.ID_No=17 |Name:Seeni Sambol Bun|Price LKR50   |Quantity:50     " << endl;
	cout << "\t8.ID_No=18 |Name:Fish Bun        |Price LKR50   |Quantity:50     " << endl;
	cout << "\t9.ID_No=19 |Name:Egg Bun         |Price LKR50   |Quantity:50     " << endl;
	cout << "\t10.ID_No=20|Name:Chiken Cutlet   |Price LKR50   |Quantity:50     " << endl;
	cout << "\t11.ID_No=21|Name:Chiken Roll     |Price LKR60   |Quantity:50     " << endl;
	cout << "\t12.ID_No=22|Name:Egg Roll        |Price LKR45   |Quantity:50     " << endl;
	cout << "\t13.ID_No=23|Name:Chiken Pie      |Price LKR45   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                           Beverages                             " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t14.ID_No=24|Name:Beer            |Price LKR150  |Quantity:50     " << endl;
	cout << "\t15.ID_No=25|Name:Coffe           |Price LKR15   |Quantity:50     " << endl;
	cout << "\t16.ID_No=26|Name:Plan Tea        |Price LKR10   |Quantity:50     " << endl;
	cout << "\t17.ID_No=27|Name:Vodka           |Price LKR110  |Quantity:50     " << endl;
	cout << "\t18.ID_No=28|Name:Wine            |Price LKR100  |Quantity:50     " << endl;
	cout << "\t19.ID_No=29|Name:Milk Tea        |Price LKR20   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                                 Packages                        " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t20.ID_No=30|Name:Normal Package  |Price LKR15000|Avalability:50  " << endl;
	cout << "\t21.ID_No=31|Name:Super Package   |Price LKR40000|Avalability:50  " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t\tEnter food id:";
	cin >> uchoice;
	/*while (uchoice>32 || uchoice <= 10)
	{
	cout << "\t\tInvalid Enter!" << endl;;
	cout << "\t\t Re enter Your Choice:";
	cin >> uchoice;
	}*/
	cout << "\t\tEnter Your Amount(1-50):";
	cin >> quantity;
	while (quantity>50 || quantity<1)
	{
		//system("cls");
		cout << "\t\tOut of Quantity Rnage!!Re enter quantity:";
		cin >> quantity;
	}
	char option;// local variable
	string os;//local variable
	double tax = 0;//local variable
	int k;// local varible

	for (k = 0; k < 22; ++k)
	{

		if (uchoice == foodarray[k].fid)
		{

			total = (foodarray[k].price*quantity);

			if (total>3000)
			{
				tax = (total * 5 / 100);
			}
			cout << "Press 1 for print bill press 2 for cancel oder and go to main menu:";
			cin >> os;
			if (os == "1")
			{
				system("cls");
				cout << "\t...................................................." << endl;
				cout << "\t LALA Cake                                      Bill" << endl;
				cout << "\t...................................................." << endl;
				cout << "\n\t" << "  Item name: \t" << "\t\t" << foodarray[k].fdname << endl;
				cout << "\n\t" << "  Item quantity: \t" << "\t\t" << quantity << endl;
				cout << "\n\t " << " Total LKR \t " << "\t\t\t" << total << endl;
				cout << "\n\t " << " Tax Rate LKR \t " << "\t\t\t" << tax << endl;
				cout << "\t...................................................." << endl;
				cout << "\n\t " << " Net Total LKR\t" << "\t\t\t" << (total + tax) << endl;
				cout << "\t...................................................." << endl;
				cout << "\n\t\t<<<<< Thank you come again >>>>>\n\n" << endl;
				cout << "\t\tDo you want to buy more(Y/N):";
				cin >> option;
				switch (option)
				{
				case'y':
					system("cls");
					ubill();// go to u bill
					break;
				case'Y':
					system("cls");
					ubill();// go to u bill
					break;
				case'n':
					system("cls");
					usermenu();// go to user menu
					break;
				case 'N':
					system("cls");
					usermenu();// go to user menu
					break;
				default:
					error();// go to error message
					break;
				}

			}
			else if (os == "2")
			{
				system("cls");
				usermenu();// go to usermenu
			}
			else
			{
				system("cls");
				error();// go to error message
			}

		}
	}
	char m;// local variable
	cout << "\t\t Invald enter" << endl;
	cout << "\t\tDo you want to continue(Y/N):";
	cin >> m;
	switch (m)
	{
	case'y':
		system("cls");
		ubill();// go to bill
		break;
	case'Y':
		system("cls");
		ubill();// go to bill
		break;
	case'n':
		system("cls");
		usermenu();//go to user menu
		break;
	case 'N':
		system("cls");
		usermenu();// go to user menu
		break;
	default:
		error();// go to error message
		break;
	}


}

void acntlogin()// Accountant log in
{
	system("cls");
	system("color 2");

	cout << "\t\t*****************************************" << endl;
	cout << "\t\t*\t\t Log in\t\t\t* " << endl;
	cout << "\t\t*****************************************" << endl;
	cout << "\t\tPlease enter your user name: ";
	cin >> un;
	cout << "\t\tPlease enter your user password: ";
	cin >> pwd;
	if ((un == "Saidatta") && (pwd == "1234"))//Accountant name and password authentication
	{
		system("cls");
		acntmenu();// go to Accountant menu
	}
	else if ((un == "ACCOUNATANT") && (pwd == "AC1234"))//Accountant name and password authentication
	{
		acntmenu();// go to Accountant menu
	}
	else if ((un == "accountant") && (pwd == "AC1234"))//Accountant name and password authentication
	{
		acntmenu();//go to Accountant menu
	}
	else//display error message
	{
		system("cls");
		char re;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\t*                 INVALID  PASSWORD                 *" << endl;
		cout << "\t\t*****************************************************" << endl;
		cout << "\t\t*Invalid user name and Password!                    *" << endl;
		cout << "\t\t*****************************************************" << endl;
		cout << "\tPress 1 for Re enter Password Press 2 for Main menu:";
		cin >> re;
		switch (re)
		{
		case '1':
			system("cls");
			acntlogin();// go to Accountant log in
			break;
		case '2':
			system("cls");
			mainmenu();// go to main menu
			break;
		default:
			system("cls");
			error();//Display error message
			break;
		}
	}
}
void acntmenu()//Accountant menu
{
	system("cls");
	system("color 3");
	string s1;//local variables
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t                  LALA CAKES                " << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t-1.Address-No;78,Wadduwa,Kaluthara         -" << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t-2.Contact No-0717613775 3.Reg No-ACN124   -" << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t                  LALA CAKES                " << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t                   Accountant Menu          " << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t    1.View all items     2.Search Items    *" << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t    3.Create bill        4.Back to main menu" << endl;
	cout << "\t\t--------------------------------------------" << endl;
	cout << "\t\t    5.Exit                                  " << endl;
	cout << "\t\tEnter Your Choice:";
	cin >> s1;
	if (s1 == "1")
	{
		system("cls");
		acountilist();// go to Accountant food iteam list

	}
	else if (s1 == "2")
	{
		system("cls");
		acontsearch();// go to Accountant search
	}
	else if (s1 == "3")
	{
		system("cls");
		createbill();// go to create bill
	}
	else if (s1 == "4")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else if (s1 == "5")
	{
		system("cls");
		exitc();//go to exit 
	}
	else
	{
		system("cls");
		error();// go to error
	}



}
void acountilist()//Accountant food iteam list
{
	system("cls");
	system("color 5");
	string selc;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                            LALA CAKE                          -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                         Cakes List                              " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t1.ID_No=11 |Name:Butter Cake     |Price LKR1500 |Quantity:50     " << endl;
	cout << "\t2.ID_No=12 |Name:Chocolate Cake  |Price LKR3000 |Quantity:50     " << endl;
	cout << "\t3.ID_No=13 |Name:Apple Cake      |Price LKR1000 |Quantity:50     " << endl;
	cout << "\t4.ID_No=14 |Name: Pol Cake       |Price LKR1250 |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                  Short   Eats     List                          " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t5.ID_No=15 |Name:Vegetable Roll  |Price LKR50   |Quantity:50     " << endl;
	cout << "\t6.ID_No=16 |Name:Somoza Price    |Price LKR50   |Quantity:50     " << endl;
	cout << "\t7.ID_No=17 |Name:Seeni Sambol Bun|Price LKR50   |Quantity:50     " << endl;
	cout << "\t8.ID_No=18 |Name:Fish Bun        |Price LKR50   |Quantity:50     " << endl;
	cout << "\t9.ID_No=19 |Name:Egg Bun         |Price LKR50   |Quantity:50     " << endl;
	cout << "\t10.ID_No=20|Name:Chiken Cutlet   |Price LKR50   |Quantity:50     " << endl;
	cout << "\t11.ID_No=21|Name:Chiken Roll     |Price LKR60   |Quantity:50     " << endl;
	cout << "\t12.ID_No=22|Name:Egg Roll        |Price LKR45   |Quantity:50     " << endl;
	cout << "\t13.ID_No=23|Name:Chiken Pie      |Price LKR45   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                           Beverages                             " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t14.ID_No=24|Name:Beer            |Price LKR150  |Quantity:50     " << endl;
	cout << "\t15.ID_No=25|Name:Coffe           |Price LKR15   |Quantity:50     " << endl;
	cout << "\t16.ID_No=26|Name:Plan Tea        |Price LKR10   |Quantity:50     " << endl;
	cout << "\t17.ID_No=27|Name:Vodka           |Price LKR110  |Quantity:50     " << endl;
	cout << "\t18.ID_No=28|Name:Wine            |Price LKR100  |Quantity:50     " << endl;
	cout << "\t19.ID_No=29|Name:Milk Tea        |Price LKR20   |Quantity:50     " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                                 Packages                        " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t20.ID_No=30|Name:Normal Package  |Price LKR15000|Avalability:50  " << endl;
	cout << "\t21.ID_No=31|Name:Super Package   |Price LKR40000|Avalability:50  " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\tDo you Want to Continue?(Y/N)                                            ";
	cin >> selc;
	if (selc == "Y")
	{
		system("cls");
		acountilist();// go to Accountant food iteam list
	}
	else if (selc == "y")
	{
		system("cls");
		acountilist();// go to Accountant food iteam list
	}
	else if (selc == "n")
	{
		system("cls");
		acntmenu(); // go to Accountant menu
	}
	else if (selc == "N")
	{
		system("cls");
		acntmenu();// go to Accountant menu
	}
	else
	{
		system("cls");
		error(); // go to error
	}

}
void acontsearch()//Accountant search
{
	system("cls");
	system("color 5");
	flist();// use food array
	system("cls");
	string sedl;// locall varible

	cout << "\a\t\t*****************************************" << endl;
	cout << "\a\t\t*\t\t\t\t\t*" << endl;
	cout << "\a\t\t*\t\tSEARCH\t\t\t* " << endl;
	cout << "\a\t\t*\t\t\t\t\t*" << endl;
	cout << "\a\t\t*****************************************" << endl;

	cout << "\t\tEnter Item Id:";
	cin >> sedl;
	int fnc = 0;
	for (int z = 0; z < 22; z++)
	{
		if (sedl == foodarray[z].fid)
		{
			fnc = z;
			cout << "\t\t\tIteam Name is:" << foodarray[fnc].fdname << endl;
			cout << "\t\t\tIteam ID is:" << foodarray[fnc].fid << endl;
			cout << "\t\t\tItem Price is" << foodarray[fnc].price << endl;
			cout << "\t\t\tItem Quantity is" << foodarray[fnc].qunty << endl;

			string ocnl;
			cout << "\t\tDo You want to Continue Y/N:";
			cin >> ocnl;
			if (ocnl == "Y")
			{
				system("cls");
				acontsearch();// go to Accountant search

			}
			else if (ocnl == "y")
			{
				system("cls");
				acontsearch();// go to Accountant search
			}
			else if (ocnl == "N")
			{
				system("cls");
				acntmenu();// go to Accountant menu
			}
			else if (ocnl == "n")
			{
				system("cls");
				acntmenu();// go to Accountant menu
			}

			else
			{
				system("cls");
				error();// go to error
			}


		}

	}
	cout << "\t\tNo Items Maching!!" << endl;
	string ocnn;
	cout << "\t\tDo You want to Continue Y/N:";
	cin >> ocnn;
	if (ocnn == "Y")
	{
		system("cls");
		acontsearch();// go to Accountant search

	}
	else if (ocnn == "y")
	{
		system("cls");
		acontsearch();// go to Accountant search
	}
	else if (ocnn == "N")
	{
		system("cls");
		acntmenu();// go to Accountant menu
	}
	else if (ocnn == "n")
	{
		system("cls");
		acntmenu();// go to Accountant menu
	}

	else
	{
		system("cls");
		error();// go to error
	}

}
void createbill()// create bill
{
	system("cls");
	system("color 11");
	bill b1;
	string cia;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                            LALA CAKE                          -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                       Create New Invoice                           " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t\t Enter Biled to Details:";
	cin >> b1.bildto;
	cout << "\t\tEnter Invoice Number:";
	cin >> b1.bid;
	cout << "\t\tEnter Invoice date:";
	cin >> b1.d;
	cout << "\t\tEnter Invoice Month:";
	cin >> b1.m;
	cout << "\t\tEnter invoce year:";
	cin >> b1.y;
	cout << "\t\tEnter Decreption:";
	cin >> b1.dcrp1;
	cout << "\t\tEnter Item Price LKR:";
	cin >> b1.price;
	cout << "\t\tEnter Item Quantity:";
	cin >> b1.quantity;
	cout << "\t\tEnter Descreption 2:";
	cin >> b1.dcrp2;
	cout << "\t\tEnter Itenm Price LKR:";
	cin >> b1.price2;
	cout << "\t\tEnter Item Quantity:";
	cin >> b1.quantity1;
	cout << "\t\tEnter Descreption 3:";
	cin >> b1.dcrp3;
	cout << "\t\tEnter Itenm Price LKR:";
	cin >> b1.price3;
	cout << "\t\tEnter Item Quantity:";
	cin >> b1.quantity2;
	cout << "\t\tEnter Accountant Signature:";
	cin >> b1.sig;
	cout << "\t\tComplte Invoice is:" << endl;
	cout << "\t-------------------------------------------------------------------" << endl;
	cout << "\t" << "LALA Cake                               INVIOCE" << endl;
	cout << "\t" << "Bild To:" << b1.bildto << "Invoce No:" << b1.bid << endl;
	cout << "\t" << "Descreption" << "\t" << "Price" << "\t" << "Quantity" << "\t" << "Extension" << endl;
	cout << "\t" << b1.dcrp1 << "\t\t" << b1.price << "\t" << b1.quantity << "\t" << b1.price*b1.quantity << endl;
	cout << "\t" << b1.dcrp2 << "\t\t" << b1.price2 << "\t" << b1.quantity1 << "\t" << b1.price2*b1.quantity1 << endl;
	cout << "\t" << b1.dcrp3 << "\t\t" << b1.price3 << "\t" << b1.quantity2 << "\t" << b1.price3*b1.quantity2 << endl;
	cout << "\t" << "                                         Total:" << (b1.price*b1.quantity + b1.price2*b1.quantity1 + b1.price3*b1.quantity2);
	cout << "\t" << "                                         Tax:" << (b1.price*b1.quantity + b1.price2*b1.quantity1 + b1.price3*b1.quantity2)*0.05 << endl;
	cout << "\t" << "                                         Net total:" << (b1.price*b1.quantity + b1.price2*b1.quantity1 + b1.price3*b1.quantity2) + (b1.price*b1.quantity + b1.price2*b1.quantity1 + b1.price3*b1.quantity2)*0.05 << endl;
	cout << "\t---------------------------------------------------------------------" << endl;
	cout << "\t" << b1.sig << "\t" << "                            " << "\t" << b1.d << "/" << b1.m << "/" << b1.y << endl;
	cout << "\t" << "Signature" << "\t " << "                     " << "\t   Date." << endl;
	cout << "\t---------------------------------------------------------------------" << endl;
	cout << "\tDo You want to continue(Y/N)" << endl;
	cin >> cia;
	if (cia == "Y")
	{
		system("cls");
		createbill();// go to create bill
	}
	else if (cia == "y")
	{
		system("cls");
		createbill();// go to create bill
	}
	else if (cia == "n")
	{
		system("cls");
		acntmenu();// go to Accountant menu
	}
	else if (cia == "N")
	{
		system("cls");
		acntmenu();// go to Accountant menu
	}
	else
	{
		system("cls");
		error();// go to error 

	}
}


void exitc()// exit function
{
	system("cls");
	system("color 2");
	string ex;
	cout << "\t-------------------------------------------------------------------" << endl;
	cout << "\t-                          <<<<< EXIT >>>>>                       -" << endl;
	cout << "\t-------------------------------------------------------------------" << endl;
	cout << "\t Are you sure?Exit the this system! Press Y/N:";
	cin >> ex;
	if (ex == "y")
	{
		system("cls");
		cout << "\t-------------------------------------------------------------------" << endl;
		cout << "\t-                    <<<<< Thank you! >>>>>                       -" << endl;
		cout << "\t-------------------------------------------------------------------" << endl;
		cout << "\t-                 We hope you come back soon                      -" << endl;
		cout << "\t-------------------------------------------------------------------" << endl;
		cout << "\t-                                         coparight at Ishpvi 2017-" << endl;
		cout << "\t-------------------------------------------------------------------" << endl;

	}
	else if (ex == "Y")
	{
		system("cls");
		cout << "\t-------------------------------------------------------------------" << endl;
		cout << "\t-                    <<<<< Thank you! >>>>>                       -" << endl;
		cout << "\t-------------------------------------------------------------------" << endl;
		cout << "\t-                 We hope you come back soon                      -" << endl;
		cout << "\t-------------------------------------------------------------------" << endl;
		cout << "\t-                                       coparight at Ishpvi � 2017-" << endl;
		cout << "\t-------------------------------------------------------------------" << endl;

	}
	else if (ex == "N")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else if (ex == "n")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else
	{
		error();// go to error
	}

}


void help()// help menu
{
	system("cls");
	system("color 2");
	cout << "\t\t*****************************************" << endl;
	cout << "\t\t*****************************************" << endl;
	cout << "\t\t                 LALA CAKE              *" << endl;
	cout << "\t\t*****************************************" << endl;
	cout << "\t\t*      Welcome to help menu             *" << endl;
	cout << "\t\t*****************************************" << endl;
	cout << "\t\t\t1.Administor Account" << endl;
	cout << "\t.1.Please Enter Correct User Name and Password log in to Administor Account" << endl;
	cout << "\t2.View All items,Ssytem Show Avalavle food items" << endl;
	cout << "\t3.Serach Product..Do you like search specific food item Enter Food id" << endl;
	cout << "\t4.Serach User..If you can serach user id" << endl;
	cout << "\t5.Add User..Do you want to add new user in to the system..You can do it" << endl;
	cout << "\t6.Add Product,You can add new food item in to the system" << endl;
	cout << "\t7.Press Nuber 6 to back main menu" << endl;

	cout << "\t\t\t2.User Log in" << endl;
	cout << "\tPlease Enter correct user name and password" << endl;
	cout << "\t1.Press Number One for View All items" << endl;
	cout << "\t2.Press number 2 for Search Products" << endl;
	cout << "\t3.Press Number 3 For Calculate Bill" << endl;
	cout << "\t4.Press number 4 for exit system" << endl;

	cout << "\t Accountant Login" << endl;
	cout << "\tEnter correct Youser name and Password Log in to the Syetem" << endl;
	cout << "\tPress 1 for view all details" << endl;
	cout << "\tPress 2 for Serach items" << endl;
	cout << "\tPress 3 for Create bill" << endl;
	cout << "\tPress for Back to main menu" << endl;
	string sj;
	cout << "\t\tDo you want to Continue?(Y/N)" << endl;
	cin >> sj;
	if (sj == "Y")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else if (sj == "y")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else if (sj == "N")
	{
		system("cls");
		exitc();// go to exit function
	}
	else if (sj == "n")
	{
		system("cls");
		exitc();// go to exit function
	}
	else
	{

		error();// go to error
	}
}
void error()// error
{
	system("cls");
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t-                           ERROR!!!                            -" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t                        Invalid Enter!                           " << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	string sjs;// local variable
	cout << "\t\tChose your option" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t     1.Press A for Main Menu      2.Press B for Admin Log in     " << endl;
	cout << "\t     3.Press C for User log in    4.Press D for Accountant Log in" << endl;
	cout << "\t     5.Press E for Help Menu      6.Press F for Exit" << endl;
	cout << "\t-----------------------------------------------------------------" << endl;
	cout << "\t\tEnter your option:";
	cin >> sjs;
	if (sjs == "A")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else if (sjs == "a")
	{
		system("cls");
		mainmenu();// go to main menu
	}
	else if (sjs == "b")
	{
		system("cls");
		adminlogin();// go to adminlogin
	}
	else if (sjs == "B")
	{
		system("cls");
		adminlogin();//go to adminlog in
	}
	else if (sjs == "c")
	{
		system("cls");
		userlogin();//go to user log in
	}
	else if (sjs == "C")
	{
		system("cls");
		userlogin();// go to user login
	}
	else if (sjs == "d")
	{
		system("cls");
		acntlogin();// go to Accountant log in
	}
	else if (sjs == "D")
	{
		system("cls");
		acntlogin();// go to accountant log in
	}
	else if (sjs == "e")
	{
		system("cls");
		help();// go to help menu
	}
	else if (sjs == "E")
	{
		system("cls");
		help();// go to help menu
	}
	else if (sjs == "f")
	{
		system("cls");
		exitc();// go to exit function
	}
	else if (sjs == "F")
	{
		system("cls");
		exitc();// go to exit function
	}
	else
	{
		system("cls");
		error();// go to error
	}
}