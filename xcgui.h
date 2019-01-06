/**************************************************************************\
*
* Copyright (c)  �Ųʽ����. All Rights Reserved.
*
* �Ųʽ���� - �ٷ���վ : http://www.xcgui.com
*
\**************************************************************************/
#pragma once

//v2.3.3
////////////�������///////////////////
#define in_
#define out_
#define in_out_
#define XC_API extern "C"

#define  XC_NAME    _T("name")
#define  XC_NAME1   _T("name")
#define  XC_NAME2   _T("name2")
#define  XC_NAME3   _T("name3")
#define  XC_NAME4   _T("name4")
#define  XC_NAME5   _T("name5")
#define  XC_NAME6   _T("name6")

//�������;�������
//������ʽ�������

/// @defgroup groupObjectType �ӿھ������
/// @ingroup macroDefine
/// @{
/// �Ųʶ�������
enum XC_OBJECT_TYPE  ///<�Ųʶ�������
{
	XC_ERROR = -1,   ///<��������
	XC_NOTHING = 0,
	XC_WINDOW = 1,    ///<����
	XC_MODALWINDOW = 2,    ///<ģ̬����
	XC_FRAMEWND = 3,    ///<��ܴ���
	XC_FLOATWND = 4,    ///<��������
	XC_COMBOBOXWINDOW = 11,   //comboBoxWindow_        ��Ͽ򵯳������б���
	XC_POPUPMENUWINDOW = 12,  //popupMenuWindow_       �����˵�������
	XC_POPUPMENUCHILDWINDOW = 13,   //popupMenuChildWindow_  �����˵��Ӵ���
	XC_OBJECT_UI = 19,   ///<...
	XC_WIDGET_UI = 20,
	//Ԫ��
	XC_ELE = 21,   ///<����Ԫ��
	XC_ELE_LAYOUT = 53,   ///<����Ԫ��
	XC_BUTTON = 22,   ///<��ť
	XC_RICHEDIT = 23,   ///<���ı��༭��
	XC_COMBOBOX = 24,   ///<������Ͽ�Ԫ��
	XC_SCROLLBAR = 25,   ///<������Ԫ��
	XC_SCROLLVIEW = 26,   ///<������ͼԪ��
	XC_LIST = 27,   ///<�б�Ԫ��
	XC_LISTBOX = 28,   ///<�б��Ԫ��
	XC_LISTVIEW = 29,   ///<�б���ͼ,��ͼ��
	XC_TREE = 30,   ///<��Ԫ��
	XC_MENUBAR = 31,   ///<�˵���
	XC_SLIDERBAR = 32,   ///<������
	XC_PROGRESSBAR = 33,   ///<������
	XC_TOOLBAR = 34,   ///<������
	XC_MONTHCAL = 35,   ///<����Ԫ��
	XC_DATETIME = 36,   ///<ʱ��Ԫ��
	XC_PROPERTYGRID = 37,   ///<��������
	XC_RICHEDIT_COLOR = 38,   ///<��ɫѡ��Ԫ��
	XC_RICHEDIT_SET = 39,   ///<...
	XC_TABBAR = 40,   ///<tab��
	XC_TEXTLINK = 41,   ///<�ı����Ӱ�ť

	XC_PANE = 42,   ///<���ִ���
	XC_PANE_SPLIT = 43,   ///<���ִ����϶��ָ���
	XC_MENUBAR_BUTTON = 44,   ///<�˵����ϵİ�ť
							  //	XC_TOOLBAR_BUTTON       =45,   ///<�������ϰ�ť
							  //	XC_PROPERTYPAGE_LABEL   =46,   ///<����ҳ��ǩ��ť
							  //	XC_PIER                 =47,   ///<����ͣ����ͷ
							  //	XC_BUTTON_MENU          =48,   ///<�����˵���ť
							  //	XC_VIRTUAL_ELE          =49,   ///<����Ԫ��
							  XC_RICHEDIT_FILE = 50,   ///<RichEditFile �ļ�ѡ��༭��
							  XC_RICHEDIT_FOLDER = 51,   ///<RichEditFolder  �ļ���ѡ��༭��
							  XC_LIST_HEADER = 52,   ///<�б�ͷԪ��

							  XC_SHAPE = 61,    ///<��״����
							  XC_SHAPE_TEXT = 62,    ///<��״����-�ı�
							  XC_SHAPE_PICTURE = 63,    ///<��״����-ͼƬ
							  XC_SHAPE_RECT = 64,    ///<��״����-����
							  XC_SHAPE_ELLIPSE = 65,    ///<��״����-Բ
							  XC_SHAPE_LINE = 66,    ///<��״����-ֱ��
							  XC_SHAPE_GROUPBOX = 67,    ///<��״����-���
							  XC_SHAPE_GIF = 68,    ///<��״����-GIF

													//��������
													XC_MENU = 81,   ///<�����˵�
													XC_IMAGE = 82,         ///<ͼƬ
													XC_IMAGE_TEXTURE = XC_IMAGE,   ///<ͼƬ����,ͼƬԴ,ͼƬ�ز�
													XC_HDRAW = 83,   ///<��ͼ����
													XC_FONT = 84,   ///<�Ų�����
													XC_FLASH = 85,   ///<flash   
													XC_PANE_CELL = 86,   ///<...
													XC_WEB = 87,   ///<...
													XC_IMAGE_FRAME = 88,   ///<ͼƬ֡,ָ��ͼƬ����Ⱦ����

													XC_LAYOUT_OBJECT = 101,   ///<���ֶ���LayoutObject
													XC_ADAPTER = 102,   ///<...
													XC_ADAPTER_TABLE = 103,   ///<����������AdapterTable
													XC_ADAPTER_TREE = 104,   ///<����������AdapterTree
													XC_ADAPTER_LISTVIEW = 105,   ///<����������AdapterListView
													XC_ADAPTER_MAP = 106,   ///<����������AdapterMap

													XC_BKINFOM = 116, //����������

																	  //��ʵ�����,ֻ�������жϲ���
																	  XC_LAYOUT_LISTVIEW = 111,
																	  XC_LAYOUT_LIST = 112,
																	  XC_LAYOUT_OBJECT_GROUP = 113,
																	  XC_LAYOUT_OBJECT_ITEM = 114,
																	  XC_LAYOUT_PANEL = 115,

																	  //��ʵ�����,ֻ�������ж�����
																	  XC_LIST_ITEM = 121,     //�б���ģ�� list_item
																	  XC_LISTVIEW_GROUP = 122,
																	  XC_LISTVIEW_ITEM = 123,
																	  //XC_BUTTON_EX,
};

///@}


/// @defgroup groupObjectTypeEx   ������չ����
/// @ingroup macroDefine
/// @{
enum XC_OBJECT_TYPE_EX
{
	xc_ex_error = -1,   ///<��������
	button_type_default = 0, ///<Ĭ������
	button_type_radio,     ///<��ѡ��ť
	button_type_check,     ///<��ѡ��ť
	button_type_close,     ///<���ڹرհ�ť
	button_type_min,       ///<������С����ť
	button_type_max,       ///<������󻯻�ԭ��ť

	element_type_layout,   ///<����Ԫ��,���ò��ֹ��ܵ�Ԫ��
};

///@}


/// @defgroup groupObjectStyle ������ʽ(�����������)
/// @ingroup macroDefine
/// @{
enum  XC_OBJECT_STYLE
{
	xc_style_default = 0,
	button_style_default = xc_style_default,  ///<Ĭ�Ϸ��
	button_style_check = 1,    ///<��ѡ��ť
	button_style_radio = 2,    ///<��ѡ��ť
	button_style_expand = 3,    ///<չ��������ť
	button_style_scrollbar_left = 4,    ///<ˮƽ������,��ť
	button_style_scrollbar_right = 5,    ///<ˮƽ������,�Ұ�ť
	button_style_scrollbar_up = 6,    ///<��ֱ������,�ϰ�ť
	button_style_scrollbar_down = 7,    ///<��ֱ������,�°�ť
	button_style_scrollbar_slider_h = 8,    ///<ˮƽ������,����
	button_style_scrollbar_slider_v = 9,    ///<��ֱ������,����
	button_style_tabBar_button = 10,   ///<TabBar�ϵı�ǩ��ť
	button_style_toolBar_left = 11,   ///<ToolBar�������ť
	button_style_toolBar_right = 12,   ///<ToolBar�ҹ�����ť

	button_style_pane_close = 13,   ///<����رհ�ť
	button_style_pane_lock = 14,   ///<����������ť
	button_style_pane_menu = 15,   ///<���������˵���ť
	button_style_pane_dockH = 16,   ///<��ܴ�����߻��ұ���ͷ�ϰ�ť
	button_style_pane_dockV = 17,   ///<��ܴ����ϱ߻��±���ͷ�ϰ�ť

	xc_style_frameWnd_dock_left = 18,   ///<��ܴ���ͣ����ͷ
	xc_style_frameWnd_dock_top = 19,   ///<��ܴ���ͣ����ͷ
	xc_style_frameWnd_dock_right = 20,   ///<��ܴ���ͣ����ͷ
	xc_style_frameWnd_dock_bottom = 21,   ///<��ܴ���ͣ����ͷ

	xc_style_ToolBar_separator = 22,   ///<�������ϵķָ���
	xc_style_listBox_comboBox = 23,   ///<������Ͽ򵯳���listBox

									  //xc_style_richEdit_onlyRead      =23,   ///<�༭��ֻ��ģʽ
};

///@}

#define DECLARE_HANDLEX(name) struct name##__ { int unused; }; typedef struct name##__ *name

/// @defgroup groupHandle ����б�
/// @ingroup macroDefine
/// @{
typedef void*   HXCGUI;       ///<��Դ���
DECLARE_HANDLEX(HWINDOW);     ///<������Դ���
DECLARE_HANDLEX(HELE);        ///<Ԫ����Դ���
DECLARE_HANDLEX(HMENUX);      ///<�˵���Դ���
DECLARE_HANDLEX(HDRAW);       ///<ͼ�λ�����Դ���
DECLARE_HANDLEX(HIMAGE);      ///<ͼƬ��Դ���
DECLARE_HANDLEX(HFONTX);      ///<�Ų�������
DECLARE_HANDLEX(HBKM);        ///<�������ݹ��������
DECLARE_HANDLEX(HTEMP);       //<ģ����

							  ///@}

#ifndef _INC_SHELLAPI
DECLARE_HANDLE(HDROP);
#endif

#define  XC_GetObjectByUID_(T)  XC_GetObjectByUID(XRes_GetIDValue(L#T))
#define  GetLayoutFile()        GetLayoutFile()
#define  XC_LAYOUT_FILE(file)   const wchar_t*  GetLayoutFile(){ return file; };
#define  XC_EVENT_DECLARE_MARK
#define  XC_EVENT_REGISTER_MARK
#define  XC_EVENT_IMPLEMENT_MARK(T)


#define CLOUDUI_flag_openUrl       1
#define CLOUDUI_flag_downloadFile  2
#define CLOUDUI_flag_downloadFileComplete      3
#define CLOUDUI_flag_complete      4

typedef   void  bkInfo_i;  //������Ϣ
typedef   struct lua_State lua_State;

struct  RECTF
{
	float  left;
	float  top;
	float  right;
	float  bottom;
};

//������ʽ----------------------------
/// @defgroup groupWindowStyle �Ųʴ�����ʽ
/// @ingroup macroDefine
/// @{
enum  xc_window_style_
{
	xc_window_style_nothing = 0x00000000,      ///<ʲôҲû��
	xc_window_style_caption = 0x00000001,      ///<top����,���ָ��������,Ĭ��Ϊ�󶨱�����Ԫ��
	xc_window_style_border = 0x00000002,      ///<�߿�,ָ��Ĭ���������Ҳ��ִ�С,���û��ָ��,��ô�߿򲼾ִ�СΪ0
	xc_window_style_center = 0x00000004,      ///<���ھ���
	xc_window_style_drag_border = 0x00000008,    ///<�϶����ڱ߿�
	xc_window_style_drag_window = 0x00000010,    ///<�϶�����
	xc_window_style_allow_maxWindow = 0x00000020,   ///���������

													///����Ĭ����ʽ
													xc_window_style_default = (xc_window_style_caption | xc_window_style_border | xc_window_style_center | xc_window_style_drag_border | xc_window_style_allow_maxWindow),
													xc_window_style_default2 = (xc_window_style_caption | xc_window_style_border | xc_window_style_drag_border | xc_window_style_allow_maxWindow),

													///ģ̬������ʽ
													xc_window_style_modal = (xc_window_style_caption | xc_window_style_center | xc_window_style_border),
};

///@}

#ifdef _DEBUG
#define XTRACE   xtrace
#define XTRACEW  xtracew
#define XERROR   XTRACE 
#define XERRORW  XTRACEW
#else
#define XTRACE
#define XTRACEW
#define XERROR 
#define XERRORW
#endif

#define  XC_WINDOW_TOP            1 //��
#define  XC_WINDOW_BOTTOM         2 //��
#define  XC_WINDOW_LEFT           3 //��
#define  XC_WINDOW_RIGHT          4 //��
#define  XC_WINDOW_TOPLEFT        5 //���Ͻ�
#define  XC_WINDOW_TOPRIGHT       6 //���Ͻ�
#define  XC_WINDOW_BOTTOMLEFT     7 //���½�
#define  XC_WINDOW_BOTTOMRIGHT    8 //���½�
#define  XC_WINDOW_CAPTION        9 //�������ƶ���������
#define  XC_WINDOW_BODY           10

/// @defgroup groupWindow_position ����λ��
/// @ingroup macroDefine
/// @{
enum   window_position_
{
	window_position_error = -1,  ///<����
	window_position_top = 0,     ///<top
	window_position_bottom,    ///<bottom
	window_position_left,      ///<left
	window_position_right,     ///<right
	window_position_body,      ///<body
	window_position_window,    ///<window �������� 
};

///@}

/// @defgroup groupElement_position UIԪ��λ��
/// @ingroup macroDefine
/// @{
enum element_position_
{
	element_position_no = 0x00,     ///<��Ч
	element_position_left = 0x01,     ///<���
	element_position_top = 0x02,		///<�ϱ�
	element_position_right = 0x04,		///<�ұ�
	element_position_bottom = 0X08,		///<�±�
};

///@}

//͸������
/// @defgroup groupWindowTransparent �Ųʴ���͸����ʶ
/// @ingroup macroDefine
/// @{
enum  window_transparent_
{
	window_transparent_false = 0,   ///<Ĭ�ϴ���,��͸��
	window_transparent_shaped,    ///<͸������,��͸��ͨ��,����
	window_transparent_shadow,    ///<��Ӱ����,��͸��ͨ��,�߿���Ӱ,����͸�����͸��,��ǰδ����.
	window_transparent_simple,    ///<͸������,����͸��ͨ��,ָ����͸����,ָ��͸��ɫ.
	window_transparent_win7,      ///<WIN7��������,��ҪWIN7������Ч,��ǰδ����.
};

///@}

/// @defgroup groupID_fixed  ����ID
/// @ingroup macroDefine
/// @{
#define  XC_ID_ROOT            0   ///<���ڵ�
#define  XC_ID_ERROR          -1   ///<ID����
#define  XC_ID_FIRST          -2   ///<���뿪ʼλ��
#define  XC_ID_LAST           -3   ///<����ĩβλ��

/// @}


/// @defgroup groupMenu �����˵�
/// @ingroup macroDefine
/// @{

//�����˵����ʶ
///@name �����˵����ʶ
///@{
enum   menu_item_flags_
{
	menu_item_flags_normal = 0x00,   ///<����
	menu_item_flags_select = 0x01,   ///<ѡ�� 
	menu_item_flags_check = 0x02,   ///<��ѡ
	menu_item_flags_popup = 0x04,   ///<����
	menu_item_flags_separator = 0x08,   ///<�ָ��� ID������,ID�ű�����
	menu_item_flags_disable = 0x10,   ///<����
};

///@}

//�����˵�����
///@name �����˵�����
///@{
enum  menu_popup_position_
{
	menu_popup_position_left_top = 0,      ///<���Ͻ�
	menu_popup_position_left_bottom,     ///<���½�
	menu_popup_position_right_top,       ///<���Ͻ�
	menu_popup_position_right_bottom,    ///<���½�
	menu_popup_position_center_left,     ///<�����
	menu_popup_position_center_top,      ///<�Ͼ���
	menu_popup_position_center_right,    ///<�Ҿ���
	menu_popup_position_center_bottom,   ///<�¾���
};

///@}

//�˵�ID--------------------------------------
///@name �˵�ID , ��ǰδʹ��
///@{
#define  IDM_CLIP          1000000000    ///<����
#define  IDM_COPY          1000000001    ///<����
#define  IDM_PASTE         1000000002    ///<ճ��
#define  IDM_DELETE        1000000003    ///<ɾ��
#define  IDM_SELECTALL     1000000004    ///<ȫѡ
#define  IDM_DELETEALL     1000000005    ///<���

///@}

///@}

/// @defgroup groupImageDrawType ͼƬ��������
/// @ingroup macroDefine
/// @{
enum  image_draw_type_
{
	image_draw_type_default = 0,  ///<Ĭ��
	image_draw_type_stretch,    ///<����
	image_draw_type_adaptive,   ///<����Ӧ,�Ź���
	image_draw_type_tile,       ///<ƽ��
	image_draw_type_fixed_ratio,  ///<�̶�����,��ͼƬ������ʾ��Χʱ,����ԭʼ����ѹ����ʾͼƬ
	image_draw_type_adaptive_border,  ///<�Ź��񲻻����м�����
};

///@}


//״̬--------------------------------------
/// @defgroup groupCommonState3 ��ͨ����״̬
/// @ingroup  macroDefine
/// @{
enum  common_state3_
{
	common_state3_leave = 0,  ///<�뿪
	common_state3_stay,     ///<ͣ��
	common_state3_down,     ///<����
};

///@}

/// @defgroup groupButtonStateFlag ��ť״̬
/// @ingroup  macroDefine
/// @{
enum  button_state_
{
	button_state_leave = 0,   ///<�뿪״̬
	button_state_stay,      ///<ͣ��״̬
	button_state_down,      ///<����״̬
	button_state_check,     ///<ѡ��״̬
	button_state_disable,   ///<����״̬
};

///@}

/// @defgroup   groupComboBoxState ComboBox״̬
/// @ingroup macroDefine
/// @{
enum  comboBox_state_
{
	comboBox_state_leave = 0,   ///<����뿪״̬
	comboBox_state_stay = 1,    ///<���ͣ��״̬
	comboBox_state_down = 2,    ///<����״̬
};

///@}

/// @defgroup groupListItemState List��״̬
/// @ingroup macroDefine
/// @{
enum  list_item_state_
{
	list_item_state_leave = 0,   ///<������뿪״̬
	list_item_state_stay = 1,    ///<�����ͣ��״̬
	list_item_state_select = 2,  ///<��ѡ��״̬
};

///@}


/// @defgroup groupTreeItemState Tree��״̬
/// @ingroup macroDefine
/// @{
enum  tree_item_state_
{
	tree_item_state_leave = 0,   ///<������뿪״̬
	tree_item_state_stay = 1,    ///<�����ͣ��״̬
	tree_item_state_select = 2,  ///<��ѡ��״̬
};

///@}


//��ťͼ����뷽ʽ
/// @defgroup groupButtonIconAlign ��ťͼ����뷽ʽ
/// @ingroup macroDefine
/// @{
enum  button_icon_align_
{
	button_icon_align_left = 0,  ///<ͼ�������
	button_icon_align_top,     ///<ͼ���ڶ���
	button_icon_align_right,   ///<ͼ�����ұ�
	button_icon_align_bottom,  ///<ͼ���ڵײ�
};

///@}

/// @defgroup groupLayoutSize ���ִ�С����
/// @ingroup macroDefine
/// @{
enum  layout_size_type_
{
	layout_size_type_fixed = 0,   ///<ָ����С
	layout_size_type_fill,      ///<fill ��丸
	layout_size_type_auto,      ///<auto �Զ���С,�������ݼ����С
	layout_size_type_weight,    ///<weight ����,���ձ�������ʣ��ռ�
	layout_size_type_disable,   ///<disable ��ʹ��
};

///@}

/// @defgroup  groupListDrawItemBkFlags  List,ListBox,ListView,Tree,������Ʊ�־λ
/// @ingroup macroDefine
/// @{
enum  list_drawItemBk_flags_
{
	list_drawItemBk_flags_nothing = 0x000,    ///<������
	list_drawItemBk_flags_leave = 0x001,    ///<��������뿪״̬���
	list_drawItemBk_flags_stay = 0x002,    ///<�������ѡ��״̬���
	list_drawItemBk_flags_select = 0x004,    ///<�������ͣ��״̬�����
	list_drawItemBk_flags_group_leave = 0x008, ///<��������뿪״̬�鱳��,����Ϊ��ʱ
	list_drawItemBk_flags_group_stay = 0x010  ///<�������ͣ��״̬�鱳��,����Ϊ��ʱ

};

/// @}

//������Ϣ������
/// @defgroup groupMessageBox ������Ϣ��
/// @ingroup macroDefine
/// @{
enum  messageBox_flags_
{
	messageBox_flags_other = 0x00,    ///<����
	messageBox_flags_ok = 0x01,    ///<ȷ����ť
	messageBox_flags_cancel = 0x02,    ///<ȡ����ť

	messageBox_flags_icon_appicon = 0x01000,  ///<ͼ�� Ӧ�ó���  IDI_APPLICATION
	messageBox_flags_icon_info = 0x02000,  ///<ͼ�� ��Ϣ     IDI_ASTERISK
	messageBox_flags_icon_qustion = 0x04000,  ///<ͼ�� ��ѯ/����/����   IDI_QUESTION
	messageBox_flags_icon_error = 0x08000,  ///<ͼ�� ����/�ܾ�/��ֹ  IDI_ERROR
	messageBox_flags_icon_warning = 0x10000,  ///<ͼ�� ����       IDI_WARNING
	messageBox_flags_icon_shield = 0x20000,  ///<ͼ�� ����/��ȫ   IDI_SHIELD
};

///@}

///@defgroup GroupPropertyGrid_item_type    ��������������
///@ingroup  macroDefine
///@{
enum  propertyGrid_item_type_
{
	propertyGrid_item_type_text = 0,      ///<Ĭ��,�ַ�������
	propertyGrid_item_type_edit,        ///<�༭��
	propertyGrid_item_type_edit_color,  ///<��ɫѡ��Ԫ��
	propertyGrid_item_type_edit_file,   ///<�ļ�ѡ��༭��
	propertyGrid_item_type_edit_set,    ///<����
	propertyGrid_item_type_comboBox,    ///<��Ͽ�
	propertyGrid_item_type_group,       ///<��
	propertyGrid_item_type_panel,       ///<���
};

///@}

///@defgroup  GroupZOrder    Z��λ��
///@ingroup  macroDefine
///@{
enum zorder_
{
	zorder_top,    ///<������
	zorder_bottom, ///<������
	zorder_before, ///<ָ��Ŀ������
	zorder_after,  ///<ָ��Ŀ������
};

///@}

//////////////��ܴ���///////////////////////////////////////////////
//����˵� ��ǰδʹ��
#define  IDM_LOCK          1000000006    ///<����
#define  IDM_DOCK          1000000007    ///<ͣ��
#define  IDM_FLOAT         1000000008    ///<����
#define  IDM_HIDE          1000000009    ///<����

enum  layout_align_
{
	layout_align_left = 0,
	layout_align_top,
	layout_align_right,
	layout_align_bottom,
	layout_align_center,
	layout_align_equidistant,
};

enum align_type_
{
	align_error = -1,
	align_left = 0,
	align_top,
	align_right,
	align_bottom,
	align_center,
};

enum dock_align_  //ͣ����ͷ����
{
	dock_align_none = 0,
	dock_align_left,
	dock_align_top,
	dock_align_right,
	dock_align_bottom,
};


///@defgroup Group_pane_state_  ����״̬
///@ingroup  macroDefine
///@{
enum pane_state_
{
	pane_state_any = 0,
	pane_state_lock,   ///<����
	pane_state_dock,   ///<ͣ����ͷ
	pane_state_float,  ///<��������
};

///@}

///@defgroup Group_textFormatFlag_    �ַ�����ʾ��ʽ
///@ingroup  macroDefine
///@{
enum  textFormatFlag_
{
	textAlignFlag_left = 0,       ///<�����
	textAlignFlag_top = 0,        ///<��ֱ������
	textAlignFlag_left_top = 0x4000,  //�ڲ�����
	textAlignFlag_center = 0x1,   ///<ˮƽ����
	textAlignFlag_right = 0x2,    ///<�Ҷ���
	textAlignFlag_vcenter = 0x4,  ///<��ֱ����
	textAlignFlag_bottom = 0x8,   ///<��ֱ�׶���

