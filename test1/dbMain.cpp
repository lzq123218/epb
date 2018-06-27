// �����x�W��		Commander_Name  					VARCHAR(12)
// ¾�~		      	Profession   						VARCHAR(12)
// �����xHP	      	Commander_HP   						VARCHAR(12)
// ��ʪ��A	      	Action_Status   				 VARCHAR(12)
// �a�ϤW�ζH		Map_image     					VARCHAR(12)
// Y�b����			Y-axis_coordinate    				VARCHAR(12)
// X�b����			X_coordinate      			 		 VARCHAR(12)
// �˳ƪZ��			Equipped_with_weapons   			 VARCHAR(12)
// ���U�]�k�ĪG		Auxiliary_magic_effect  		  VARCHAR(12)
// �˳ƹ���	       	Equipment_accessories   		  VARCHAR(12)
// �˳ƨ���	       	Equipment_and_armor    				VARCHAR(12)
// �ħL����	       	Mercenary_belongs     					 VARCHAR(12)
// �ħL�L��	       	Mercenary_arms                     VARCHAR(12)
// �ħLHP			Mercenary_HP                                   VARCHAR(12)
// �ħL��ʪ��A		Mercenary_action_status                                    VARCHAR(12)
// �ħL		     	Mercenary                             VARCHAR(12)
// �����Ǹ�	     	Force_serial_number                   VARCHAR(12)
// �ħLY�b����		The_mercenary_Y_axis_coordinates    VARCHAR(12)
// �ħLX�b����		The_mercenary_X_axis_coordinates     VARCHAR(12)
// ���O		      	Instruction                         VARCHAR(12)
// ���ݶդO	      	Belongs_forces                       VARCHAR(12)
// �����x�g��		Commander_of_experience              VARCHAR(12)
// �����x����		Commander_Level                      VARCHAR(12)
// �̤jMP			Max_MP                                VARCHAR(12)
// MP				MP                                    VARCHAR(12)
// ���m�O			Defense                               VARCHAR(12)
// �����O			ATK                                   VARCHAR(12)
// ���ʤO			Moving_force                          VARCHAR(12)
// �����d��			Command_range                          VARCHAR(12)
// ���m�ץ�			Defense_correction                     VARCHAR(12)
// �����ץ�			Attack_modifier                        VARCHAR(12)
// �]�k16-23		Magic_16-23                            VARCHAR(12)
// ¾�~�]�k���m		Occupational_magic_defense              VARCHAR(12)
// �]�k1-7			Magic_1-7                               VARCHAR(12)
// �]�k8-15			Magic_8-15                             VARCHAR(12)
// �l���~MP			Summon_MP                               VARCHAR(12)
// �y�b�e����		Charm_of_before_they                    VARCHAR(12)
// �����x�v��		Commander_Portrait                      VARCHAR(12)
// ---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "dbMain.h"

