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
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::Relation>
{
  typedef Gtk::Accessible::Relation UnownedType;

  static Gtk::Accessible::Relation
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::Relation> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::Relation m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleRelation> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::Relation m)
  {
    set (value, m);
  }

  static Gtk::Accessible::Relation
  cast_for_create (Gtk::Accessible::Relation m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::Relation> ()
{
  return gtk_accessible_relation_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::Relation>
{
  Gtk::Accessible::Relation default_value;

  constexpr PspecTraits (Gtk::Accessible::Relation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_relation_get_type (),
                              static_cast<::GtkAccessibleRelation> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::Relation : std::underlying_type<::GtkAccessibleRelation>::type
{
  ACTIVE_DESCENDANT = GTK_ACCESSIBLE_RELATION_ACTIVE_DESCENDANT,
  COL_COUNT = GTK_ACCESSIBLE_RELATION_COL_COUNT,
  COL_INDEX = GTK_ACCESSIBLE_RELATION_COL_INDEX,
  COL_INDEX_TEXT = GTK_ACCESSIBLE_RELATION_COL_INDEX_TEXT,
  COL_SPAN = GTK_ACCESSIBLE_RELATION_COL_SPAN,
  CONTROLS = GTK_ACCESSIBLE_RELATION_CONTROLS,
  DESCRIBED_BY = GTK_ACCESSIBLE_RELATION_DESCRIBED_BY,
  DETAILS = GTK_ACCESSIBLE_RELATION_DETAILS,
  ERROR_MESSAGE = GTK_ACCESSIBLE_RELATION_ERROR_MESSAGE,
  FLOW_TO = GTK_ACCESSIBLE_RELATION_FLOW_TO,
  LABELLED_BY = GTK_ACCESSIBLE_RELATION_LABELLED_BY,
  OWNS = GTK_ACCESSIBLE_RELATION_OWNS,
  POS_IN_SET = GTK_ACCESSIBLE_RELATION_POS_IN_SET,
  ROW_COUNT = GTK_ACCESSIBLE_RELATION_ROW_COUNT,
  ROW_INDEX = GTK_ACCESSIBLE_RELATION_ROW_INDEX,
  ROW_INDEX_TEXT = GTK_ACCESSIBLE_RELATION_ROW_INDEX_TEXT,
  ROW_SPAN = GTK_ACCESSIBLE_RELATION_ROW_SPAN,
  SET_SIZE = GTK_ACCESSIBLE_RELATION_SET_SIZE,
  LABEL_FOR = GTK_ACCESSIBLE_RELATION_LABEL_FOR,
  DESCRIPTION_FOR = GTK_ACCESSIBLE_RELATION_DESCRIPTION_FOR,
  CONTROLLED_BY = GTK_ACCESSIBLE_RELATION_CONTROLLED_BY,
  DETAILS_FOR = GTK_ACCESSIBLE_RELATION_DETAILS_FOR,
  ERROR_MESSAGE_FOR = GTK_ACCESSIBLE_RELATION_ERROR_MESSAGE_FOR,
  FLOW_FROM = GTK_ACCESSIBLE_RELATION_FLOW_FROM,
}; /* enum Accessible::Relation */

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (2)
static void
accessible_relation_init_value (Accessible::Relation relation, GObject::Value *value) noexcept
{
  ::GtkAccessibleRelation _peel_relation = static_cast<::GtkAccessibleRelation> (relation);
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  gtk_accessible_relation_init_value (_peel_relation, _peel_value);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Value.h>
