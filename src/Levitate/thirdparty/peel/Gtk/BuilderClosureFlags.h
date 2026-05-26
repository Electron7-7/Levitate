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
#include <peel/Gtk/Builder.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Builder::ClosureFlags>
{
  typedef Gtk::Builder::ClosureFlags UnownedType;

  static Gtk::Builder::ClosureFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Builder::ClosureFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::Builder::ClosureFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkBuilderClosureFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Builder::ClosureFlags flags)
  {
    set (value, flags);
  }

  static Gtk::Builder::ClosureFlags
  cast_for_create (Gtk::Builder::ClosureFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Builder::ClosureFlags> ()
{
  return gtk_builder_closure_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Builder::ClosureFlags>
{
  Gtk::Builder::ClosureFlags default_value;

  constexpr PspecTraits (Gtk::Builder::ClosureFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_builder_closure_flags_get_type (),
                               static_cast<::GtkBuilderClosureFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ Builder::ClosureFlags : std::underlying_type<::GtkBuilderClosureFlags>::type
{
  SWAPPED = GTK_BUILDER_CLOSURE_SWAPPED,
}; /* bitfield Builder::ClosureFlags */

static constexpr inline Builder::ClosureFlags
operator | (Builder::ClosureFlags lhs, Builder::ClosureFlags rhs)
{
  return Builder::ClosureFlags (static_cast<::GtkBuilderClosureFlags> (lhs) | static_cast<::GtkBuilderClosureFlags> (rhs));
}

static constexpr inline Builder::ClosureFlags
operator & (Builder::ClosureFlags lhs, Builder::ClosureFlags rhs)
{
  return Builder::ClosureFlags (static_cast<::GtkBuilderClosureFlags> (lhs) & static_cast<::GtkBuilderClosureFlags> (rhs));
}

static constexpr inline Builder::ClosureFlags
operator ^ (Builder::ClosureFlags lhs, Builder::ClosureFlags rhs)
{
  return Builder::ClosureFlags (static_cast<::GtkBuilderClosureFlags> (lhs) ^ static_cast<::GtkBuilderClosureFlags> (rhs));
}

static constexpr inline Builder::ClosureFlags
operator ~ (Builder::ClosureFlags lhs)
{
  return Builder::ClosureFlags (~static_cast<::GtkBuilderClosureFlags> (lhs));
}

static inline Builder::ClosureFlags &
operator |= (Builder::ClosureFlags &lhs, Builder::ClosureFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Builder::ClosureFlags &
operator &= (Builder::ClosureFlags &lhs, Builder::ClosureFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Builder::ClosureFlags &
operator ^= (Builder::ClosureFlags &lhs, Builder::ClosureFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Builder::ClosureFlags lhs)
{
  return !static_cast<::GtkBuilderClosureFlags> (lhs);
}

static constexpr inline bool
operator + (Builder::ClosureFlags lhs)
{
  return !!static_cast<::GtkBuilderClosureFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