	textFormatFlag_DirectionRightToLeft = 0x10,  ///<��������˳����ʾ�ı�
	textFormatFlag_NoWrap = 0x20,                ///<��ֹ����
	textFormatFlag_DirectionVertical = 0x40,     ///<��ֱ��ʾ�ı�
	textFormatFlag_NoFitBlackBox = 0x80,         ///<�������ַ�������ַ����Ĳ��־��Ρ�Ĭ������£������¶�λ�ַ��Ա����κ�����
	textFormatFlag_DisplayFormatControl = 0x100,  ///<�����ַ���������ұ�ǣ�����д����Եı�־����һ����ʾ������С�
	textFormatFlag_NoFontFallback = 0x200,        ///<��������������в�֧�ֵ��ַ������û��˵���ѡ���塣ȱʧ���κ��ַ�����ȱʧ��־���ŵ�������ʾ��ͨ����һ���յķ���
	textFormatFlag_MeasureTrailingSpaces = 0x400, ///<����ÿһ�н�β����β��ո���Ĭ������£�MeasureString �������صı߿򶼽��ų�ÿһ�н�β���Ŀո����ô˱���Ա��ڲⶨʱ���ո������ȥ
	textFormatFlag_LineLimit = 0x800,             ///<���������ʾ�߶Ȳ���һ��,��ô����ʾ
	textFormatFlag_NoClip = 0x1000,               ///<������ʾ��־���ŵ�������ֺ����쵽�߿����δ�����ı�����Ĭ������£����쵽�߿����������ı��ͱ�־���Ų��ֶ�������

	textTrimming_None = 0,        ///<��ʹ��ȥβ
	textTrimming_Character = 0x40000,  ///<���ַ�Ϊ��λȥβ
	textTrimming_Word = 0x80000,  ///<�Ե���Ϊ��λȥβ
	textTrimming_EllipsisCharacter = 0x8000,   ///<���ַ�Ϊ��λȥβ,ʡ�Բ���ʹ�����Ժű�ʾ
	textTrimming_EllipsisWord = 0x10000,  ///<�Ե���Ϊ��λȥβ,
	textTrimming_EllipsisPath = 0x20000,  ///<��ȥ�ַ����м䲿�֣���֤�ַ�����β���ܹ���ʾ  
};

///@}

///@defgroup Group_listItemTemp_type_    �б���ģ������
///@ingroup  macroDefine
///@{
enum listItemTemp_type_
{
	listItemTemp_type_tree = 0x01,					  ///<tree
	listItemTemp_type_listBox = 0x02,				  ///<listBox
	listItemTemp_type_list_head = 0x04,				  ///<list �б�ͷ
	listItemTemp_type_list_item = 0x08,				  ///<list �б���
	listItemTemp_type_listView_group = 0x10,		  ///<listView �б�����
	listItemTemp_type_listView_item = 0x20,			  ///<listView �б�����
	listItemTemp_type_list = listItemTemp_type_list_head | listItemTemp_type_list_item,  ///<list (�б�ͷ)��(�б���)���
	listItemTemp_type_listView = listItemTemp_type_listView_group | listItemTemp_type_listView_item, ///<listView (�б�����)��(�б�����)���
};

///@}

///@defgroup Group_adjustLayout    �������ֱ�ʶλ
///@ingroup  macroDefine
///@{
enum xc_adjustLayout_
{
	xc_adjustLayout_no = 0x00,  ///<����������
	xc_adjustLayout_all = 0x01,  ///<ǿ�Ƶ���������Ӷ��󲼾�.
	xc_adjustLayout_self = 0x02,  ///<ֻ����������,�������Ӷ��󲼾�.
};

///@}

typedef void (CALLBACK *FunDebugError)(const char *pInfo);  //����ص�
typedef BOOL(CALLBACK *FunLoadFile)(const wchar_t *pFileName);  //ͼƬ��Դ�ļ����ػص�
typedef void (CALLBACK *FunCloudEvent)(const wchar_t *pFileName, int nEvent, HXCGUI hXCGUI);  //��UI�¼��ص�

																							  /////////////////////////////////////////////////////////
																							  //////////////����ṹ��///////////////////////////////////
																							  /////////////////////////////////////////////////////////
struct BorderSize_i  //4���ߵĴ�С
{
	int  leftSize;
	int  topSize;
	int  rightSize;
	int  bottomSize;
};
typedef  BorderSize_i  SpaceSize_i, PaddingSize_i, MarginSize_i;

struct  Position_i
{
	int  iRow;
	int  iColumn;
};

struct listBox_item_i
{
	int     index;      ///<������
	int     nUserData;  ///<�û�������
	int     nHeight;    ///<��Ĭ�ϸ߶�
	int     nSelHeight; ///<��ѡ��ʱ�߶�
	list_item_state_  nState;  ///<״̬
	RECT    rcItem;     ///<������
	HXCGUI  hLayout;    ///<���ֶ���
	HTEMP   hTemp;      ///<�б���ģ��
};

struct listBox_item_info_i
{
	int     nUserData;  //�û�������
	int     nHeight;
	int     nSelHeight;
};

struct  listView_item_id_i
{
	int  iGroup;   ///<������
	int  iItem;    ///<������
};

struct list_item_i
{
	int     index;
	int     iSubItem;
	int     nUserData;
	list_item_state_  nState;
	RECT    rcItem;
	HXCGUI  hLayout;    ///<���ֶ���
	HTEMP   hTemp;      ///<�б���ģ��
};

struct list_header_item_i
{
	int     index;
	int     nUserData;

	BOOL    bSort;  //�Ƿ�֧������
	int     nSortType;   //����ʽ,0��Ч,1����,2����
	int     iColumnAdapter;  //��Ӧ�����������е�������

	common_state3_  nState;
	RECT      rcItem;
	HXCGUI    hLayout;  ///<���ֶ���
	HTEMP     hTemp;    ///<�б���ģ��
};

struct tree_item_i
{
	int     nID;
	int     nDepth;
	int     nHeight;
	int     nSelHeight;
	int     nUserData;
	BOOL    bExpand;
	tree_item_state_  nState;
	RECT    rcItem;
	HXCGUI  hLayout;   ///<���ֶ���
	HTEMP   hTemp;     ///<�б���ģ��
};

struct listView_item_i
{
	int     iGroup;            ///<������������ -1û����
	int     iItem;             ///<����������λ������,�������Ϊ-1,��ôΪ��
	int     nUserData;         ///<�û�������
	list_item_state_  nState;  ///<״̬  
	RECT    rcItem;            ///<��������,�����߿�
	HXCGUI  hLayout;           ///<���ֶ���
	HTEMP   hTemp;             ///<�б���ģ��
};

//������Ϣ
struct layout_info_i
{
	layout_size_type_  widthType;
	layout_size_type_  heightType;
	short  width;    //���
	short  height;   //�߶�
};

struct  menu_popupWnd_i
{
	HWINDOW hWindow;    //���ھ��
	int     nParentID;  //����ID
};

///�˵������Ի�ṹ
struct menu_drawBackground_i
{
	HMENUX  hMenu;      ///<�˵����
	HWINDOW hWindow;    ///<��ǰ�����˵���Ĵ��ھ��
	int     nParentID;  ///<����ID
};

///�˵����Ի�ṹ
struct  menu_drawItem_i
{
	HMENUX     hMenu;       ///<�˵����
	HWINDOW    hWindow;     ///<��ǰ�����˵���Ĵ��ھ��
	int        nID;         ///<ID
	int        nState;	    ///<״̬ @ref menu_item_flags_
	RECT       rcItem;      ///<����
	HIMAGE     hIcon;       ///<�˵���ͼ��
	const wchar_t    *pText;   ///<�ı�
};

//��UIԪ���϶���
struct tree_drag_item_i
{
	int  nDragItem;  ///< �϶���ID
	int  nDestItem;  ///< Ŀ����ID
	int  nType;      ///< ͣ�����Ŀ��λ��,1:ͣ�ŵ�Ŀ�������,2:ͣ�ŵ�Ŀ�������,3:ͣ�ŵ�Ŀ��ĵ�����
};

//������Ϣ
struct  xc_font_info_i
{
	int   nSize;                 ///<�����С,��λ(pt,��).
	int   nStyle;                ///<������ʽ xc_fontStyle_i
	wchar_t  name[LF_FACESIZE];  ///<��������
};

struct propertyGrid_item_i
{
	propertyGrid_item_type_ nType;
	int   nID;
	int   nDepth;
	int   nUserData;     //�û�����
	int   nNameColWidth; //�����п��

	RECT  rcItem;
	RECT  rcExpand;
	BOOL  bExpand;  //�Ƿ�չ��
	BOOL  bShow;    //�Ƿ�ɼ�
};

#ifndef __IOleControlSite_INTERFACE_DEFINED__
struct POINTF
{
	float x;
	float y;
};
#endif

/// @defgroup group_combo_StateFlags ���״̬
/// @ingroup macroDefine
/// @{
enum  window_state_flag_
{
	window_state_flag_nothing = 0x0000,  ///<��
	window_state_flag_leave = 0x0001,  ///<��������
	window_state_flag_body_leave = 0x0002,  ///<����-body
	window_state_flag_top_leave = 0x0004,  ///<����-top
	window_state_flag_bottom_leave = 0x0008,  ///<����-bottom
	window_state_flag_left_leave = 0x0010,  ///<����-left
	window_state_flag_right_leave = 0x0020,  ///<����-right

	window_state_flag_layout_body = 0x20000000, ///<����������
};

enum  element_state_flag_  //���״̬
{
	element_state_flag_nothing = window_state_flag_nothing,  ///<��
	element_state_flag_enable = 0x0001,  ///<����
	element_state_flag_disable = 0x0002,  ///<����
	element_state_flag_focus = 0x0004,  ///<����
	element_state_flag_focus_no = 0x0008,  ///<�޽���
	element_state_flag_focusEx = 0x40000000,  ///<��Ԫ�ػ��Ԫ�ص���Ԫ��ӵ�н���
	element_state_flag_focusEx_no = 0x80000000,  ///<�޽���Ex

	layout_state_flag_layout_body = window_state_flag_layout_body, ///<����������

	element_state_flag_leave = 0x0010,  ///<����뿪
	element_state_flag_stay = 0x0020,  ///<Ϊ��չģ�鱣��
	element_state_flag_down = 0x0040,  ///<Ϊ��չģ�鱣��

};

enum  button_state_flag_  //���״̬
{
	button_state_flag_leave = element_state_flag_leave,  ///<����뿪
	button_state_flag_stay = element_state_flag_stay,   ///<���ͣ��
	button_state_flag_down = element_state_flag_down,   ///<��갴��

	button_state_flag_check = 0x0080, ///<ѡ��
	button_state_flag_check_no = 0x0100, ///<δѡ��

	button_state_flag_WindowRestore = 0x0200, ///<���ڻ�ԭ
	button_state_flag_WindowMaximize = 0x0400, ///<�������
};

enum comboBox_state_flag_
{
	comboBox_state_flag_leave = element_state_flag_leave, ///<����뿪
	comboBox_state_flag_stay = element_state_flag_stay,  ///<���ͣ��
	comboBox_state_flag_down = element_state_flag_down,  ///<��갴��
};

enum listBox_state_flag_
{
	listBox_state_flag_item_leave = 0x0080, ///<������뿪
	listBox_state_flag_item_stay = 0x0100, ///<�����ͣ��

	listBox_state_flag_item_select = 0x0200, ///<��ѡ��
	listBox_state_flag_item_select_no = 0x0400, ///<��δѡ��
};

enum list_state_flag_
{
	list_state_flag_item_leave = 0x0080, ///<������뿪
	list_state_flag_item_stay = 0x0100, ///<�����ͣ��

	list_state_flag_item_select = 0x0200, ///<��ѡ��
	list_state_flag_item_select_no = 0x0400, ///<��δѡ��
};

enum listHeader_state_flag_
{
	listHeader_state_flag_item_leave = 0x0080, ///<������뿪
	listHeader_state_flag_item_stay = 0x0100, ///<�����ͣ��
	listHeader_state_flag_item_down = 0x0200, ///<����갴��
};

enum listView_state_flag_
{
	listView_state_flag_item_leave = 0x0080, ///<������뿪
	listView_state_flag_item_stay = 0x0100, ///<�����ͣ��

	listView_state_flag_item_select = 0x0200, ///<��ѡ��
	listView_state_flag_item_select_no = 0x0400, ///<��δѡ��

	listView_state_flag_group_leave = 0x0800, ///<������뿪
	listView_state_flag_group_stay = 0x1000, ///<�����ͣ��

	listView_state_flag_group_select = 0x2000, ///<��ѡ��
	listView_state_flag_group_select_no = 0x4000, ///<��δѡ��
};

enum tree_state_flag_
{
	tree_state_flag_item_leave = 0x0080,  ///<������뿪
	tree_state_flag_item_stay = 0x0100,  ///<�����ͣ��,����ֵ, ��δʹ��

	tree_state_flag_item_select = 0x0200,  ///<��ѡ��
	tree_state_flag_item_select_no = 0x0400,  ///<��δѡ��

	tree_state_flag_group = 0x0800,  ///<��Ϊ��
	tree_state_flag_group_no = 0x1000,  ///<�Ϊ��
};

enum monthCal_state_flag_
{
	monthCal_state_flag_leave = element_state_flag_leave,  ///<�뿪״̬

	monthCal_state_flag_item_leave = 0x0080,     ///< ��-�뿪
	monthCal_state_flag_item_stay = 0x0100,     ///< ��-ͣ��
	monthCal_state_flag_item_down = 0x0200,     ///< ��-����

	monthCal_state_flag_item_select = 0x0400,     ///< ��-ѡ��
	monthCal_state_flag_item_select_no = 0x0800,     ///< ��-δѡ��

	monthCal_state_flag_item_today = 0x1000,     ///< ��-����
	monthCal_state_flag_item_other = 0x2000,     ///< ��-���¼�����
	monthCal_state_flag_item_last_month = 0x4000,     ///< ��-����
	monthCal_state_flag_item_cur_month = 0x8000,     ///< ��-����
	monthCal_state_flag_item_next_month = 0x10000,    ///< ��-����
};

enum propertyGrid_state_flag_
{
	propertyGrid_state_flag_item_leave = 0x0080,
	propertyGrid_state_flag_item_stay = 0x0100,

	propertyGrid_state_flag_item_select = 0x0200,
	propertyGrid_state_flag_item_select_no = 0x0400,

	propertyGrid_state_flag_group_leave = 0x0800,
	propertyGrid_state_flag_group_expand = 0x1000,
	propertyGrid_state_flag_group_expand_no = 0x2000,
};

enum pane_state_flag_
{
	pane_state_flag_leave = element_state_flag_leave,
	pane_state_flag_stay = element_state_flag_stay,

	pane_state_flag_caption = 0x0080,
	pane_state_flag_body = 0x0100,
};

enum layout_state_flag_
{
	layout_state_flag_nothing = window_state_flag_nothing,  ///<��
	layout_state_flag_full = 0x0001,   //��������
	layout_state_flag_body = 0x0002,   //��������, �������ߴ�С
};

///@}

/// @defgroup group_monthCal_button_type_    ����Ԫ���ϵİ�ť����
/// @ingroup macroDefine
/// @{
enum monthCal_button_type_
{
	monthCal_button_type_today = 0,  ///< ���찴ť
	monthCal_button_type_last_year,  ///< ��һ��
	monthCal_button_type_next_year,  ///< ��һ��
	monthCal_button_type_last_month, ///< ��һ��
	monthCal_button_type_next_month, ///< ��һ��
};

///@}

///@defgroup  group_monthCal_item_i_    ����Ԫ��������
///@ingroup   macroDefine
///@{

/// ����Ԫ��������
struct monthCal_item_i
{
	int  nDay;     ///< ����
	int  nType;    ///< 1����,2����,3����
	int  nState;   ///< ���״̬ monthCal_state_flag_
	RECT rcItem;   ///< ������
};

enum xc_fontStyle_i
{
	xc_fontStyle_regular = 0,  ///<����
	xc_fontStyle_bold = 1,  ///<����
	xc_fontStyle_italic = 2,  ///<б��
	xc_fontStyle_boldItalic = 3,  ///<��б��
	xc_fontStyle_underline = 4,  ///<�»���
	xc_fontStyle_strikeout = 8   ///<ɾ����
};

///@}

///@defgroup  group_adapter_date_type_    ������������������
///@ingroup   macroDefine
///@{
enum  adapter_date_type_
{
	adapter_date_type_error = -1,
	adapter_date_type_int = 0,     ///<����
	adapter_date_type_float = 1,   ///<������
	adapter_date_type_string = 2,  ///<�ַ���
	adapter_date_type_image = 3,   ///<ͼƬ
};

///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////////////������Ϣ//////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

//������Ϣ
/**
@addtogroup wndMSG

<hr>
<h2>Windows ��׼��Ϣ</h2>
- @ref WM_PAINT ���ڻ�����Ϣ
- @ref WM_CLOSE ���ڹر���Ϣ.
- @ref WM_DESTROY ����������Ϣ.
- @ref WM_NCDESTROY ���ڷǿͻ���������Ϣ.
- @ref WM_MOUSEMOVE ��������ƶ���Ϣ.
- @ref WM_LBUTTONDOWN ����������������Ϣ
- @ref WM_LBUTTONUP ����������������Ϣ.
- @ref WM_RBUTTONDOWN ��������Ҽ�������Ϣ.
- @ref WM_RBUTTONUP ��������Ҽ�������Ϣ.
- @ref WM_LBUTTONDBLCLK ����������˫����Ϣ.
- @ref WM_RBUTTONDBLCLK ��������Ҽ�˫����Ϣ.
- @ref WM_MOUSEWHEEL ���������ֹ�����Ϣ.
- @ref WM_EXITSIZEMOVE �����˳��ƶ��������Сģʽѭ���ģ�����μ�MSDN.
- @ref WM_MOUSEHOVER ������������Ϣ
- @ref WM_MOUSELEAVE ��������뿪��Ϣ.
- @ref WM_SIZE ���ڴ�С�ı���Ϣ.
- @ref WM_TIMER ���ڶ�ʱ����Ϣ.
- @ref WM_SETFOCUS ���ڻ�ý���.
- @ref WM_KILLFOCUS ����ʧȥ����.
- @ref WM_KEYDOWN ���ڼ��̰�����Ϣ.
- @ref WM_CAPTURECHANGED ������겶��ı���Ϣ.
- @ref WM_SETCURSOR  �������������.
- @ref WM_CHAR       �����ַ���Ϣ.
- @ref WM_DROPFILES  �϶��ļ�������.
- @ref other ����Windowsϵͳ��Ϣ,�������Զ����Windows��Ϣ.

<hr>
@anchor WM_PAINT WM_PAINT ���ڻ�����Ϣ
@code   int CALLBACK OnWndDrawWindow(HDRAW hDraw,BOOL *pbHandled); @endcode
@param  hDraw   ͼ�λ��ƾ��.

<hr>
@anchor WM_CLOSE WM_CLOSE ���ڹر���Ϣ.
@code   int CALLBACK OnWndClose(BOOL *pbHandled); @endcode

<hr>
@anchor WM_DESTROY WM_DESTROY ����������Ϣ.
@code   int CALLBACK OnWndDestroy(BOOL *pbHandled);  @endcode

<hr>
@anchor WM_NCDESTROY WM_NCDESTROY ���ڷǿͻ���������Ϣ.
@code   int CALLBACK OnWndNCDestroy(BOOL *pbHandled); @endcode

<hr>
@anchor WM_MOUSEMOVE WM_MOUSEMOVE ��������ƶ���Ϣ.
@code   int CALLBACK OnWndMouseMove(UINT nFlags,POINT *pPt,BOOL *pbHandled);  @endcode
@param  flags   ��μ�MSDN WM_MOUSEMOVE wParam����.
@param  pPt     ��������.

<hr>
@anchor WM_LBUTTONDOWN WM_LBUTTONDOWN ����������������Ϣ
@code   int CALLBACK OnWndLButtonDown(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_LBUTTONDOWN.
@param  pPt     ��������.

<hr>
@anchor WM_LBUTTONUP WM_LBUTTONUP ����������������Ϣ.
@code   int CALLBACK OnWndLButtonUp(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_LBUTTONUP.
@param  pPt     ��������.

<hr>
@anchor WM_RBUTTONDOWN WM_RBUTTONDOWN ��������Ҽ�������Ϣ.
@code   int CALLBACK OnWndRButtonDown(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_RBUTTONDOWN.
@param  pPt     ��������.

<hr>
@anchor WM_RBUTTONUP WM_RBUTTONUP ��������Ҽ�������Ϣ.
@code   int CALLBACK OnWndRButtonUp(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_RBUTTONUP.
@param  pPt     ��������.

<hr>
@anchor WM_LBUTTONDBLCLK WM_LBUTTONDBLCLK ����������˫����Ϣ.
@code   int CALLBACK OnWndLButtonDBClick(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_LBUTTONDBLCLK.
@param  pPt     ��������.

<hr>
@anchor WM_RBUTTONDBLCLK WM_RBUTTONDBLCLK ��������Ҽ�˫����Ϣ.
@code   int CALLBACK OnWndRButtonDBClick(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_RBUTTONDBLCLK.
@param  pPt     ��������.

<hr>
@anchor WM_MOUSEWHEEL WM_MOUSEWHEEL ���������ֹ�����Ϣ.
@code   int CALLBACK OnWndMouseWheel(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_MOUSEWHEEL��ϢwParam����.
@param  pPt     ��������.

<hr>
@anchor WM_EXITSIZEMOVE WM_EXITSIZEMOVE �����˳��ƶ��������Сģʽѭ���ģ�����μ�MSDN.
@code   int CALLBACK OnWndExitSizeMove(BOOL *pbHandled); @endcode

<hr>
@anchor WM_MOUSEHOVER WM_MOUSEHOVER ������������Ϣ.
@code   int CALLBACK OnWndMouseHover(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
@param  flags  ��μ�MSDN WM_MOUSEHOVER��ϢwParam����.
@param  pPt    ���λ��

<hr>
@anchor WM_MOUSELEAVE WM_MOUSELEAVE ��������뿪��Ϣ.
@code   int CALLBACK OnWndMouseLeave(BOOL *pbHandled); @endcode

<hr>
@anchor WM_SIZE WM_SIZE ���ڴ�С�ı���Ϣ.
@code   int CALLBACK OnWndSize(UINT nFlags,SIZE *pSize,BOOL *pbHandled); @endcode
@param  flags   ��μ�MSDN WM_SIZE��ϢwParam����.
@param  pSize   ���ڴ�С.

<hr>
@anchor WM_TIMER WM_TIMER ���ڶ�ʱ����Ϣ.
@code   int CALLBACK OnWndTimer(UINT nIDEvent,BOOL *pbHandled); @endcode
@param  nIDEnent ��ʱ����ʾ��.
@param  uElapse  ָ����������ϵͳ���������ĺ�����,������GetTickCount�����ķ���ֵ.

<hr>
@anchor WM_SETFOCUS WM_SETFOCUS ���ڻ�ý���.
@code   int CALLBACK OnWndSetFocus(BOOL *pbHandled); @endcode

<hr>
@anchor WM_KILLFOCUS WM_KILLFOCUS ����ʧȥ����.
@code   int CALLBACK OnWndKillFocus(BOOL *pbHandled); @endcode

<hr>
@anchor WM_KEYDOWN WM_KEYDOWN ���ڼ��̰�����Ϣ.
@code   int CALLBACK OnWndKeyDown(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note   wParam,lParam:��μ�MSDN WM_KEYDOWN.

<hr>
@anchor WM_CAPTURECHANGED WM_CAPTURECHANGED ������겶��ı���Ϣ.
@code   int CALLBACK OnWndCaptureChanged(HWND hWnd,BOOL *pbHandled); @endcode
@param  hWnd    �����겶��Ĵ��ھ��.

<hr>
@anchor  WM_SETCURSOR WM_SETCURSOR �������������.
@code    int CALLBACK OnWndSetCursor(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note    wParam,lParam:��μ�MSDN WM_SETCURSOR.

<hr>
@anchor  WM_CHAR WM_CHAR �����ַ�������Ϣ.
@code    int CALLBACK OnWndChar(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@note    wParam,lParam:��μ�MSDN WM_CHAR.

<hr>
@anchor  WM_DROPFILES WM_DROPFILES �϶��ļ���������Ϣ.
@code    int CALLBACK OnDropFiles(HDROP hDropInfo , BOOL *pbHandled); @endcode
@note    ��μ�MSDN WM_DROPFILES.

<hr>
@anchor other ����Windowsϵͳ��Ϣ,�������Զ����Windows��Ϣ.
@code   int CALLBACK OnWndOther(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
@param  wParam  ��Ϣ����.
@param  lParam  ��Ϣ����.
@note   ������Ϣ��μ�MSDN.
@{
*/

//������Ϣ-����ϵͳ�ǿͻ�����Ϣ
#define  XWM_EVENT_ALL        WM_APP+1000 //�¼�Ͷ�� -------������-------����Ҫע��

//wParam:left-top�������; lParam:right-bottom�������; �����2������Ϊ��,��ô�ػ���������
//#define  XWM_REDRAW           WM_APP+1007  //�����ػ���ʱ ----������-----�ڲ��Զ�����Ϣ

