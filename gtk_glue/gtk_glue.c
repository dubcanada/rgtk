// This file is part of rgtk.
//
// rgtk is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// rgtk is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with rgtk.  If not, see <http://www.gnu.org/licenses/>.

#include <gtk/gtk.h>

void glue_signal_connect(void *g_object, char *signal, void (*func)(void*, void*), void *user_param) {
    g_signal_connect(G_OBJECT(g_object), signal, G_CALLBACK(func), user_param);
}

GObject* cast_GtkObject(void* object) {
    return G_OBJECT(object);
}

GValue* cast_GtkGValue(void* value) {
    return (GValue*)value;
}

GtkWindow* cast_GtkWindow(GtkWidget* widget) {
    return GTK_WINDOW(widget);
}

GtkContainer* cast_GtkContainer(GtkWidget* widget) {
    return GTK_CONTAINER(widget);
}

GtkFileChooser* cast_GtkFileChooser(GtkWidget* widget) {
    return GTK_FILE_CHOOSER(widget);
}

GtkMisc* cast_GtkMisc(GtkWidget* widget) {
    return GTK_MISC(widget);
}

GtkLabel* cast_GtkLabel(GtkWidget* widget) {
    return GTK_LABEL(widget);
}

GtkButton* cast_GtkButton(GtkWidget* widget) {
    return GTK_BUTTON(widget);
}

GtkSpinButton* cast_GtkSpinButton(GtkWidget* widget) {
    return GTK_SPIN_BUTTON(widget);
}

GtkRadioButton* cast_GtkRadioButton(GtkWidget* widget) {
    return GTK_RADIO_BUTTON(widget);
}

GtkFontButton* cast_GtkFontButton(GtkWidget* widget) {
    return GTK_FONT_BUTTON(widget);
}

GtkLinkButton* cast_GtkLinkButton(GtkWidget* widget) {
    return GTK_LINK_BUTTON(widget);
}

GtkComboBox* cast_GtkComboBox(GtkWidget* widget) {
    return GTK_COMBO_BOX(widget);
}

GtkAccessible* cast_GtkAccessible(void* widget) {
    return GTK_ACCESSIBLE(widget);
}

GtkBin* cast_GtkBin(GtkWidget* widget) {
    return GTK_BIN(widget);
}

GtkStatusbar* cast_GtkStatusbar(GtkWidget* widget) {
    return GTK_STATUSBAR(widget);
}

GtkInfoBar* cast_GtkInfoBar(GtkWidget* widget) {
    return GTK_INFO_BAR(widget);
}

GtkFrame* cast_GtkFrame(GtkWidget* widget) {
    return GTK_FRAME(widget);
}

GtkBox* cast_GtkBox(GtkWidget* widget) {
    return GTK_BOX(widget);
}

GtkPaned* cast_GtkPaned(GtkWidget* widget) {
    return GTK_PANED(widget);
}

GtkToggleButton* cast_GtkToggleButton(GtkWidget* widget) {
    return GTK_TOGGLE_BUTTON(widget);
}

GtkAccelLabel* cast_GtkAccelLabel(GtkWidget* widget) {
    return GTK_ACCEL_LABEL(widget);
}

GtkEntry* cast_GtkEntry(GtkWidget* widget) {
    return GTK_ENTRY(widget);
}

GtkScaleButton* cast_GtkScaleButton(GtkWidget* widget) {
    return GTK_SCALE_BUTTON(widget);
}

GtkTextView* cast_GtkTextView(GtkWidget* widget) {
    return GTK_TEXT_VIEW(widget);
}

GtkTextBuffer* cast_GtkTextBuffer(void* widget) {
    return GTK_TEXT_BUFFER(widget);
}

GtkMenu* cast_GtkMenu(GtkWidget* widget) {
    return GTK_MENU(widget);
}

GtkMenuBar* cast_GtkMenuBar(GtkWidget* widget) {
    return GTK_MENU_BAR(widget);
}

GtkMenuShell* cast_GtkMenuShell(GtkWidget* widget) {
    return GTK_MENU_SHELL(widget);
}

GtkMenuItem* cast_GtkMenuItem(GtkWidget* widget) {
    return GTK_MENU_ITEM(widget);
}

