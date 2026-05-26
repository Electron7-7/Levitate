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
#include <peel/Gio/RemoteActionGroup.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class DBusActionGroup;
class DBusConnection;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusActionGroup> ()
{
  return g_dbus_action_group_get_type ();
}


namespace Gio
{
class DBusActionGroup : public RemoteActionGroup
/* non-derivable */
/* extends GObject::Object */
/* implements ActionGroup, RemoteActionGroup */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusActionGroup () = delete;
  DBusActionGroup (const DBusActionGroup &) = delete;
  DBusActionGroup (DBusActionGroup &&) = delete;
  DBusActionGroup &
  operator = (const DBusActionGroup &) = delete;
  DBusActionGroup &
  operator = (DBusActionGroup &&) = delete;
  ~DBusActionGroup () = delete;
public:

  peel_nonnull_args (1, 3)
  static peel::RefPtr<DBusActionGroup>
  get (DBusConnection *connection, const char *bus_name, const char *object_path) noexcept
  {
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusActionGroup *_peel_return = g_dbus_action_group_get (_peel_connection, bus_name, object_path);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusActionGroup>::adopt_ref (reinterpret_cast<DBusActionGroup *> (_peel_return));
  }
}; /* class DBusActionGroup */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
