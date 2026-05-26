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
#include <peel/Gio/IOStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::IOStream::SpliceFlags>
{
  typedef Gio::IOStream::SpliceFlags UnownedType;

  static Gio::IOStream::SpliceFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::IOStream::SpliceFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::IOStream::SpliceFlags flags)
  {
    g_value_set_flags (value, static_cast<::GIOStreamSpliceFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::IOStream::SpliceFlags flags)
  {
    set (value, flags);
  }

  static Gio::IOStream::SpliceFlags
  cast_for_create (Gio::IOStream::SpliceFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::IOStream::SpliceFlags> ()
{
  return g_io_stream_splice_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::IOStream::SpliceFlags>
{
  Gio::IOStream::SpliceFlags default_value;

  constexpr PspecTraits (Gio::IOStream::SpliceFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_io_stream_splice_flags_get_type (),
                               static_cast<::GIOStreamSpliceFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ IOStream::SpliceFlags : std::underlying_type<::GIOStreamSpliceFlags>::type
{
  NONE = G_IO_STREAM_SPLICE_NONE,
  CLOSE_STREAM1 = G_IO_STREAM_SPLICE_CLOSE_STREAM1,
  CLOSE_STREAM2 = G_IO_STREAM_SPLICE_CLOSE_STREAM2,
  WAIT_FOR_BOTH = G_IO_STREAM_SPLICE_WAIT_FOR_BOTH,
}; /* bitfield IOStream::SpliceFlags */

static constexpr inline IOStream::SpliceFlags
operator | (IOStream::SpliceFlags lhs, IOStream::SpliceFlags rhs)
{
  return IOStream::SpliceFlags (static_cast<::GIOStreamSpliceFlags> (lhs) | static_cast<::GIOStreamSpliceFlags> (rhs));
}

static constexpr inline IOStream::SpliceFlags
operator & (IOStream::SpliceFlags lhs, IOStream::SpliceFlags rhs)
{
  return IOStream::SpliceFlags (static_cast<::GIOStreamSpliceFlags> (lhs) & static_cast<::GIOStreamSpliceFlags> (rhs));
}

static constexpr inline IOStream::SpliceFlags
operator ^ (IOStream::SpliceFlags lhs, IOStream::SpliceFlags rhs)
{
  return IOStream::SpliceFlags (static_cast<::GIOStreamSpliceFlags> (lhs) ^ static_cast<::GIOStreamSpliceFlags> (rhs));
}

static constexpr inline IOStream::SpliceFlags
operator ~ (IOStream::SpliceFlags lhs)
{
  return IOStream::SpliceFlags (~static_cast<::GIOStreamSpliceFlags> (lhs));
}

static inline IOStream::SpliceFlags &
operator |= (IOStream::SpliceFlags &lhs, IOStream::SpliceFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline IOStream::SpliceFlags &
operator &= (IOStream::SpliceFlags &lhs, IOStream::SpliceFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline IOStream::SpliceFlags &
operator ^= (IOStream::SpliceFlags &lhs, IOStream::SpliceFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (IOStream::SpliceFlags lhs)
{
  return !static_cast<::GIOStreamSpliceFlags> (lhs);
}

static constexpr inline bool
operator + (IOStream::SpliceFlags lhs)
{
  return !!static_cast<::GIOStreamSpliceFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