GtkToolbar* cast_GtkToolbar(GtkWidget* widget) {
    return GTK_TOOLBAR(widget);
}

GtkToolItem* cast_GtkToolItem(GtkWidget* widget) {
    return GTK_TOOL_ITEM(widget);
}

GtkSeparatorToolItem* cast_GtkSeparatorToolItem(GtkWidget* widget) {
    return GTK_SEPARATOR_TOOL_ITEM(widget);
}

GtkToolButton* cast_GtkToolButton(GtkWidget* widget) {
    return GTK_TOOL_BUTTON(widget);
}
GtkToolPalette* cast_GtkToolPalette(GtkWidget* widget) {
    return GTK_TOOL_PALETTE(widget);
}

GtkToolItemGroup* cast_GtkToolItemGroup(GtkWidget* widget) {
    return GTK_TOOL_ITEM_GROUP(widget);
}

GtkMenuToolButton* cast_GtkMenuToolButton(GtkWidget* widget) {
    return GTK_MENU_TOOL_BUTTON(widget);
}

GtkToggleToolButton* cast_GtkToggleToolButton(GtkWidget* widget) {
    return GTK_TOGGLE_TOOL_BUTTON(widget);
}

GtkScrolledWindow* cast_GtkScrolledWindow(GtkWidget* widget) {
    return GTK_SCROLLED_WINDOW(widget);
}

GtkViewport* cast_GtkViewport(GtkWidget* widget) {
    return GTK_VIEWPORT(widget);
}

GtkWidget* cast_GtkWidget(void* widget) {
    return GTK_WIDGET(widget);
}

GtkTreeView* cast_GtkTreeView(GtkWidget* widget) {
    return GTK_TREE_VIEW(widget);
}

GtkIconView* cast_GtkIconView(GtkWidget* widget) {
    return GTK_ICON_VIEW(widget);
}

GtkTreeSortable* cast_GtkTreeSortable(GtkTreeModel* tree_model) {
    return GTK_TREE_SORTABLE(tree_model);
}

GtkEditable* cast_GtkEditable(GtkWidget* widget) {
    return GTK_EDITABLE(widget);
}

GtkCellRendererText* cast_GtkCellRendererText(GtkCellRenderer* cell_renderer) {
    return GTK_CELL_RENDERER_TEXT(cell_renderer);
}

GtkCellRendererToggle* cast_GtkCellRendererToggle(GtkCellRenderer* cell_renderer) {
    return GTK_CELL_RENDERER_TOGGLE(cell_renderer);
}

GtkScale* cast_GtkScale(GtkWidget* widget) {
    return GTK_SCALE(widget);
}

GtkRange* cast_GtkRange(GtkWidget* widget) {
    return GTK_RANGE(widget);
}

GtkTreeModel* cast_GtkTreeModelFromListStore(GtkListStore* list_store) {
    return GTK_TREE_MODEL(list_store);
}

GtkTreeModel* cast_GtkTreeModelFromTreeStore(GtkTreeStore* tree_store) {
    return GTK_TREE_MODEL(tree_store);
}

GtkImage* cast_GtkImage(GtkWidget* widget) {
    return GTK_IMAGE(widget);
}

GtkNotebook* cast_GtkNotebook(GtkWidget* widget) {
    return GTK_NOTEBOOK(widget);
}

GtkDrawingArea* cast_GtkDrawingArea(GtkWidget* widget) {
    return GTK_DRAWING_AREA(widget);
}

GtkSpinner* cast_GtkSpinner(GtkWidget* widget) {
    return GTK_SPINNER(widget);
}

GtkAssistant* cast_GtkAssistant(GtkWidget* widget) {
    return GTK_ASSISTANT(widget);
}

GtkExpander* cast_GtkExpander(GtkWidget* widget) {
    return GTK_EXPANDER(widget);
}

GtkAlignment* cast_GtkAlignment(GtkWidget* widget) {
    return GTK_ALIGNMENT(widget);
}

GtkProgressBar* cast_GtkProgressBar(GtkWidget* widget) {
    return GTK_PROGRESS_BAR(widget);
}