#include <string>
#include <string.h>

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {

	this->Caption = "Test";
	this->ClientHeight = 768;
	this->ClientWidth = 1380;
	this->ListBox1->Width = 1280;
	this->ListBox1->Height = 500;
	this->Selectch->Position->Y = 700;
	this->Selectch->Position->X = 20;
	this->chadd->Position->Y = 700;
	this->chdelete->Position->Y = 700;

	this->chupdate->Position->Y = 700;

	this->TabControl1->Position->X = 20;
	this->TabControl1->Position->Y = 520;

	this->Label1->Position->X = 10;
	this->Label1->Position->Y = 6;
	this->Label1->Text = "�����x�W��";
	this->Commander_Name_edit->Position->X = 10;
	this->Commander_Name_edit->Position->Y = 30;

	this->Label2->Position->X = 70 * 1;
	this->Label2->Position->Y = 6;
	this->Label2->Text = "¾�~";
	this->Profession_edit->Position->X = 70 * 1;
	this->Profession_edit->Position->Y = 30;

	this->Label3->Position->X = 70 * 2;
	this->Label3->Position->Y = 6;
	this->Label3->Text = "�����xHP";
	this->Commander_HP_edit->Position->X = 70 * 2;
	this->Commander_HP_edit->Position->Y = 30;

	this->Label4->Position->X = 70 * 3;
	this->Label4->Position->Y = 6;
	this->Label4->Text = "��ʪ��A";
	this->Action_Status_edit->Position->X = 70 * 3;
	this->Action_Status_edit->Position->Y = 30;

	this->Label5->Position->X = 70 * 4;
	this->Label5->Position->Y = 6;
	this->Label5->Text = "�a�ϤW�ζH";
	this->Map_image_edit->Position->X = 70 * 4;
	this->Map_image_edit->Position->Y = 30;

	//
	this->Label6->Position->X = 10;
	this->Label6->Position->Y = 6;
	this->Label6->Text = "Y�b����";
	this->Y_axis_coordinate_edit->Position->X = 10;
	this->Y_axis_coordinate_edit->Position->Y = 30;

	this->Label7->Position->X = 70 * 1;
	this->Label7->Position->Y = 6;
	this->Label7->Text = "X�b����";
	this->X_coordinate_edit->Position->X = 70 * 1;
	this->X_coordinate_edit->Position->Y = 30;

	this->Label8->Position->X = 70 * 2;
	this->Label8->Position->Y = 6;
	this->Label8->Text = "�˳ƪZ��";
	this->Equipped_with_weapons_edit->Position->X = 70 * 2;
	this->Equipped_with_weapons_edit->Position->Y = 30;

	this->Label9->Position->X = 70 * 3;
	this->Label9->Position->Y = 6;
	this->Label9->Text = "���U�]�k�ĪG";
	this->Auxiliary_magic_effect_edit->Position->X = 70 * 3;
	this->Auxiliary_magic_effect_edit->Position->Y = 30;

	this->Label10->Position->X = 70 * 4;
	this->Label10->Position->Y = 6;
	this->Label10->Text = "�˳ƹ���";
	this->Equipment_accessories_edit->Position->X = 70 * 4;
	this->Equipment_accessories_edit->Position->Y = 30;

	this->Label11->Position->X = 10;
	this->Label11->Position->Y = 6;
	this->Label11->Text = "�˳ƨ���";
	this->Equipment_and_armor_edit->Position->X = 10;
	this->Equipment_and_armor_edit->Position->Y = 30;

	this->Label12->Position->X = 70 * 1;
	this->Label12->Position->Y = 6;
	this->Label12->Text = "�ħL����";
	this->Mercenary_belongs_edit->Position->X = 70 * 1;
	this->Mercenary_belongs_edit->Position->Y = 30;

	this->Label13->Position->X = 70 * 2;
	this->Label13->Position->Y = 6;
	this->Label13->Text = "�ħL�L��";
	this->Mercenary_arms_edit->Position->X = 70 * 2;
	this->Mercenary_arms_edit->Position->Y = 30;

	this->Label14->Position->X = 70 * 3;
	this->Label14->Position->Y = 6;
	this->Label14->Text = "�ħLHP";
	this->Mercenary_HP_edit->Position->X = 70 * 3;
	this->Mercenary_HP_edit->Position->Y = 30;

	this->Label15->Position->X = 70 * 4;
	this->Label15->Position->Y = 6;
	this->Label15->Text = "�ħL��ʪ��A";
	this->Mercenary_action_status_edit->Position->X = 70 * 4;
	this->Mercenary_action_status_edit->Position->Y = 30;

	this->Label16->Position->X = 10;
	this->Label16->Position->Y = 6;
	this->Label16->Text = "�ħL";
	this->Mercenary_edit->Position->X = 10;
	this->Mercenary_edit->Position->Y = 30;

	this->Label17->Position->X = 70 * 1;
	this->Label17->Position->Y = 6;
	this->Label17->Text = "�����Ǹ�";
	this->Force_serial_number_edit->Position->X = 70 * 1;
	this->Force_serial_number_edit->Position->Y = 30;

	this->Label18->Position->X = 70 * 2;
	this->Label18->Position->Y = 6;
	this->Label18->Text = "�ħLY�b����";
	this->The_mercenary_Y_axis_coordinates_edit->Position->X = 70 * 2;
	this->The_mercenary_Y_axis_coordinates_edit->Position->Y = 30;

	this->Label19->Position->X = 70 * 3;
	this->Label19->Position->Y = 6;
	this->Label19->Text = "�ħLX�b����";
	this->The_mercenary_X_axis_coordinates_edit->Position->X = 70 * 3;
	this->The_mercenary_X_axis_coordinates_edit->Position->Y = 30;

	this->Label20->Position->X = 70 * 4;
	this->Label20->Position->Y = 6;
	this->Label20->Text = "���O";
	this->Instruction_edit->Position->X = 70 * 4;
	this->Instruction_edit->Position->Y = 30;

	this->Label21->Position->X = 10;
	this->Label21->Position->Y = 6;
	this->Label21->Text = "���ݶդO";
	this->Belongs_forces_edit->Position->X = 10;
	this->Belongs_forces_edit->Position->Y = 30;

	this->Label22->Position->X = 70 * 1;
	this->Label22->Position->Y = 6;
	this->Label22->Text = "�����x�g��";
	this->Commander_of_experience_edit->Position->X = 70 * 1;
	this->Commander_of_experience_edit->Position->Y = 30;

	this->Label23->Position->X = 70 * 2;
	this->Label23->Position->Y = 6;
	this->Label23->Text = "�����x����";
	this->Commander_Level_edit->Position->X = 70 * 2;
	this->Commander_Level_edit->Position->Y = 30;

	this->Label24->Position->X = 70 * 3;
	this->Label24->Position->Y = 6;
	this->Label24->Text = "�̤jMP";
	this->Max_MP_edit->Position->X = 70 * 3;
	this->Max_MP_edit->Position->Y = 30;

	this->Label25->Position->X = 70 * 4;
	this->Label25->Position->Y = 6;
	this->Label25->Text = "MP";
	this->MP_edit->Position->X = 70 * 4;
	this->MP_edit->Position->Y = 30;

	this->Label26->Position->X = 10;
	this->Label26->Position->Y = 6;
	this->Label26->Text = "���m�O";
	this->Defense_edit->Position->X = 10;
	this->Defense_edit->Position->Y = 30;

	this->Label27->Position->X = 70 * 1;
	this->Label27->Position->Y = 6;
	this->Label27->Text = "�����O";
	this->ATK_edit->Position->X = 70 * 1;
	this->ATK_edit->Position->Y = 30;

	this->Label28->Position->X = 70 * 2;
	this->Label28->Position->Y = 6;
	this->Label28->Text = "���ʤO";
	this->Moving_force_edit->Position->X = 70 * 2;
	this->Moving_force_edit->Position->Y = 30;

	this->Label29->Position->X = 70 * 3;
	this->Label29->Position->Y = 6;
	this->Label29->Text = "�����d��";
	this->Command_range_edit->Position->X = 70 * 3;
	this->Command_range_edit->Position->Y = 30;

	this->Label30->Position->X = 70 * 4;
	this->Label30->Position->Y = 6;
	this->Label30->Text = "���m�ץ�";
	this->Defense_correction_edit->Position->X = 70 * 4;
	this->Defense_correction_edit->Position->Y = 30;

	this->Label31->Position->X = 10;
	this->Label31->Position->Y = 6;
	this->Label31->Text = "�����ץ�";
	this->Attack_modifier_edit->Position->X = 10;
	this->Attack_modifier_edit->Position->Y = 30;

	this->Label32->Position->X = 70 * 1;
	this->Label32->Position->Y = 6;
	this->Label32->Text = "�]�k16-23";
	this->Magic_16_23_edit->Position->X = 70 * 1;
	this->Magic_16_23_edit->Position->Y = 30;

	this->Label33->Position->X = 70 * 2;
	this->Label33->Position->Y = 6;
	this->Label33->Text = "¾�~�]�k���m";
	this->Occupational_magic_defense_edit->Position->X = 70 * 2;
	this->Occupational_magic_defense_edit->Position->Y = 30;

	this->Label34->Position->X = 70 * 3;
	this->Label34->Position->Y = 6;
	this->Label34->Text = "�]�k1-7";
	this->Magic_1_7_edit->Position->X = 70 * 3;
	this->Magic_1_7_edit->Position->Y = 30;

	this->Label35->Position->X = 70 * 4;
	this->Label35->Position->Y = 6;
	this->Label35->Text = "�]�k8-15";
	this->Magic_8_15_edit->Position->X = 70 * 4;
	this->Magic_8_15_edit->Position->Y = 30;

	this->Label36->Position->X = 10;
	this->Label36->Position->Y = 6;
	this->Label36->Text = "�l���~MP";
	this->Summon_MP_edit->Position->X = 10;
	this->Summon_MP_edit->Position->Y = 30;

	this->Label37->Position->X = 70 * 1;
	this->Label37->Position->Y = 6;
	this->Label37->Text = "�y�b�e����";
	this->Charm_of_before_they_edit->Position->X = 70 * 1;
	this->Charm_of_before_they_edit->Position->Y = 30;

	this->Label38->Position->X = 70 * 2;
	this->Label38->Position->Y = 6;
	this->Label38->Text = "�����x�v��";
	this->Commander_Portrait_edit->Position->X = 70 * 2;
	this->Commander_Portrait_edit->Position->Y = 30;

}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
	System::WideChar &KeyChar, TShiftState Shift) {
	if (Key == VK_ESCAPE) {
		exit(0);
	}
}

