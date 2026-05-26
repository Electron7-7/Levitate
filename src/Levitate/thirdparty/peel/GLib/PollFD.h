#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct PollFD;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::PollFD> ()
{
  return g_pollfd_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::PollFD>
{
  typedef const GLib::PollFD * UnownedType;

  static const GLib::PollFD *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::PollFD *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::PollFD * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const GLib::PollFD *
  cast_for_create (const GLib::PollFD * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::PollFD>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::PollFD> (), basics.flags);
  }
};


namespace GLib
{
struct PollFD
{
private:

public:
  int fd;
  unsigned short events;
  unsigned short revents;
}; /* record PollFD */

static_assert (sizeof (PollFD) == sizeof (::GPollFD),
               "PollFD size mismatch");
static_assert (alignof (PollFD) == alignof (::GPollFD),
               "PollFD align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
