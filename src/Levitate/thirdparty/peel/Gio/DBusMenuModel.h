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
#include <peel/Gio/MenuModel.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class DBusConnection;
class DBusMenuModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMenuModel> ()
{
  return g_dbus_menu_model_get_type ();
}


namespace Gio
{
class DBusMenuModel : public MenuModel
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusMenuModel () = delete;
  DBusMenuModel (const DBusMenuModel &) = delete;
  DBusMenuModel (DBusMenuModel &&) = delete;
  DBusMenuModel &
  operator = (const DBusMenuModel &) = delete;
  DBusMenuModel &
  operator = (DBusMenuModel &&) = delete;
  ~DBusMenuModel () = delete;
public:

  peel_nonnull_args (1, 3)
  static peel::RefPtr<DBusMenuModel>
  get (DBusConnection *connection, const char *bus_name, const char *object_path) noexcept
  {
    ::GDBusConnection *_peel_connection = reinterpret_cast<::GDBusConnection *> (connection);
    ::GDBusMenuModel *_peel_return = g_dbus_menu_model_get (_peel_connection, bus_name, object_path);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMenuModel>::adopt_ref (reinterpret_cast<DBusMenuModel *> (_peel_return));
  }
}; /* class DBusMenuModel */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