GtkFixed* cast_GtkFixed(GtkWidget* widget) {
    return GTK_FIXED(widget);
}

GtkCheckMenuItem* cast_GtkCheckMenuItem(GtkWidget* widget) {
    return GTK_CHECK_MENU_ITEM(widget);
}

GtkRadioMenuItem* cast_GtkRadioMenuItem(GtkWidget* widget) {
    return GTK_RADIO_MENU_ITEM(widget);
}

GtkFileFilter* cast_GtkFileFilter(gpointer pointer) {
    return GTK_FILE_FILTER(pointer);
}

GtkLayout* cast_GtkLayout(GtkWidget* widget) {
    return GTK_LAYOUT(widget);
}

GtkColorButton* cast_GtkColorButton(GtkWidget* widget) {
    return GTK_COLOR_BUTTON(widget);
}
GtkButtonBox* cast_GtkButtonBox(GtkWidget* widget) {
    return GTK_BUTTON_BOX(widget);
}

GtkAspectFrame* cast_GtkAspectFrame(GtkWidget* widget) {
    return GTK_ASPECT_FRAME(widget);
}

GtkOrientable* cast_GtkOrientable(GtkWidget* widget) {
    return GTK_ORIENTABLE(widget);
}

GtkGrid* cast_GtkGrid(GtkWidget* widget) {
    return GTK_GRID(widget);
}

GtkSwitch* cast_GtkSwitch(GtkWidget* widget) {
    return GTK_SWITCH(widget);
}

GtkArrow* cast_GtkArrow(GtkWidget* widget) {
    return GTK_ARROW(widget);
}

GtkCalendar* cast_GtkCalendar(GtkWidget* widget) {
    return GTK_CALENDAR(widget);
}

GtkToolShell* cast_GtkToolShell(GtkWidget* widget) {
    return GTK_TOOL_SHELL(widget);
}

GtkRadioToolButton* cast_GtkRadioToolButton(GtkWidget* widget) {
    return GTK_RADIO_TOOL_BUTTON(widget);
}

GtkDialog* cast_GtkDialog(GtkWidget* widget) {
    return GTK_DIALOG(widget);
}

GtkAboutDialog* cast_GtkAboutDialog(GtkWidget* widget) {
    return GTK_ABOUT_DIALOG(widget);
}

GtkMessageDialog* cast_GtkMessageDialog(GtkWidget* widget) {
    return GTK_MESSAGE_DIALOG(widget);
}

GtkColorChooserDialog* cast_GtkColorChooserDialog(GtkWidget* widget) {
    return GTK_COLOR_CHOOSER_DIALOG(widget);
}

GtkColorChooser* cast_GtkColorChooser(GtkWidget* widget) {
    return GTK_COLOR_CHOOSER(widget);
}

GtkAdjustment* cast_GtkAdjustment(GtkWidget* widget) {
    return GTK_ADJUSTMENT(widget);
}

GtkOverlay* cast_GtkOverlay(GtkWidget* widget) {
    return GTK_OVERLAY(widget);
}

GtkScrollable* cast_GtkScrollable(GtkWidget* widget) {
    return GTK_SCROLLABLE(widget);
}

GtkAppChooser* cast_GtkAppChooser(GtkWidget* widget) {
    return GTK_APP_CHOOSER(widget);
}

GtkAppChooserDialog* cast_GtkAppChooserDialog(GtkWidget* widget) {
    return GTK_APP_CHOOSER_DIALOG(widget);
}

#ifndef GTK_3_4

GtkLevelBar* cast_GtkLevelBar(GtkWidget* widget) {
    return GTK_LEVEL_BAR(widget);
}

#endif

GtkFontChooserDialog* cast_GtkFontChooserDialog(GtkWidget* widget) {
    return GTK_FONT_CHOOSER_DIALOG(widget);
}

GtkFontChooser* cast_GtkFontChooser(GtkWidget* widget) {
    return GTK_FONT_CHOOSER(widget);
}

GtkPageSetup* cast_GtkPageSetup(GtkWidget* widget) {
    return GTK_PAGE_SETUP(widget);
}

