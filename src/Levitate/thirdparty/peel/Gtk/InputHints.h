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

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class InputHints : std::underlying_type<::GtkInputHints>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::InputHints>
{
  typedef Gtk::InputHints UnownedType;

  static Gtk::InputHints
  get (const ::GValue *value)
  {
    return static_cast<Gtk::InputHints> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::InputHints flags)
  {
    g_value_set_flags (value, static_cast<::GtkInputHints> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::InputHints flags)
  {
    set (value, flags);
  }

  static Gtk::InputHints
  cast_for_create (Gtk::InputHints flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::InputHints> ()
{
  return gtk_input_hints_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::InputHints>
{
  Gtk::InputHints default_value;

  constexpr PspecTraits (Gtk::InputHints default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_input_hints_get_type (),
                               static_cast<::GtkInputHints> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ InputHints : std::underlying_type<::GtkInputHints>::type
{
  NONE = GTK_INPUT_HINT_NONE,
  SPELLCHECK = GTK_INPUT_HINT_SPELLCHECK,
  NO_SPELLCHECK = GTK_INPUT_HINT_NO_SPELLCHECK,
  WORD_COMPLETION = GTK_INPUT_HINT_WORD_COMPLETION,
  LOWERCASE = GTK_INPUT_HINT_LOWERCASE,
  UPPERCASE_CHARS = GTK_INPUT_HINT_UPPERCASE_CHARS,
  UPPERCASE_WORDS = GTK_INPUT_HINT_UPPERCASE_WORDS,
  UPPERCASE_SENTENCES = GTK_INPUT_HINT_UPPERCASE_SENTENCES,
  INHIBIT_OSK = GTK_INPUT_HINT_INHIBIT_OSK,
  VERTICAL_WRITING = GTK_INPUT_HINT_VERTICAL_WRITING,
  EMOJI = GTK_INPUT_HINT_EMOJI,
  NO_EMOJI = GTK_INPUT_HINT_NO_EMOJI,
  PRIVATE = GTK_INPUT_HINT_PRIVATE,
}; /* bitfield InputHints */

static constexpr inline InputHints
operator | (InputHints lhs, InputHints rhs)
{
  return InputHints (static_cast<::GtkInputHints> (lhs) | static_cast<::GtkInputHints> (rhs));
}

static constexpr inline InputHints
operator & (InputHints lhs, InputHints rhs)
{
  return InputHints (static_cast<::GtkInputHints> (lhs) & static_cast<::GtkInputHints> (rhs));
}

static constexpr inline InputHints
operator ^ (InputHints lhs, InputHints rhs)
{
  return InputHints (static_cast<::GtkInputHints> (lhs) ^ static_cast<::GtkInputHints> (rhs));
}

static constexpr inline InputHints
operator ~ (InputHints lhs)
{
  return InputHints (~static_cast<::GtkInputHints> (lhs));
}

static inline InputHints &
operator |= (InputHints &lhs, InputHints rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline InputHints &
operator &= (InputHints &lhs, InputHints rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline InputHints &
operator ^= (InputHints &lhs, InputHints rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (InputHints lhs)
{
  return !static_cast<::GtkInputHints> (lhs);
}

static constexpr inline bool
operator + (InputHints lhs)
{
  return !!static_cast<::GtkInputHints> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
