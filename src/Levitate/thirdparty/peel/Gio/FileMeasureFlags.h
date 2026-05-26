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
#include <peel/Gio/File.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::File::MeasureFlags>
{
  typedef Gio::File::MeasureFlags UnownedType;

  static Gio::File::MeasureFlags
  get (const ::GValue *value)
  {
    return static_cast<Gio::File::MeasureFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::File::MeasureFlags flags)
  {
    g_value_set_flags (value, static_cast<::GFileMeasureFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::File::MeasureFlags flags)
  {
    set (value, flags);
  }

  static Gio::File::MeasureFlags
  cast_for_create (Gio::File::MeasureFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::File::MeasureFlags> ()
{
  return g_file_measure_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::File::MeasureFlags>
{
  Gio::File::MeasureFlags default_value;

  constexpr PspecTraits (Gio::File::MeasureFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_file_measure_flags_get_type (),
                               static_cast<::GFileMeasureFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ File::MeasureFlags : std::underlying_type<::GFileMeasureFlags>::type
{
  NONE = G_FILE_MEASURE_NONE,
  REPORT_ANY_ERROR = G_FILE_MEASURE_REPORT_ANY_ERROR,
  APPARENT_SIZE = G_FILE_MEASURE_APPARENT_SIZE,
  NO_XDEV = G_FILE_MEASURE_NO_XDEV,
}; /* bitfield File::MeasureFlags */

static constexpr inline File::MeasureFlags
operator | (File::MeasureFlags lhs, File::MeasureFlags rhs)
{
  return File::MeasureFlags (static_cast<::GFileMeasureFlags> (lhs) | static_cast<::GFileMeasureFlags> (rhs));
}

static constexpr inline File::MeasureFlags
operator & (File::MeasureFlags lhs, File::MeasureFlags rhs)
{
  return File::MeasureFlags (static_cast<::GFileMeasureFlags> (lhs) & static_cast<::GFileMeasureFlags> (rhs));
}

static constexpr inline File::MeasureFlags
operator ^ (File::MeasureFlags lhs, File::MeasureFlags rhs)
{
  return File::MeasureFlags (static_cast<::GFileMeasureFlags> (lhs) ^ static_cast<::GFileMeasureFlags> (rhs));
}

static constexpr inline File::MeasureFlags
operator ~ (File::MeasureFlags lhs)
{
  return File::MeasureFlags (~static_cast<::GFileMeasureFlags> (lhs));
}

static inline File::MeasureFlags &
operator |= (File::MeasureFlags &lhs, File::MeasureFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline File::MeasureFlags &
operator &= (File::MeasureFlags &lhs, File::MeasureFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline File::MeasureFlags &
operator ^= (File::MeasureFlags &lhs, File::MeasureFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (File::MeasureFlags lhs)
{
  return !static_cast<::GFileMeasureFlags> (lhs);
}

static constexpr inline bool
operator + (File::MeasureFlags lhs)
{
  return !!static_cast<::GFileMeasureFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