// ---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender) {
	// StringsValuesList1->Strings->Add("123");

	ListBox1->Columns = 39;
	dbview();
}
// ---------------------------------------------------------------------------

void TForm1::btntest() {

	sqlite3 *db = NULL;
	char *zErrMsg = 0;
	int rc;
	char *sql;

	rc = sqlite3_open("dice.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	else {
	}

	int nrow = 0, ncolumn = 0;
	char ch1[10000] = "CREATE TABLE SensorData(ID INTEGER PRIMARY KEY,\
	 COMMANDER_NAME VARCHAR(12)	, PROFESSION VARCHAR(12), COMMANDER_HP VARCHAR(12),\
	 ACTION_STATUS VARCHAR(12), MAP_IMAGE VARCHAR(12), Y_AXIS_COORDINATE VARCHAR(12),\
	 X_COORDINATE VARCHAR(12),EQUIPPED_WITH_WEAPONS VARCHAR(12),\
	 AUXILIARY_MAGIC_EFFECT VARCHAR(12),EQUIPMENT_ACCESSORIES VARCHAR(12),\
	 EQUIPMENT_AND_ARMOR VARCHAR(12),MERCENARY_BELONGS VARCHAR(12),\
	 MERCENARY_ARMS VARCHAR(12), MERCENARY_HP VARCHAR(12),\
	 MERCENARY_ACTION_STATUS VARCHAR(12), MERCENARY VARCHAR(12),	\
	 FORCE_SERIAL_NUMBER VARCHAR(12), THE_MERCENARY_Y_AXIS_COORDINATES VARCHAR(12), \
	 THE_MERCENARY_X_AXIS_COORDINATES VARCHAR(12), INSTRUCTION VARCHAR(12), \
	 BELONGS_FORCES VARCHAR(12), COMMANDER_OF_EXPERIENCE VARCHAR(12),   \
	 COMMANDER_LEVEL VARCHAR(12), MAX_MP VARCHAR(12), MP VARCHAR(12),   \
	 DEFENSE VARCHAR(12), ATK VARCHAR(12), MOVING_FORCE VARCHAR(12), \
	 COMMAND_RANGE VARCHAR(12), DEFENSE_CORRECTION VARCHAR(12), \
	 ATTACK_MODIFIER VARCHAR(12), MAGIC_16_23 VARCHAR(12),\
	 OCCUPATIONAL_MAGIC_DEFENSE VARCHAR(12), MAGIC_1_7 VARCHAR(12), \
	 MAGIC_8_15 VARCHAR(12), SUMMON_MP VARCHAR(12), CHARM_OF_BEFORE_THEY VARCHAR(12), \
	 COMMANDER_PORTRAIT VARCHAR(12) );";

	sql = ch1;
	sqlite3_exec(db, sql, 0, 0, &zErrMsg);

	// char aa[4096] = "INSERT INTO \"SensorData\" VALUES( NULL ,'�ڷRù', 3);";
	char aa[10000] =
		"INSERT INTO \"SensorData\" VALUES( NULL ,'�X�l��','¾�~','�����xHP','��ʪ��A','�a�ϤW�ζH','Y�b����','X�b����','�˳ƪZ��','���U�]�k�ĪG','�˳ƹ���','�˳ƨ���','�ħL����','�ħL�L��','�ħLHP','�ħL��ʪ��A','�ħL','�����Ǹ�','�ħLY�b����','�ħLX�b����','���O','���ݶդO','�����x�g��','�����x����','�̤jMP','MP','���m�O','�����O','���ʤO','�����d��','���m�ץ�','�����ץ�','�]�k16-23','¾�~�]�k���m','�]�k1-7','�]�k8-15','�l���~MP','�y�b�e����','�����x�v��');";

	sql = aa;
	sqlite3_exec(db, sql, 0, 0, &zErrMsg);

	sqlite3_close(db);

}