//�ػ�Ԫ��,�ڲ�ʹ��
#define  XWM_REDRAW_ELE       0x7000+1 //�ػ�Ԫ�� wParam:Ԫ�ؾ��, lParam:RECT*���ڴ�������

///@brief ������Ϣ����
///@code  int CALLBACK OnWndProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL *pbHandled);  @endcode
#define  XWM_WINDPROC         0x7000+2    //ע�ᴰ�ڴ������

#define  XWM_DRAW_T           0x7000+3    //���ڻ���,�ڲ�ʹ��, wParam:0, lParam:0

#define  XWM_TIMER_T          0x7000+4    //�ڲ�ʹ��, wParam:hXCGUI, lParam:ID

#define  XWM_CLOUDUI_DOWNLOADFILE_COMPLETE   0x7000+6  //�ڲ�ʹ��

#define  XWM_CLOUNDUI_OPENURL_WAIT    0x7000+7 //�ڲ�ʹ��

/// @brief  �Ųʶ�ʱ��,��ϵͳ��ʱ��,ע����ϢXWM_TIMER����
/// @code  int CALLBACK OnWndXCTimer(UINT nTimerID,BOOL *pbHandled);  @endcode
/// @param hWindow   ���ھ��
/// @param nTimerID   ��ʱ��ID
#define  XWM_XC_TIMER         0x7000+5 //wParam:��ʱ��ID, lParam:0

///@brief �˵�����
///@code  int CALLBACK OnWndMenuPopup(HMENUX hMenu, BOOL *pbHandled); @endcode
#define  XWM_MENU_POPUP       0x7000+11

///@brief �˵���������
///@code  int CALLBACK OnWndMenuPopupWnd(HMENUX hMenu,menu_popupWnd_i *pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_POPUP_WND     0x7000+12    

///@brief �˵�ѡ��
///@code  int CALLBACK OnWndMenuSelect(int nID,BOOL *pbHandled); @endcode
#define  XWM_MENU_SELECT       0x7000+13 //�˵�ѡ�� wParam:�˵���ID, lParam:0

///@brief �˵��˳�
///@code  int CALLBACK OnWndMenuExit(BOOL *pbHandled); @endcode
#define  XWM_MENU_EXIT         0x7000+14 //�˵��˳� wParam:0, lParam:0

///@brief ���Ʋ˵�����, ���øù�����Ҫ����XMenu_EnableDrawBackground().
///@code  int CALLBACK OnWndMenuDrawBackground(HDRAW hDraw,menu_drawBackground_i *pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_DRAW_BACKGROUND   0x7000+15 //���Ʋ˵�����

/// @brief ���Ʋ˵����¼�, ���øù�����Ҫ����XMenu_EnableDrawItem().
/// @code  int CALLBACK OnMenuDrawItem(HDRAW hDraw,menu_drawItem_i* pInfo,BOOL *pbHandled); @endcode
#define  XWM_MENU_DRAWITEM           0x7000+16  //���Ʋ˵��� 

#define  XWM_COMBOBOX_POPUP_DROPLIST   0x7000+17  //������������б�,�ڲ�ʹ��

///@brief ��������
///@code  int CALLBACK OnWndFloatPane(HWINDOW hFloatWnd, HELE hPane, BOOL *pbHandled); @endcode
#define  XWM_FLOAT_PANE               0x7000+18 //��������, ����ӿ�ܴ����е���,��ɸ�������

///@brief ���ڻ��������Ϣ
///@code   int CALLBACK OnWndDrawWindowEnd(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XWM_PAINT_END               0x7000+19

///@brief ���ڻ�����ɲ����Ѿ���ʾ����Ļ
///@code   int CALLBACK OnWndDrawWindowDisplay(BOOL *pbHandled); @endcode
#define  XWM_PAINT_DISPLAY           0x7000+20


///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////////Ԫ���¼�//////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//Ԫ���¼�
/// @addtogroup eleEvents
/// @{


/// @brief Ԫ�ش�������¼�.
/// @code  int CALLBACK OnEventProc(UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) @endcode
#define  XE_ELEPROCE         1     ///Ԫ���¼��������

/// @brief Ԫ�ػ����¼�
/// @code  int CALLBACK OnDraw(HDRAW hDraw,BOOL *pbHandled);  @endcode
#define  XE_PAINT            2

/// @brief ��Ԫ�ؼ���Ԫ�ػ�������¼�.���øù�����Ҫ����XEle_EnableEvent_XE_PAINT_END();
/// @code  int CALLBACK OnPaintEnd(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XE_PAINT_END        3     //Ԫ�ؼ���Ԫ�ػ�����ɺ󴥷�,��Ҫ���øù���,XEle_EnableEvent_XE_PAINT_END();

/// @brief ������ͼ�����¼�.
/// @code int CALLBACK OnDrawScrollView(HDRAW hDraw,BOOL *pbHandled); @endcode
#define  XE_PAINT_SCROLLVIEW   4

/// @brief Ԫ������ƶ��¼�.
/// @code  int CALLBACK OnMouseMove(UINT nFlags, POINT *pPt, BOOL *pbHandled);  @endcode
#define  XE_MOUSEMOVE        5

/// @brief Ԫ�����ͣ���¼�.
/// @code  int CALLBACK OnMouseStay(BOOL *pbHandled); @endcode
#define  XE_MOUSESTAY        6   ///ͣ��

/// @brief Ԫ�������ͣ�¼�.
/// @code  int CALLBACK OnMouseHover(UINT nFlags, POINT *pPt, BOOL *pbHandled); @endcode
#define  XE_MOUSEHOVER       7   ///��ͣ

/// @brief Ԫ������뿪�¼�.
/// @param  hEleStay ��������ͣ��״̬��Ԫ��.
/// @code  int CALLBACK OnMouseLeave(HELE hEleStay,BOOL *pbHandled); @endcode
#define  XE_MOUSELEAVE       8   ///�뿪

/// @brief Ԫ�������ֹ����¼�. ����ǹ�����ͼ��Ҫ���� XEle_EnableEvent_XE_MOUSEWHEEL()
/// @code  int CALLBACK OnMouseWheel(UINT nFlags,POINT *pPt,BOOL *pbHandled); @endcode
/// @param flags      ��MSDN��WM_MOUSEWHEEL��ϢwParam����˵��.
#define  XE_MOUSEWHEEL         9  //������  wParam:��ʶ,lParam:POINT����

/// @brief �����������¼�.
/// @code  int CALLBACK OnLButtonDown(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_LBUTTONDOWN        10

/// @brief �����������¼�.
/// @code  int CALLBACK OnLButtonUp(UINT nFlags, POINT *pPt,BOOL *pbHandled); @endcode
#define  XE_LBUTTONUP          11

/// @brief ����Ҽ������¼�.
/// @code  int CALLBACK OnRButtonDown(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_RBUTTONDOWN        12

/// @brief ����Ҽ������¼�.
/// @code int CALLBACK OnRButtonUp(UINT nFlags, POINT *pPt,BOOL *pbHandled);  @endcode
#define  XE_RBUTTONUP          13

/// @brief ������˫���¼�.
/// @code   int CALLBACK OnLButtonDBClick(UINT nFlags, POINT *pPt,BOOL *pbHandled); @endcode
#define  XE_LBUTTONDBCLICK     14


//#define  XE_RBUTTONDBCLICK     15


/// @brief �Ųʶ�ʱ��,��ϵͳ��ʱ��,��ʱ����Ϣ XM_TIMER.
/// @code int CALLBACK OnEleXCTimer(UINT nTimerID,BOOL *pbHandled); @endcode
/// @param hEle        Ԫ�ؾ��.
/// @param nTimerID    ��ʱ��ID.
#define  XE_XC_TIMER             16  //wParam:��ʱ��ID, lParam:0

/// @brief ���������¼�.
/// @code int CALLBACK OnAdjustLayout(int nFlags, BOOL *pbHandled); @endcode
#define  XE_ADJUSTLAYOUT         17

/// @brief ������������¼�.
/// @code int CALLBACK OnAdjustLayoutEnd(int nFlags, BOOL *pbHandled); @endcode
#define  XE_ADJUSTLAYOUT_END     18

/// @brief Ԫ�ػ�ý����¼�.
/// @code int CALLBACK OnSetFocus(BOOL *pbHandled); @endcode
#define  XE_SETFOCUS           31

/// @brief Ԫ��ʧȥ�����¼�.
/// @code int CALLBACK OnKillFocus(BOOL *pbHandled); @endcode
#define  XE_KILLFOCUS          32

/// @brief Ԫ�������¼�.
/// @code int CALLBACK OnDestroy(BOOL *pbHandled); @endcode
#define  XE_DESTROY            33   //Ԫ������

/// @brief ��ť����¼�.
/// @code int CALLBACK OnBtnClick(BOOL *pbHandled); @endcode
#define  XE_BNCLICK            34

/// @brief ��ťѡ���¼�.
/// @code int CALLBACK OnButtonCheck(BOOL bCheck,BOOL *pbHandled); @endcode
#define  XE_BUTTON_CHECK       35  //��ťѡ���¼�

/// @brief Ԫ�ش�С�ı��¼�.
/// @code int CALLBACK OnSize(int nFlags, BOOL *pbHandled); @endcode
#define  XE_SIZE               36

/// @brief Ԫ����ʾ�����¼�.
/// @code  int CALLBACK OnShow(BOOL bShow,BOOL *pbHandled); @endcode
#define  XE_SHOW               37  //wParam:TRUE��FALSE, lParam:0

/// @brief Ԫ�����������¼�.
/// @code  int CALLBACK OnSetFont(BOOL *pbHandled); @endcode
#define  XE_SETFONT           38

/// @brief Ԫ�ذ����¼�.
/// @code  int CALLBACK OnEventKeyDown(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note  wParam,lParam:��μ�MSDN WM_KEYDOWN. 
#define  XE_KEYDOWN            39 //wParam��lParam�������׼��Ϣ��ͬ

/// @brief Ԫ�ذ����¼�.
/// @code  int CALLBACK OnEventKeyUp(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note  wParam,lParam:��μ�MSDN WM_KEYDOWN. 
#define  XE_KEYUP             40 //wParam��lParam�������׼��Ϣ��ͬ

/// @brief ͨ��TranslateMessage����������ַ��¼�.
/// @code  int CALLBACK OnEventChar(WPARAM wParam,LPARAM lParam,BOOL *pbHandled); @endcode
/// @note   wParam,lParam:��μ�MSDN WM_KEYDOWN. 
#define  XE_CHAR               41  //wParam��lParam�μ�MSDN

/// @brief Ԫ��������겶��.
/// @code int CALLBACK OnSetCapture(BOOL *pbHandled); @endcode
#define  XE_SETCAPTURE      51

/// @brief Ԫ��ʧȥ��겶��.
/// @code int CALLBACK OnKillCapture(BOOL *pbHandled); @endcode
#define  XE_KILLCAPTURE     52

/// @brief ���������
/// @code int CALLBACK OnSetCursor(WPARAM wParam,LPARAM lParam,BOOL *pbHandled) @endcode
#define  XE_SETCURSOR            53  // SetCursor

/// @brief ������ͼԪ��ˮƽ�����¼�,������ͼ����.
/// @code  int CALLBACK OnScrollViewScrollH(int pos,BOOL *pbHandled); @endcode
/// @param pos         ��ǰ������.
#define  XE_SCROLLVIEW_SCROLL_H    54  //������ͼ �����¼� wParam:������,lParam:0 (������ͼ����,����������ͼ�ѹ������)

/// @brief ������ͼԪ�ش�ֱ�����¼�,������ͼ����.
/// @code  int CALLBACK OnScrollViewScrollV(int pos,BOOL *pbHandled); @endcode
/// @param pos         ��ǰ������.
#define  XE_SCROLLVIEW_SCROLL_V    55  //������ͼ �����¼� wParam:������,lParam:0 (������ͼ����,����������ͼ�ѹ������)

/// @brief ������Ԫ�ع����¼�,����������.
/// @code  int CALLBACK OnSBarScroll(int pos,BOOL *pbHandled); @endcode
/// @param pos   ��ǰ������.
#define  XE_SBAR_SCROLL        56   //�����������¼� wParam:������,lParam:0 (����������)

///@brief �˵�����
///@code  int CALLBACK OnMenuPopup(HMENUX hMenu, BOOL *pbHandled); @endcode
#define  XE_MENU_POPUP       57

///@brief �˵���������
///@code  int CALLBACK OnMenuPopupWnd(HMENUX hMenu,menu_popupWnd_i* pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_POPUP_WND     58

/// @brief �����˵���ѡ���¼�.
/// @code  int CALLBACK OnMenuSelect(int nItem,BOOL *pbHandled); @endcode
/// @param nItem          �˵���id.
#define  XE_MENU_SELECT      59  //�˵���ѡ�� wParam:�˵�ID,lParam:0

///@brief ���Ʋ˵�����, ���øù�����Ҫ����XMenu_EnableDrawBackground().
///@code  int CALLBACK OnMenuDrawBackground(HDRAW hDraw,menu_drawBackground_i *pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_DRAW_BACKGROUND   60 //���Ʋ˵�����

/// @brief ���Ʋ˵����¼�, ���øù�����Ҫ����XMenu_EnableDrawItem().
/// @code  int CALLBACK OnMenuDrawItem(HDRAW hDraw,menu_drawItem_i* pInfo,BOOL *pbHandled); @endcode
#define  XE_MENU_DRAWITEM    61  //���Ʋ˵��� 

/// @brief �����˵��˳��¼�.
/// @code  int CALLBACK OnMenuExit(BOOL *pbHandled); @endcode
#define  XE_MENU_EXIT        62 //�˵��˳�

/// @brief ������Ԫ��,����λ�øı��¼�.
/// @code  int CALLBACK OnSliderBarChange(int pos,BOOL *pbHandled); @endcode
#define  XE_SLIDERBAR_CHANGE   63

/// @brief ������Ԫ��,���ȸı��¼�.
/// @code  int CALLBACK OnProgressBarChange(int pos,BOOL *pbHandled); @endcode
#define  XE_PROGRESSBAR_CHANGE  64

/// @brief ��Ͽ������б���ѡ���¼�.
/// @code  int CALLBACK OnComboBoxSelect(int iItem,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_SELECT       71   //��Ͽ���ѡ��  

/// @brief ��Ͽ������б���ѡ������¼�,�༭�������Ѿ��ı�.
/// @code  int CALLBACK OnComboBoxSelectEnd(int iItem,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_SELECT_END   74   //��Ͽ���ѡ��  

/// @brief ��Ͽ������б����¼�.
/// @code  int CALLBACK OnComboBoxPopupList(HWINDOW hWindow,HELE hListBox,BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_POPUP_LIST   72

/// @brief ��Ͽ������б��˳��¼�.
/// @code  int CALLBACK OnComboBoxExitList(BOOL *pbHandled);  @endcode
#define  XE_COMBOBOX_EXIT_LIST    73

/// @brief �б��Ԫ��,��ģ�崴��.
/// @code int CALLBACK OnListBoxTemplateCreate(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_CREATE     81

/// @brief �б��Ԫ��,��ģ�崴������¼�.
/// @code int CALLBACK OnListBoxTemplateCreateEnd(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_CREATE_END     82

/// @brief �б��Ԫ��,��ģ������.
/// @code int CALLBACK OnListBoxTemplateDestroy(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_DESTROY    83

/// @brief �б��Ԫ��,��ģ���������.
/// @code  int CALLBACK OnListBoxTemplateAdjustCoordinate(listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_TEMP_ADJUST_COORDINATE  84

/// @brief �б��Ԫ��,������¼�.
/// @code  int CALLBACK OnListBoxDrawItem(HDRAW hDraw,listBox_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTBOX_DRAWITEM     85

/// @brief �б��Ԫ��,��ѡ���¼�.
/// @code  int CALLBACK OnListBoxSelect(int iItem,BOOL *pbHandled);  @endcode
#define  XE_LISTBOX_SELECT       86

/// @brief �б�Ԫ��,��ģ�崴��.
/// @code  int CALLBACK OnListTemplateCreate(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_CREATE     101

/// @brief �б�Ԫ��,��ģ�崴������¼�.
/// @code  int CALLBACK OnListTemplateCreateEnd(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_CREATE_END     102

/// @brief �б�Ԫ��,��ģ������.
/// @code int CALLBACK OnListTemplateDestroy(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_DESTROY    103

/// @brief �б�Ԫ��,��ģ���������.
/// @code  typedef int CALLBACK OnListTemplateAdjustCoordinate(list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_TEMP_ADJUST_COORDINATE  104

/// @brief �б�Ԫ��,������.
/// @code  int CALLBACK OnListDrawItem(HDRAW hDraw,list_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_DRAWITEM                105

/// @brief �б�Ԫ��,��ѡ���¼�.
/// @code  int CALLBACK OnListSelect(int iItem,BOOL *pbHandled); @endcode
#define  XE_LIST_SELECT                  106

/// @brief �б�Ԫ�ػ����б�ͷ��.
/// @code  int CALLBACK OnListHeaderDrawItem(HDRAW hDraw, list_header_item_i* pItem, BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_DRAWITEM         107

/// @brief �б�Ԫ��,�б�ͷ�����¼�.
/// @code  int CALLBACK OnListHeaderClick(int iItem, BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_CLICK            108

/// @brief �б�Ԫ��,�б�ͷ���ȸı��¼�.
/// @code  int CALLBACK OnListHeaderItemWidthChange(int iItem, int nWidth BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_WIDTH_CHANGE     109

/// @brief �б�Ԫ��,�б�ͷ��ģ�崴��.
/// @code  int CALLBACK OnListHeaderTemplateCreate(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_CREATE          110

/// @brief �б�Ԫ��,�б�ͷ��ģ�崴������¼�.
/// @code  int CALLBACK OnListHeaderTemplateCreateEnd(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_CREATE_END      111

/// @brief �б�Ԫ��,�б�ͷ��ģ������.
/// @code int CALLBACK OnListHeaderTemplateDestroy(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_DESTROY          112

/// @brief �б�Ԫ��,�б�ͷ��ģ���������.
/// @code  typedef int CALLBACK OnListHeaderTemplateAdjustCoordinate(list_header_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LIST_HEADER_TEMP_ADJUST_COORDINATE  113


/// @brief ��Ԫ��,��ģ�崴��.
/// @code  int CALLBACK OnTreeTemplateCreate(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_CREATE             121  

/// @brief ��Ԫ��,��ģ�崴�����.
/// @code  int CALLBACK OnTreeTemplateCreateEnd(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_CREATE_END         122

/// @brief ��Ԫ��,��ģ������.
/// @code  int CALLBACK OnTreeTemplateDestroy(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_DESTROY            123 

/// @brief ��Ԫ��,��ģ��,����������.
/// @code  int CALLBACK OnTreeTemplateAdjustCoordinate(tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_TEMP_ADJUST_COORDINATE  124  

/// @brief ��Ԫ��,������.
/// @code  int CALLBACK OnTreeDrawItem(HDRAW hDraw,tree_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_TREE_DRAWITEM                125  

/// @brief ��Ԫ��,��ѡ���¼�.
/// @code  int CALLBACK OnTreeSelect(int nItemID,BOOL *pbHandled); @endcode
/// @param nItemID  ��ID.
#define  XE_TREE_SELECT                 126

/// @brief ��Ԫ��,��չ�������¼�.
/// @code int CALLBACK OnTreeExpand(int id,BOOL bExpand,BOOL *pbHandled); @endcode
#define  XE_TREE_EXPAND                 127

/// @brief ��Ԫ��,�û������϶���, �ɶԲ���ֵ�޸�.
//  @code int CALLBACK OnTreeDragItemIng(tree_drag_item_i* pInfo, BOOL *pbHandled); @endcode 
#define XE_TREE_DRAG_ITEM_ING           128

/// @brief ��Ԫ��,�϶����¼�.
//  @code int CALLBACK OnTreeDragItem(tree_drag_item_i* pInfo, BOOL *pbHandled); @endcode 
#define XE_TREE_DRAG_ITEM               129

/// @brief �б���Ԫ��,��ģ�崴��.
/// @code  int CALLBACK OnListViewTemplateCreate(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_CREATE           141

/// @brief �б���Ԫ��,��ģ�崴������¼�.
/// @code  int CALLBACK OnListViewTemplateCreateEnd(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_CREATE_END           142

/// @brief �б���Ԫ��,��ģ������.
/// @code  int CALLBACK OnListViewTemplateDestroy(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_DESTROY           143

/// @brief �б���Ԫ��,��ģ���������.
/// @code  int CALLBACK OnListViewTemplateAdjustCoordinate(listView_item_i* pItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_TEMP_ADJUST_COORDINATE   144

/// @brief �б���Ԫ��,�Ի���.
/// @code int CALLBACK OnListViewDrawItem(HDRAW hDraw,listView_item_i* pItem,BOOL *pbHandled);  @endcode
#define  XE_LISTVIEW_DRAWITEM              145

/// @brief �б���Ԫ��,��ѡ���¼�.
/// @code int CALLBACK OnListViewSelect(int iGroup,int iItem,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_SELECT            146

/// @brief �б���Ԫ��,��չ�������¼�.
/// @code int CALLBACK OnListViewExpand(int iGroup,BOOL bExpand,BOOL *pbHandled); @endcode
#define  XE_LISTVIEW_EXPAND         147


/// @brief ��������Ԫ�� ��ֵ�ı��¼�
/// @code   int CALLBACK OnPGridValueChange(int nItemID,BOOL *pbHandled); @endcode
/// @param  nItemID  ��ID.
#define  XE_PGRID_VALUE_CHANGE     151

/// @code int CALLBACK OnPGridItemSet(int nItemID, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_SET          152

/// @code int CALLBACK OnPGridItemSelect(int nItemID, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_SELECT         153  //��ѡ��

/// @code int CALLBACK OnPGridItemAdjustCoordinate(propertyGrid_item_i* pItem, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_ADJUST_COORDINATE  154

/// @code int CALLBACK OnPGridItemDestroy(int nItemID, BOOL *pbHandled);  @endcode
#define XE_PGRID_ITEM_DESTROY   155

/// @code int CALLBACK OnPGridItemExpand(int nItemID, BOOL bExpand, BOOL *pbHandled); @endcode
#define XE_PGRID_ITEM_EXPAND    156

/// @brief ���ı�Ԫ�� �û��޸������¼�,ֻ�е��û�����ʱ�Żᴥ��,��Ҫ��������Ч, XRichEdit_EnableEvent_XE_RICHEDIT_CHANGE()��
/// XRichEdit_SetText()�� XRichEdit_InsertString()���ᴥ�����¼�
/// @code   int CALLBACK OnRichEditChange(BOOL *pbHandled); @endcode
#define  XE_RICHEDIT_CHANGE       161

/// @code int CALLBACK OnRichEditSet(BOOL *pbHandled);  @endcode
#define XE_RICHEDIT_SET           162


/// @brief  TabBar��ǩ��ťѡ��ı��¼�
/// @code   int CALLBACK OnTabBarSelect(int iItem, BOOL *pbHandled); @endcode
/// @param  iItem  ��ǩλ������.
#define  XE_TABBAR_SELECT    221

/// @brief  TabBar��ǩ��ťɾ���¼�
/// @code   int CALLBACK OnTabBarDelete(int iItem, BOOL *pbHandled); @endcode
/// @param  iItem  ��ǩλ������.
#define  XE_TABBAR_DELETE    222

/// @brief  ����Ԫ�����ڸı��¼�, δ����
/// @code   int CALLBACK OnCalendarChange(BOOL *pbHandled); @endcode
#define  XE_MONTHCAL_CHANGE   231   //���� ���ڸı��¼�

/// @brief  ����ʱ��Ԫ��,���ݸı��¼�, δ����
/// @code   int CALLBACK OnDateTimeChange(BOOL *pbHandled); @endcode
#define  XE_DATETIME_CHANGE    241   //����ʱ��Ԫ��  �ı��¼�

/// @brief  ����ʱ��Ԫ��,����������Ƭ�¼�, δ����
/// @code   int CALLBACK OnDateTimePopupMonthCal(HWINDOW hMonthCalWnd,HELE hMonthCal,BOOL *pbHandled); @endcode
#define  XE_DATETIME_POPUP_MONTHCAL     242   //����ʱ��Ԫ��  ���������¼�

/// @brief  ����ʱ��Ԫ��,������������Ƭ�˳��¼�, δ����
/// @code   int CALLBACK OnDateTimeExitMonthCal(HWINDOW hMonthCalWnd,HELE hMonthCal,BOOL *pbHandled); @endcode
#define  XE_DATETIME_EXIT_MONTHCAL      243   //����ʱ��Ԫ��  �˳������¼�

/// @brief  �ļ��Ϸ��¼�.
/// @code   int CALLBACK OnDropFiles(HDROP hDropInfo, BOOL *pbHandled); @endcode
#define  XE_DROPFILES                 250  

