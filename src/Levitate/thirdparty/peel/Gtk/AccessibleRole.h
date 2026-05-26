#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gtk/gtk.h>
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::Role>
{
  typedef Gtk::Accessible::Role UnownedType;

  static Gtk::Accessible::Role
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::Role> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::Role m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleRole> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::Role m)
  {
    set (value, m);
  }

  static Gtk::Accessible::Role
  cast_for_create (Gtk::Accessible::Role m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::Role> ()
{
  return gtk_accessible_role_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::Role>
{
  Gtk::Accessible::Role default_value;

  constexpr PspecTraits (Gtk::Accessible::Role default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_role_get_type (),
                              static_cast<::GtkAccessibleRole> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::Role : std::underlying_type<::GtkAccessibleRole>::type
{
  ALERT = GTK_ACCESSIBLE_ROLE_ALERT,
  ALERT_DIALOG = GTK_ACCESSIBLE_ROLE_ALERT_DIALOG,
  BANNER = GTK_ACCESSIBLE_ROLE_BANNER,
  BUTTON = GTK_ACCESSIBLE_ROLE_BUTTON,
  CAPTION = GTK_ACCESSIBLE_ROLE_CAPTION,
  CELL = GTK_ACCESSIBLE_ROLE_CELL,
  CHECKBOX = GTK_ACCESSIBLE_ROLE_CHECKBOX,
  COLUMN_HEADER = GTK_ACCESSIBLE_ROLE_COLUMN_HEADER,
  COMBO_BOX = GTK_ACCESSIBLE_ROLE_COMBO_BOX,
  COMMAND = GTK_ACCESSIBLE_ROLE_COMMAND,
  COMPOSITE = GTK_ACCESSIBLE_ROLE_COMPOSITE,
  DIALOG = GTK_ACCESSIBLE_ROLE_DIALOG,
  DOCUMENT = GTK_ACCESSIBLE_ROLE_DOCUMENT,
  FEED = GTK_ACCESSIBLE_ROLE_FEED,
  FORM = GTK_ACCESSIBLE_ROLE_FORM,
  GENERIC = GTK_ACCESSIBLE_ROLE_GENERIC,
  GRID = GTK_ACCESSIBLE_ROLE_GRID,
  GRID_CELL = GTK_ACCESSIBLE_ROLE_GRID_CELL,
  GROUP = GTK_ACCESSIBLE_ROLE_GROUP,
  HEADING = GTK_ACCESSIBLE_ROLE_HEADING,
  IMG = GTK_ACCESSIBLE_ROLE_IMG,
  INPUT = GTK_ACCESSIBLE_ROLE_INPUT,
  LABEL = GTK_ACCESSIBLE_ROLE_LABEL,
  LANDMARK = GTK_ACCESSIBLE_ROLE_LANDMARK,
  LEGEND = GTK_ACCESSIBLE_ROLE_LEGEND,
  LINK = GTK_ACCESSIBLE_ROLE_LINK,
  LIST = GTK_ACCESSIBLE_ROLE_LIST,
  LIST_BOX = GTK_ACCESSIBLE_ROLE_LIST_BOX,
  LIST_ITEM = GTK_ACCESSIBLE_ROLE_LIST_ITEM,
  LOG = GTK_ACCESSIBLE_ROLE_LOG,
  MAIN = GTK_ACCESSIBLE_ROLE_MAIN,
  MARQUEE = GTK_ACCESSIBLE_ROLE_MARQUEE,
  MATH = GTK_ACCESSIBLE_ROLE_MATH,
  METER = GTK_ACCESSIBLE_ROLE_METER,
  MENU = GTK_ACCESSIBLE_ROLE_MENU,
  MENU_BAR = GTK_ACCESSIBLE_ROLE_MENU_BAR,
  MENU_ITEM = GTK_ACCESSIBLE_ROLE_MENU_ITEM,
  MENU_ITEM_CHECKBOX = GTK_ACCESSIBLE_ROLE_MENU_ITEM_CHECKBOX,
  MENU_ITEM_RADIO = GTK_ACCESSIBLE_ROLE_MENU_ITEM_RADIO,
  NAVIGATION = GTK_ACCESSIBLE_ROLE_NAVIGATION,
  NONE = GTK_ACCESSIBLE_ROLE_NONE,
  NOTE = GTK_ACCESSIBLE_ROLE_NOTE,
  OPTION = GTK_ACCESSIBLE_ROLE_OPTION,
  PRESENTATION = GTK_ACCESSIBLE_ROLE_PRESENTATION,
  PROGRESS_BAR = GTK_ACCESSIBLE_ROLE_PROGRESS_BAR,
  RADIO = GTK_ACCESSIBLE_ROLE_RADIO,
  RADIO_GROUP = GTK_ACCESSIBLE_ROLE_RADIO_GROUP,
  RANGE = GTK_ACCESSIBLE_ROLE_RANGE,
  REGION = GTK_ACCESSIBLE_ROLE_REGION,
  ROW = GTK_ACCESSIBLE_ROLE_ROW,
  ROW_GROUP = GTK_ACCESSIBLE_ROLE_ROW_GROUP,
  ROW_HEADER = GTK_ACCESSIBLE_ROLE_ROW_HEADER,
  SCROLLBAR = GTK_ACCESSIBLE_ROLE_SCROLLBAR,
  SEARCH = GTK_ACCESSIBLE_ROLE_SEARCH,
  SEARCH_BOX = GTK_ACCESSIBLE_ROLE_SEARCH_BOX,
  SECTION = GTK_ACCESSIBLE_ROLE_SECTION,
  SECTION_HEAD = GTK_ACCESSIBLE_ROLE_SECTION_HEAD,
  SELECT = GTK_ACCESSIBLE_ROLE_SELECT,
  SEPARATOR = GTK_ACCESSIBLE_ROLE_SEPARATOR,
  SLIDER = GTK_ACCESSIBLE_ROLE_SLIDER,
  SPIN_BUTTON = GTK_ACCESSIBLE_ROLE_SPIN_BUTTON,
  STATUS = GTK_ACCESSIBLE_ROLE_STATUS,
  STRUCTURE = GTK_ACCESSIBLE_ROLE_STRUCTURE,
  SWITCH = GTK_ACCESSIBLE_ROLE_SWITCH,
  TAB = GTK_ACCESSIBLE_ROLE_TAB,
  TABLE = GTK_ACCESSIBLE_ROLE_TABLE,
  TAB_LIST = GTK_ACCESSIBLE_ROLE_TAB_LIST,
  TAB_PANEL = GTK_ACCESSIBLE_ROLE_TAB_PANEL,
  TEXT_BOX = GTK_ACCESSIBLE_ROLE_TEXT_BOX,
  TIME = GTK_ACCESSIBLE_ROLE_TIME,
  TIMER = GTK_ACCESSIBLE_ROLE_TIMER,
  TOOLBAR = GTK_ACCESSIBLE_ROLE_TOOLBAR,
  TOOLTIP = GTK_ACCESSIBLE_ROLE_TOOLTIP,
  TREE = GTK_ACCESSIBLE_ROLE_TREE,
  TREE_GRID = GTK_ACCESSIBLE_ROLE_TREE_GRID,
  TREE_ITEM = GTK_ACCESSIBLE_ROLE_TREE_ITEM,
  WIDGET = GTK_ACCESSIBLE_ROLE_WIDGET,
  WINDOW = GTK_ACCESSIBLE_ROLE_WINDOW,
  TOGGLE_BUTTON = GTK_ACCESSIBLE_ROLE_TOGGLE_BUTTON,
  APPLICATION = GTK_ACCESSIBLE_ROLE_APPLICATION,
  PARAGRAPH = GTK_ACCESSIBLE_ROLE_PARAGRAPH,
  BLOCK_QUOTE = GTK_ACCESSIBLE_ROLE_BLOCK_QUOTE,
  ARTICLE = GTK_ACCESSIBLE_ROLE_ARTICLE,
  COMMENT = GTK_ACCESSIBLE_ROLE_COMMENT,
  TERMINAL = GTK_ACCESSIBLE_ROLE_TERMINAL,
}; /* enum Accessible::Role */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