void TForm1::dbview() {
	sqlite3 *db = NULL;
	char *zErrMsg = 0;
	int rc;
	char *sql;

	rc = sqlite3_open("dice.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	else {
	}

	char aa[1024] = "select * from SensorData;";
	int nrow = 0, ncolumn = 0;
	char **azResult; // �G���Ʋզs�񵲪G

	sql = aa;
	// MessageBoxA(NULL, "cc", "oo", MB_OK);
	sqlite3_get_table(db, sql, &azResult, &nrow, &ncolumn, &zErrMsg);
	for (int i = 0; i < (nrow + 1) * ncolumn; i++) {
		// std::cout << azResult[i] << std::endl;
		// MessageBoxA(NULL, azResult[i], "oo", MB_OK);
		ListBox1->Items->Add(azResult[i]);
	}
	sqlite3_free_table(azResult);
	sqlite3_close(db);
}

void __fastcall TForm1::ListBox1Click(TObject *Sender) {
	// ScrollBar1 = ListBox1->VScrollBar ;
	int j1;

	j1 = (ListBox1->ItemIndex % 39);

	Selectch->Text = ListBox1->ItemByIndex(ListBox1->ItemIndex)->Text;

	Commander_Name_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 1)->Text;

	Profession_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 2)->Text;
	Commander_HP_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 3)->Text;

	Action_Status_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 4)->Text;
	Map_image_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 5)->Text;
	Y_axis_coordinate_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 6)->Text;
	X_coordinate_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 7)->Text;
	Equipped_with_weapons_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 8)->Text;
	Auxiliary_magic_effect_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 9)->Text;
	Equipment_accessories_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 10)->Text;
	Equipment_and_armor_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 11)->Text;
	Mercenary_belongs_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 12)->Text;
	Mercenary_arms_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 13)->Text;
	Mercenary_HP_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 14)->Text;
	Mercenary_action_status_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 15)->Text;
	Mercenary_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 16)->Text;
	Force_serial_number_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 17)->Text;
	The_mercenary_Y_axis_coordinates_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 18)->Text;
	The_mercenary_X_axis_coordinates_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 19)->Text;
	Instruction_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 20)->Text;
	Belongs_forces_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 21)->Text;
	Commander_of_experience_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 22)->Text;
	Commander_Level_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 23)->Text;
	Max_MP_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 24)->Text;
	MP_edit->Text = ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 25)->Text;
	Defense_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 26)->Text;
	ATK_edit->Text = ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 27)->Text;
	Moving_force_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 28)->Text;
	Command_range_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 29)->Text;
	Defense_correction_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 30)->Text;
	Attack_modifier_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 31)->Text;
	Magic_16_23_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 32)->Text;
	Occupational_magic_defense_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 33)->Text;
	Magic_1_7_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 34)->Text;
	Magic_8_15_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 35)->Text;
	Summon_MP_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 36)->Text;
	Charm_of_before_they_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 37)->Text;
	Commander_Portrait_edit->Text =
		ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 38)->Text;

}
// ---------------------------------------------------------------------------

