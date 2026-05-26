#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct InterfaceInfo;
struct TypeInfo;
class /* interface */ TypePlugin;
struct TypeValueTable;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::TypePlugin> ()
{
  return g_type_plugin_get_type ();
}


namespace GObject
{
class /* interface */ TypePlugin : public Object
/* requires Object */
{
private:
  TypePlugin () = delete;
  TypePlugin (const TypePlugin &) = delete;
  TypePlugin (TypePlugin &&) = delete;

  TypePlugin &
  operator = (const TypePlugin &) = delete;
  TypePlugin &
  operator = (TypePlugin &&) = delete;

protected:
  ~TypePlugin () = default;

public:

  peel_arg_in (4) peel_nonnull_args (4)
  void
  complete_interface_info (GObject::Type instance_type, GObject::Type interface_type, InterfaceInfo *info) noexcept
  {
    ::GTypePlugin *_peel_this = reinterpret_cast<::GTypePlugin *> (this);
    ::GInterfaceInfo *_peel_info = reinterpret_cast<::GInterfaceInfo *> (info);
    g_type_plugin_complete_interface_info (_peel_this, instance_type, interface_type, _peel_info);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (3, 4)
  void
  complete_type_info (GObject::Type g_type, TypeInfo *info, TypeValueTable *value_table) noexcept
  {
    ::GTypePlugin *_peel_this = reinterpret_cast<::GTypePlugin *> (this);
    ::GTypeInfo *_peel_info = reinterpret_cast<::GTypeInfo *> (info);
    ::GTypeValueTable *_peel_value_table = reinterpret_cast<::GTypeValueTable *> (value_table);
    g_type_plugin_complete_type_info (_peel_this, g_type, _peel_info, _peel_value_table);
  }

  void
  unuse () noexcept
  {
    ::GTypePlugin *_peel_this = reinterpret_cast<::GTypePlugin *> (this);
    g_type_plugin_unuse (_peel_this);
  }

  void
  use () noexcept
  {
    ::GTypePlugin *_peel_this = reinterpret_cast<::GTypePlugin *> (this);
    g_type_plugin_use (_peel_this);
  }
}; /* interface TypePlugin */
static_assert (sizeof (TypePlugin) == sizeof (Object),
               "TypePlugin size mismatch");
static_assert (alignof (TypePlugin) == alignof (Object),
               "TypePlugin align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
