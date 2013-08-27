// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "MainWindow.h"

void MainWindow::cb_quickHostInput_i(Fl_Input*, void*) {
  SavePrefs();
}
void MainWindow::cb_quickHostInput(Fl_Input* o, void* v) {
  ((MainWindow*)(o->parent()))->cb_quickHostInput_i(o,v);
}

void MainWindow::cb_msaaSelect_i(Fl_Choice*, void*) {
  if(msaaSelect->value() >= 1 &&
   msaaSelect->value() <= 2)
	MSAAEnabled();
SavePrefs();
}
void MainWindow::cb_msaaSelect(Fl_Choice* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_msaaSelect_i(o,v);
}

void MainWindow::cb_fullscreenCheck_i(Fl_Check_Button*, void*) {
  SavePrefs();
}
void MainWindow::cb_fullscreenCheck(Fl_Check_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_fullscreenCheck_i(o,v);
}

void MainWindow::cb_modeSelect_i(Fl_Input_Choice*, void*) {
  SavePrefs();
}
void MainWindow::cb_modeSelect(Fl_Input_Choice* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_modeSelect_i(o,v);
}

void MainWindow::cb_polyInput_i(Fl_Spinner*, void*) {
  SavePrefs();
}
void MainWindow::cb_polyInput(Fl_Spinner* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_polyInput_i(o,v);
}

void MainWindow::cb_eaxCheck_i(Fl_Light_Button*, void*) {
  SavePrefs();
}
void MainWindow::cb_eaxCheck(Fl_Light_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_eaxCheck_i(o,v);
}

void MainWindow::cb_advancedLensCheck_i(Fl_Light_Button*, void*) {
  SavePrefs();
}
void MainWindow::cb_advancedLensCheck(Fl_Light_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_advancedLensCheck_i(o,v);
}

void MainWindow::cb_softParticleCheck_i(Fl_Light_Button*, void*) {
  SavePrefs();
}
void MainWindow::cb_softParticleCheck(Fl_Light_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_softParticleCheck_i(o,v);
}

void MainWindow::cb_radiosityCheck_i(Fl_Light_Button*, void*) {
  SavePrefs();
}
void MainWindow::cb_radiosityCheck(Fl_Light_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_radiosityCheck_i(o,v);
}

void MainWindow::cb_directLightSelect_i(Fl_Choice*, void*) {
  if(directLightSelect->value() == 2)
	DisableMSAA();
SavePrefs();
}
void MainWindow::cb_directLightSelect(Fl_Choice* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_directLightSelect_i(o,v);
}

void MainWindow::cb_shaderSelect_i(Fl_Choice*, void*) {
  if(shaderSelect->value() == 1)
	DisableMSAA();
SavePrefs();
}
void MainWindow::cb_shaderSelect(Fl_Choice* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_shaderSelect_i(o,v);
}

void MainWindow::cb_bloodCheck_i(Fl_Light_Button*, void*) {
  SavePrefs();
}
void MainWindow::cb_bloodCheck(Fl_Light_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_bloodCheck_i(o,v);
}

void MainWindow::cb_playerNameInput_i(Fl_Input*, void*) {
  SavePrefs();
}
void MainWindow::cb_playerNameInput(Fl_Input* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()->parent()))->cb_playerNameInput_i(o,v);
}

void MainWindow::cb_Advanced_i(Fl_Button*, void*) {
  OpenDetailConfig();
}
void MainWindow::cb_Advanced(Fl_Button* o, void* v) {
  ((MainWindow*)(o->parent()->parent()->parent()))->cb_Advanced_i(o,v);
}

void MainWindow::cb_Connect_i(Fl_Return_Button*, void*) {
  QuickConnectPressed();
}
void MainWindow::cb_Connect(Fl_Return_Button* o, void* v) {
  ((MainWindow*)(o->parent()))->cb_Connect_i(o,v);
}
MainWindow::MainWindow(int X, int Y, int W, int H, const char *L)
  : Fl_Window(X, Y, W, H, L) {
  _MainWindow();
}