void __fastcall TForm1::chaddClick(TObject *Sender) {
	// ListBox1->Clear();

	dbcharadd(Commander_Name_edit->Text);
	// dbview();
}
// ---------------------------------------------------------------------------

void TForm1::dbcharadd(System::UnicodeString str1) {

	sqlite3 *db = NULL;
	char *zErrMsg = 0;
	int rc;
	char *sql;

	rc = sqlite3_open("dice.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	else {
	}

	int nrow = 0, ncolumn = 0;
	char ch1[10000] = "CREATE TABLE SensorData(ID INTEGER PRIMARY KEY,\
	 COMMANDER_NAME VARCHAR(12)	, PROFESSION VARCHAR(12), COMMANDER_HP VARCHAR(12),\
	 ACTION_STATUS VARCHAR(12), MAP_IMAGE VARCHAR(12), Y_AXIS_COORDINATE VARCHAR(12),\
	 X_COORDINATE VARCHAR(12),EQUIPPED_WITH_WEAPONS VARCHAR(12),\
	 AUXILIARY_MAGIC_EFFECT VARCHAR(12),EQUIPMENT_ACCESSORIES VARCHAR(12),\
	 EQUIPMENT_AND_ARMOR VARCHAR(12),MERCENARY_BELONGS VARCHAR(12),\
	 MERCENARY_ARMS VARCHAR(12), MERCENARY_HP VARCHAR(12),\
	 MERCENARY_ACTION_STATUS VARCHAR(12), MERCENARY VARCHAR(12),	\
	 FORCE_SERIAL_NUMBER VARCHAR(12), THE_MERCENARY_Y_AXIS_COORDINATES VARCHAR(12), \
	 THE_MERCENARY_X_AXIS_COORDINATES VARCHAR(12), INSTRUCTION VARCHAR(12), \
	 BELONGS_FORCES VARCHAR(12), COMMANDER_OF_EXPERIENCE VARCHAR(12),   \
	 COMMANDER_LEVEL VARCHAR(12), MAX_MP VARCHAR(12), MP VARCHAR(12),   \
	 DEFENSE VARCHAR(12), ATK VARCHAR(12), MOVING_FORCE VARCHAR(12), \
	 COMMAND_RANGE VARCHAR(12), DEFENSE_CORRECTION VARCHAR(12), \
	 ATTACK_MODIFIER VARCHAR(12), MAGIC_16_23 VARCHAR(12),\
	 OCCUPATIONAL_MAGIC_DEFENSE VARCHAR(12), MAGIC_1_7 VARCHAR(12), \
	 MAGIC_8_15 VARCHAR(12), SUMMON_MP VARCHAR(12), CHARM_OF_BEFORE_THEY VARCHAR(12), \
	 COMMANDER_PORTRAIT VARCHAR(12) );";

	sql = ch1;
	sqlite3_exec(db, sql, 0, 0, &zErrMsg);

	char aa[10000];
	std::wstring wstr1 = str1.w_str();
	char strText[512];
	WideCharToMultiByte(CP_ACP, 0, wstr1.c_str(), -1, strText, 510, NULL, NULL);

	sprintf(aa,
		// "INSERT INTO \"SensorData\" VALUES( NULL ,'%s','¾�~','�����xHP','��ʪ��A','�a�ϤW�ζH','Y�b����','X�b����','�˳ƪZ��','���U�]�k�ĪG','�˳ƹ���','�˳ƨ���','�ħL����','�ħL�L��','�ħLHP','�ħL��ʪ��A','�ħL','�����Ǹ�','�ħLY�b����','�ħLX�b����','���O','���ݶդO','�����x�g��','�����x����','�̤jMP','MP','���m�O','�����O','���ʤO','�����d��','���m�ץ�','�����ץ�','�]�k16-23','¾�~�]�k���m','�]�k1-7','�]�k8-15','�l���~MP','�y�b�e����','�����x�v��');",
		"INSERT INTO \"SensorData\" VALUES( NULL ,'%s','0','10','1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0');",
		strText);
	// "INSERT INTO \"SensorData\" VALUES( NULL ,'%s','0','10','1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0');",

	// MessageBox(NULL, wstr1.c_str(), L"oo", MB_OK);
	sql = aa;
	sqlite3_exec(db, sql, 0, 0, &zErrMsg);

	sqlite3_close(db);
}