#define  XE_LISTVIEW_DRAG_INSERT
#define  XE_PANE_LOACK
#define  XE_PANE_DOCK
#define  XE_PANE_FLOAT
#define  XE_EDIT_CHANGE

///@}

///////////////////////////////////////////////////////////////////////////////////
/////////////�¼�ע��//////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
class bind_event_cpp
{
public:
	virtual BOOL  Equal(bind_event_cpp* p) = 0;
	virtual void* GetThis() = 0;
	virtual void* GetMFun(int &nSize) = 0;
	virtual int HandleEvent(int regType, HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) = 0;
	virtual int HandleEventWnd(int regType, HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) = 0;
};

template<class R, class C, class F>
class bind_event_cpp_ : public bind_event_cpp
{
public:
	bind_event_cpp_(C* c, F f) :_c(c), _f(f) { }
	virtual BOOL Equal(bind_event_cpp* p) {
		if (_c != p->GetThis())
			return FALSE;
		int size = 0;
		void*  f = p->GetMFun(size);
		if (sizeof(F) == size)
		{
			if (0 == memcmp(f, &_f, size))
				return TRUE;
		}
		return FALSE;
	}
	virtual void* GetThis() { return (void*)(int)_c; }
	virtual void* GetMFun(int &nSize) { nSize = sizeof(F); return &_f; }

