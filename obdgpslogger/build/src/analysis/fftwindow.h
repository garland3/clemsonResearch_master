// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef fftwindow_h
#define fftwindow_h
#include <FL/Fl.H>
#include <fftw3.h>
#include <FL/Fl.H>
#include <FL/Fl_Chart.H>
#include "sqlite3.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Value_Slider.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>

class FFTOBD {
  sqlite3 *db; 
  fftw_complex *rawdata; 
  fftw_complex *plotdata; 
  fftw_complex *transformeddata; 
  int dataitems; // Number of items allocated in rawdata
  int plans_prepared; 
  fftw_plan ff_forward; 
  fftw_plan ff_backward; 
public:
  FFTOBD();
  Fl_Double_Window *mainwindow;
  static Fl_Menu_Item menu_[];
private:
  void cb_Open_i(Fl_Menu_*, void*);
  static void cb_Open(Fl_Menu_*, void*);
  void cb_Open1_i(Fl_Menu_*, void*);
  static void cb_Open1(Fl_Menu_*, void*);
  void cb_Save_i(Fl_Menu_*, void*);
  static void cb_Save(Fl_Menu_*, void*);
  void cb_Quit_i(Fl_Menu_*, void*);
  static void cb_Quit(Fl_Menu_*, void*);
public:
  Fl_Value_Output *chart_ymax;
  Fl_Value_Output *chart_ymin;
  Fl_Value_Output *chart_xmax;
  Fl_Value_Output *chart_xmin;
  Fl_Chart *fftchart_raw;
  Fl_Chart *fftchart;
  Fl_Input_Choice *columnchoice;
private:
  void cb_columnchoice_i(Fl_Input_Choice*, void*);
  static void cb_columnchoice(Fl_Input_Choice*, void*);
public:
  Fl_Input_Choice *tripchoice;
private:
  void cb_tripchoice_i(Fl_Input_Choice*, void*);
  static void cb_tripchoice(Fl_Input_Choice*, void*);
public:
  Fl_Value_Slider *bendcurveslider;
private:
  void cb_bendcurveslider_i(Fl_Value_Slider*, void*);
  static void cb_bendcurveslider(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *rad_min;
private:
  void cb_rad_min_i(Fl_Value_Slider*, void*);
  static void cb_rad_min(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *rad_max;
private:
  void cb_rad_max_i(Fl_Value_Slider*, void*);
  static void cb_rad_max(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *freq_min;
private:
  void cb_freq_min_i(Fl_Value_Slider*, void*);
  static void cb_freq_min(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *freq_max;
private:
  void cb_freq_max_i(Fl_Value_Slider*, void*);
  static void cb_freq_max(Fl_Value_Slider*, void*);
  void cb_Reset_i(Fl_Button*, void*);
  static void cb_Reset(Fl_Button*, void*);
public:
  Fl_Value_Slider *graphstart;
private:
  void cb_graphstart_i(Fl_Value_Slider*, void*);
  static void cb_graphstart(Fl_Value_Slider*, void*);
public:
  Fl_Value_Slider *graphend;
private:
  void cb_graphend_i(Fl_Value_Slider*, void*);
  static void cb_graphend(Fl_Value_Slider*, void*);
public:
  Fl_Check_Button *showrawdata;
private:
  void cb_showrawdata_i(Fl_Check_Button*, void*);
  static void cb_showrawdata(Fl_Check_Button*, void*);
public:
  ~FFTOBD();
  void show(int argc, char **argv);
  void show();
  int opendb(const char *dbfilename);
  int opencsv(const char *csvfilename);
private:
  int savedata(const char *filename);
  void closedb();
  int loaddata();
  void freedata();
  void allocatedata(int numitems);
  void renderplotdata();
  void loadfftwwisdom();
  void savefftwwisdom();
  void destroyplans();
  void prepareplans();
  void thereandbackagain();
  void resetsliders();
  int populatechoices();
};
#endif
