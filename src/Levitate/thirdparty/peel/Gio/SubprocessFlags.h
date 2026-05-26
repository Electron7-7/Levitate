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
#include <peel/Gio/Subprocess.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Subprocess::Flags>
{
  typedef Gio::Subprocess::Flags UnownedType;

  static Gio::Subprocess::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::Subprocess::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::Subprocess::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GSubprocessFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Subprocess::Flags flags)
  {
    set (value, flags);
  }

  static Gio::Subprocess::Flags
  cast_for_create (Gio::Subprocess::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Subprocess::Flags> ()
{
  return g_subprocess_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Subprocess::Flags>
{
  Gio::Subprocess::Flags default_value;

  constexpr PspecTraits (Gio::Subprocess::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_subprocess_flags_get_type (),
                               static_cast<::GSubprocessFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ Subprocess::Flags : std::underlying_type<::GSubprocessFlags>::type
{
  NONE = G_SUBPROCESS_FLAGS_NONE,
  STDIN_PIPE = G_SUBPROCESS_FLAGS_STDIN_PIPE,
  STDIN_INHERIT = G_SUBPROCESS_FLAGS_STDIN_INHERIT,
  STDOUT_PIPE = G_SUBPROCESS_FLAGS_STDOUT_PIPE,
  STDOUT_SILENCE = G_SUBPROCESS_FLAGS_STDOUT_SILENCE,
  STDERR_PIPE = G_SUBPROCESS_FLAGS_STDERR_PIPE,
  STDERR_SILENCE = G_SUBPROCESS_FLAGS_STDERR_SILENCE,
  STDERR_MERGE = G_SUBPROCESS_FLAGS_STDERR_MERGE,
  INHERIT_FDS = G_SUBPROCESS_FLAGS_INHERIT_FDS,
  SEARCH_PATH_FROM_ENVP = G_SUBPROCESS_FLAGS_SEARCH_PATH_FROM_ENVP,
}; /* bitfield Subprocess::Flags */

static constexpr inline Subprocess::Flags
operator | (Subprocess::Flags lhs, Subprocess::Flags rhs)
{
  return Subprocess::Flags (static_cast<::GSubprocessFlags> (lhs) | static_cast<::GSubprocessFlags> (rhs));
}

static constexpr inline Subprocess::Flags
operator & (Subprocess::Flags lhs, Subprocess::Flags rhs)
{
  return Subprocess::Flags (static_cast<::GSubprocessFlags> (lhs) & static_cast<::GSubprocessFlags> (rhs));
}

static constexpr inline Subprocess::Flags
operator ^ (Subprocess::Flags lhs, Subprocess::Flags rhs)
{
  return Subprocess::Flags (static_cast<::GSubprocessFlags> (lhs) ^ static_cast<::GSubprocessFlags> (rhs));
}

static constexpr inline Subprocess::Flags
operator ~ (Subprocess::Flags lhs)
{
  return Subprocess::Flags (~static_cast<::GSubprocessFlags> (lhs));
}

static inline Subprocess::Flags &
operator |= (Subprocess::Flags &lhs, Subprocess::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Subprocess::Flags &
operator &= (Subprocess::Flags &lhs, Subprocess::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Subprocess::Flags &
operator ^= (Subprocess::Flags &lhs, Subprocess::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Subprocess::Flags lhs)
{
  return !static_cast<::GSubprocessFlags> (lhs);
}

static constexpr inline bool
operator + (Subprocess::Flags lhs)
{
  return !!static_cast<::GSubprocessFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