// need to fix this later
GtkPaperSize* cast_GtkPaperSize(GtkWidget* widget) {
    return (GtkPaperSize*)widget;
}

// It seems that this type doesn't exist...
/*GtkPageSetupUnixDialog* cast_GtkPageSetupUnixDialog(GtkWidget* widget) {
    return GTK_PAGE_SETUP_UNIX_DIALOG(widget);
}*/

GtkPrintSettings* cast_GtkPrintSettings(GtkWidget* widget) {
    return GTK_PRINT_SETTINGS(widget);
}

GtkRecentChooserDialog* cast_GGtkRecentChooserDialog(GtkWidget* widget) {
    return GTK_RECENT_CHOOSER_DIALOG(widget);
}

GtkRecentManager* cast_GtkRecentManager(GtkWidget* widget) {
    return GTK_RECENT_MANAGER(widget);
}

GtkRecentChooser* cast_GtkRecentChooser(GtkWidget* widget) {
    return GTK_RECENT_CHOOSER(widget);
}

GtkRecentFilter* cast_GtkRecentFilter(GtkWidget* widget) {
    return GTK_RECENT_FILTER(widget);
}

//need to fix this
GtkRecentInfo* cast_GtkRecentInfo(GtkWidget* widget) {
    return (GtkRecentInfo*)widget;
}

/* specific versions */

#ifdef GTK_3_6

GtkMenuButton* cast_GtkMenuButton(GtkWidget* widget) {
    return GTK_MENU_BUTTON(widget);
}

#endif

#ifdef GTK_3_10

GtkSearchBar* cast_GtkSearchBar(GtkWidget* widget) {
    return GTK_SEARCH_BAR(widget);
}

GtkStack* cast_GtkStack(GtkWidget* widget) {
    return GTK_STACK(widget);
}

GtkStackSwitcher* cast_GtkStackSwitcher(GtkWidget* widget) {
    return GTK_STACK_SWITCHER(widget);
}

GtkRevealer* cast_GtkRevealer(GtkWidget* widget) {
    return GTK_REVEALER(widget);
}

GtkHeaderBar* cast_GtkHeaderBar(GtkWidget* widget) {
    return GTK_HEADER_BAR(widget);
}

GtkListBox* cast_GtkListBox(GtkWidget* widget) {
    return GTK_LIST_BOX(widget);
}

GtkListBoxRow* cast_GtkListBoxRow(GtkWidget* widget) {
    return GTK_LIST_BOX_ROW(widget);
}

#endif

#ifdef GTK_3_12

GtkFlowBox* cast_GtkFlowBox(GtkWidget* widget) {
    return GTK_FLOW_BOX(widget);
}

GtkFlowBoxChild* cast_GtkFlowBoxChild(GtkWidget* widget) {
    return GTK_FLOW_BOX_CHILD(widget);
}

GtkActionBar* cast_GtkActionBar(GtkWidget* widget) {
    return GTK_ACTION_BAR(widget);
}

#endif

/*GAppInfo* cast_GtkAppInfo(GtkWidget* widget) {
    return G_APP_INFO(widget);
}

GAppLaunchContext* cast_GtkAppLaunchContext(GtkWidget* widget) {
    return G_APP_LAUNCH_CONTEXT(widget);
}*/

/* MAC OS dylib
gcc -I/usr/local/include/gtk-3.0 -I/usr/local/include/glib-2.0 -I/usr/local/include/gobject-introspection-1.0 -I/usr/local/Cellar/glib/2.38.1/lib/glib-2.0/include/ -I/usr/local/Cellar/pango/1.36.0/include/pango-1.0/ -I/usr/local/Cellar/cairo/1.12.16/include/cairo/ -I/usr/local/Cellar/gdk-pixbuf/2.30.0/include/gdk-pixbuf-2.0/ -I/usr/local/Cellar/atk/2.10.0/include/atk-1.0/ -lglib-2.0 -lgtk-3.0 -lgobject-2.0 -dynamiclib -o libgtk_glue.dylib -dy gtk_glue.c
*/


/* LINUX .SO
gcc `pkg-config --cflags --libs gtk+-3.0`  -fPIC -c   gtk_glue.c


gcc -shared gtk_glue.o
*/