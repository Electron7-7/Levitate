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
#include <peel/Gtk/TreeModel.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TreeModel::Flags>
{
  typedef Gtk::TreeModel::Flags UnownedType;

  static Gtk::TreeModel::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TreeModel::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::TreeModel::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GtkTreeModelFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TreeModel::Flags flags)
  {
    set (value, flags);
  }

  static Gtk::TreeModel::Flags
  cast_for_create (Gtk::TreeModel::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeModel::Flags> ()
{
  return gtk_tree_model_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TreeModel::Flags>
{
  Gtk::TreeModel::Flags default_value;

  constexpr PspecTraits (Gtk::TreeModel::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_tree_model_flags_get_type (),
                               static_cast<::GtkTreeModelFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ TreeModel::Flags : std::underlying_type<::GtkTreeModelFlags>::type
{
  ITERS_PERSIST = GTK_TREE_MODEL_ITERS_PERSIST,
  LIST_ONLY = GTK_TREE_MODEL_LIST_ONLY,
}; /* bitfield TreeModel::Flags */

static constexpr inline TreeModel::Flags
operator | (TreeModel::Flags lhs, TreeModel::Flags rhs)
{
  return TreeModel::Flags (static_cast<::GtkTreeModelFlags> (lhs) | static_cast<::GtkTreeModelFlags> (rhs));
}

static constexpr inline TreeModel::Flags
operator & (TreeModel::Flags lhs, TreeModel::Flags rhs)
{
  return TreeModel::Flags (static_cast<::GtkTreeModelFlags> (lhs) & static_cast<::GtkTreeModelFlags> (rhs));
}

static constexpr inline TreeModel::Flags
operator ^ (TreeModel::Flags lhs, TreeModel::Flags rhs)
{
  return TreeModel::Flags (static_cast<::GtkTreeModelFlags> (lhs) ^ static_cast<::GtkTreeModelFlags> (rhs));
}

static constexpr inline TreeModel::Flags
operator ~ (TreeModel::Flags lhs)
{
  return TreeModel::Flags (~static_cast<::GtkTreeModelFlags> (lhs));
}

static inline TreeModel::Flags &
operator |= (TreeModel::Flags &lhs, TreeModel::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TreeModel::Flags &
operator &= (TreeModel::Flags &lhs, TreeModel::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TreeModel::Flags &
operator ^= (TreeModel::Flags &lhs, TreeModel::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TreeModel::Flags lhs)
{
  return !static_cast<::GtkTreeModelFlags> (lhs);
}

static constexpr inline bool
operator + (TreeModel::Flags lhs)
{
  return !!static_cast<::GtkTreeModelFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
