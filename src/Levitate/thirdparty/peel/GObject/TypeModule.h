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
#include <peel/GObject/TypePlugin.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct EnumValue;
struct FlagsValue;
struct InterfaceInfo;
enum class TypeFlags : std::underlying_type<::GTypeFlags>::type;
struct TypeInfo;
class TypeModule;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::TypeModule> ()
{
  return g_type_module_get_type ();
}


namespace GObject
{
class TypeModule : public TypePlugin
/* extends Object */
/* implements TypePlugin */
{
private:
  unsigned char _placeholder[sizeof (::GTypeModule) - sizeof (TypePlugin)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TypeModule () = delete;
  TypeModule (const TypeModule &) = delete;
  TypeModule (TypeModule &&) = delete;
  TypeModule &
  operator = (const TypeModule &) = delete;
  TypeModule &
  operator = (TypeModule &&) = delete;
protected:
  ~TypeModule () = default;
public:

  peel_arg_in (4) peel_nonnull_args (4)
  void
  add_interface (GObject::Type instance_type, GObject::Type interface_type, const InterfaceInfo *interface_info) noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    const ::GInterfaceInfo *_peel_interface_info = reinterpret_cast<const ::GInterfaceInfo *> (interface_info);
    g_type_module_add_interface (_peel_this, instance_type, interface_type, _peel_interface_info);
  }

  peel_nonnull_args (2)
  GObject::Type
  register_enum (const char *name, peel::ZTArrayRef<const EnumValue *> const_static_values) noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    const ::GEnumValue *_peel_const_static_values = reinterpret_cast<const ::GEnumValue *> (const_static_values.data ());
    return g_type_module_register_enum (_peel_this, name, _peel_const_static_values);
  }

  peel_nonnull_args (2)
  GObject::Type
  register_flags (const char *name, peel::ZTArrayRef<const FlagsValue *> const_static_values) noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    const ::GFlagsValue *_peel_const_static_values = reinterpret_cast<const ::GFlagsValue *> (const_static_values.data ());
    return g_type_module_register_flags (_peel_this, name, _peel_const_static_values);
  }

  peel_arg_in (4) peel_nonnull_args (3, 4)
  GObject::Type
  register_type (GObject::Type parent_type, const char *type_name, const TypeInfo *type_info, TypeFlags flags) noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    const ::GTypeInfo *_peel_type_info = reinterpret_cast<const ::GTypeInfo *> (type_info);
    ::GTypeFlags _peel_flags = static_cast<::GTypeFlags> (flags);
    return g_type_module_register_type (_peel_this, parent_type, type_name, _peel_type_info, _peel_flags);
  }

  peel_nonnull_args (2)
  void
  set_name (const char *name) noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    g_type_module_set_name (_peel_this, name);
  }

  void
  unuse () noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    g_type_module_unuse (_peel_this);
  }

  bool
  use () noexcept
  {
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    gboolean _peel_return = g_type_module_use (_peel_this);
    return !!_peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TypeModule> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_load () noexcept
  {
    ::GTypeModuleClass *_peel_class = reinterpret_cast<::GTypeModuleClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    gboolean _peel_return = _peel_class->load (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_unload () noexcept
  {
    ::GTypeModuleClass *_peel_class = reinterpret_cast<::GTypeModuleClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTypeModule *_peel_this = reinterpret_cast<::GTypeModule *> (this);
    _peel_class->unload (_peel_this);
  }

public:
  class Class : public Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GTypeModuleClass) - sizeof (Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_load ()
    {
      ::GTypeModuleClass *klass = reinterpret_cast<::GTypeModuleClass *> (this);
      klass->load = +[] (::GTypeModule *module) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (module);
        bool _peel_return = _peel_this->DerivedClass::vfunc_load ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unload ()
    {
      ::GTypeModuleClass *klass = reinterpret_cast<::GTypeModuleClass *> (this);
      klass->unload = +[] (::GTypeModule *module) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (module);
        _peel_this->DerivedClass::vfunc_unload ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GTypeModuleClass),
                 "TypeModule::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTypeModuleClass),
                 "TypeModule::Class align mismatch");
}; /* class TypeModule */

static_assert (sizeof (TypeModule) == sizeof (::GTypeModule),
               "TypeModule size mismatch");
static_assert (alignof (TypeModule) == alignof (::GTypeModule),
               "TypeModule align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