MainWindow::MainWindow(int W, int H, const char *L)
  : Fl_Window(0, 0, W, H, L) {
  clear_flag(16);
  _MainWindow();
}

MainWindow::MainWindow()
  : Fl_Window(0, 0, 615, 439, "OpenSpades Startup") {
  clear_flag(16);
  _MainWindow();
}

void MainWindow::_MainWindow() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(12);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
this->when(FL_WHEN_RELEASE);
{ quickHostInput = new Fl_Input(135, 80, 365, 25, "Quick Connect:");
  quickHostInput->callback((Fl_Callback*)cb_quickHostInput);
} // Fl_Input* quickHostInput
{ Fl_Tabs* o = new Fl_Tabs(5, 110, 605, 240);
  o->labelsize(11);
  { Fl_Group* o = new Fl_Group(10, 130, 595, 215, "About");
    { aboutView = new Fl_Help_View(10, 135, 595, 210);
    } // Fl_Help_View* aboutView
    o->end();
  } // Fl_Group* o
  { Fl_Group* o = new Fl_Group(10, 130, 595, 220, "Setup");
    o->hide();
    { Fl_Group* o = new Fl_Group(10, 150, 385, 70, "Video");
      o->box(FL_ENGRAVED_FRAME);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { msaaSelect = new Fl_Choice(270, 160, 115, 25, "AA:");
        msaaSelect->down_box(FL_BORDER_BOX);
        msaaSelect->callback((Fl_Callback*)cb_msaaSelect);
        msaaSelect->when(FL_WHEN_CHANGED);
      } // Fl_Choice* msaaSelect
      { fullscreenCheck = new Fl_Check_Button(20, 190, 100, 25, "Full Screen");
        fullscreenCheck->down_box(FL_DOWN_BOX);
        fullscreenCheck->callback((Fl_Callback*)cb_fullscreenCheck);
      } // Fl_Check_Button* fullscreenCheck
      { modeSelect = new Fl_Input_Choice(65, 160, 160, 25, "Mode");
        modeSelect->callback((Fl_Callback*)cb_modeSelect);
        modeSelect->when(FL_WHEN_CHANGED);
      } // Fl_Input_Choice* modeSelect
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(400, 240, 205, 45, "Audio");
      o->box(FL_ENGRAVED_FRAME);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { polyInput = new Fl_Spinner(545, 250, 50, 25, "Sources:");
        polyInput->callback((Fl_Callback*)cb_polyInput);
        polyInput->when(FL_WHEN_CHANGED);
      } // Fl_Spinner* polyInput
      { eaxCheck = new Fl_Light_Button(410, 250, 50, 25, "EAX");
        eaxCheck->callback((Fl_Callback*)cb_eaxCheck);
        eaxCheck->when(FL_WHEN_CHANGED);
      } // Fl_Light_Button* eaxCheck
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(10, 240, 385, 105, "Graphics");
      o->box(FL_ENGRAVED_FRAME);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { advancedLensCheck = new Fl_Light_Button(20, 250, 185, 25, "Lens Sim.");
        advancedLensCheck->callback((Fl_Callback*)cb_advancedLensCheck);
        advancedLensCheck->when(FL_WHEN_CHANGED);
      } // Fl_Light_Button* advancedLensCheck
      { softParticleCheck = new Fl_Light_Button(210, 250, 175, 25, "Soft Particles");
        softParticleCheck->callback((Fl_Callback*)cb_softParticleCheck);
        softParticleCheck->when(FL_WHEN_CHANGED);
      } // Fl_Light_Button* softParticleCheck
      { radiosityCheck = new Fl_Light_Button(20, 280, 160, 25, "Global Illumination");
        radiosityCheck->callback((Fl_Callback*)cb_radiosityCheck);
        radiosityCheck->when(FL_WHEN_CHANGED);
      } // Fl_Light_Button* radiosityCheck
      { directLightSelect = new Fl_Choice(255, 280, 130, 25, "Lighting");
        directLightSelect->down_box(FL_BORDER_BOX);
        directLightSelect->callback((Fl_Callback*)cb_directLightSelect);
        directLightSelect->when(FL_WHEN_CHANGED);
      } // Fl_Choice* directLightSelect
      { shaderSelect = new Fl_Choice(230, 310, 155, 25, "Shader Effects");
        shaderSelect->down_box(FL_BORDER_BOX);
        shaderSelect->callback((Fl_Callback*)cb_shaderSelect);
        shaderSelect->when(FL_WHEN_CHANGED);
      } // Fl_Choice* shaderSelect
      { bloodCheck = new Fl_Light_Button(20, 310, 100, 25, "Blood");
        bloodCheck->callback((Fl_Callback*)cb_bloodCheck);
        bloodCheck->when(FL_WHEN_CHANGED);
      } // Fl_Light_Button* bloodCheck
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(400, 150, 205, 70, "Game Options");
      o->box(FL_ENGRAVED_FRAME);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      { playerNameInput = new Fl_Input(410, 175, 185, 25, "Player Name:");
        playerNameInput->callback((Fl_Callback*)cb_playerNameInput);
        playerNameInput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        playerNameInput->when(FL_WHEN_CHANGED);
      } // Fl_Input* playerNameInput
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(415, 305, 170, 25, "Advanced Settings...");
      o->callback((Fl_Callback*)cb_Advanced);
    } // Fl_Button* o
    o->end();
  } // Fl_Group* o
  o->end();
} // Fl_Tabs* o
{ bannerBox = new Fl_Box(5, 5, 605, 70);
  bannerBox->box(FL_THIN_DOWN_FRAME);
} // Fl_Box* bannerBox
{ Fl_Return_Button* o = new Fl_Return_Button(505, 80, 100, 25, "Connect");
  o->callback((Fl_Callback*)cb_Connect);
} // Fl_Return_Button* o
{ gpu_info = new Fl_Text_Display(75, 365, 525, 60, "GPU Info:");
  gpu_info->box(FL_DOWN_BOX);
  gpu_info->align(Fl_Align(FL_ALIGN_LEFT_TOP));
} // Fl_Text_Display* gpu_info
inited = false;
end();
}
unsigned char aboutText[3447] = /* binary data included from AboutText.html */
{60,104,49,62,36,123,80,65,67,75,65,71,69,95,83,84,82,73,78,71,125,60,47,
104,49,62,10,60,112,62,10,67,111,112,121,114,105,103,104,116,32,38,99,111,112,
121,59,32,50,48,49,51,32,89,86,84,44,32,97,108,108,32,114,105,103,104,116,115,
32,114,101,115,101,114,118,101,100,46,10,60,47,112,62,10,60,104,50,62,84,104,
105,115,32,112,114,111,103,114,97,109,32,105,110,99,108,117,100,101,115,32,102,
111,108,108,111,119,105,110,103,32,99,111,109,112,111,110,101,110,116,115,58,60,
47,104,50,62,10,10,60,104,51,62,69,78,101,116,60,47,104,51,62,10,60,112,62,67,
111,112,121,114,105,103,104,116,32,40,99,41,32,50,48,48,50,45,50,48,49,49,32,76,
101,101,32,83,97,108,122,109,97,110,60,47,112,62,10,60,112,62,10,9,80,101,114,
109,105,115,115,105,111,110,32,105,115,32,104,101,114,101,98,121,32,103,114,97,
110,116,101,100,44,32,102,114,101,101,32,111,102,32,99,104,97,114,103,101,44,32,
116,111,32,97,110,121,32,112,101,114,115,111,110,32,111,98,116,97,105,110,105,
110,103,32,97,32,99,111,112,121,32,111,102,32,116,104,105,115,32,115,111,102,
116,119,97,114,101,32,97,110,100,32,97,115,115,111,99,105,97,116,101,100,32,100,
111,99,117,109,101,110,116,97,116,105,111,110,32,102,105,108,101,115,32,40,116,
104,101,32,34,83,111,102,116,119,97,114,101,34,41,44,32,116,111,32,100,101,97,
108,32,105,110,32,116,104,101,32,83,111,102,116,119,97,114,101,32,119,105,116,
104,111,117,116,32,114,101,115,116,114,105,99,116,105,111,110,44,32,105,110,99,
108,117,100,105,110,103,32,119,105,116,104,111,117,116,32,108,105,109,105,116,
97,116,105,111,110,32,116,104,101,32,114,105,103,104,116,115,32,116,111,32,117,
115,101,44,32,99,111,112,121,44,32,109,111,100,105,102,121,44,32,109,101,114,
103,101,44,32,112,117,98,108,105,115,104,44,32,100,105,115,116,114,105,98,117,
116,101,44,32,115,117,98,108,105,99,101,110,115,101,44,32,97,110,100,47,111,114,
32,115,101,108,108,32,99,111,112,105,101,115,32,111,102,32,116,104,101,32,83,
111,102,116,119,97,114,101,44,32,97,110,100,32,116,111,32,112,101,114,109,105,
116,32,112,101,114,115,111,110,115,32,116,111,32,119,104,111,109,32,116,104,101,
32,83,111,102,116,119,97,114,101,32,105,115,32,102,117,114,110,105,115,104,101,
100,32,116,111,32,100,111,32,115,111,44,32,115,117,98,106,101,99,116,32,116,111,
32,116,104,101,32,102,111,108,108,111,119,105,110,103,32,99,111,110,100,105,
116,105,111,110,115,58,10,60,47,112,62,10,60,112,62,10,9,84,104,101,32,97,98,
111,118,101,32,99,111,112,121,114,105,103,104,116,32,110,111,116,105,99,101,32,
97,110,100,32,116,104,105,115,32,112,101,114,109,105,115,115,105,111,110,32,
110,111,116,105,99,101,32,115,104,97,108,108,32,98,101,32,105,110,99,108,117,
100,101,100,32,105,110,32,97,108,108,32,99,111,112,105,101,115,32,111,114,32,
115,117,98,115,116,97,110,116,105,97,108,32,112,111,114,116,105,111,110,115,32,
111,102,32,116,104,101,32,83,111,102,116,119,97,114,101,46,10,60,47,112,62,10,
60,112,62,10,9,84,72,69,32,83,79,70,84,87,65,82,69,32,73,83,32,80,82,79,86,73,
68,69,68,32,34,65,83,32,73,83,34,44,32,87,73,84,72,79,85,84,32,87,65,82,82,65,
78,84,89,32,79,70,32,65,78,89,32,75,73,78,68,44,32,69,88,80,82,69,83,83,32,79,
82,32,73,77,80,76,73,69,68,44,32,73,78,67,76,85,68,73,78,71,32,66,85,84,32,78,
79,84,32,76,73,77,73,84,69,68,32,84,79,32,84,72,69,32,87,65,82,82,65,78,84,73,
69,83,32,79,70,32,77,69,82,67,72,65,78,84,65,66,73,76,73,84,89,44,32,70,73,84,
78,69,83,83,32,70,79,82,32,65,32,80,65,82,84,73,67,85,76,65,82,32,80,85,82,80,
79,83,69,32,65,78,68,32,78,79,78,73,78,70,82,73,78,71,69,77,69,78,84,46,32,73,
78,32,78,79,32,69,86,69,78,84,32,83,72,65,76,76,32,84,72,69,32,65,85,84,72,79,
82,83,32,79,82,32,67,79,80,89,82,73,71,72,84,32,72,79,76,68,69,82,83,32,66,69,
32,76,73,65,66,76,69,32,70,79,82,32,65,78,89,32,67,76,65,73,77,44,32,68,65,77,
65,71,69,83,32,79,82,32,79,84,72,69,82,32,76,73,65,66,73,76,73,84,89,44,32,87,
72,69,84,72,69,82,32,73,78,32,65,78,32,65,67,84,73,79,78,32,79,70,32,67,79,78,
84,82,65,67,84,44,32,84,79,82,84,32,79,82,32,79,84,72,69,82,87,73,83,69,44,32,
65,82,73,83,73,78,71,32,70,82,79,77,44,32,79,85,84,32,79,70,32,79,82,32,73,78,
32,67,79,78,78,69,67,84,73,79,78,32,87,73,84,72,32,84,72,69,32,83,79,70,84,87,
65,82,69,32,79,82,32,84,72,69,32,85,83,69,32,79,82,32,79,84,72,69,82,32,68,69,
65,76,73,78,71,83,32,73,78,32,84,72,69,32,83,79,70,84,87,65,82,69,46,10,60,47,
112,62,10,10,60,104,51,62,75,105,115,115,32,70,70,84,60,47,104,51,62,10,60,112,
62,67,111,112,121,114,105,103,104,116,32,40,99,41,32,50,48,48,51,45,50,48,49,
48,32,77,97,114,107,32,66,111,114,103,101,114,100,105,110,103,60,47,112,62,10,
60,112,62,65,108,108,32,114,105,103,104,116,115,32,114,101,115,101,114,118,101,
100,46,60,47,112,62,10,60,112,62,82,101,100,105,115,116,114,105,98,117,116,105,
111,110,32,97,110,100,32,117,115,101,32,105,110,32,115,111,117,114,99,101,32,97,
110,100,32,98,105,110,97,114,121,32,102,111,114,109,115,44,32,119,105,116,104,
32,111,114,32,119,105,116,104,111,117,116,32,109,111,100,105,102,105,99,97,116,
105,111,110,44,32,97,114,101,32,112,101,114,109,105,116,116,101,100,32,112,114,
111,118,105,100,101,100,32,116,104,97,116,32,116,104,101,32,102,111,108,108,111,
119,105,110,103,32,99,111,110,100,105,116,105,111,110,115,32,97,114,101,32,109,
101,116,58,60,47,112,62,10,60,117,108,62,10,9,60,108,105,62,82,101,100,105,115,
116,114,105,98,117,116,105,111,110,115,32,111,102,32,115,111,117,114,99,101,32,
99,111,100,101,32,109,117,115,116,32,114,101,116,97,105,110,32,116,104,101,32,
97,98,111,118,101,32,99,111,112,121,114,105,103,104,116,32,110,111,116,105,99,
101,44,32,116,104,105,115,32,108,105,115,116,32,111,102,32,99,111,110,100,105,
116,105,111,110,115,32,97,110,100,32,116,104,101,32,102,111,108,108,111,119,105,
110,103,32,100,105,115,99,108,97,105,109,101,114,46,60,47,108,105,62,10,9,60,
108,105,62,82,101,100,105,115,116,114,105,98,117,116,105,111,110,115,32,105,110,
32,98,105,110,97,114,121,32,102,111,114,109,32,109,117,115,116,32,114,101,112,
114,111,100,117,99,101,32,116,104,101,32,97,98,111,118,101,32,99,111,112,121,
114,105,103,104,116,32,110,111,116,105,99,101,44,32,116,104,105,115,32,108,105,
115,116,32,111,102,32,99,111,110,100,105,116,105,111,110,115,32,97,110,100,32,
116,104,101,32,102,111,108,108,111,119,105,110,103,32,100,105,115,99,108,97,105,
109,101,114,32,105,110,32,116,104,101,32,100,111,99,117,109,101,110,116,97,116,
105,111,110,32,97,110,100,47,111,114,32,111,116,104,101,114,32,109,97,116,101,
114,105,97,108,115,32,112,114,111,118,105,100,101,100,32,119,105,116,104,32,116,
104,101,32,100,105,115,116,114,105,98,117,116,105,111,110,46,60,47,108,105,62,
10,9,60,108,105,62,78,101,105,116,104,101,114,32,116,104,101,32,97,117,116,104,
111,114,32,110,111,114,32,116,104,101,32,110,97,109,101,115,32,111,102,32,97,
110,121,32,99,111,110,116,114,105,98,117,116,111,114,115,32,109,97,121,32,98,
101,32,117,115,101,100,32,116,111,32,101,110,100,111,114,115,101,32,111,114,32,
112,114,111,109,111,116,101,32,112,114,111,100,117,99,116,115,32,100,101,114,
105,118,101,100,32,102,114,111,109,32,116,104,105,115,32,115,111,102,116,119,97,
114,101,32,119,105,116,104,111,117,116,32,115,112,101,99,105,102,105,99,32,112,
114,105,111,114,32,119,114,105,116,116,101,110,32,112,101,114,109,105,115,115,
105,111,110,46,60,47,108,105,62,10,60,47,117,108,62,10,60,112,62,10,84,72,73,83,
32,83,79,70,84,87,65,82,69,32,73,83,32,80,82,79,86,73,68,69,68,32,66,89,32,84,
72,69,32,67,79,80,89,82,73,71,72,84,32,72,79,76,68,69,82,83,32,65,78,68,32,67,
79,78,84,82,73,66,85,84,79,82,83,32,34,65,83,32,73,83,34,32,65,78,68,32,65,78,
89,32,69,88,80,82,69,83,83,32,79,82,32,73,77,80,76,73,69,68,32,87,65,82,82,65,
78,84,73,69,83,44,32,73,78,67,76,85,68,73,78,71,44,32,66,85,84,32,78,79,84,32,
76,73,77,73,84,69,68,32,84,79,44,32,84,72,69,32,73,77,80,76,73,69,68,32,87,65,
82,82,65,78,84,73,69,83,32,79,70,32,77,69,82,67,72,65,78,84,65,66,73,76,73,84,
89,32,65,78,68,32,70,73,84,78,69,83,83,32,70,79,82,32,65,32,80,65,82,84,73,67,
85,76,65,82,32,80,85,82,80,79,83,69,32,65,82,69,32,68,73,83,67,76,65,73,77,69,
68,46,32,73,78,32,78,79,32,69,86,69,78,84,32,83,72,65,76,76,32,84,72,69,32,67,
79,80,89,82,73,71,72,84,32,79,87,78,69,82,32,79,82,32,67,79,78,84,82,73,66,85,
84,79,82,83,32,66,69,32,76,73,65,66,76,69,32,70,79,82,32,65,78,89,32,68,73,82,
69,67,84,44,32,73,78,68,73,82,69,67,84,44,32,73,78,67,73,68,69,78,84,65,76,44,
32,83,80,69,67,73,65,76,44,32,69,88,69,77,80,76,65,82,89,44,32,79,82,32,67,79,
78,83,69,81,85,69,78,84,73,65,76,32,68,65,77,65,71,69,83,32,40,73,78,67,76,85,
68,73,78,71,44,32,66,85,84,32,78,79,84,32,76,73,77,73,84,69,68,32,84,79,44,32,
80,82,79,67,85,82,69,77,69,78,84,32,79,70,32,83,85,66,83,84,73,84,85,84,69,32,
71,79,79,68,83,32,79,82,32,83,69,82,86,73,67,69,83,59,32,76,79,83,83,32,79,70,
32,85,83,69,44,32,68,65,84,65,44,32,79,82,32,80,82,79,70,73,84,83,59,32,79,82,
32,66,85,83,73,78,69,83,83,32,73,78,84,69,82,82,85,80,84,73,79,78,41,32,72,79,
87,69,86,69,82,32,67,65,85,83,69,68,32,65,78,68,32,79,78,32,65,78,89,32,84,72,
69,79,82,89,32,79,70,32,76,73,65,66,73,76,73,84,89,44,32,87,72,69,84,72,69,82,
32,73,78,32,67,79,78,84,82,65,67,84,44,32,83,84,82,73,67,84,32,76,73,65,66,73,
76,73,84,89,44,32,79,82,32,84,79,82,84,32,40,73,78,67,76,85,68,73,78,71,32,78,
69,71,76,73,71,69,78,67,69,32,79,82,32,79,84,72,69,82,87,73,83,69,41,32,65,82,
73,83,73,78,71,32,73,78,32,65,78,89,32,87,65,89,32,79,85,84,32,79,70,32,84,72,
69,32,85,83,69,32,79,70,32,84,72,73,83,32,83,79,70,84,87,65,82,69,44,32,69,86,
69,78,32,73,70,32,65,68,86,73,83,69,68,32,79,70,32,84,72,69,32,80,79,83,83,73,
66,73,76,73,84,89,32,79,70,32,83,85,67,72,32,68,65,77,65,71,69,46,10,60,47,112,
62,10,10,10,60,104,50,62,80,111,114,116,105,111,110,115,32,111,102,32,112,114,
111,103,114,97,109,32,105,115,32,98,97,115,101,100,32,111,110,32,102,111,108,
108,111,119,105,110,103,32,115,111,102,116,119,97,114,101,115,58,60,47,104,50,
62,10,10,60,104,51,62,112,121,115,110,105,112,60,47,104,51,62,10,10,60,112,62,
76,105,99,101,110,115,101,100,32,98,121,32,71,80,76,118,51,46,32,67,82,69,68,
73,84,83,47,67,79,78,84,82,73,66,85,84,73,79,78,83,47,65,67,75,78,79,87,76,69,
68,71,69,77,69,78,84,83,58,60,47,112,62,10,10,60,117,108,62,10,60,108,105,62,
77,97,116,104,105,97,115,32,34,77,97,116,94,50,34,32,75,97,101,114,108,101,118,
32,45,32,77,111,115,116,32,111,102,32,116,104,101,32,99,111,100,101,60,47,108,
105,62,10,60,108,105,62,34,104,111,109,112,121,34,32,45,32,70,108,111,97,116,
105,110,103,32,98,108,111,99,107,32,100,101,116,101,99,116,105,111,110,44,32,73,
82,67,32,99,108,105,101,110,116,44,32,103,101,110,101,114,97,108,32,99,111,100,
101,44,32,101,116,99,46,60,47,108,105,62,10,60,108,105,62,34,84,114,105,112,108,
101,102,111,120,34,32,45,32,77,97,112,32,103,101,110,101,114,97,116,111,114,32,
99,111,100,101,44,32,110,101,116,119,111,114,107,32,99,111,100,101,44,32,101,
116,99,46,60,47,108,105,62,10,60,108,105,62,34,83,104,97,109,34,32,45,32,72,111,
115,116,105,110,103,32,97,110,100,32,116,101,115,116,105,110,103,60,47,108,105,
62,10,60,108,105,62,34,89,111,117,114,115,101,108,102,34,32,45,32,83,99,114,
105,112,116,115,60,47,108,105,62,10,60,108,105,62,34,98,105,108,100,114,97,109,
101,114,34,32,45,32,70,108,111,97,116,105,110,103,32,98,108,111,99,107,32,100,
101,116,101,99,116,105,111,110,32,40,65,42,41,32,97,110,100,32,109,105,115,99,
46,32,99,111,100,101,60,47,108,105,62,10,60,108,105,62,34,84,104,101,71,114,97,
110,100,109,97,115,116,101,114,34,32,45,32,84,101,115,116,101,114,44,32,105,100,
101,97,115,32,97,110,100,32,116,104,101,32,111,102,102,105,99,105,97,108,32,109,
97,112,60,47,108,105,62,10,60,108,105,62,34,84,101,103,117,34,32,45,32,76,111,
103,111,44,32,105,100,101,97,115,44,32,116,101,115,116,105,110,103,32,97,110,
100,32,116,104,101,32,111,102,102,105,99,105,97,108,32,109,97,112,60,47,108,105,
62,10,60,108,105,62,34,69,110,97,114,105,34,32,45,32,84,101,115,116,105,110,
103,44,32,109,105,115,99,46,32,99,111,100,101,32,97,110,100,32,105,100,101,97,
115,60,47,108,105,62,10,60,47,117,108,62,10};
