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
#include <peel/GLib/Variant.h>
#include <peel/Gio/Action.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class PropertyAction;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::PropertyAction> ()
{
  return g_property_action_get_type ();
}


namespace Gio
{
class PropertyAction : public Action
/* non-derivable */
/* extends GObject::Object */
/* implements Action */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PropertyAction () = delete;
  PropertyAction (const PropertyAction &) = delete;
  PropertyAction (PropertyAction &&) = delete;
  PropertyAction &
  operator = (const PropertyAction &) = delete;
  PropertyAction &
  operator = (PropertyAction &&) = delete;
  ~PropertyAction () = delete;
public:

  peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<PropertyAction>
  create (const char *name, GObject::Object *object, const char *property_name) noexcept
  {
    ::gpointer _peel_object = reinterpret_cast<::gpointer> (object);
    ::GPropertyAction *_peel_return = g_property_action_new (name, _peel_object, property_name);
    peel_assume (_peel_return);
    return peel::RefPtr<PropertyAction>::adopt_ref (reinterpret_cast<PropertyAction *> (_peel_return));
  }

  static peel::Property<bool>
  prop_enabled ()
  {
    return peel::Property<bool> { "enabled" };
  }

  static peel::Property<bool>
  prop_invert_boolean ()
  {
    return peel::Property<bool> { "invert-boolean" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<GObject::Object>
  prop_object ()
  {
    return peel::Property<GObject::Object> { "object" };
  }

  static peel::Property<GLib::Variant::Type>
  prop_parameter_type ()
  {
    return peel::Property<GLib::Variant::Type> { "parameter-type" };
  }

  static peel::Property<const char *>
  prop_property_name ()
  {
    return peel::Property<const char *> { "property-name" };
  }

  static peel::Property<GLib::Variant>
  prop_state ()
  {
    return peel::Property<GLib::Variant> { "state" };
  }

  static peel::Property<GLib::Variant::Type>
  prop_state_type ()
  {
    return peel::Property<GLib::Variant::Type> { "state-type" };
  }
}; /* class PropertyAction */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
