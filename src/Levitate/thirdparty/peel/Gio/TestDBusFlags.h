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
#include <peel/Gio/TestDBus.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::TestDBus::Flags>
{
  typedef Gio::TestDBus::Flags UnownedType;

  static Gio::TestDBus::Flags
  get (const ::GValue *value)
  {
    return static_cast<Gio::TestDBus::Flags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gio::TestDBus::Flags flags)
  {
    g_value_set_flags (value, static_cast<::GTestDBusFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gio::TestDBus::Flags flags)
  {
    set (value, flags);
  }

  static Gio::TestDBus::Flags
  cast_for_create (Gio::TestDBus::Flags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::TestDBus::Flags> ()
{
  return g_test_dbus_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::TestDBus::Flags>
{
  Gio::TestDBus::Flags default_value;

  constexpr PspecTraits (Gio::TestDBus::Flags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               g_test_dbus_flags_get_type (),
                               static_cast<::GTestDBusFlags> (default_value),
                               basics.flags);
  }
};


namespace Gio
{
enum class /* bitfield */ TestDBus::Flags : std::underlying_type<::GTestDBusFlags>::type
{
  NONE = G_TEST_DBUS_NONE,
}; /* bitfield TestDBus::Flags */

static constexpr inline TestDBus::Flags
operator | (TestDBus::Flags lhs, TestDBus::Flags rhs)
{
  return TestDBus::Flags (static_cast<::GTestDBusFlags> (lhs) | static_cast<::GTestDBusFlags> (rhs));
}

static constexpr inline TestDBus::Flags
operator & (TestDBus::Flags lhs, TestDBus::Flags rhs)
{
  return TestDBus::Flags (static_cast<::GTestDBusFlags> (lhs) & static_cast<::GTestDBusFlags> (rhs));
}

static constexpr inline TestDBus::Flags
operator ^ (TestDBus::Flags lhs, TestDBus::Flags rhs)
{
  return TestDBus::Flags (static_cast<::GTestDBusFlags> (lhs) ^ static_cast<::GTestDBusFlags> (rhs));
}

static constexpr inline TestDBus::Flags
operator ~ (TestDBus::Flags lhs)
{
  return TestDBus::Flags (~static_cast<::GTestDBusFlags> (lhs));
}

static inline TestDBus::Flags &
operator |= (TestDBus::Flags &lhs, TestDBus::Flags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline TestDBus::Flags &
operator &= (TestDBus::Flags &lhs, TestDBus::Flags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline TestDBus::Flags &
operator ^= (TestDBus::Flags &lhs, TestDBus::Flags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (TestDBus::Flags lhs)
{
  return !static_cast<::GTestDBusFlags> (lhs);
}

static constexpr inline bool
operator + (TestDBus::Flags lhs)
{
  return !!static_cast<::GTestDBusFlags> (lhs);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
