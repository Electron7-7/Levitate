#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/Gio/OutputStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::OutputStream::SpliceFlags>
{
  typedef Gio::OutputStream::SpliceFlags UnownedType;

  static Gio::OutputStream::SpliceFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::OutputStream::SpliceFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::OutputStream::SpliceFlags flags)
  {
    g_value_set_flags (value, static_cast<::GOutputStreamSpliceFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::OutputStream::SpliceFlags flags)
  {
    set (value, flags);
  }

  static Gio::OutputStream::SpliceFlags
  cast_for_create (Gio::OutputStream::SpliceFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::OutputStream::SpliceFlags> ()
{
  return g_output_stream_splice_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::OutputStream::SpliceFlags>
{
  Gio::OutputStream::SpliceFlags default_value;

  constexpr PspecTraits (Gio::OutputStream::SpliceFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_output_stream_splice_flags_get_type (),
                               static_cast<::GOutputStreamSpliceFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ OutputStream::SpliceFlags : std::underlying_type<::GOutputStreamSpliceFlags>::type
{
  NONE = G_OUTPUT_STREAM_SPLICE_NONE,
  CLOSE_SOURCE = G_OUTPUT_STREAM_SPLICE_CLOSE_SOURCE,
  CLOSE_TARGET = G_OUTPUT_STREAM_SPLICE_CLOSE_TARGET,
}; /* bitfield OutputStream::SpliceFlags */

static constexpr inline OutputStream::SpliceFlags
operator | (OutputStream::SpliceFlags lhs, OutputStream::SpliceFlags rhs)
{
  return OutputStream::SpliceFlags (static_cast<::GOutputStreamSpliceFlags> (lhs) | static_cast<::GOutputStreamSpliceFlags> (rhs));
}

static constexpr inline OutputStream::SpliceFlags
operator & (OutputStream::SpliceFlags lhs, OutputStream::SpliceFlags rhs)
{
  return OutputStream::SpliceFlags (static_cast<::GOutputStreamSpliceFlags> (lhs) & static_cast<::GOutputStreamSpliceFlags> (rhs));
}

static constexpr inline OutputStream::SpliceFlags
operator ^ (OutputStream::SpliceFlags lhs, OutputStream::SpliceFlags rhs)
{
  return OutputStream::SpliceFlags (static_cast<::GOutputStreamSpliceFlags> (lhs) ^ static_cast<::GOutputStreamSpliceFlags> (rhs));
}

static constexpr inline OutputStream::SpliceFlags
operator ~ (OutputStream::SpliceFlags lhs)
{
  return OutputStream::SpliceFlags (~static_cast<::GOutputStreamSpliceFlags> (lhs));
}

static inline OutputStream::SpliceFlags &
operator |= (OutputStream::SpliceFlags &lhs, OutputStream::SpliceFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline OutputStream::SpliceFlags &
operator &= (OutputStream::SpliceFlags &lhs, OutputStream::SpliceFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline OutputStream::SpliceFlags &
operator ^= (OutputStream::SpliceFlags &lhs, OutputStream::SpliceFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (OutputStream::SpliceFlags lhs)
{
  return !static_cast<::GOutputStreamSpliceFlags> (lhs);
}

static constexpr inline bool
operator + (OutputStream::SpliceFlags lhs)
{
  return !!static_cast<::GOutputStreamSpliceFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