	template<class H, class A1>
	int CallT(int (C::*f)(A1), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)(pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a1", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2>
	int CallT(int (C::*f)(A1, A2), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)((A1)wParam, pbHandled);
		else if (1 == regType)
			return (_c->*f)((A1)hEventEle, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a2", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2, class A3>
	int CallT(int (C::*f)(A1, A2, A3), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)((A1)wParam, (A2)lParam, pbHandled);
		else if (1 == regType)
			return (_c->*f)((A1)hEventEle, (A2)wParam, pbHandled);
		else if (2 == regType)
			return (_c->*f)((A1)hEleOrWindow, (A2)hEventEle, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a3", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2, class A3, class A4>
	int CallT(int (C::*f)(A1, A2, A3, A4), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (0 == regType)
			return (_c->*f)((A1)nEvent, (A2)wParam, (A3)lParam, pbHandled);
		if (1 == regType)
			return (_c->*f)((A1)hEventEle, (A2)wParam, (A3)lParam, pbHandled);
		else if (2 == regType)
			return (_c->*f)((A1)hEleOrWindow, (A2)hEventEle, (A3)wParam, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a4", "error", 0);
		return 0;
	}
	template<class H, class A1, class A2, class A3, class A4, class A5>
	int CallT(int (C::*f)(A1, A2, A3, A4, A5), int regType, H hEleOrWindow, H hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (1 == regType)
			return (_c->*f)((A1)hEventEle, (A2)nEvent, (A3)wParam, (A4)lParam, pbHandled);
		else if (2 == regType)
			return (_c->*f)((A1)hEleOrWindow, (A2)hEventEle, (A3)wParam, (A4)lParam, pbHandled);
		MessageBoxA(NULL, "HandleEvent_cpp_Call a5", "error", 0);
		return 0;
	}
	virtual int HandleEvent(int regType, HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		return CallT(_f, regType, hEle, hEventEle, nEvent, wParam, lParam, pbHandled);
	}
	virtual int HandleEventWnd(int regType, HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		return CallT(_f, regType, hWindow, hWindow, nEvent, wParam, lParam, pbHandled);
	}
	C*  _c;
	F   _f;
};

struct bind_event_c
{
	enum MyEnum
	{
		event_c_ex,
		event_lua_ex,
		event_js_ex,
	} type;
	virtual ~bind_event_c() {}
	virtual BOOL Equal(bind_event_c* p) { return FALSE; };
	virtual void*  GetFunc() { return nullptr; };
	virtual int HandleEvent(int regType, HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) { return 0; };
	virtual int HandleEventWnd(int regType, HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled) { return 0; };
};

struct xc_event
{
	xc_event(int regType, const char* pFunName) {
		m_pBind = 0;
		m_pFunC = 0;
		m_name[0] = 0;
		m_regType = regType;
		if (pFunName) strcpy_s(m_name, pFunName);
	}
	int            m_regType;   //ע������, 0:CPP,1:CPP1,2:CPP2
	bind_event_cpp*  m_pBind;     //C++�¼��ص�
	bind_event_c*    m_pFunC;     //C�¼��ص�
	char           m_name[MAX_PATH]; //������

	BOOL Equal(xc_event* pEvent) {
		if (m_pBind && pEvent->m_pBind)
			return (m_pBind->Equal(pEvent->m_pBind));
		if (m_pFunC && pEvent->m_pFunC)
			return (m_pFunC->Equal(pEvent->m_pFunC));
		return FALSE;
	}
	BOOL Equal(void* pFunc) {
		if (m_pFunC)
		{
			if (m_pFunC->GetFunc() == pFunc)
				return TRUE;
		}
		return FALSE;
	}
	int HandleEvent(HELE hEle, HELE hEventEle, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (m_pBind)
			return m_pBind->HandleEvent(m_regType, hEle, hEventEle, nEvent, wParam, lParam, pbHandled);
		if (m_pFunC)
			return m_pFunC->HandleEvent(m_regType, hEle, hEventEle, nEvent, wParam, lParam, pbHandled);
		MessageBoxA(NULL, "HandleEvent()", "error", 0);
		return 0;
	}
	int HandleEventWnd(HWINDOW hWindow, UINT nEvent, WPARAM wParam, LPARAM lParam, BOOL *pbHandled)
	{
		if (m_pBind)
			return m_pBind->HandleEventWnd(m_regType, hWindow, nEvent, wParam, lParam, pbHandled);
		if (m_pFunC)
			return m_pFunC->HandleEventWnd(m_regType, hWindow, nEvent, wParam, lParam, pbHandled);
		MessageBoxA(NULL, "HandleEventWnd()", "error", 0);
		return 0;
	}
	char* GetFunName() { return m_name; }
	virtual void Release() {
		if (m_pBind) delete m_pBind;
		if (m_pFunC) delete m_pFunC;
		delete this;
	}
};

template<class R, class C, class F>
BOOL XEle_RegEventCPP_tt(HXCGUI hXCGUI, UINT nEvent, int regType, BOOL bEle, C* c, F f, const char* pFunName) {
	BOOL bResult = TRUE;
	bind_event_cpp*  pBind = new bind_event_cpp_<R, C, F>(c, f);
	xc_event*  pEvent = new xc_event(regType, pFunName);
	pEvent->m_pBind = pBind;
	if (-1 == regType)
	{
		bResult = _XEle_RemoveEvent((HELE)hXCGUI, nEvent, pEvent);
		pEvent->Release();
	} else
	{
		if (bEle)
		{
			if (FALSE == _XEle_RegEvent((HELE)hXCGUI, nEvent, pEvent))
			{
				pEvent->Release();
				bResult = FALSE;
			}
		} else
		{
			if (FALSE == _XWnd_RegEvent((HWINDOW)hXCGUI, nEvent, pEvent))
			{
				pEvent->Release();
				bResult = FALSE;
			}
		}
	}
	return bResult;
}

template<class R, class C, class CT, class A1>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2, class A3>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2, A3), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2, class A3, class A4>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2, A3, A4), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

template<class R, class C, class CT, class A1, class A2, class A3, class A4, class A5>
BOOL XCGUI_RegEventCPP_t(HXCGUI hXCGUI, UINT nEvent, int type, BOOL bEle, C* c, R(CT::*f)(A1, A2, A3, A4, A5), const char* pFunName) {
	return XEle_RegEventCPP_tt<R>(hXCGUI, nEvent, type, bEle, (CT*)c, f, pFunName);
}

#define XEle_RegEventCPP(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,0,TRUE,this,mFun,#mFun)
#define XEle_RegEventCPP1(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,1,TRUE,this,mFun,#mFun)
#define XEle_RegEventCPP2(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,2,TRUE,this,mFun,#mFun)
#define XEle_RemoveEventCPP(hXCGUI,Event,mFun) XCGUI_RegEventCPP_t(hXCGUI,Event,-1,TRUE,this,mFun,#mFun)

#define XWnd_RegEventCPP(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,0,FALSE,this,mFun,#mFun)
#define XWnd_RegEventCPP1(hXCGUI,Event,mFun)  XCGUI_RegEventCPP_t(hXCGUI,Event,1,FALSE,this,mFun,#mFun)
#define XWnd_RemoveEventCPP(hXCGUI,Event,mFun) XCGUI_RegEventCPP_t(hXCGUI,Event,-1,FALSE,this,mFun,#mFun)

//hEle      �����¼���Ԫ�ؾ��
//hEventEle �����¼���Ԫ�ؾ��
//////////////////////////////////////////////////////////////////////




XC_API BOOL   WINAPI XCloudUI_Init();
XC_API BOOL   WINAPI XCloudUI_OpenApp(const wchar_t* pLocalDir, const wchar_t* pUrl);
XC_API BOOL   WINAPI XCloudUI_OpenAppCmd(const wchar_t* pCmdLine);
XC_API void   WINAPI XCloudUI_Exit();
XC_API void WINAPI XCloudUI_EnableDependBrowser(BOOL bEnable);
XC_API void WINAPI XCloudUI_EnableTipsWindow(BOOL bEnable);
XC_API BOOL  WINAPI XCloudUI_OpenUrl(const wchar_t* pUrl);
XC_API void WINAPI XCloudUI_SetEventCallback(FunCloudEvent pFun);
XC_API int  WINAPI XCloudUI_GetAppDir(out_ wchar_t* pOut, in_ int nOutlen);
XC_API HELE WINAPI XDateTime_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XDateTime_SetStyle(HELE hEle, int nStyle);
XC_API int WINAPI XDateTime_GetStyle(HELE hEle);
XC_API void WINAPI XDateTime_EnableSplitSlash(HELE hEle, BOOL bSlash);
XC_API void WINAPI XDateTime_GetTime(HELE hEle, int* pnHour, int* pnMinute, int* pnSecond);
XC_API void WINAPI XDateTime_SetTime(HELE hEle, int nHour, int nMinute, int nSecond);
XC_API void WINAPI XDateTime_GetDate(HELE hEle, int* pnYear, int* pnMonth, int* pnDay);
XC_API void WINAPI XDateTime_SetDate(HELE hEle, int nYear, int nMonth, int nDay);
XC_API COLORREF WINAPI XDateTime_GetSelBkColor(HELE hEle);
XC_API void WINAPI XDateTime_SetSelBkColor(HELE hEle, COLORREF crSelectBk, BYTE alpha = 255);
XC_API HELE WINAPI XDateTime_GetButton(HELE hEle, int nType);
XC_API HELE WINAPI XMonthCal_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XMonthCal_SetToday(HELE hEle, int nYear, int nMonth, int nDay);
XC_API void WINAPI XMonthCal_GetToday(HELE hEle, int* pnYear, int* pnMonth, int* pnDay);
XC_API void WINAPI XMonthCal_SeSelDate(HELE hEle, int nYear, int nMonth, int nDay);
XC_API void WINAPI XMonthCal_GetSelDate(HELE hEle, int* pnYear, int* pnMonth, int* pnDay);
XC_API HELE WINAPI XMonthCal_GetButton(HELE hEle, monthCal_button_type_ nType);
XC_API BOOL WINAPI XC_InitJS();
XC_API void WINAPI XC_ExitJS();
XC_API BOOL WINAPI XC_RunJS(const char* pJsFile);
XC_API lua_State* WINAPI XC_InitLua();
XC_API BOOL WINAPI XC_RunLua(const char*  pLuaFile);
XC_API BOOL WINAPI XC_ExitLua();
XC_API int WINAPI XC_UnicodeToAnsi(const wchar_t *pIn, int inLen, char *pOut, int outLen);
XC_API int WINAPI XC_AnsiToUnicode(const char *pIn, int inLen, wchar_t *pOut, int outLen);
XC_API int     WINAPI XC_MessageBox(HWINDOW hWindow, const wchar_t* pText, const wchar_t* pCaption, int nFlags);
XC_API LRESULT WINAPI XC_SendMessage(HWINDOW hWindow, UINT msg, WPARAM wParam, LPARAM lParam);
XC_API BOOL    WINAPI XC_PostMessage(HWINDOW hWindow, UINT msg, WPARAM wParam, LPARAM lParam);
XC_API const char*    WINAPI XC_itoa(int nValue);
XC_API const wchar_t* WINAPI XC_itow(int nValue);
XC_API const char*    WINAPI XC_ftoa(float fValue);
XC_API const wchar_t* WINAPI XC_ftow(float fValue);
XC_API const wchar_t* WINAPI XC_atow(const char* pValue);
XC_API const char*    WINAPI XC_wtoa(const wchar_t* pValue);
XC_API const wchar_t* WINAPI XC_utf8tow(const char* pUtf8);
XC_API const wchar_t* WINAPI XC_utf8towEx(const char* pUtf8, int length);
XC_API const char*    WINAPI XC_utf8toa(const char* pUtf8);
XC_API const char*    WINAPI XC_atoutf8(const char* pValue);
XC_API void WINAPI XC_DebugToFileInfo(const char *pInfo);//��ӡ������Ϣ���ļ� xcgui_debug.txt
XC_API BOOL WINAPI XC_IsHELE(HXCGUI hEle); //�����
XC_API BOOL WINAPI XC_IsHWINDOW(HXCGUI hWindow); //�����
XC_API BOOL WINAPI XC_IsShape(HXCGUI hShape); //�����
XC_API BOOL WINAPI XC_IsHXCGUI(HXCGUI hXCGUI, XC_OBJECT_TYPE nType);
XC_API HWINDOW WINAPI XC_hWindowFromHWnd(HWND hWnd);
XC_API BOOL WINAPI XC_SetProperty(HXCGUI hXCGUI, const wchar_t* pName, const wchar_t* pValue);
XC_API const wchar_t* WINAPI XC_GetProperty(HXCGUI hXCGUI, const wchar_t* pName);
XC_API BOOL WINAPI XC_RegisterWindowClassName(const wchar_t* pClassName); //ע�ᴰ������
XC_API BOOL WINAPI XC_IsSViewExtend(HELE hEle);  //�ж�Ԫ���Ƿ�ӹ�����ͼԪ����չ����Ԫ��,����������ͼԪ��
XC_API XC_OBJECT_TYPE WINAPI XC_GetObjectType(HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XC_GetObjectByID(HWINDOW hWindow, int nID); //ͨ��ID��ȡ������
XC_API HXCGUI WINAPI XC_GetObjectByIDName(HWINDOW hWindow, const wchar_t*  pName);
XC_API HXCGUI WINAPI XC_GetObjectByUID(int nUID);
XC_API HXCGUI WINAPI XC_GetObjectByUIDName(const wchar_t*  pName);
XC_API HXCGUI WINAPI XC_GetObjectByName(const wchar_t*  pName);
XC_API void WINAPI XC_SetPaintFrequency(int nMilliseconds); //����UI����Ƶ��
XC_API void WINAPI XC_SetTextRenderingHint(int  nType);   //�����ı���Ⱦ����
XC_API BOOL WINAPI XC_RectInRect(RECT *pRect1, RECT *pRect2);
XC_API void WINAPI XC_CombineRect(RECT *pDest, RECT *pSrc1, RECT *pSrc2);
XC_API void WINAPI XC_ShowLayoutFrame(BOOL bShow);
XC_API void WINAPI XC_EnableDebugFile(BOOL bEnable);
XC_API void WINAPI XC_EnableResMonitor(BOOL bEnable);
XC_API void WINAPI XC_SetLayoutFrameColor(COLORREF color);
XC_API void WINAPI XC_EnableErrorMessageBox(BOOL bEnabel);
XC_API void WINAPI XC_EnableAutoExitApp(BOOL bEnabel);
XC_API HXCGUI WINAPI XC_LoadLayout(const wchar_t *pFileName, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutZip(const wchar_t *pZipFileName, const wchar_t *pFileName, const wchar_t* pPassword = NULL, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XC_LoadLayoutFromString(const char *pStringXML, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XC_LoadResource(const wchar_t *pFileName, const wchar_t *pDir = NULL);
XC_API BOOL WINAPI XC_LoadResourceZip(const wchar_t *pZipFileName, const wchar_t *pFileName, const wchar_t* pPassword = NULL);
XC_API BOOL WINAPI XC_LoadResourceFromString(const char *pStringXML, const wchar_t* pFileName, const wchar_t *pDir = NULL);
XC_API BOOL WINAPI XC_LoadStyle(const wchar_t *pFileName, const wchar_t *pDir = NULL);
XC_API void WINAPI XC_GetTextSize(const wchar_t* pString, int length, HFONTX hFontX, out_ SIZE* pOutSize);
XC_API void WINAPI XC_GetTextShowSize(const wchar_t* pString, int length, HFONTX hFontX, out_ SIZE* pOutSize);
XC_API HFONTX WINAPI XC_GetDefaultFont(); //��ȡĬ������
XC_API void   WINAPI XC_SetDefaultFont(HFONTX hFontX); //����Ĭ������
XC_API void  WINAPI XC_AddFileSearchPath(const wchar_t* pPath);
XC_API void  WINAPI XC_InitFont(LOGFONTW *pFont, wchar_t *pName, int size, BOOL bBold = FALSE, BOOL bItalic = FALSE, BOOL bUnderline = FALSE, BOOL bStrikeOut = FALSE);
XC_API  void* WINAPI XC_Malloc(int size);
XC_API  void  WINAPI XC_Free(void *p);
XC_API void WINAPI _XC_SetType(HXCGUI hXCGUI, XC_OBJECT_TYPE nType);
XC_API void WINAPI _XC_AddType(HXCGUI hXCGUI, XC_OBJECT_TYPE nType);
XC_API void WINAPI _XC_BindData(HXCGUI hXCGUI, int data);
XC_API int  WINAPI _XC_GetBindData(HXCGUI hXCGUI);
XC_API void WINAPI  XC_Alert(const wchar_t* pText, const wchar_t* pTitle);
XC_API void* WINAPI XC_Sys_ShellExecute(HWND hwnd, const wchar_t* lpOperation, const wchar_t* lpFile, const wchar_t* lpParameters, const wchar_t* lpDirectory, int nShowCmd);
XC_API BOOL WINAPI XInitXCGUI(wchar_t *pText = NULL);
XC_API void WINAPI XRunXCGUI();
XC_API void WINAPI XExitXCGUI();
XC_API void WINAPI XC_PostQuitMessage(int nExitCode);
XC_API XC_OBJECT_TYPE    WINAPI XObj_GetType(HXCGUI hXCGUI);
XC_API XC_OBJECT_TYPE    WINAPI XObj_GetTypeBase(HXCGUI hXCGUI);
XC_API XC_OBJECT_TYPE_EX WINAPI XObj_GetTypeEx(HXCGUI hXCGUI);
XC_API void              WINAPI XUI_SetStyle(HXCGUI hXCGUI, XC_OBJECT_STYLE nStyle);
XC_API XC_OBJECT_STYLE   WINAPI XUI_GetStyle(HXCGUI hXCGUI);
XC_API BOOL   WINAPI XWidget_IsShow(HXCGUI hXCGUI);
XC_API void   WINAPI XWidget_Show(HXCGUI hXCGUI, BOOL bShow);
XC_API HELE   WINAPI XWidget_GetParentEle(HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XWidget_GetParent(HXCGUI hXCGUI);
XC_API HWND   WINAPI XWidget_GetHWND(HXCGUI hXCGUI);
XC_API HWINDOW WINAPI XWidget_GetHWINDOW(HXCGUI hXCGUI);
XC_API HBKM WINAPI XBkM_Create();
XC_API void WINAPI XBkM_Destroy(HBKM hBkInfoM);
XC_API int  WINAPI XBkM_SetBkInfo(HBKM hBkInfoM, const wchar_t *pText);
XC_API int  WINAPI XBkM_AddInfo(HBKM hBkInfoM, const wchar_t *pText);
XC_API void WINAPI XBkM_AddBorder(HBKM hBkInfoM, int nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XBkM_AddFill(HBKM hBkInfoM, int nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XBkM_AddImage(HBKM hBkInfoM, int nState, HIMAGE hImage);
XC_API int  WINAPI XBkM_GetCount(HBKM hBkInfoM);
XC_API void WINAPI XBkM_Clear(HBKM hBkInfoM);
XC_API BOOL WINAPI XBkM_Draw(HBKM hBkInfoM, int nState, HDRAW hDraw, RECT* pRect);
XC_API BOOL WINAPI XBkM_DrawEx(HBKM hBkInfoM, int nState, HDRAW hDraw, RECT* pRect, int nStateEx);
XC_API HELE WINAPI XBtn_Create(int x, int y, int cx, int cy, const wchar_t *pName, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XBtn_IsCheck(HELE hEle); //��ť�Ƿ�ѡ��
XC_API BOOL WINAPI XBtn_SetCheck(HELE hEle, BOOL bCheck);
XC_API void WINAPI XBtn_SetState(HELE hEle, common_state3_ nState);
XC_API common_state3_  WINAPI XBtn_GetState(HELE hEle);
XC_API button_state_   WINAPI XBtn_GetStateEx(HELE hEle);
XC_API void WINAPI XBtn_SetStyle(HELE hEle, XC_OBJECT_STYLE  nStyle);
XC_API XC_OBJECT_STYLE  WINAPI XBtn_GetStyle(HELE hEle);
XC_API void WINAPI XBtn_SetType(HELE hEle, XC_OBJECT_TYPE_EX nType);
XC_API void WINAPI XBtn_SetTypeEx(HELE hEle, XC_OBJECT_TYPE_EX nType);
XC_API XC_OBJECT_TYPE_EX  WINAPI XBtn_GetType(HELE hEle);
XC_API void WINAPI XBtn_SetGroupID(HELE hEle, int nID);
XC_API int  WINAPI XBtn_GetGroupID(HELE hEle);
XC_API void WINAPI XBtn_SetBindEle(HELE hEle, HELE hBindEle);
XC_API HELE WINAPI XBtn_GetBindEle(HELE hEle);
XC_API void WINAPI XBtn_SetTextAlign(HELE hEle, int nFlags);
XC_API int  WINAPI XBtn_GetTextAlign(HELE hEle);
XC_API void WINAPI XBtn_SetIconAlign(HELE hEle, button_icon_align_ align);
XC_API void WINAPI XBtn_SetOffset(HELE hEle, int x, int y);
XC_API void WINAPI XBtn_SetOffsetIcon(HELE hEle, int x, int y);
XC_API void WINAPI XBtn_SetIconSpace(HELE hEle, int size);
XC_API void WINAPI XBtn_GetText(HELE hEle, out_ wchar_t *pOut, int nOutLen);
XC_API void WINAPI XBtn_SetText(HELE hEle, in_ const wchar_t *pName);
XC_API void WINAPI XBtn_SetIcon(HELE hEle, HIMAGE hImage);
XC_API void WINAPI XBtn_SetIconDisable(HELE hEle, HIMAGE hImage);
XC_API HIMAGE WINAPI XBtn_GetIcon(HELE hEle, int nType);
XC_API void WINAPI XBtn_AddAnimationFrame(HELE hEle, HIMAGE hImage, UINT uElapse);
XC_API void WINAPI XBtn_EnableAnimation(HELE hEle, BOOL bEnable, BOOL bLoopPlay = FALSE);
XC_API void WINAPI XBtn_AddBkBorder(HELE hEle, button_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XBtn_AddBkFill(HELE hEle, button_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XBtn_AddBkImage(HELE hEle, button_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XBtn_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XBtn_ClearBkInfo(HELE hEle);
XC_API HELE WINAPI XComboBox_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL  WINAPI XComboBox_SetSelItem(HELE hEle, int iIndex);
XC_API void WINAPI XComboBox_GetButtonRect(HELE hEle, out_ RECT* pRect);
XC_API void WINAPI XComboBox_SetButtonSize(HELE hEle, int size);
XC_API void WINAPI XComboBox_SetDropHeight(HELE hEle, int height); //���������б�߶�
XC_API int  WINAPI XComboBox_GetDropHeight(HELE hEle);
XC_API void WINAPI XComboBox_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XComboBox_GetAdapter(HELE hEle);
XC_API void WINAPI XComboBox_SetBindName(HELE hEle, const wchar_t*  pName);
XC_API void WINAPI XComboBox_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API void WINAPI XComboBox_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API void WINAPI XComboBox_EnableDrawButton(HELE hEle, BOOL bEnable);
XC_API void WINAPI XComboBox_EnableEdit(HELE hEle, BOOL bEdit);  //�����༭����
XC_API void WINAPI XComboBox_EnableDropHeightFixed(HELE hEle, BOOL bEnable);
XC_API void WINAPI XComboBox_AddBkBorder(HELE hEle, comboBox_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XComboBox_AddBkFill(HELE hEle, comboBox_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XComboBox_AddBkImage(HELE hEle, comboBox_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XComboboX_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XComboBox_ClearBkInfo(HELE hEle);
XC_API int WINAPI XComboBox_GetSelItem(HELE hEle);
XC_API comboBox_state_ WINAPI XComboBox_GetState(HELE hEle);
XC_API void WINAPI XAd_Destroy(HXCGUI hAdapter);
XC_API HXCGUI WINAPI XAdListView_Create();
XC_API int  WINAPI XAdListView_Group_AddColumn(HXCGUI hAdapter, const wchar_t *pName);
XC_API int  WINAPI XAdListView_Group_AddItemText(HXCGUI hAdapter, const wchar_t *pValue);
XC_API int  WINAPI XAdListView_Group_AddItemTextEx(HXCGUI hAdapter, const wchar_t* pName, const wchar_t *pValue);
XC_API int  WINAPI XAdListView_Group_AddItemImage(HXCGUI hAdapter, HIMAGE hImage);
XC_API int  WINAPI XAdListView_Group_AddItemImageEx(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Group_SetText(HXCGUI hAdapter, int iGroup, int iColumn, const wchar_t *pValue);
XC_API BOOL WINAPI XAdListView_Group_SetTextEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, const wchar_t *pValue);
XC_API BOOL WINAPI XAdListView_Group_SetImage(HXCGUI hAdapter, int iGroup, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Group_SetImageEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, HIMAGE hImage);
XC_API int  WINAPI XAdListView_Group_GetCount(HXCGUI hAdapter);
XC_API int  WINAPI XAdListView_Item_GetCount(HXCGUI hAdapter, int iGroup);
XC_API int  WINAPI XAdListView_Item_AddColumn(HXCGUI hAdapter, const wchar_t *pName);  //������
XC_API int  WINAPI XAdListView_Item_AddItemText(HXCGUI hAdapter, int iGroup, const wchar_t *pValue);
XC_API int  WINAPI XAdListView_Item_AddItemTextEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, const wchar_t *pValue);
XC_API int  WINAPI XAdListView_Item_AddItemImage(HXCGUI hAdapter, int iGroup, HIMAGE hImage);
XC_API int  WINAPI XAdListView_Item_AddItemImageEx(HXCGUI hAdapter, int iGroup, const wchar_t *pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Item_SetText(HXCGUI hAdapter, int iGroup, int iItem, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XAdListView_Item_SetTextEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t *pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdListView_Item_SetImage(HXCGUI hAdapter, int iGroup, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Item_SetImageEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t *pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdListView_Group_DeleteItem(HXCGUI hAdapter, int iGroup);
XC_API void WINAPI XAdListView_Group_DeleteAllChildItem(HXCGUI hAdapter, int iGroup);
XC_API BOOL WINAPI XAdListView_Item_DeleteItem(HXCGUI hAdapter, int iGroup, int iItem);
XC_API void WINAPI XAdListView_DeleteAll(HXCGUI hAdapter);
XC_API void WINAPI XAdListView_DeleteAllGroup(HXCGUI hAdapter);
XC_API void WINAPI XAdListView_DeleteAllItem(HXCGUI hAdapter);
XC_API void WINAPI XAdListView_DeleteColumnGroup(HXCGUI hAdapter, int iColumn);
XC_API void WINAPI XAdListView_DeleteColumnItem(HXCGUI hAdapter, int iColumn);
XC_API BOOL WINAPI XAdListView_Item_GetTextEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t* pName, out_ wchar_t* pOut, int nOutLen);
XC_API HIMAGE WINAPI XAdListView_Item_GetImageEx(HXCGUI hAdapter, int iGroup, int iItem, const wchar_t* pName);
XC_API HXCGUI WINAPI XAdTable_Create();
XC_API void   WINAPI XAdTable_Sort(HXCGUI hAdapter, int iColumn, BOOL bAscending);  //����
XC_API adapter_date_type_  WINAPI XAdTable_GetItemDataType(HXCGUI hAdapter, int iItem, int iColumn);
XC_API adapter_date_type_  WINAPI XAdTable_GetItemDataTypeEx(HXCGUI hAdapter, int iItem, const wchar_t* pName);
XC_API int WINAPI XAdTable_AddColumn(HXCGUI hAdapter, const wchar_t* pName);
XC_API int WINAPI XAdTable_SetColumn(HXCGUI hAdapter, const wchar_t*  pColName);
XC_API int WINAPI XAdTable_AddItemText(HXCGUI hAdapter, const wchar_t* pValue);
XC_API int WINAPI XAdTable_AddItemTextEx(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XAdTable_AddItemImage(HXCGUI hAdapter, HIMAGE hImage);
XC_API int WINAPI XAdTable_AddItemImageEx(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API int WINAPI XAdTable_InsertItemText(HXCGUI hAdapter, int iItem, const wchar_t* pValue);
XC_API int WINAPI XAdTable_InsertItemTextEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API int WINAPI XAdTable_InsertItemImage(HXCGUI hAdapter, int iItem, HIMAGE hImage);
XC_API int WINAPI XAdTable_InsertItemImageEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdTable_SetItemText(HXCGUI hAdapter, int iItem, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTable_SetItemTextEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTable_SetItemInt(HXCGUI hAdapter, int iItem, int iColumn, int nValue);
XC_API BOOL WINAPI XAdTable_SetItemIntEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, int nValue);
XC_API BOOL WINAPI XAdTable_SetItemFloat(HXCGUI hAdapter, int iItem, int iColumn, float nValue);
XC_API BOOL WINAPI XAdTable_SetItemFloatEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, float nValue);
XC_API BOOL WINAPI XAdTable_SetItemImage(HXCGUI hAdapter, int iItem, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdTable_SetItemImageEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdTable_DeleteItem(HXCGUI hAdapter, int iItem);
XC_API BOOL WINAPI XAdTable_DeleteItemEx(HXCGUI hAdapter, int iItem, int nCount);
XC_API void WINAPI XAdTable_DeleteItemAll(HXCGUI hAdapter);
XC_API void WINAPI XAdTable_DeleteColumnAll(HXCGUI hAdapter);
XC_API int WINAPI XAdTable_GetCount(HXCGUI hAdapter);
XC_API int WINAPI XAdTable_GetCountColumn(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdTable_GetItemText(HXCGUI hAdapter, int iItem, int iColumn, out_ wchar_t* pOut, int nOutLen);
XC_API BOOL WINAPI XAdTable_GetItemTextEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, out_ wchar_t* pOut, int nOutLen);
XC_API HIMAGE WINAPI XAdTable_GetItemImage(HXCGUI hAdapter, int iItem, int iColumn);
XC_API HIMAGE WINAPI XAdTable_GetItemImageEx(HXCGUI hAdapter, int iItem, const wchar_t* pName);
XC_API BOOL WINAPI XAdTable_GetItemInt(HXCGUI hAdapter, int iItem, int iColumn, out_ int* pOutValue);
XC_API BOOL WINAPI XAdTable_GetItemIntEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, out_ int* pOutValue);
XC_API BOOL WINAPI XAdTable_GetItemFloat(HXCGUI hAdapter, int iItem, int iColumn, out_ float* pOutValue);
XC_API BOOL WINAPI XAdTable_GetItemFloatEx(HXCGUI hAdapter, int iItem, const wchar_t* pName, out_ float* pOutValue);
XC_API HXCGUI WINAPI XAdTree_Create();
XC_API int WINAPI XAdTree_AddColumn(HXCGUI hAdapter, const wchar_t* pName);
XC_API int WINAPI XAdTree_SetColumn(HXCGUI hAdapter, const wchar_t* pColName);
XC_API int WINAPI XAdTree_InsertItemText(HXCGUI hAdapter, const wchar_t* pValue, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_InsertItemTextEx(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_InsertItemImage(HXCGUI hAdapter, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_InsertItemImageEx(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST);
XC_API int WINAPI XAdTree_GetCount(HXCGUI hAdapter);
XC_API int WINAPI XAdTree_GetCountColumn(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdTree_SetItemText(HXCGUI hAdapter, int nID, int iColumn, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTree_SetItemTextEx(HXCGUI hAdapter, int nID, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdTree_SetItemImage(HXCGUI hAdapter, int nID, int iColumn, HIMAGE hImage);
XC_API BOOL WINAPI XAdTree_SetItemImageEx(HXCGUI hAdapter, int nID, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdTree_GetItemText(HXCGUI hAdapter, int nID, int iColumn, out_ wchar_t* pOut, int nOutLen);
XC_API HIMAGE WINAPI XAdTree_GetItemImage(HXCGUI hAdapter, int nID, int iColumn);
XC_API BOOL WINAPI XAdTree_GetItemTextEx(HXCGUI hAdapter, int nID, const wchar_t* pName, out_ wchar_t* pOut, int nOutLen);
XC_API HIMAGE WINAPI XAdTree_GetItemImageEx(HXCGUI hAdapter, int nID, const wchar_t* pName);
XC_API BOOL WINAPI XAdTree_DeleteItem(HXCGUI hAdapter, int nID);
XC_API void WINAPI XAdTree_DeleteItemAll(HXCGUI hAdapter);
XC_API void WINAPI XAdTree_DeleteColumnAll(HXCGUI hAdapter);
XC_API HXCGUI WINAPI XAdMap_Create();
XC_API BOOL WINAPI XAdMap_AddItemText(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdMap_AddItemImage(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API BOOL WINAPI XAdMap_DeleteItem(HXCGUI hAdapter, const wchar_t* pName);
XC_API int  WINAPI XAdMap_GetCount(HXCGUI hAdapter);
XC_API BOOL WINAPI XAdMap_GetItemText(HXCGUI hAdapter, const wchar_t* pName, out_ wchar_t* pOut, int nOutLen);
XC_API HIMAGE WINAPI XAdMap_GetItemImage(HXCGUI hAdapter, const wchar_t* pName);
XC_API BOOL WINAPI XAdMap_SetItemText(HXCGUI hAdapter, const wchar_t* pName, const wchar_t* pValue);
XC_API BOOL WINAPI XAdMap_SetItemImage(HXCGUI hAdapter, const wchar_t* pName, HIMAGE hImage);
XC_API void WINAPI _XC_DebugPrintf(int  level, const char *pFormat, ...);
XC_API void WINAPI _XC_DebugPrintfW(int  level, const wchar_t *pFormat, ...);
XC_API void WINAPI xtrace(const char *pFormat, ...);
XC_API void WINAPI xtracew(const wchar_t *pFormat, ...);
XC_API HDRAW WINAPI XDraw_Create(HDC hdc); //����
XC_API void  WINAPI XDraw_Destroy(HDRAW hDraw); //����
XC_API void  WINAPI XDraw_SetOffset(HDRAW hDraw, int x, int y); //��������ƫ����
XC_API void  WINAPI XDraw_GetOffset(HDRAW hDraw, out_ int *pX, out_ int *pY); //��ȡ����ƫ����
XC_API void  WINAPI XDraw_RestoreGDIOBJ(HDRAW hDraw);  //��ԭ״̬,�ͷ��û��󶨵�GDI����
XC_API HDC   WINAPI XDraw_GetHDC(HDRAW hDraw);
XC_API void WINAPI XDraw_SetBrushColor(HDRAW hDraw, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XDraw_SetTextAlign(HDRAW hDraw, int nFlag);
XC_API void WINAPI XDraw_SetTextVertical(HDRAW hDraw, BOOL bVertical);
XC_API void WINAPI XDraw_SetFontX(HDRAW hDraw, HFONTX  hFontx);
XC_API void WINAPI XDraw_SetLineWidth(HDRAW hDraw, int nWidth);
XC_API int  WINAPI XDraw_SetBkMode(HDRAW hDraw, BOOL bTransparent);
XC_API void WINAPI XDraw_SetClipRect(HDRAW hDraw, RECT*  pRect);
XC_API void WINAPI XDraw_ClearClip(HDRAW hDraw);
XC_API void WINAPI XDraw_EnableSmoothingMode(HDRAW hDraw, BOOL  bEnable);   //����ƽ��ģʽ
XC_API HBRUSH WINAPI XDraw_CreateSolidBrush(HDRAW hDraw, COLORREF crColor);
XC_API HPEN WINAPI XDraw_CreatePen(HDRAW hDraw, int fnPenStyle, int nWidth, COLORREF crColor);
XC_API HRGN WINAPI XDraw_CreateRectRgn(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);
XC_API HRGN WINAPI XDraw_CreateRoundRectRgn(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect, int nWidthEllipse, int nHeightEllipse);
XC_API HRGN WINAPI XDraw_CreatePolygonRgn(HDRAW hDraw, POINT *pPt, int cPoints, int fnPolyFillMode);
XC_API int WINAPI XDraw_SelectClipRgn(HDRAW hDraw, HRGN hRgn);
XC_API void WINAPI XDraw_FillRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FillRectColor(HDRAW hDraw, RECT *pRect, COLORREF color, BYTE alpha = 255);
XC_API BOOL WINAPI XDraw_FillRgn(HDRAW hDraw, HRGN hrgn, HBRUSH hbr);
XC_API void WINAPI XDraw_FillEllipse(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_DrawEllipse(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FillRoundRect(HDRAW hDraw, RECT *pRect, int nWidth, int nHeight); //���Բ�Ǿ���
XC_API void WINAPI XDraw_DrawRoundRect(HDRAW hDraw, RECT *pRect, int nWidth, int nHeight); //����Բ�Ǿ��α߿�
XC_API void WINAPI XDraw_FillRoundRectEx(HDRAW hDraw, RECT *pRect, int nLeftTop, int nRightTop, int nRightBottom, int nLeftBottom); //���Բ�Ǿ���
XC_API void WINAPI XDraw_DrawRoundRectEx(HDRAW hDraw, RECT *pRect, int nLeftTop, int nRightTop, int nRightBottom, int nLeftBottom); //����Բ�Ǿ��α߿�
XC_API BOOL WINAPI XDraw_Rectangle(HDRAW hDraw, int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);
XC_API void WINAPI XDraw_DrawGroupBox_Rect(HDRAW hDraw, RECT *pRect, const wchar_t* pName, COLORREF textColor, BYTE textAlpha, POINT* pOffset);
XC_API void WINAPI XDraw_DrawGroupBox_RoundRect(HDRAW hDraw, RECT *pRect, const wchar_t* pName, COLORREF textColor, BYTE textAlpha, POINT* pOffset, int nWidth, int nHeight);
XC_API void WINAPI XDraw_GradientFill2(HDRAW hDraw, COLORREF color1, BYTE alpha1, COLORREF color2, BYTE alpha2, RECT *pRect, int mode);
XC_API BOOL WINAPI XDraw_GradientFill4(HDRAW hDraw, COLORREF color1, COLORREF color2, COLORREF color3, COLORREF color4, RECT *pRect, int mode);
XC_API BOOL WINAPI XDraw_FrameRgn(HDRAW hDraw, HRGN hrgn, HBRUSH hbr, int nWidth, int nHeight);
XC_API void  WINAPI XDraw_FrameRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_FocusRect(HDRAW hDraw, RECT *pRect);
XC_API void WINAPI XDraw_DrawLine(HDRAW hDraw, int x1, int y1, int x2, int y2);
XC_API BOOL WINAPI XDraw_MoveToEx(HDRAW hDraw, int X, int Y, LPPOINT lpPoint = NULL);
XC_API BOOL WINAPI XDraw_LineTo(HDRAW hDraw, int nXEnd, int nYEnd);
XC_API BOOL WINAPI XDraw_Polyline(HDRAW hDraw, in_ POINT *pArrayPt, int arrayPtSize);
XC_API void WINAPI XDraw_Dottedline(HDRAW hDraw, int x1, int y1, int x2, int y2);  //��������
XC_API COLORREF WINAPI XDraw_SetPixel(HDRAW hDraw, int X, int Y, COLORREF crColor);
XC_API void WINAPI XDraw_Check(HDRAW hDraw, int x, int y, COLORREF color, BOOL bCheck);
XC_API BOOL WINAPI XDraw_DrawIconEx(HDRAW hDraw, int xLeft, int yTop, HICON hIcon, int cxWidth, int cyWidth, UINT istepIfAniCur, HBRUSH hbrFlickerFreeDraw, UINT diFlags);
XC_API BOOL WINAPI XDraw_BitBlt(HDRAW hDrawDest, int nXDest, int nYDest, int nWidth, int nHeight, HDC hdcSrc, int nXSrc, int nYSrc, DWORD dwRop);
XC_API BOOL WINAPI XDraw_BitBlt2(HDRAW hDrawDest, int nXDest, int nYDest, int nWidth, int nHeight, HDRAW hDrawSrc, int nXSrc, int nYSrc, DWORD dwRop);
XC_API BOOL WINAPI XDraw_AlphaBlend(HDRAW hDraw, int nXOriginDest, int nYOriginDest, int nWidthDest, int nHeightDest, HDC hdcSrc, int nXOriginSrc, int nYOriginSrc, int nWidthSrc, int nHeightSrc, int alpha);
XC_API void WINAPI XDraw_TriangularArrow(HDRAW hDraw, int align, int x, int y, int width, int height);
XC_API void WINAPI XDraw_DrawPolygon(HDRAW hDraw, in_ POINT *points, int nCount);
XC_API void WINAPI XDraw_DrawPolygonF(HDRAW hDraw, in_ POINTF *points, int nCount);
XC_API void WINAPI XDraw_FillPolygon(HDRAW hDraw, in_ POINT *points, int nCount);
XC_API void WINAPI XDraw_FillPolygonF(HDRAW hDraw, in_ POINTF *points, int nCount);
XC_API void WINAPI XDraw_Image(HDRAW hDraw, HIMAGE hImageFrame, int x, int y);
XC_API void WINAPI XDraw_Image2(HDRAW hDraw, HIMAGE hImageFrame, int x, int y, int width, int height);
XC_API void WINAPI XDraw_ImageStretch(HDRAW hDraw, HIMAGE hImageFrame, int x, int y, int width, int height);
XC_API void WINAPI XDraw_ImageAdaptive(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRect, BOOL bOnlyBorder = FALSE);
XC_API void WINAPI XDraw_ImageExTile(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRect, int flag = 0);
XC_API void WINAPI XDraw_ImageSuper(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRect, BOOL bClip = FALSE);
XC_API void WINAPI XDraw_ImageSuper2(HDRAW hDraw, HIMAGE hImageFrame, RECT *pRcDest, RECT *pSrcRect);
XC_API void WINAPI XDraw_ImageSuperMask(HDRAW hDraw, HIMAGE hImageFrame, HIMAGE hImageFrameMask, RECT *pRect, RECT *pRectMask, BOOL bClip = FALSE);
XC_API void WINAPI XDraw_ImageMask(HDRAW hDraw, HIMAGE hImageFrame, HIMAGE hImageFrameMask, int x, int y, int x2, int y2);
XC_API void WINAPI XDraw_DrawText(HDRAW hDraw, const wchar_t * lpString, int nCount, RECT* lpRect);
XC_API void WINAPI XDraw_DrawTextUnderline(HDRAW hDraw, const wchar_t * lpString, int nCount, RECT* lpRect, COLORREF colorLine, BYTE alphaLine = 255);
XC_API void WINAPI XDraw_TextOut(HDRAW hDraw, int nXStart, int nYStart, const wchar_t * lpString, int cbString);
XC_API void WINAPI XDraw_TextOutEx(HDRAW hDraw, int nXStart, int nYStart, const wchar_t * lpString);
XC_API void WINAPI XDraw_TextOutA(HDRAW hDraw, int nXStart, int nYStart, const char * lpString);
XC_API void WINAPI XDraw_SetAlpha(HDRAW hDraw, BYTE alpha);  //����͸��ͨ����
XC_API void WINAPI XDraw_SetAlphaEx(HDC hdc, BYTE alpha);  //����͸��ͨ����
XC_API HELE WINAPI XEle_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL WINAPI _XEle_RegEvent(HELE hEle, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI _XEle_RemoveEvent(HELE hEle, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI XEle_RegEventC(HELE hEle, int nEvent, void *pFun); //ע���¼�C��ʽ
XC_API BOOL WINAPI XEle_RegEventC1(HELE hEle, int nEvent, void *pFun);
XC_API BOOL WINAPI XEle_RegEventC2(HELE hEle, int nEvent, void *pFun);
XC_API BOOL WINAPI XEle_RemoveEventC(HELE hEle, int nEvent, void *pFun); //�Ƴ��¼�����C��ʽ
XC_API int  WINAPI XEle_SendEvent(HELE hEle, HELE hEventEle, int nEvent, WPARAM wParam, LPARAM lParam);
XC_API BOOL WINAPI XEle_PostEvent(HELE hEle, HELE hEventEle, int nEvent, WPARAM wParam, LPARAM lParam);
XC_API BOOL WINAPI XEle_IsShow(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnable(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnableFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsDrawFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnableEvent_XE_PAINT_END(HELE hEle);
XC_API BOOL WINAPI XEle_IsMouseThrough(HELE hEle);
XC_API BOOL WINAPI XEle_IsBkTransparent(HELE hEle);
XC_API BOOL WINAPI XEle_IsKeyTab(HELE hEle);
XC_API BOOL WINAPI XEle_IsSwitchFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsEnable_XE_MOUSEWHEEL(HELE hEle);
XC_API BOOL WINAPI XEle_IsChildEle(HELE hEle, HELE hChildEle);
XC_API BOOL WINAPI XEle_IsEnableCanvas(HELE hEle);
XC_API BOOL WINAPI XEle_IsFocus(HELE hEle);
XC_API BOOL WINAPI XEle_IsFocusEx(HELE hEle);
XC_API void WINAPI XEle_Enable(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableDrawFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableDrawBorder(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableCanvas(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableEvent_XE_PAINT_END(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableBkTransparent(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableMouseThrough(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableKeyTab(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableSwitchFocus(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_EnableEvent_XE_MOUSEWHEEL(HELE hEle, BOOL bEnable);
XC_API int  WINAPI XEle_SetRect(HELE hEle, RECT *pRect, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all);
XC_API int  WINAPI XEle_SetRectEx(HELE hEle, int x, int y, int cx, int cy, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all);
XC_API int  WINAPI XEle_SetRectLogic(HELE hEle, RECT *pRect, BOOL bRedraw = FALSE, int nFlags = xc_adjustLayout_all); //�߼�ģʽ����
XC_API void WINAPI XEle_GetRect(HELE hEle, RECT *pRect);   //����븸����,���۹۲�ģʽ
XC_API void WINAPI XEle_GetRectLogic(HELE hEle, RECT *pRect); //����븸����,�߼�ģʽ
XC_API void WINAPI XEle_GetClientRect(HELE hEle, RECT *pRect);  //���Ͻ�Ϊ0��0����
XC_API void WINAPI XEle_GetWndClientRect(HELE hEle, out_ RECT *pRect);
XC_API int  WINAPI XEle_GetWidth(HELE hEle);
XC_API int  WINAPI XEle_GetHeight(HELE hEle);
XC_API void WINAPI XEle_RectWndClientToEleClient(HELE hEle, in_out_ RECT *pRect);
XC_API void WINAPI XEle_PointWndClientToEleClient(HELE hEle, in_out_ POINT *pPt);
XC_API void WINAPI XEle_RectClientToWndClient(HELE hEle, in_out_ RECT *pRect);
XC_API void WINAPI XEle_PointClientToWndClient(HELE hEle, in_out_ POINT *pPt);
XC_API BOOL WINAPI XEle_AddChild(HELE hEle, HXCGUI hChild);
XC_API BOOL WINAPI XEle_InsertChild(HELE hEle, HXCGUI hChild, int index);  //���뵽ָ��λ��
XC_API void WINAPI XEle_RemoveEle(HELE hEle);
XC_API BOOL WINAPI XEle_SetZOrder(HELE hEle, int index);
XC_API BOOL WINAPI XEle_SetZOrderEx(HELE hEle, HELE hDestEle, zorder_ nType);
XC_API int  WINAPI XEle_GetZOrder(HELE hEle);
XC_API BOOL WINAPI XEle_SetTopmost(HELE hEle, BOOL bTopmost);
XC_API void WINAPI XEle_EnableCSS(HELE hEle, BOOL bEnable);
XC_API void WINAPI XEle_SetCssName(HELE hEle, const wchar_t *pName);
XC_API const wchar_t* WINAPI XEle_GetCssName(HELE hEle);
XC_API void WINAPI XEle_ShowEle(HELE hEle, BOOL bShow);
XC_API XC_OBJECT_TYPE WINAPI XEle_GetType(HELE hEle);
XC_API HWND WINAPI XEle_GetHWND(HELE hEle);
XC_API HWINDOW WINAPI XEle_GetHWINDOW(HELE hEle);
XC_API void WINAPI XEle_SetCursor(HELE hEle, HCURSOR hCursor);
XC_API HCURSOR WINAPI XEle_GetCursor(HELE hEle);
XC_API void WINAPI XEle_SetID(HELE hEle, int nID);
XC_API int  WINAPI XEle_GetID(HELE hEle);
XC_API void WINAPI XEle_SetUID(HELE hEle, int nUID);
XC_API int  WINAPI XEle_GetUID(HELE hEle);
XC_API void WINAPI XEle_SetName(HELE hEle, const wchar_t* pName);
XC_API const wchar_t* WINAPI XEle_GetName(HELE hEle);
XC_API HELE WINAPI XEle_GetParentEle(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetParent(HELE hEle);
XC_API void WINAPI XEle_SetTextColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API COLORREF WINAPI XEle_GetTextColor(HELE hEle);
XC_API COLORREF WINAPI XEle_GetTextColorEx(HELE hEle);
XC_API void WINAPI XEle_SetFocusBorderColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API COLORREF WINAPI XEle_GetFocusBorderColor(HELE hEle);
XC_API void WINAPI XEle_SetFont(HELE hEle, HFONTX hFontx);
XC_API HFONTX WINAPI XEle_GetFont(HELE hEle);
XC_API HFONTX WINAPI XEle_GetFontEx(HELE hEle);
XC_API void WINAPI XEle_SetAlpha(HELE hEle, BYTE alpha);
XC_API int  WINAPI XEle_GetChildCount(HELE hEle);
XC_API HXCGUI WINAPI XEle_GetChildByIndex(HELE hEle, int index);
XC_API HXCGUI WINAPI XEle_GetChildByID(HELE hEle, int nID);
XC_API void WINAPI XEle_SetBorderSize(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XEle_GetBorderSize(HELE hEle, BorderSize_i* pBorder);
XC_API void WINAPI XEle_SetPadding(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XEle_GetPadding(HELE hEle, PaddingSize_i* pPadding);
XC_API void WINAPI XEle_SetDragBorder(HELE hEle, int nFlags);
XC_API void WINAPI XEle_SetDragBorderBindEle(HELE hEle, int nFlags, HELE hBindEle, int nSpace);
XC_API void WINAPI XEle_SetMinSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XEle_SetMaxSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XEle_SetLockScroll(HELE hEle, BOOL bHorizon, BOOL bVertical);
XC_API HELE WINAPI XEle_HitChildEle(HELE hEle, in_ POINT  *pPt);
XC_API void WINAPI XEle_SetUserData(HELE hEle, int nData);
XC_API int  WINAPI XEle_GetUserData(HELE hEle);
XC_API void WINAPI XEle_GetContentSize(HELE hEle, out_ SIZE* pSize);
XC_API void WINAPI XEle_SetCapture(HELE hEle, BOOL b);
XC_API void WINAPI XEle_SetLayoutWidth(HELE hEle, layout_size_type_ nType, int nWidth);
XC_API void WINAPI XEle_SetLayoutHeight(HELE hEle, layout_size_type_ nType, int nHeight);
XC_API void WINAPI XEle_GetLayoutWidth(HELE hEle, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XEle_GetLayoutHeight(HELE hEle, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API void WINAPI XEle_RedrawEle(HELE hEle, BOOL bImmediate = FALSE);
XC_API void WINAPI XEle_RedrawRect(HELE hEle, RECT *pRect, BOOL bImmediate = FALSE);
XC_API void WINAPI XEle_Destroy(HELE hEle);  //����
XC_API void WINAPI XEle_AddBkBorder(HELE hEle, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XEle_AddBkFill(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XEle_AddBkImage(HELE hEle, HIMAGE hImage);
XC_API int  WINAPI XEle_GetBkInfoCount(HELE hEle);
XC_API void WINAPI XEle_ClearBkInfo(HELE hEle);
XC_API HBKM WINAPI XEle_GetBkManager(HELE hEle);
XC_API HBKM WINAPI XEle_GetBkManagerEx(HELE hEle);
XC_API int  WINAPI XEle_GetStateFlags(HELE hEle); //��ȡ���״̬
XC_API BOOL WINAPI XEle_DrawFocus(HELE hEle, HDRAW hDraw, RECT* pRect);
XC_API void WINAPI XEle_DrawEle(HELE hEle, HDRAW hDraw);
XC_API void WINAPI XEle_EnableTransparentChannel(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XEle_SetXCTimer(HELE hEle, UINT nIDEvent, UINT uElapse);
XC_API BOOL WINAPI XEle_KillXCTimer(HELE hEle, UINT nIDEvent);
XC_API void WINAPI XEle_SetToolTip(HELE hEle, const wchar_t* pText);
XC_API void WINAPI XEle_GetToolTip(HELE hEle, out_ wchar_t  *pOut, int nOutLen);
XC_API void WINAPI XEle_PopupToolTip(HELE hEle, int x, int y);
XC_API void WINAPI XEle_AdjustLayout(HELE hEle);
XC_API void WINAPI XEle_AdjustLayoutEx(HELE hEle, int nFlags = xc_adjustLayout_self);
XC_API HFONTX WINAPI XFont_Create(int size);//��������
XC_API HFONTX WINAPI XFont_Create2(const wchar_t *pName = L"����", int size = 12, int style = xc_fontStyle_regular);
XC_API HFONTX WINAPI XFont_Create3(xc_font_info_i*  pInfo);
XC_API HFONTX WINAPI XFont_CreateEx(LOGFONTW *pFontInfo);
XC_API HFONTX WINAPI XFont_CreateFromHFONT(HFONT hFont);
XC_API HFONTX WINAPI XFont_CreateFromFont(void*  pFont);
XC_API HFONTX WINAPI XFont_CreateFromFile(const wchar_t*  pFontFile, int size = 12, int style = xc_fontStyle_regular);
XC_API void   WINAPI XFont_EnableAutoDestroy(HFONTX hFontX, BOOL bEnable);
XC_API void* WINAPI XFont_GetFont(HFONTX hFontX);
XC_API void  WINAPI XFont_GetFontInfo(HFONTX hFontX, out_ xc_font_info_i*  pInfo);
XC_API void  WINAPI XFont_AddRef(HFONTX hFontX);   //�������ü���
XC_API void  WINAPI XFont_Release(HFONTX hFontX);  //�ͷ����ü���
XC_API int   WINAPI XFont_GetRefCount(HFONTX hFontX);
XC_API void  WINAPI XFont_Destroy(HFONTX hFontX);  //��������
XC_API HWINDOW WINAPI XFrameWnd_Create(int x, int y, int cx, int cy, const wchar_t *pTitle, HWND hWndParent, int XCStyle);  //��������
XC_API HWINDOW WINAPI XFrameWnd_CreateEx(DWORD dwExStyle, wchar_t* lpClassName, wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent, int XCStyle);  //��������
XC_API void WINAPI XFrameWnd_GetLayoutAreaRect(HWINDOW hWindow, out_ RECT *pRect); //��ȡ�ͻ���������������
XC_API void WINAPI XFrameWnd_SetView(HWINDOW hWindow, HELE hEle);
XC_API void WINAPI XFrameWnd_SetPaneSplitBarColor(HWINDOW hWindow, COLORREF color, BYTE alpha = 255);
XC_API BOOL WINAPI XFrameWnd_SaveLayoutToFile(HWINDOW hWindow, const wchar_t* pFileName);
XC_API BOOL WINAPI XFrameWnd_LoadLayoutFile(HWINDOW hWindow, HELE* aPaneList, int nEleCount, const wchar_t* pFileName);
XC_API BOOL WINAPI XFrameWnd_AddPane(HWINDOW hWindow, HELE hPaneDest, HELE hPaneNew, align_type_ align);
XC_API BOOL WINAPI XFrameWnd_MergePane(HWINDOW hWindow, HELE hPaneDest, HELE hPaneNew);
XC_API HIMAGE WINAPI XImgSrc_LoadFile(const wchar_t *pImageName);//���ļ��м���ͼƬ
XC_API HIMAGE WINAPI XImgSrc_LoadFileRect(const wchar_t *pImageName, int x, int y, int cx, int cy);  //����ͼƬ,ָ������
XC_API HIMAGE WINAPI XImgSrc_LoadRes(int id, const wchar_t *pType);//����Դ�м���ͼƬ
XC_API HIMAGE WINAPI XImgSrc_LoadZip(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword = NULL);//��ZIP�м���ͼƬ
XC_API HIMAGE WINAPI XImgSrc_LoadZipRect(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImgSrc_LoadMemory(void* pBuffer, int nSize);
XC_API HIMAGE WINAPI XImgSrc_LoadMemoryRect(void* pBuffer, int nSize, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImgSrc_LoadFromImage(void *pImage);
XC_API HIMAGE WINAPI XImgSrc_LoadFileFromExtractIcon(const wchar_t *pImageName);
XC_API HIMAGE WINAPI XImgSrc_LoadFileFromHICON(HICON hIcon);
XC_API HIMAGE WINAPI XImgSrc_LoadFileFromHBITMAP(HBITMAP hBitmap);
XC_API void WINAPI XImgSrc_EnableAutoDestroy(HIMAGE hImage, BOOL bEnable); //���û�ر��Զ�����,����UIԪ�ع���ʱ��Ч
XC_API int WINAPI XImgSrc_GetWidth(HIMAGE hImage);
XC_API int WINAPI XImgSrc_GetHeight(HIMAGE hImage);
XC_API void WINAPI XImgSrc_AddRef(HIMAGE hImage);
XC_API void WINAPI XImgSrc_Release(HIMAGE hImage);
XC_API int  WINAPI XImgSrc_GetRefCount(HIMAGE hImage);
XC_API void WINAPI XImgSrc_Destroy(HIMAGE hImage);
XC_API HIMAGE WINAPI XImage_LoadFile(const wchar_t *pImageName, BOOL bStretch = FALSE);//���ļ��м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadFileAdaptive(const wchar_t *pImageName, int leftSize, int topSize, int rightSize, int bottomSize);//���ļ��м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadFileRect(const wchar_t *pImageName, int x, int y, int cx, int cy);  //����ͼƬ,ָ������
XC_API HIMAGE WINAPI XImage_LoadResAdaptive(int id, const wchar_t *pType, int leftSize, int topSize, int rightSize, int bottomSize);//����Դ�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadRes(int id, const wchar_t *pType, BOOL bStretch = FALSE);//����Դ�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadZip(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword = NULL, BOOL bStretch = FALSE);//��ZIP�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadZipAdaptive(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword, int x1, int x2, int y1, int y2);//��ZIP�м���ͼƬ
XC_API HIMAGE WINAPI XImage_LoadZipRect(const wchar_t *pZipFileName, const wchar_t *pImageName, const wchar_t *pPassword, int x, int y, int cx, int cy);
XC_API HIMAGE WINAPI XImage_LoadMemory(void* pBuffer, int nSize, BOOL bStretch);
XC_API HIMAGE WINAPI XImage_LoadMemoryRect(void* pBuffer, int nSize, int x, int y, int cx, int cy, BOOL bStretch);
XC_API HIMAGE WINAPI XImage_LoadMemoryAdaptive(void* pBuffer, int nSize, int leftSize, int topSize, int rightSize, int bottomSize);
XC_API HIMAGE WINAPI XImage_LoadFromImage(void *pImage);
XC_API HIMAGE WINAPI XImage_LoadFileFromExtractIcon(const wchar_t *pImageName);
XC_API HIMAGE WINAPI XImage_LoadFileFromHICON(HICON hIcon);
XC_API HIMAGE WINAPI XImage_LoadFileFromHBITMAP(HBITMAP hBitmap);
XC_API BOOL WINAPI XImage_IsStretch(HIMAGE hImage);   //�Ƿ�����ͼƬ
XC_API BOOL WINAPI XImage_IsAdaptive(HIMAGE hImage);  //�Ƿ�Ϊ����ӦͼƬ
XC_API BOOL WINAPI XImage_IsTile(HIMAGE hImage);      //�Ƿ�Ϊƽ��ͼƬ
XC_API BOOL WINAPI XImage_SetDrawType(HIMAGE hImage, image_draw_type_ nType);//����ͼƬ��������
XC_API BOOL WINAPI XImage_SetDrawTypeAdaptive(HIMAGE hImage, int leftSize, int topSize, int rightSize, int bottomSize);//����ͼƬ����Ӧ
XC_API void WINAPI XImage_SetTranColor(HIMAGE hImage, COLORREF color); //����͸��ɫ
XC_API void WINAPI XImage_SetTranColorEx(HIMAGE hImage, COLORREF color, BYTE tranColor); //����͸��ɫ
XC_API float WINAPI XImage_SetRotateAngle(HIMAGE hImage, float  fAngle);
XC_API void WINAPI XImage_SetSplitEqual(HIMAGE hImage, int nCount, int iIndex);
XC_API void WINAPI XImage_EnableTranColor(HIMAGE hImage, BOOL bEnable); //����͸��ɫ
XC_API void WINAPI XImage_EnableAutoDestroy(HIMAGE hImage, BOOL bEnable); //���û�ر��Զ�����,����UIԪ�ع���ʱ��Ч
XC_API void WINAPI XImage_EnableCenter(HIMAGE hImage, BOOL bCenter); //bCenter
XC_API BOOL WINAPI XImage_IsCenter(HIMAGE hImage);
XC_API image_draw_type_ WINAPI XImage_GetDrawType(HIMAGE hImage); //��ȡͼƬ��������
XC_API int WINAPI XImage_GetWidth(HIMAGE hImage);
XC_API int WINAPI XImage_GetHeight(HIMAGE hImage);
XC_API HIMAGE WINAPI XImage_GetHIMAGE(HIMAGE hImage);
XC_API void WINAPI XImage_AddRef(HIMAGE hImage);
XC_API void WINAPI XImage_Release(HIMAGE hImage);
XC_API int  WINAPI XImage_GetRefCount(HIMAGE hImage);
XC_API void WINAPI XImage_Destroy(HIMAGE hImage);
XC_API HELE WINAPI XLayout_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API HELE WINAPI XLayout_CreateEx(HXCGUI hParent);
XC_API BOOL WINAPI XLayout_IsEnableLayout(HELE hEle);
XC_API void WINAPI XLayout_EnableLayout(HELE hEle, BOOL bEnable);
XC_API void WINAPI XLayout_ShowLayoutFrame(HELE hEle, BOOL bEnable);
XC_API int  WINAPI XLayout_GetWidthIn(HELE hEle);
XC_API int  WINAPI XLayout_GetHeightIn(HELE hEle);
XC_API void WINAPI XLayout_SetHorizon(HELE hEle, BOOL bHorizon);
XC_API void WINAPI XLayout_SetAlignH(HELE hEle, layout_align_ nAlign);
XC_API void WINAPI XLayout_SetAlignV(HELE hEle, layout_align_ nAlign);
XC_API void WINAPI XLayout_SetSpace(HELE hEle, int nSpace);
XC_API void WINAPI XLayout_SetPadding(HELE hEle, int left, int top, int right, int bottom);
XC_API HELE WINAPI XListBox_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XListBox_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XListBox_SetItemData(HELE hEle, int iItem, int nUserData);
XC_API int  WINAPI XListBox_GetItemData(HELE hEle, int iItem);
XC_API BOOL WINAPI XListBox_SetItemInfo(HELE hEle, int iItem, in_ listBox_item_info_i *pItem);
XC_API BOOL WINAPI XListBox_GetItemInfo(HELE hEle, int iItem, out_ listBox_item_info_i *pItem);
XC_API void WINAPI XListBox_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XListBox_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XListBox_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XListBox_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XListBox_ClearItemBkInfo(HELE hEle);
XC_API BOOL WINAPI XListBox_SetSelectItem(HELE hEle, int iItem);
XC_API int  WINAPI XListBox_GetSelectItem(HELE hEle);
XC_API BOOL WINAPI XListBox_CancelSelectItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XListBox_CancelSelectAll(HELE hEle);
XC_API int  WINAPI XListBox_GetSelectAll(HELE hEle, out_ int *pArray, int nArraySize);
XC_API int  WINAPI XListBox_GetSelectCount(HELE hEle);
XC_API int  WINAPI XListBox_GetItemMouseStay(HELE hEle);
XC_API BOOL WINAPI XListBox_SelectAll(HELE hEle);
XC_API void WINAPI XListBox_VisibleItem(HELE hEle, int iItem);
XC_API void WINAPI XListBox_SetItemHeightDefault(HELE hEle, int nHeight, int nSelHeight);
XC_API void WINAPI XListBox_GetItemHeightDefault(HELE hEle, out_ int *pHeight, out_ int *pSelHeight);
XC_API int  WINAPI XListBox_GetItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API void WINAPI XListBox_SetRowSpace(HELE hEle, int nSpace);
XC_API int WINAPI  XListBox_GetRowSpace(HELE hEle);
XC_API int  WINAPI XListBox_HitTest(HELE hEle, POINT *pPt);
XC_API int  WINAPI XListBox_HitTestOffset(HELE hEle, POINT *pPt); //�Զ���ӹ�����ͼƫ����
XC_API BOOL WINAPI XListBox_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XListBox_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XListBox_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API HXCGUI WINAPI XListBox_GetTemplateObject(HELE hEle, int iItem, int nTempItemID);
XC_API void WINAPI XListBox_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API HXCGUI WINAPI XListBox_CreateAdapter(HELE hEle);
XC_API void   WINAPI XListBox_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XListBox_GetAdapter(HELE hEle);
XC_API void WINAPI XListBox_Sort(HELE hEle, int iColumnAdapter, BOOL bAscending);  //��������
XC_API void WINAPI XListBox_RefreshData(HELE hEle);
XC_API void WINAPI XListBox_RefreshItem(HELE hEle, int iItem);
XC_API HTEMP WINAPI XTemp_Load(listItemTemp_type_ nType, const wchar_t* pFileName);  //����ģ�� ����ģ�����
XC_API HTEMP WINAPI XTemp_LoadZip(listItemTemp_type_ nType, const wchar_t* pZipFile, const wchar_t* pFileName, const wchar_t* pPassword = NULL);
XC_API BOOL  WINAPI XTemp_LoadEx(listItemTemp_type_ nType, const wchar_t* pFileName, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API BOOL  WINAPI XTemp_LoadZipEx(listItemTemp_type_ nType, const wchar_t* pZipFile, const wchar_t* pFileName, const wchar_t* pPassword, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API BOOL  WINAPI XTemp_LoadFromStringEx(listItemTemp_type_ nType, const char* pStringXML, out_ HTEMP *pOutTemp1, out_ HTEMP *pOutTemp2);
XC_API HTEMP WINAPI XTemp_LoadFromString(listItemTemp_type_ nType, const char* pStringXML);  //����ģ��,���ڴ�, ����ģ�����
XC_API listItemTemp_type_ WINAPI XTemp_GetType(HTEMP hTemp);
XC_API BOOL  WINAPI XTemp_Destroy(HTEMP hTemp);
XC_API HTEMP WINAPI XTemp_Create(listItemTemp_type_ nType);
XC_API BOOL  WINAPI XTemp_AddNodeRoot(HTEMP hTemp, void* pNode);
XC_API BOOL  WINAPI XTemp_AddNode(void* pParentNode, void* pNode);
XC_API void* WINAPI XTemp_CreateNode(XC_OBJECT_TYPE nType);
XC_API BOOL  WINAPI XTemp_SetNodeAttribute(void* pNode, const wchar_t* pName, const wchar_t* pAttr);
XC_API BOOL  WINAPI XTemp_SetNodeAttributeEx(void* pNode, int itemID, const wchar_t* pName, const wchar_t* pAttr);
XC_API void* WINAPI XTemp_List_GetNode(HTEMP hTemp, int index);
XC_API void* WINAPI XTemp_GetNode(void* pNode, int itemID);
XC_API void* WINAPI XTemp_CloneNode(void* pNode);
XC_API HELE WINAPI XList_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int WINAPI XList_AddColumn(HELE hEle, int width); //������
XC_API int WINAPI XList_InsertColumn(HELE hEle, int width, int iItem);
XC_API void WINAPI XList_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API void WINAPI XList_EnableDragChangeColumnWidth(HELE hEle, BOOL bEnable);
XC_API void WINAPI XList_EnableVScrollBarTop(HELE hEle, BOOL bTop);
XC_API void WINAPI XList_EnableItemBkFullRow(HELE hEle, BOOL bFull);
XC_API void WINAPI XList_SetSort(HELE hEle, int iColumn, int iColumnAdapter, BOOL bEnable);//��������
XC_API void WINAPI XList_SetDrawItemBkFlags(HELE hEle, int style);
XC_API void WINAPI XList_SetColumnWidth(HELE hEle, int iItem, int width);
XC_API void WINAPI XList_SetColumnMinWidth(HELE hEle, int iItem, int width);
XC_API void WINAPI XList_SetColumnWidthFixed(HELE hEle, int iColumn, BOOL bFixed);
XC_API int  WINAPI XList_GetColumnWidth(HELE hEle, int iColumn);  //��ȡ�п�
XC_API int  WINAPI XList_GetColumnCount(HELE hEle);  //��ȡ������
XC_API BOOL WINAPI XList_DeleteColumn(HELE hEle, int iItem);
XC_API void WINAPI XList_DeleteColumnAll(HELE hEle);
XC_API BOOL WINAPI XList_SetItemData(HELE hEle, int iItem, int iSubItem, int data);
XC_API int  WINAPI XList_GetItemData(HELE hEle, int iItem, int iSubItem);
XC_API BOOL WINAPI XList_SetSelectItem(HELE hEle, int iItem);
XC_API int  WINAPI XList_GetSelectItem(HELE hEle);
XC_API int  WINAPI XList_GetSelectItemCount(HELE hEle);
XC_API void WINAPI XList_SetSelectAll(HELE hEle);
XC_API int  WINAPI XList_GetSelectAll(HELE hEle, out_ int *pArray, int nArraySize);
XC_API void WINAPI XList_VisibleItem(HELE hEle, int iItem);
XC_API BOOL WINAPI XList_CancelSelectItem(HELE hEle, int iItem);
XC_API void WINAPI XList_CancelSelectAll(HELE hEle);
XC_API HELE WINAPI XList_GetHeaderHELE(HELE hEle);
XC_API void WINAPI XList_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API void WINAPI XList_BindAdapterHeader(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XList_CreateAdapter(HELE hEle);
XC_API HXCGUI WINAPI XList_CreateAdapterHeader(HELE hEle);
XC_API HXCGUI WINAPI XList_GetAdapter(HELE hEle);
XC_API HXCGUI WINAPI XList_GetAdapterHeader(HELE hEle);
XC_API BOOL WINAPI XList_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XList_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XList_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API HXCGUI WINAPI XList_GetTemplateObject(HELE hEle, int iItem, int iSubItem, int nTempItemID); //ͨ��ģ����ID,��ȡʵ����ģ����ID��Ӧ�Ķ���.
XC_API int    WINAPI XList_GetItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XList_GetHeaderTemplateObject(HELE hEle, int iItem, int nTempItemID);
XC_API int    WINAPI XList_GetHeaderItemIndexFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API void WINAPI XList_SetHeaderHeight(HELE hEle, int height);
XC_API int  WINAPI XList_GetHeaderHeight(HELE hEle);
XC_API void WINAPI XList_GetVisibleRowRange(HELE hEle, out_ int *piStart, out_ int* piEnd);
XC_API void WINAPI XList_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XList_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XList_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XList_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XList_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XList_SetItemHeightDefault(HELE hEle, int nHeight, int nSelHeight);
XC_API void WINAPI XList_GetItemHeightDefault(HELE hEle, out_ int *pHeight, out_ int *pSelHeight);
XC_API void WINAPI XList_SetRowSpace(HELE hEle, int nSpace);
XC_API int  WINAPI XList_GetRowSpace(HELE hEle);
XC_API void WINAPI XList_SetLockColumnLeft(HELE hEle, int iColumn);
XC_API void WINAPI XList_SetLockColumnRight(HELE hEle, int iColumn);
XC_API void WINAPI XList_SetLockRowBottom(HELE hEle, BOOL bLock);
XC_API BOOL WINAPI XList_HitTest(HELE hEle, POINT *pPt, out_ int *piItem, out_ int *piSubItem);
XC_API BOOL WINAPI XList_HitTestOffset(HELE hEle, POINT *pPt, out_ int *piItem, out_ int *piSubItem);
XC_API void WINAPI XList_RefreshData(HELE hEle);
XC_API void WINAPI XList_RefreshItem(HELE hEle, int iItem);
XC_API HELE WINAPI XListView_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API HXCGUI WINAPI XListView_CreateAdapter(HELE hEle);
XC_API void   WINAPI XListView_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XListView_GetAdapter(HELE hEle);
XC_API BOOL WINAPI XListView_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XListView_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XListView_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API HXCGUI WINAPI XListView_GetTemplateObject(HELE hEle, int iGroup, int iItem, int nTempItemID);
XC_API HXCGUI WINAPI XListView_GetTemplateObjectGroup(HELE hEle, int iGroup, int nTempItemID);
XC_API BOOL WINAPI XListView_GetItemIDFromHXCGUI(HELE hEle, HXCGUI hXCGUI, out_ int* piGroup, out_ int* piItem);
XC_API BOOL WINAPI XListView_HitTest(HELE hEle, in_ POINT* pPt, out_ int* pOutGroup, out_ int* pOutItem);
XC_API int  WINAPI XListView_HitTestOffset(HELE hEle, in_ POINT *pPt, out_ int* pOutGroup, out_ int* pOutItem); //�Զ���ӹ�����ͼƫ����
XC_API void WINAPI XListView_EnableMultiSel(HELE hEle, BOOL bEnable);
XC_API void WINAPI XListView_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XListView_SetSelectItem(HELE hEle, int iGroup, int iItem);
XC_API BOOL WINAPI XListView_GetSelectItem(HELE hEle, int *piGroup, int *piItem);
XC_API void WINAPI XListView_VisibleItem(HELE hEle, int iGroup, int iItem);
XC_API int  WINAPI XListView_GetSelectItemCount(HELE hEle);
XC_API int  WINAPI XListView_GetSelectItemAll(HELE hEle, out_ listView_item_id_i *pArray, int nArraySize);
XC_API void WINAPI XListView_SetSelectItemAll(HELE hEle);
XC_API void WINAPI XListView_CancelSelectItemAll(HELE hEle);
XC_API void WINAPI XListView_SetColumnSpace(HELE hEle, int space); //�����м��
XC_API void WINAPI XListView_SetRowSpace(HELE hEle, int space); //�����м��
XC_API void WINAPI XListView_SetAlignSizeLeft(HELE hEle, int size);
XC_API void WINAPI XListView_SetAlignSizeTop(HELE hEle, int size);
XC_API void WINAPI XListView_SetItemSize(HELE hEle, int width, int height);
XC_API void WINAPI XListView_GetItemSize(HELE hEle, SIZE* pSize);
XC_API void WINAPI XListView_SetGroupHeight(HELE hEle, int height);
XC_API int  WINAPI XListView_GetGroupHeight(HELE hEle);
XC_API void WINAPI XListView_SetGroupUserData(HELE hEle, int iGroup, int nData);
XC_API void WINAPI XListView_SetItemUserData(HELE hEle, int iGroup, int iItem, int nData);
XC_API int WINAPI XListView_GetGroupUserData(HELE hEle, int iGroup);
XC_API int WINAPI XListView_GetItemUserData(HELE hEle, int iGroup, int iItem);
XC_API void WINAPI XListView_AddItemBkBorder(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XListView_AddItemBkFill(HELE hEle, list_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XListView_AddItemBkImage(HELE hEle, list_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XListView_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XListView_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XListView_RefreshData(HELE hEle);
XC_API void WINAPI XListView_RefreshItem(HELE hEle, int iGroup, int iItem);
XC_API BOOL WINAPI XListView_ExpandGroup(HELE hEle, int iGroup, BOOL bExpand);
XC_API HELE WINAPI XMenuBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XMenuBar_AddButton(HELE hEle, const wchar_t *pText);     //���ӵ����˵���ť
XC_API void WINAPI XMenuBar_SetButtonHeight(HELE hEle, int height);
XC_API HMENUX WINAPI XMenuBar_GetMenu(HELE hEle, int nIndex);
XC_API BOOL WINAPI XMenuBar_DeleteButton(HELE hEle, int nIndex); //ɾ���˵��������,ͬʱ�ð�ť�µĵ����˵�Ҳ������
XC_API HMENUX WINAPI XMenu_Create();
XC_API void WINAPI XMenu_AddItem(HMENUX hMenu, int nID, const wchar_t *pText, int parentId = XC_ID_ROOT, int nFlags = 0); //��Ӳ˵���
XC_API void WINAPI XMenu_AddItemIcon(HMENUX hMenu, int nID, const wchar_t *pText, int nParentID, HIMAGE hImage, int nFlags = 0);
XC_API void WINAPI XMenu_InsertItem(HMENUX hMenu, int nID, const wchar_t *pText, int nFlags, int insertID);
XC_API void WINAPI XMenu_InsertItemIcon(HMENUX hMenu, int nID, const wchar_t *pText, HIMAGE hIcon, int nFlags, int insertID);
XC_API int  WINAPI XMenu_GetFirstChildItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetEndChildItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetPrevSiblingItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetNextSiblingItem(HMENUX hMenu, int nID);
XC_API int  WINAPI XMenu_GetParentItem(HMENUX hMenu, int nID);
XC_API void WINAPI XMenu_SetAutoDestroy(HMENUX hMenu, BOOL bAuto); //�Ƿ��Զ����ٶ���,Ĭ�ϵ����˵��رպ��Զ�����
XC_API void WINAPI XMenu_EnableDrawBackground(HMENUX hMenu, BOOL bEnable); //�Ƿ����û����Ʋ˵�����
XC_API void WINAPI XMenu_EnableDrawItem(HMENUX hMenu, BOOL bEnable);
XC_API BOOL WINAPI XMenu_Popup(HMENUX hMenu, HWND hParentWnd, int x, int y, HELE hParentEle = NULL, menu_popup_position_ nPosition = menu_popup_position_left_top); //�����˵�
XC_API void WINAPI XMenu_DestroyMenu(HMENUX hMenu);
XC_API void WINAPI XMenu_CloseMenu(HMENUX hMenu);
XC_API void WINAPI XMenu_SetBkImage(HMENUX hMenu, HIMAGE hImage);
XC_API BOOL WINAPI XMenu_SetItemText(HMENUX hMenu, int nID, const wchar_t *pText); //�������ı�
XC_API BOOL WINAPI XMenu_GetItemText(HMENUX hMenu, int nID, out_ wchar_t *pOut, int nOutLen);
XC_API int  WINAPI XMenu_GetItemTextLength(HMENUX hMenu, int nID);
XC_API BOOL WINAPI XMenu_SetItemIcon(HMENUX hMenu, int nID, HIMAGE hIcon);
XC_API BOOL WINAPI XMenu_SetItemFlags(HMENUX hMenu, int nID, int uFlags);   //����������
XC_API void WINAPI XMenu_SetItemHeight(HMENUX hMenu, int height); //���ò˵���߶�
XC_API int  WINAPI XMenu_GetItemHeight(HMENUX hMenu);
XC_API void WINAPI XMenu_SetBorderColor(HMENUX hMenu, COLORREF crColor, BYTE alpha = 255);
XC_API void WINAPI XMenu_SetBorderSize(HMENUX hMenu, int nLeft, int nTop, int nRight, int nBottom);
XC_API int  WINAPI XMenu_GetLeftWidth(HMENUX hMenu); //��ȡ�����
XC_API int  WINAPI XMenu_GetLeftSpaceText(HMENUX hMenu);  //��ȡ�˵����ı�����
XC_API int  WINAPI XMenu_GetItemCount(HMENUX hMenu); //��ȡ�˵�������,�����Ӳ˵���
XC_API BOOL WINAPI XMenu_SetItemCheck(HMENUX hMenu, int nID, BOOL bCheck);
XC_API BOOL WINAPI XMenu_IsItemCheck(HMENUX hMenu, int nID);
XC_API HWINDOW WINAPI XModalWnd_Create(int nWidth, int nHeight, const wchar_t *pTitle, HWND hWndParent, int XCStyle = xc_window_style_modal);
XC_API HWINDOW WINAPI XModalWnd_CreateEx(DWORD dwExStyle, const wchar_t* lpClassName, const wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent, int XCStyle = xc_window_style_modal);  //��������
XC_API void WINAPI XModalWnd_EnableAutoClose(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XModalWnd_EnableEscClose(HWINDOW hWindow, BOOL bEnable);
XC_API int  WINAPI XModalWnd_DoModal(HWINDOW hWindow);     //����ģ̬����
XC_API void WINAPI XModalWnd_EndModal(HWINDOW hWindow, int nResult); //��ֹ
XC_API HELE WINAPI XPane_Create(const wchar_t *pName, int nWidth, int nHeight, HWINDOW hFrameWnd = NULL);
XC_API void WINAPI XPane_SetView(HELE hEle, HELE hView);
XC_API BOOL WINAPI XPane_IsShowPane(HELE hEle); //�жϴ����Ƿ�����
XC_API void WINAPI XPane_SetSize(HELE hEle, int nWidth, int nHeight);
XC_API pane_state_ WINAPI XPane_GetState(HELE hEle);
XC_API void WINAPI XPane_GetViewRect(HELE hEle, out_ RECT* pRect);
XC_API void WINAPI XPane_SetTitle(HELE hEle, wchar_t* pTitle);
XC_API void WINAPI XPane_GetTitle(HELE hEle, out_ wchar_t* pOut, int nOutLen);
XC_API void WINAPI XPane_SetCaptionHeight(HELE hEle, int nHeight);
XC_API int  WINAPI XPane_GetCaptionHeight(HELE hEle);
XC_API void  WINAPI XPane_HidePane(HELE hEle);     //���ش���
XC_API void  WINAPI XPane_ShowPane(HELE hEle);     //����-��ʾ����
XC_API void  WINAPI XPane_DockPane(HELE hEle);      //ͣ������,�Զ�����
XC_API void  WINAPI XPane_LockPane(HELE hEle);      //��������
XC_API void  WINAPI XPane_FloatPane(HELE hEle);     //��������,������ͷ��
XC_API BOOL WINAPI XFloatWnd_EnableCaptionContent(HWINDOW hWindow, BOOL bEnable);
XC_API HXCGUI WINAPI XFloatWnd_GetCaptionLayout(HWINDOW hWindow);
XC_API HXCGUI WINAPI XFloatWnd_GetCaptionShapeText(HWINDOW hWindow);
XC_API HELE   WINAPI XFloatWnd_GetCaptionButtonClose(HWINDOW hWindow);
XC_API void  WINAPI XFloatWnd_SetTitle(HWINDOW hWindow, const wchar_t*  pTitle);
XC_API void  WINAPI XFloatWnd_GetTitle(HWINDOW hWindow, out_ wchar_t*  pOut, int nOutLen);
XC_API HELE WINAPI XProgBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XProgBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XProgBar_GetRange(HELE hEle);
XC_API void WINAPI XProgBar_SetSpaceTwo(HELE hEle, int leftSize, int rightSize);
XC_API void WINAPI XProgBar_SetPos(HELE hEle, int pos);
XC_API int  WINAPI XProgBar_GetPos(HELE hEle);
XC_API void WINAPI XProgBar_SetHorizon(HELE hEle, BOOL bHorizon);
XC_API void WINAPI XProgBar_SetImageLoad(HELE hEle, HIMAGE hImage);
XC_API HELE WINAPI XPGrid_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XPGrid_AddItem(HELE hEle, const wchar_t *pName, propertyGrid_item_type_ nType, int nParentID = XC_ID_ROOT); //�����
XC_API int  WINAPI XPGrid_AddItemString(HELE hEle, const wchar_t *pName, const wchar_t *pValue, int nParentID = XC_ID_ROOT);
XC_API int  WINAPI XPGrid_AddItemEle(HELE hEle, HELE hElePanel, int nParentID = XC_ID_ROOT);
XC_API void WINAPI XPGrid_DeleteAll(HELE hEle);
XC_API HELE WINAPI XPGrid_GetItemHELE(HELE hEle, int nItemID);
XC_API void WINAPI XPGrid_SetWidth(HELE hEle, int nWidth);
XC_API BOOL WINAPI XPGrid_SetItemValue(HELE hEle, int nItemID, const wchar_t* pValue);
XC_API BOOL WINAPI XPGrid_SetItemValueInt(HELE hEle, int nItemID, int nValue);
XC_API BOOL WINAPI XPGrid_SetItemData(HELE hEle, int nItemID, int nUserData);
XC_API int  WINAPI XPGrid_GetItemData(HELE hEle, int nItemID);
XC_API const wchar_t* WINAPI XPGrid_GetItemValue(HELE hEle, int nItemID);
XC_API int  WINAPI XPGrid_HitTest(HELE hEle, POINT *pPt, BOOL *pbExpandButton);
XC_API int  WINAPI XPGrid_HitTestOffset(HELE hEle, POINT *pPt, BOOL *pbExpandButton);
XC_API BOOL WINAPI XPGrid_ExpandItem(HELE hEle, int nItemID, BOOL bExpand);//չ����
XC_API int  WINAPI XPGrid_GetSelItem(HELE hEle);
XC_API BOOL WINAPI XPGrid_SetSelItem(HELE hEle, int nItemID);
XC_API void WINAPI XPGrid_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API void   WINAPI XRes_EnableDelayLoad(BOOL bEnable);
XC_API void   WINAPI XRes_SetLoadFileCallback(FunLoadFile pFun);
XC_API int    WINAPI XRes_GetIDValue(const wchar_t *pName);  //��ȡ��ԴIDֵ
XC_API HIMAGE WINAPI XRes_GetImage(const wchar_t *pName);  //��ȡ��ԴͼƬ
XC_API HIMAGE WINAPI XRes_GetImageEx(const wchar_t *pFileName, const wchar_t *pName); //��ȡ��ԴͼƬ
XC_API COLORREF WINAPI XRes_GetColor(const wchar_t *pName);  //��ȡ��Դ��ɫ
XC_API HFONTX   WINAPI XRes_GetFont(const wchar_t *pName);  //��ȡ��Դ����
XC_API HBKM     WINAPI XRes_GetBkM(const wchar_t *pName);  //��ȡ��Դ������Ϣ
XC_API HELE WINAPI XRichEditColor_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XRichEditColor_SetColor(HELE hEle, COLORREF color);//������ɫ
XC_API COLORREF WINAPI XRichEditColor_GetColor(HELE hEle); //��ȡ��ɫRGBֵ
XC_API HELE WINAPI XRichEditSet_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API HELE WINAPI XRichEditFile_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XRichEditFile_SetOpenFileType(HELE hEle, const wchar_t *pType); //���ô��ļ�����
XC_API void WINAPI XRichEditFile_SetDefaultFile(HELE hEle, const wchar_t *pFile); //����Ĭ��Ŀ¼�ļ�
XC_API void WINAPI XRichEditFile_SetRelativeDir(HELE hEle, const wchar_t *pDir); //TODO:�������·��
XC_API HELE WINAPI XRichEditFolder_Create(int x, int y, int cx, int cy, HXCGUI hParent);
XC_API void WINAPI XRichEditFolder_SetDefaultDir(HELE hEle, const wchar_t* pDir);  //����Ĭ��Ŀ¼
XC_API HELE WINAPI XRichEdit_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XRichEdit_InsertString(HELE hEle, const wchar_t *pString, HFONTX hFont = NULL);
XC_API BOOL WINAPI XRichEdit_InsertImage(HELE hEle, HIMAGE hImage, const wchar_t *pImagePath);
XC_API BOOL WINAPI XRichEdit_InsertGif(HELE hEle, HIMAGE hImage, const wchar_t *pImagePath);
XC_API void WINAPI XRichEdit_InsertStringEx(HELE hEle, int iRow, int iColumn, const wchar_t *pString, HFONTX hFont = NULL);
XC_API BOOL WINAPI XRichEdit_InsertImageEx(HELE hEle, int iRow, int iColumn, HIMAGE hImage, const wchar_t *pImagePath);
XC_API BOOL WINAPI XRichEdit_InsertGifEx(HELE hEle, int iRow, int iColumn, HIMAGE hImage, const wchar_t *pImagePath);
XC_API void WINAPI XRichEdit_EnableReadOnly(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableMultiLine(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnablePassword(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableEvent_XE_RICHEDIT_CHANGE(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoWrap(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableAutoSelAll(HELE hEle, BOOL bEnable);
XC_API void WINAPI XRichEdit_EnableVerticalCenter(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XRichEdit_IsEmpty(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsReadOnly(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsMultiLine(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsPassword(HELE hEle);
XC_API BOOL WINAPI XRichEdit_IsAutoWrap(HELE hEle);
XC_API void WINAPI XRichEdit_SetLimitNum(HELE hEle, int nNumber);
XC_API void WINAPI XRichEdit_SetCaretColor(HELE hEle, COLORREF  color);
XC_API void WINAPI XRichEdit_SetText(HELE hEle, const wchar_t* pString);
XC_API void WINAPI XRichEdit_SetTextInt(HELE hEle, int nVaule);
XC_API int  WINAPI XRichEdit_GetText(HELE hEle, out_ wchar_t* pOut, int len);
XC_API void  WINAPI XRichEdit_GetHTMLFormat(HELE hEle, out_ wchar_t* pOut, int len);  //��ȡHTML��ʽ����
XC_API void* WINAPI XRichEdit_GetData(HELE hEle, out_ int *pDataSize = NULL);
XC_API BOOL  WINAPI XRichEdit_InsertData(HELE hEle, void *pData, int iRow, int iColumn);
XC_API int  WINAPI XRichEdit_GetTextLength(HELE hEle);
XC_API void WINAPI XRichEdit_SetRowHeight(HELE hEle, UINT nHeight); //����Ĭ���и�
XC_API void WINAPI XRichEdit_SetDefaultText(HELE hEle, const wchar_t*  pString);
XC_API void WINAPI XRichEdit_SetDefaultTextColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XRichEdit_SetCurrentInputTextColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API int  WINAPI XRichEdit_GetCurrentRow(HELE hEle);
XC_API int  WINAPI XRichEdit_GetCurrentColumn(HELE hEle);
XC_API void WINAPI XRichEdit_SetCurrentPos(HELE hEle, int iRow, int iColumn);
XC_API int WINAPI XRichEdit_GetRowCount(HELE hEle);
XC_API int WINAPI XRichEdit_GetRowLength(HELE hEle, int iRow);
XC_API int WINAPI XRichEdit_GetRowHeight(HELE hEle, int iRow);
XC_API int WINAPI XRichEdit_GetSelectText(HELE hEle, out_ wchar_t* pOut, int len);
XC_API BOOL WINAPI XRichEdit_GetSelectPosition(HELE hEle, out_ Position_i *pBegin, out_ Position_i *pEnd);
XC_API BOOL WINAPI XRichEdit_SetSelect(HELE hEle, int iStartRow, int iStartCol, int iEndRow, int iEndCol);
XC_API BOOL WINAPI XRichEdit_SetItemFontEx(HELE hEle, int beginRow, int beginColumn, int endRow, int endColumn, HFONTX hFont);
XC_API BOOL WINAPI XRichEdit_SetItemColorEx(HELE hEle, int beginRow, int beginColumn, int endRow, int endColumn, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XRichEdit_CancelSelect(HELE hEle);
XC_API void WINAPI XRichEdit_SetSelectBkColor(HELE hEle, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XRichEdit_SetPasswordCharacter(HELE hEle, wchar_t  ch);
XC_API BOOL WINAPI XRichEdit_SelectAll(HELE hEle);    //ѡ����������
XC_API BOOL WINAPI XRichEdit_DeleteSelect(HELE hEle); //ɾ��ѡ������
XC_API void WINAPI XRichEdit_DeleteAll(HELE hEle);    //ɾ������
XC_API BOOL WINAPI XRichEdit_ClipboardCut(HELE hEle);      //����
XC_API BOOL WINAPI XRichEdit_ClipboardCopy(HELE hEle);     //���� ѡ�������
XC_API BOOL WINAPI XRichEdit_ClipboardPaste(HELE hEle);    //ճ�� ճ������������
XC_API HELE WINAPI XSBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XSBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XSBar_GetRange(HELE hEle);
XC_API void  WINAPI XSBar_ShowButton(HELE hEle, BOOL bShow);
XC_API void WINAPI XSBar_SetSliderLength(HELE hEle, int length); //���û��鳤��
XC_API void WINAPI XSBar_SetSliderMinLength(HELE hEle, int minLength); //���û�����С����
XC_API void WINAPI XSBar_SetSliderPadding(HELE hEle, int nPadding);
XC_API BOOL WINAPI XSBar_SetHorizon(HELE hEle, BOOL bHorizon);  //ˮƽ��ʾ��ֱ
XC_API int  WINAPI XSBar_GetSliderMaxLength(HELE hEle);
XC_API BOOL WINAPI XSBar_ScrollUp(HELE hEle);       //�������
XC_API BOOL WINAPI XSBar_ScrollDown(HELE hEle);     //���ҹ���
XC_API BOOL WINAPI XSBar_ScrollTop(HELE hEle);      //����������
XC_API BOOL WINAPI XSBar_ScrollBottom(HELE hEle);   //�������ײ�
XC_API BOOL WINAPI XSBar_ScrollPos(HELE hEle, int pos); //������ָ����
XC_API HELE WINAPI XSBar_GetButtonUp(HELE hEle);
XC_API HELE WINAPI XSBar_GetButtonDown(HELE hEle);
XC_API HELE WINAPI XSBar_GetButtonSlider(HELE hEle);
XC_API HELE WINAPI XSView_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API BOOL WINAPI XSView_SetTotalSize(HELE hEle, int cx, int cy); //������ͼ�����ܴ�С(�������߿���)
XC_API void WINAPI XSView_GetTotalSize(HELE hEle, SIZE *pSize);  //��ȡ���õ����ݴ�С
XC_API BOOL WINAPI XSView_SetLineSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XSView_GetLineSize(HELE hEle, out_ SIZE *pSize);
XC_API void WINAPI XSView_SetScrollBarSize(HELE hEle, int size); //���ù�������С
XC_API int  WINAPI XSView_GetViewPosH(HELE hEle);   //��ȡ�ӿ�ԭ��X����
XC_API int  WINAPI XSView_GetViewPosV(HELE hEle);   //��ȡ�ӿ�ԭ��Y����
XC_API int  WINAPI XSView_GetViewWidth(HELE hEle);
XC_API int  WINAPI XSView_GetViewHeight(HELE hEle);
XC_API void WINAPI XSView_GetViewRect(HELE hEle, out_ RECT *pRect); //��ȡ�ӿ�����(�����߿���),leftΪ�ӿ�������С,topΪ�ӿ��ϼ����С,��(0,0).
XC_API HELE WINAPI XSView_GetScrollBarH(HELE hEle); //��ȡˮƽ������
XC_API HELE WINAPI XSView_GetScrollBarV(HELE hEle); //��ȡ��ֱ������
XC_API void WINAPI XSView_SetBorderSize(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XSView_GetBorderSize(HELE hEle, out_ BorderSize_i* pBorder);
XC_API BOOL WINAPI XSView_ScrollPosH(HELE hEle, int pos); //������ָ����
XC_API BOOL WINAPI XSView_ScrollPosV(HELE hEle, int pos); //������ָ����
XC_API BOOL WINAPI XSView_ScrollPosXH(HELE hEle, int posX); //������ָ������
XC_API BOOL WINAPI XSView_ScrollPosYV(HELE hEle, int posY); //������ָ������
XC_API void WINAPI XSView_ShowSBarH(HELE hEle, BOOL bShow); //����ˮƽ������
XC_API void WINAPI XSView_ShowSBarV(HELE hEle, BOOL bShow); //���ô�ֱ������
XC_API void WINAPI XSView_EnableAutoShowScrollBar(HELE hEle, BOOL bEnable);
XC_API BOOL WINAPI XSView_ScrollLeftLine(HELE hEle);    //�������
XC_API BOOL WINAPI XSView_ScrollRightLine(HELE hEle);   //���ҹ���
XC_API BOOL WINAPI XSView_ScrollTopLine(HELE hEle);     //���Ϲ���
XC_API BOOL WINAPI XSView_ScrollBottomLine(HELE hEle);    //���¹���
XC_API BOOL WINAPI XSView_ScrollLeft(HELE hEle);    //ˮƽ���������
XC_API BOOL WINAPI XSView_ScrollRight(HELE hEle);   //ˮƽ�������Ҳ�
XC_API BOOL WINAPI XSView_ScrollTop(HELE hEle);     //����������
XC_API BOOL WINAPI XSView_ScrollBottom(HELE hEle);  //�������ײ�
XC_API HELE WINAPI XShape_GetParentEle(HXCGUI hShape);
XC_API HWINDOW WINAPI XShape_GetHWINDOW(HXCGUI hShape);
XC_API HXCGUI  WINAPI XShape_GetParent(HXCGUI hShape);
XC_API void  WINAPI XShape_RemoveShape(HXCGUI hShape);
XC_API void WINAPI XShape_SetID(HXCGUI hShape, int nID);
XC_API int  WINAPI XShape_GetID(HXCGUI hShape);
XC_API void WINAPI XShape_SetUID(HXCGUI hShape, int nUID);
XC_API int  WINAPI XShape_GetUID(HXCGUI hShape);
XC_API void WINAPI XShape_SetName(HXCGUI hShape, const wchar_t* pName);
XC_API const wchar_t* WINAPI XShape_GetName(HXCGUI hShape);
XC_API int  WINAPI XShape_GetZOrder(HXCGUI hShape);
XC_API void WINAPI XShape_Redraw(HXCGUI hShape);
XC_API int  WINAPI XShape_GetWidth(HXCGUI hShape);
XC_API int  WINAPI XShape_GetHeight(HXCGUI hShape);
XC_API void WINAPI XShape_GetRect(HXCGUI hShape, out_ RECT* pRect);
XC_API void WINAPI XShape_SetRect(HXCGUI hShape, in_  RECT* pRect);
XC_API void WINAPI XShape_GetWndClientRect(HXCGUI hShape, out_ RECT *pRect);
XC_API void WINAPI XShape_GetContentSize(HXCGUI hShape, out_ SIZE* pSize);//��ȡ���ݴ�С
XC_API void WINAPI XShape_ShowLayout(HXCGUI hShape, BOOL bShow);
XC_API void WINAPI XShape_AdjustLayout(HXCGUI hShape);
XC_API void WINAPI XShape_Destroy(HXCGUI hShape);
XC_API HXCGUI WINAPI XShapeText_Create(int x, int y, int cx, int cy, const wchar_t *pName, HXCGUI hParent = NULL);
XC_API void  WINAPI XShapeText_SetText(HXCGUI hTextBlock, const wchar_t *pName);
XC_API void  WINAPI XShapeText_GetText(HXCGUI hTextBlock, out_ wchar_t *pOut, int nOutLen);
XC_API int   WINAPI XShapeText_GetTextLength(HXCGUI hTextBlock);
XC_API void  WINAPI XShapeText_SetFont(HXCGUI hTextBlock, HFONTX hFontx);
XC_API HFONTX WINAPI XShapeText_GetFont(HXCGUI hTextBlock);
XC_API void WINAPI XShapeText_SetTextColor(HXCGUI hTextBlock, COLORREF color, BYTE alpha);
XC_API COLORREF WINAPI XShapeText_GetTextColor(HXCGUI hTextBlock);
XC_API void WINAPI XShapeText_SetTextAlign(HXCGUI hTextBlock, int align);
XC_API void WINAPI XShapeText_SetOffset(HXCGUI hTextBlock, int x, int y);
XC_API void WINAPI XShapeText_SetLayoutWidth(HXCGUI hTextBlock, layout_size_type_ nType, int width);
XC_API void WINAPI XShapeText_SetLayoutHeight(HXCGUI hTextBlock, layout_size_type_ nType, int height);
XC_API void WINAPI XShapeText_GetLayoutWidth(HXCGUI hTextBlock, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XShapeText_GetLayoutHeight(HXCGUI hTextBlock, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API void WINAPI XShapeText_EnableCSS(HXCGUI hTextBlock, BOOL bEnable);
XC_API void WINAPI XShapeText_SetCssName(HXCGUI hTextBlock, const wchar_t* pName);
XC_API const wchar_t* WINAPI XShapeText_GetCssName(HXCGUI hTextBlock);
XC_API HXCGUI WINAPI XShapePic_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void   WINAPI XShapePic_SetImage(HXCGUI hShape, HIMAGE hImage);
XC_API HIMAGE WINAPI XShapePic_GetImage(HXCGUI hShape);
XC_API void WINAPI XShapePic_SetLayoutWidth(HXCGUI hShape, layout_size_type_ nType, int width);
XC_API void WINAPI XShapePic_SetLayoutHeight(HXCGUI hShape, layout_size_type_ nType, int height);
XC_API void WINAPI XShapePic_GetLayoutWidth(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XShapePic_GetLayoutHeight(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API HXCGUI WINAPI XShapeGif_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void   WINAPI XShapeGif_SetImage(HXCGUI hShape, HIMAGE hImage);
XC_API HIMAGE WINAPI XShapeGif_GetImage(HXCGUI hShape);
XC_API void WINAPI XShapeGif_SetLayoutWidth(HXCGUI hShape, layout_size_type_ nType, int width);
XC_API void WINAPI XShapeGif_SetLayoutHeight(HXCGUI hShape, layout_size_type_ nType, int height);
XC_API void WINAPI XShapeGif_GetLayoutWidth(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pWidth);
XC_API void WINAPI XShapeGif_GetLayoutHeight(HXCGUI hShape, out_ layout_size_type_ *pType, out_ int *pHeight);
XC_API HXCGUI WINAPI XShapeRect_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeRect_SetBorderColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeRect_SetFillColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeRect_SetRoundAngle(HXCGUI hShape, int nWidth, int nHeight);
XC_API void WINAPI XShapeRect_GetRoundAngle(HXCGUI hShape, out_ int *pWidth, out_ int *pHeight);
XC_API void WINAPI XShapeRect_EnableBorder(HXCGUI hShape, BOOL bEnable);
XC_API void WINAPI XShapeRect_EnableFill(HXCGUI hShape, BOOL bEnable);
XC_API void WINAPI XShapeRect_EnableRoundAngle(HXCGUI hShape, BOOL bEnable);
XC_API HXCGUI WINAPI XShapeEllipse_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeEllipse_SetBorderColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeEllipse_SetFillColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeEllipse_EnableBorder(HXCGUI hShape, BOOL bEnable);
XC_API void WINAPI XShapeEllipse_EnableFill(HXCGUI hShape, BOOL bEnable);
XC_API HXCGUI WINAPI XShapeGroupBox_Create(int x, int y, int cx, int cy, const wchar_t* pName, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeGroupBox_SetBorderColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeGroupBox_SetTextColor(HXCGUI hShape, COLORREF color, BYTE alpha = 255);
XC_API void WINAPI XShapeGroupBox_SetFontX(HXCGUI hShape, HFONTX hFontX);
XC_API void WINAPI XShapeGroupBox_SetTextOffset(HXCGUI hShape, int offsetX, int offsetY);
XC_API void WINAPI XShapeGroupBox_SetRoundAngle(HXCGUI hShape, int nWidth, int nHeight);
XC_API void WINAPI XShapeGroupBox_SetText(HXCGUI hShape, const wchar_t* pText);
XC_API void WINAPI XShapeGroupBox_GetTextOffset(HXCGUI hShape, out_ int *pOffsetX, out_ int *pOffsetY);
XC_API void WINAPI XShapeGroupBox_GetRoundAngle(HXCGUI hShape, out_ int *pWidth, out_ int *pHeight);
XC_API void WINAPI XShapeGroupBox_EnableRoundAngle(HXCGUI hShape, BOOL bEnable);
XC_API HXCGUI WINAPI XShapeLine_Create(int x1, int y1, int x2, int y2, HXCGUI hParent = NULL);
XC_API void WINAPI XShapeLine_SetPosition(HXCGUI hShape, int x1, int y1, int x2, int y2);
XC_API void WINAPI XShapeLine_SetColor(HXCGUI hShape, COLORREF color, BYTE alpha);
XC_API HELE WINAPI XSliderBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XSliderBar_SetRange(HELE hEle, int range);
XC_API int  WINAPI XSliderBar_GetRange(HELE hEle);
XC_API void WINAPI XSliderBar_SetButtonWidth(HELE hEle, int width);
XC_API void WINAPI XSliderBar_SetButtonHeight(HELE hEle, int height);
XC_API void WINAPI XSliderBar_SetSpaceTwo(HELE hEle, int leftSize, int rightSize);
XC_API void WINAPI XSliderBar_SetPos(HELE hEle, int pos);
XC_API int  WINAPI XSliderBar_GetPos(HELE hEle);
XC_API HELE WINAPI XSliderBar_GetButton(HELE hEle);
XC_API void WINAPI XSliderBar_SetHorizon(HELE hEle, BOOL bHorizon);
XC_API void WINAPI XSliderBar_SetImageLoad(HELE hEle, HIMAGE hImage);
XC_API HELE WINAPI XTabBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int  WINAPI XTabBar_AddLabel(HELE hEle, const wchar_t *pName); //���һ����ǩ
XC_API int  WINAPI XTabBar_InsertLabel(HELE hEle, int index, wchar_t *pName);
XC_API BOOL WINAPI XTabBar_DeleteLabel(HELE hEle, int index);  //ɾ��
XC_API void WINAPI XTabBar_DeleteLabelAll(HELE hEle);  //ɾ������TAB
XC_API HELE WINAPI XTabBar_GetLabel(HELE hEle, int index);//��ȡ��ǩ��ťButton
XC_API HELE WINAPI XTabBar_GetLabelClose(HELE hEle, int index);
XC_API HELE WINAPI XTabBar_GetButtonLeft(HELE hEle);
XC_API HELE WINAPI XTabBar_GetButtonRight(HELE hEle);
XC_API int  WINAPI XTabBar_GetSelect(HELE hEle);  //��ȡѡ��ı�ǩ
XC_API int  WINAPI XTabBar_GetLabelSpacing(HELE hEle); //��ȡ��ǩ���, 0û�м��
XC_API int  WINAPI XTabBar_GetLabelCount(HELE hEle); //��ȡ��ǩ������
XC_API int  WINAPI XTabBar_GetindexByEle(HELE hEle, HELE hLabel);
XC_API void WINAPI XTabBar_SetLabelSpacing(HELE hEle, int spacing);//���ñ�ǩ���, 0û�м��
XC_API void WINAPI XTabBar_SetPadding(HELE hEle, int left, int top, int right, int bottom);
XC_API void WINAPI XTabBar_SetSelect(HELE hEle, int index);   //����ѡ���ǩ
XC_API void WINAPI XTabBar_SetUp(HELE hEle);    //�����
XC_API void WINAPI XTabBar_SetDown(HELE hEle);  //�ҹ���
XC_API void WINAPI XTabBar_EnableTile(HELE hEle, BOOL bTile);  //ƽ�̱�ǩ,ÿ����ǩ��ʾ��ͬ��С
XC_API void WINAPI XTabBar_EnableClose(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTabBar_SetCloseSize(HELE hEle, SIZE *pSize);
XC_API void WINAPI XTabBar_SetTurnButtonSize(HELE hEle, SIZE *pSize);
XC_API void WINAPI XTabBar_SetLabelWidth(HELE hEle, int index, int nWidth);
XC_API BOOL WINAPI XTabBar_ShowLabel(HELE hEle, int index, BOOL bShow); //��ʾ������ָ����
XC_API HELE WINAPI XTextLink_Create(int x, int y, int cx, int cy, const wchar_t* pName, HXCGUI hParent = NULL);
XC_API void WINAPI XTextLink_EnableUnderlineLeave(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTextLink_EnableUnderlineStay(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTextLink_SetTextColorStay(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XTextLink_SetUnderlineColorLeave(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XTextLink_SetUnderlineColorStay(HELE hEle, COLORREF color, BYTE alpha);
XC_API HELE WINAPI XToolBar_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API int WINAPI XToolBar_InsertEle(HELE hEle, HELE hNewEle, int index = -1); //���Ԫ�ص�������, -1���뵽ĩβ
XC_API int WINAPI XToolBar_InsertSeparator(HELE hEle, int index = -1, COLORREF color = RGB(128, 128, 128)); //��ӷָ���, -1���뵽ĩβ
XC_API void WINAPI XToolBar_EnableButtonMenu(HELE hEle, BOOL bEnable);  //��ʾ������˵���ť
XC_API HELE WINAPI XToolBar_GetHEle(HELE hEle, int index);  //��ȡ��������Ԫ�ؾ��
XC_API HELE WINAPI XToolBar_GetButtonLeft(HELE hEle);   //��ȡ�������������ťButton
XC_API HELE WINAPI XToolBar_GetButtonRight(HELE hEle);  //��ȡ�������ҹ�����ťButton
XC_API HELE WINAPI XToolBar_GetButtonMenu(HELE hEle);   //��ȡ�����˵���ť
XC_API void WINAPI XToolBar_SetSpace(HELE hEle, int nSize);
XC_API void WINAPI XToolBar_DeleteEle(HELE hEle, int index); //�Ƴ���������Ԫ�ز�����
XC_API void WINAPI XToolBar_DeleteAllEle(HELE hEle);
XC_API HELE WINAPI XTree_Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL);
XC_API void WINAPI XTree_EnableDragItem(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTree_EnableConnectLine(HELE hEle, BOOL bEnable, BOOL bSolid);
XC_API void WINAPI XTree_EnableExpand(HELE hEle, BOOL bEnable);
XC_API void WINAPI XTree_SetConnectLineColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API void WINAPI XTree_SetExpandButtonSize(HELE hEle, int nWidth, int nHeight);
XC_API void WINAPI XTree_SetConnectLineLength(HELE hEle, int nLength);
XC_API void WINAPI XTree_SetDragInsertPositionColor(HELE hEle, COLORREF color, BYTE alpha);
XC_API BOOL WINAPI XTree_SetItemTemplateXML(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLSel(HELE hEle, const wchar_t* pXmlFile);
XC_API BOOL WINAPI XTree_SetItemTemplate(HELE hEle, HTEMP hTemp);
XC_API BOOL WINAPI XTree_SetItemTemplateSel(HELE hEle, HTEMP hTemp);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLFromString(HELE hEle, const char* pStringXML);
XC_API BOOL WINAPI XTree_SetItemTemplateXMLSelFromString(HELE hEle, const char* pStringXML);
XC_API void WINAPI XTree_SetDrawItemBkFlags(HELE hEle, int nFlags);
XC_API BOOL WINAPI XTree_SetItemData(HELE hEle, int nID, int nUserData);
XC_API int  WINAPI XTree_GetItemData(HELE hEle, int nID);
XC_API BOOL WINAPI XTree_SetSelectItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetSelectItem(HELE hEle);
XC_API void WINAPI XTree_VisibleItem(HELE hEle, int nID);
XC_API BOOL WINAPI XTree_IsExpand(HELE hEle, int nID);
XC_API BOOL WINAPI XTree_ExpandItem(HELE hEle, int nID, BOOL bExpand);
XC_API BOOL WINAPI XTree_ExpandAllChildItem(HELE hEle, int nID, BOOL bExpand);
XC_API int  WINAPI XTree_HitTest(HELE hEle, POINT *pPt);
XC_API int  WINAPI XTree_HitTestOffset(HELE hEle, POINT *pPt);
XC_API int  WINAPI XTree_GetFirstChildItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetEndChildItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetPrevSiblingItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetNextSiblingItem(HELE hEle, int nID);
XC_API int  WINAPI XTree_GetParentItem(HELE hEle, int nID);
XC_API void WINAPI XTree_SetIndentation(HELE hEle, int nWidth);
XC_API int  WINAPI XTree_GetIndentation(HELE hEle);
XC_API void WINAPI XTree_SetItemHeight(HELE hEle, int nID, int nHeight, int nSelHeight);
XC_API void WINAPI XTree_GetItemHeight(HELE hEle, int nID, out_ int *pHeight, out_ int *pSelHeight);
XC_API void WINAPI XTree_SetRowSpace(HELE hEle, int nSpace);
XC_API int  WINAPI XTree_GetRowSpace(HELE hEle);
XC_API BOOL WINAPI XTree_MoveItem(HELE hEle, int nMoveItem, int nDestItem, int nType);
XC_API void WINAPI XTree_AddItemBkBorder(HELE hEle, tree_item_state_ nState, COLORREF color, BYTE alpha, int width);
XC_API void WINAPI XTree_AddItemBkFill(HELE hEle, tree_item_state_ nState, COLORREF color, BYTE alpha);
XC_API void WINAPI XTree_AddItemBkImage(HELE hEle, tree_item_state_ nState, HIMAGE hImage);
XC_API int  WINAPI XTree_GetItemBkInfoCount(HELE hEle);
XC_API void WINAPI XTree_ClearItemBkInfo(HELE hEle);
XC_API void WINAPI XTree_SetItemHeightDefault(HELE hEle, int nHeight, int nSelHeight);
XC_API void WINAPI XTree_GetItemHeightDefault(HELE hEle, out_ int *pHeight, out_ int *pSelHeight);
XC_API HXCGUI WINAPI XTree_GetTemplateObject(HELE hEle, int nID, int nTempItemID); //ͨ��ģ����ID,��ȡʵ����ģ����ID��Ӧ�Ķ���.
XC_API int    WINAPI XTree_GetItemIDFromHXCGUI(HELE hEle, HXCGUI hXCGUI);
XC_API HXCGUI WINAPI XTree_CreateAdapter(HELE hEle);
XC_API void WINAPI XTree_BindAdapter(HELE hEle, HXCGUI hAdapter);
XC_API HXCGUI WINAPI XTree_GetAdapter(HELE hEle);
XC_API void WINAPI XTree_RefreshData(HELE hEle);
XC_API void WINAPI XTree_RefreshItem(HELE hEle, int nID);
XC_API BOOL WINAPI _XWnd_RegEvent(HWINDOW hWindow, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI _XWnd_RemoveEvent(HWINDOW hWindow, UINT nEvent, xc_event* pEvent);
XC_API BOOL WINAPI XWnd_RegEventC(HWINDOW hWindow, int nEvent, void *pFun);
XC_API BOOL WINAPI XWnd_RegEventC1(HWINDOW hWindow, int nEvent, void *pFun);
XC_API BOOL WINAPI XWnd_RemoveEventC(HWINDOW hWindow, int nEvent, void *pFun);
XC_API HWINDOW WINAPI XWnd_Create(int x, int y, int cx, int cy, const wchar_t *pTitle, HWND hWndParent = NULL, int XCStyle = xc_window_style_default);
XC_API HWINDOW WINAPI XWnd_CreateEx(DWORD dwExStyle, const wchar_t* lpClassName, const wchar_t* lpWindowName, DWORD dwStyle, int x, int y, int cx, int cy, HWND hWndParent = NULL, int XCStyle = xc_window_style_default);
XC_API BOOL WINAPI XWnd_AddChild(HWINDOW hWindow, HXCGUI hChild);
XC_API BOOL WINAPI XWnd_InsertChild(HWINDOW hWindow, HXCGUI hChild, int index);
XC_API HWND WINAPI XWnd_GetHWND(HWINDOW hWindow);
XC_API void WINAPI XWnd_EnableDragBorder(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDragWindow(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDragCaption(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableDrawBk(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableAutoFocus(HWINDOW hWindow, BOOL bEnable); //�������������Ƿ��ý���
XC_API void WINAPI XWnd_EnableMaxWindow(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_EnableLayout(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI XWnd_ShowLayoutFrame(HWINDOW hWindow, BOOL bEnable);
XC_API BOOL WINAPI XWnd_IsEnableLayout(HWINDOW hWindow);
XC_API void WINAPI XWnd_RedrawWnd(HWINDOW hWindow, BOOL bImmediate = FALSE);
XC_API void WINAPI XWnd_RedrawWndRect(HWINDOW hWindow, RECT *pRect, BOOL bImmediate = FALSE); //�ػ洰��ָ������
XC_API void WINAPI XWnd_SetFocusEle(HWINDOW hWindow, HELE hFocusEle);
XC_API HELE WINAPI XWnd_GetFocusEle(HWINDOW hWindow);
XC_API HELE WINAPI XWnd_GetStayHELE(HWINDOW hWindow);  //��ȡ��ǰ�����ͣ��Ԫ��
XC_API void WINAPI XWnd_DrawWindow(HWINDOW hWindow, HDRAW hDraw);
XC_API void WINAPI XWnd_Center(HWINDOW hWindow);
XC_API void WINAPI XWnd_CenterEx(HWINDOW hWindow, int width, int height);
XC_API void WINAPI XWnd_SetCursor(HWINDOW hWindow, HCURSOR hCursor);
XC_API HCURSOR WINAPI XWnd_GetCursor(HWINDOW hWindow);
XC_API HCURSOR WINAPI XWnd_SetCursorSys(HWINDOW hWindow, HCURSOR hCursor);
XC_API void WINAPI XWnd_SetFont(HWINDOW hWindow, HFONTX hFontx);
XC_API void WINAPI XWnd_SetTextColor(HWINDOW hWindow, COLORREF color, BYTE alpha);
XC_API COLORREF WINAPI XWnd_GetTextColor(HWINDOW hWindow);
XC_API COLORREF WINAPI XWnd_GetTextColorEx(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetID(HWINDOW hWindow, int nID);
XC_API int  WINAPI XWnd_GetID(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetCaptureEle(HWINDOW hWindow, HELE hEle);
XC_API HELE WINAPI XWnd_GetCaptureEle(HWINDOW hWindow);
XC_API BOOL WINAPI XWnd_BindLayoutEle(HWINDOW hWindow, window_position_ nPosition, HELE hEle);
XC_API HELE WINAPI XWnd_GetLayoutEle(HWINDOW hWindow, window_position_ nPosition);
XC_API void WINAPI XWnd_SetLayoutSize(HWINDOW hWindow, int left, int top, int right, int bottom);
XC_API void WINAPI XWnd_GetLayoutSize(HWINDOW hWindow, out_ BorderSize_i  *pBorderSize);
XC_API void WINAPI XWnd_SetLayoutHorizon(HWINDOW hWindow, BOOL bHorizon);
XC_API void WINAPI XWnd_SetLayoutAlignH(HWINDOW hWindow, layout_align_ nAlign);
XC_API void WINAPI XWnd_SetLayoutAlignV(HWINDOW hWindow, layout_align_ nAlign);
XC_API void WINAPI XWnd_SetLayoutSpace(HWINDOW hWindow, int nSpace);
XC_API void WINAPI XWnd_SetLayoutPadding(HWINDOW hWindow, int left, int top, int right, int bottom);
XC_API void WINAPI XWnd_SetDragBorderSize(HWINDOW hWindow, int left, int top, int right, int bottom); //�����϶��߿��С
XC_API void WINAPI XWnd_GetDragBorderSize(HWINDOW hWindow, out_ BorderSize_i* pSize);
XC_API void WINAPI XWnd_SetMinimumSize(HWINDOW hWindow, int width, int height);
XC_API HELE WINAPI XWnd_HitChildEle(HWINDOW hWindow, POINT *pPt);
XC_API int  WINAPI XWnd_GetChildCount(HWINDOW hWindow);
XC_API HXCGUI WINAPI XWnd_GetChildByIndex(HWINDOW hWindow, int index);
XC_API HXCGUI WINAPI XWnd_GetChildByID(HWINDOW hWindow, int nID);
XC_API HXCGUI WINAPI XWnd_GetChild(HWINDOW hWindow, int nID);
XC_API void WINAPI XWnd_GetDrawRect(HWINDOW hWindow, RECT *pRcPaint);
XC_API BOOL WINAPI XWnd_ShowWindow(HWINDOW hWindow, int nCmdShow);
XC_API void WINAPI XWnd_AdjustLayout(HWINDOW hWindow);
XC_API void WINAPI XWnd_AdjustLayoutEx(HWINDOW hWindow, int nFlags = xc_adjustLayout_self);
XC_API void WINAPI XWnd_CloseWindow(HWINDOW hWindow);
XC_API void WINAPI XWnd_CreateCaret(HWINDOW hWindow, HELE hEle, int x, int y, int width, int height);//���������
XC_API void WINAPI XWnd_SetCaretSize(HWINDOW hWindow, int width, int height); //���ò������С
XC_API void WINAPI XWnd_SetCaretPos(HWINDOW hWindow, int x, int y); //���ò����λ��
XC_API void WINAPI XWnd_SetCaretPosEx(HWINDOW hWindow, int x, int y, int width, int height); //���ò����λ��
XC_API void WINAPI XWnd_SetCaretColor(HWINDOW hWindow, COLORREF color); //���ò������ɫ
XC_API void WINAPI XWnd_ShowCaret(HWINDOW hWindow, BOOL bShow);  //��ʾ�����
XC_API void WINAPI XWnd_DestroyCaret(HWINDOW hWindow);    //���ٲ����
XC_API HELE WINAPI XWnd_GetCaretHELE(HWINDOW hWindow);
XC_API BOOL WINAPI XWnd_GetClientRect(HWINDOW hWindow, out_ RECT *pRect); //��ȡ�ͻ�������
XC_API void WINAPI XWnd_GetBodyRect(HWINDOW hWindow, out_ RECT *pRect);  //��ȡ����body����
XC_API UINT WINAPI XWnd_SetTimer(HWINDOW hWindow, UINT nIDEvent, UINT uElapse); //���ö�ʱ��
XC_API BOOL WINAPI XWnd_KillTimer(HWINDOW hWindow, UINT nIDEvent);
XC_API BOOL WINAPI XWnd_SetXCTimer(HWINDOW hWindow, UINT nIDEvent, UINT uElapse); //���ö�ʱ��
XC_API BOOL WINAPI XWnd_KillXCTimer(HWINDOW hWindow, UINT nIDEvent);
XC_API HBKM WINAPI XWnd_GetBkManager(HWINDOW hWindow);
XC_API HBKM WINAPI XWnd_GetBkManagerEx(HWINDOW hWindow);
XC_API void WINAPI XWnd_SetTransparentType(HWINDOW hWindow, window_transparent_ nType);  //����͸������
XC_API void WINAPI XWnd_SetTransparentAlpha(HWINDOW hWindow, BYTE alpha); //���ô���͸����
XC_API void WINAPI XWnd_SetTransparentColor(HWINDOW hWindow, COLORREF color); //���ô���͸��ɫ
XC_API void WINAPI XWnd_SetShadowInfo(HWINDOW hWindow, int nSize, int nDepth, int nAngeleSize, BOOL bRightAngle, COLORREF color);
XC_API window_transparent_ WINAPI XWnd_GetTransparentType(HWINDOW hWindow);
XC_API void WINAPI XWnd_GetShadowInfo(HWINDOW hWindow, int *pnSize, int *pnDepth, int *pnAngeleSize, BOOL *pbRightAngle, COLORREF *pColor);
XC_API void WINAPI   XWnd_EnableCSS(HWINDOW hWindow, BOOL bEnable);
XC_API void WINAPI   XWnd_SetCssName(HWINDOW hWindow, const wchar_t *pName);
XC_API const wchar_t* WINAPI XWnd_GetCssName(HWINDOW hWindow);