// sprintf_s(aa,"delete from SensorData where GROUPNAME='%s';",GroupNamestr.c_str());
void TForm1::dbchardelete(System::UnicodeString str1) {
	sqlite3 *db = NULL;
	char *zErrMsg = 0;
	int rc;
	char *sql;

	rc = sqlite3_open("dice.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	else {
	}
	char aa[10000];
	std::wstring wstr1 = str1.w_str();
	char strText[512];
	WideCharToMultiByte(CP_ACP, 0, wstr1.c_str(), -1, strText, 510, NULL, NULL);

	sprintf(aa, "delete from SensorData where COMMANDER_NAME='%s';", strText);

	// MessageBox(NULL, wstr1.c_str(), L"oo", MB_OK);
	sql = aa;
	sqlite3_exec(db, sql, 0, 0, &zErrMsg);

	sqlite3_close(db);
}

// sprint(a,"update sensordata set APPON = %s where GROUPNAME = "%s" and APPNAME = "%s";",1,group02,office);
void TForm1::dbcharupdate(System::UnicodeString str1,
	System::UnicodeString str2, System::UnicodeString str3,
	System::UnicodeString str4) {
	sqlite3 *db = NULL;
	char *zErrMsg = 0;
	int rc;
	char *sql;

	rc = sqlite3_open("dice.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	else {
	}
	char aa[10000];
	std::wstring wstr1 = str1.w_str();
	std::wstring wstr2 = str2.w_str();
	std::wstring wstr3 = str3.w_str();
	std::wstring wstr4 = str4.w_str();
	char strText1[512];
	char strText2[512];
	char strText3[512];
	char strText4[512];
	WideCharToMultiByte(CP_ACP, 0, wstr1.c_str(), -1, strText1, 510,
		NULL, NULL);
	WideCharToMultiByte(CP_ACP, 0, wstr2.c_str(), -1, strText2, 510,
		NULL, NULL);
	WideCharToMultiByte(CP_ACP, 0, wstr3.c_str(), -1, strText3, 510,
		NULL, NULL);
	WideCharToMultiByte(CP_ACP, 0, wstr4.c_str(), -1, strText4, 510,
		NULL, NULL);

	// sprint(aa,"update SensorData set APPON = %s where ID = \"%s\" and sprint(a,"update sensordata set APPON = %s where GROUPNAME = "%s" and APPNAME = "%s";",1,group02,office); = \"%s\";","1",group02,office);

	sprintf(aa,
		"update sensordata set %s = \"%s\" where ID = %s and COMMANDER_NAME = \"%s\"",
		strText1, strText2, strText3, strText4);

	// MessageBox(NULL, wstr1.c_str(), L"oo", MB_OK);
	sql = aa;
	sqlite3_exec(db, sql, 0, 0, &zErrMsg);

	sqlite3_close(db);
}

