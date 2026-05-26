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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ EventSequence;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::EventSequence> ()
{
  return gdk_event_sequence_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::EventSequence>
{
  typedef const Gdk::EventSequence * UnownedType;

  static const Gdk::EventSequence *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gdk::EventSequence *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gdk::EventSequence * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Gdk::EventSequence *
  cast_for_create (const Gdk::EventSequence * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::EventSequence>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::EventSequence> (), basics.flags);
  }
};


namespace Gdk
{
class /* record */ EventSequence
{
private:
  EventSequence () = delete;
  EventSequence (const EventSequence &) = delete;
  EventSequence (EventSequence &&) = delete;
  ~EventSequence ();

public:
}; /* record EventSequence */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
