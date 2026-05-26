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
#include <peel/Gio/Drive.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Drive::StartStopType>
{
  typedef Gio::Drive::StartStopType UnownedType;

  static Gio::Drive::StartStopType
  get (const ::GValue *value)
  {
    return static_cast<Gio::Drive::StartStopType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::Drive::StartStopType m)
  {
    g_value_set_enum (value, static_cast<::GDriveStartStopType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Drive::StartStopType m)
  {
    set (value, m);
  }

  static Gio::Drive::StartStopType
  cast_for_create (Gio::Drive::StartStopType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Drive::StartStopType> ()
{
  return g_drive_start_stop_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Drive::StartStopType>
{
  Gio::Drive::StartStopType default_value;

  constexpr PspecTraits (Gio::Drive::StartStopType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_drive_start_stop_type_get_type (),
                              static_cast<::GDriveStartStopType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class Drive::StartStopType : std::underlying_type<::GDriveStartStopType>::type
{
  UNKNOWN = G_DRIVE_START_STOP_TYPE_UNKNOWN,
  SHUTDOWN = G_DRIVE_START_STOP_TYPE_SHUTDOWN,
  NETWORK = G_DRIVE_START_STOP_TYPE_NETWORK,
  MULTIDISK = G_DRIVE_START_STOP_TYPE_MULTIDISK,
  PASSWORD = G_DRIVE_START_STOP_TYPE_PASSWORD,
}; /* enum Drive::StartStopType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
