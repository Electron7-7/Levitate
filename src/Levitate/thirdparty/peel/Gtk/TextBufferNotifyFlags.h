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
#include <peel/Gtk/TextBuffer.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TextBuffer::NotifyFlags>
{
  typedef Gtk::TextBuffer::NotifyFlags UnownedType;

  static Gtk::TextBuffer::NotifyFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TextBuffer::NotifyFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::TextBuffer::NotifyFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkTextBufferNotifyFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TextBuffer::NotifyFlags flags)
  {
    set (value, flags);
  }

  static Gtk::TextBuffer::NotifyFlags
  cast_for_create (Gtk::TextBuffer::NotifyFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TextBuffer::NotifyFlags> ()
{
  return gtk_text_buffer_notify_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TextBuffer::NotifyFlags>
{
  Gtk::TextBuffer::NotifyFlags default_value;

  constexpr PspecTraits (Gtk::TextBuffer::NotifyFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_text_buffer_notify_flags_get_type (),
                               static_cast<::GtkTextBufferNotifyFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ TextBuffer::NotifyFlags : std::underlying_type<::GtkTextBufferNotifyFlags>::type
{
  BEFORE_INSERT = GTK_TEXT_BUFFER_NOTIFY_BEFORE_INSERT,
  AFTER_INSERT = GTK_TEXT_BUFFER_NOTIFY_AFTER_INSERT,
  BEFORE_DELETE = GTK_TEXT_BUFFER_NOTIFY_BEFORE_DELETE,
  AFTER_DELETE = GTK_TEXT_BUFFER_NOTIFY_AFTER_DELETE,
}; /* bitfield TextBuffer::NotifyFlags */

static constexpr inline TextBuffer::NotifyFlags
operator | (TextBuffer::NotifyFlags lhs, TextBuffer::NotifyFlags rhs)
{
  return TextBuffer::NotifyFlags (static_cast<::GtkTextBufferNotifyFlags> (lhs) | static_cast<::GtkTextBufferNotifyFlags> (rhs));
}

static constexpr inline TextBuffer::NotifyFlags
operator & (TextBuffer::NotifyFlags lhs, TextBuffer::NotifyFlags rhs)
{
  return TextBuffer::NotifyFlags (static_cast<::GtkTextBufferNotifyFlags> (lhs) & static_cast<::GtkTextBufferNotifyFlags> (rhs));
}

static constexpr inline TextBuffer::NotifyFlags
operator ^ (TextBuffer::NotifyFlags lhs, TextBuffer::NotifyFlags rhs)
{
  return TextBuffer::NotifyFlags (static_cast<::GtkTextBufferNotifyFlags> (lhs) ^ static_cast<::GtkTextBufferNotifyFlags> (rhs));
}

static constexpr inline TextBuffer::NotifyFlags
operator ~ (TextBuffer::NotifyFlags lhs)
{
  return TextBuffer::NotifyFlags (~static_cast<::GtkTextBufferNotifyFlags> (lhs));
}

static inline TextBuffer::NotifyFlags &
operator |= (TextBuffer::NotifyFlags &lhs, TextBuffer::NotifyFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TextBuffer::NotifyFlags &
operator &= (TextBuffer::NotifyFlags &lhs, TextBuffer::NotifyFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TextBuffer::NotifyFlags &
operator ^= (TextBuffer::NotifyFlags &lhs, TextBuffer::NotifyFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TextBuffer::NotifyFlags lhs)
{
  return !static_cast<::GtkTextBufferNotifyFlags> (lhs);
}

static constexpr inline bool
operator + (TextBuffer::NotifyFlags lhs)
{
  return !!static_cast<::GtkTextBufferNotifyFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