void __fastcall TForm1::chdeleteClick(TObject *Sender) {

	// ListBox1->Clear();
	dbchardelete(Selectch->Text);
	// dbview();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::chupdateClick(TObject *Sender) {
	// ListBox1->Clear();
	// "update sensordata set %s = \"%s\" where ID = %s and COMMANDER_NAME = \"%s\"",

	int j1;

	j1 = (ListBox1->ItemIndex % 39);

	if (ListBox1->ItemByIndex(j1)->Text == "ID") {
		MessageBox(NULL, TEXT("�Фŭק�ID"), TEXT("error"),
			MB_OK | MB_ICONINFORMATION);
	}
	else if (ListBox1->ItemIndex < 39) {
		MessageBox(NULL, TEXT("�Фŭק�tabel"), TEXT("error"),
			MB_OK | MB_ICONINFORMATION);
	}
	else {

		// dbcharupdate(ListBox1->ItemByIndex(j1)->Text, Selectch->Text,
		// ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
		// Commander_Name_edit->Text);

		// Commander_Name_edit->Text =
		// ListBox1->ItemByIndex(ListBox1->ItemIndex - j1 + 1)->Text;

		dbcharupdate(ListBox1->ItemByIndex(1)->Text, Commander_Name_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(2)->Text, Profession_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(3)->Text, Commander_HP_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(4)->Text, Action_Status_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(5)->Text, Map_image_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(6)->Text,
			Y_axis_coordinate_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(7)->Text, X_coordinate_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(8)->Text,
			Equipped_with_weapons_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(9)->Text,
			Auxiliary_magic_effect_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(10)->Text,
			Equipment_accessories_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(11)->Text,
			Equipment_and_armor_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(12)->Text,
			Mercenary_belongs_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(13)->Text, Mercenary_arms_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(14)->Text, Mercenary_HP_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(15)->Text,
			Mercenary_action_status_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(16)->Text, Mercenary_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(17)->Text,
			Force_serial_number_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(18)->Text,
			The_mercenary_Y_axis_coordinates_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(19)->Text,
			The_mercenary_X_axis_coordinates_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(20)->Text, Instruction_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(21)->Text, Belongs_forces_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(22)->Text,
			Commander_of_experience_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(23)->Text,
			Commander_Level_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(24)->Text, Max_MP_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(25)->Text, MP_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(26)->Text, Defense_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(27)->Text, ATK_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(28)->Text, Moving_force_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(29)->Text, Command_range_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(30)->Text,
			Defense_correction_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(31)->Text,
			Attack_modifier_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(32)->Text, Magic_16_23_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(33)->Text,
			Occupational_magic_defense_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(34)->Text, Magic_1_7_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(35)->Text, Magic_8_15_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(36)->Text, Summon_MP_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(37)->Text,
			Charm_of_before_they_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);
		dbcharupdate(ListBox1->ItemByIndex(38)->Text,
			Commander_Portrait_edit->Text,
			ListBox1->ItemByIndex(ListBox1->ItemIndex - j1)->Text,
			Commander_Name_edit->Text);

	}

	// dbview();
	// MessageBox(NULL,TEXT("qq"),TEXT("bb"),MB_OK |MB_ICONINFORMATION);
}
// ---------------------------------------------------------------------------