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
#include <gtk/gtk.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>
#include <peel/Gtk/Builder.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
struct Closure;
class Object;
} /* namespace GObject */

namespace Gtk
{
class Builder;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Builder::Scope> ()
{
  return gtk_builder_scope_get_type ();
}


namespace Gtk
{
class /* interface */ Builder::Scope : public GObject::Object
/* requires GObject::Object */
{
private:
  Scope () = delete;
  Scope (const Scope &) = delete;
  Scope (Scope &&) = delete;

  Scope &
  operator = (const Scope &) = delete;
  Scope &
  operator = (Scope &&) = delete;

protected:
  ~Scope () = default;

public:

  template<typename DerivedClass>
  peel_nonnull_args (2, 3, 5)
  peel::RefPtr<GObject::Closure>
  parent_vfunc_create_closure (Builder *builder, const char *function_name, Builder::ClosureFlags flags, GObject::Object *object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilderScopeInterface *_peel_iface = reinterpret_cast<::GtkBuilderScopeInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Builder::Scope> ())->peek_parent ());
    ::GtkBuilderScope *_peel_this = reinterpret_cast<::GtkBuilderScope *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GtkBuilderClosureFlags _peel_flags = static_cast<::GtkBuilderClosureFlags> (flags);
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GError *_peel_error = nullptr;
    ::GClosure *_peel_return = _peel_iface->create_closure (_peel_this, _peel_builder, function_name, _peel_flags, _peel_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GObject::Closure>::adopt_ref (reinterpret_cast<GObject::Closure *> (_peel_return));
  }

  peel_nonnull_args (2, 3, 5)
  peel::RefPtr<GObject::Closure>
  default_vfunc_create_closure (Builder *builder, const char *function_name, Builder::ClosureFlags flags, GObject::Object *object, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkBuilderScopeInterface *_peel_iface = reinterpret_cast<::GtkBuilderScopeInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Builder::Scope> ()));
    ::GtkBuilderScope *_peel_this = reinterpret_cast<::GtkBuilderScope *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    ::GtkBuilderClosureFlags _peel_flags = static_cast<::GtkBuilderClosureFlags> (flags);
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GError *_peel_error = nullptr;
    ::GClosure *_peel_return = _peel_iface->create_closure (_peel_this, _peel_builder, function_name, _peel_flags, _peel_object, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GObject::Closure>::adopt_ref (reinterpret_cast<GObject::Closure *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  GObject::Type
  parent_vfunc_get_type_from_function (Builder *builder, const char *function_name) noexcept
  {
    ::GtkBuilderScopeInterface *_peel_iface = reinterpret_cast<::GtkBuilderScopeInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Builder::Scope> ())->peek_parent ());
    ::GtkBuilderScope *_peel_this = reinterpret_cast<::GtkBuilderScope *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    return _peel_iface->get_type_from_function (_peel_this, _peel_builder, function_name);
  }

  peel_nonnull_args (2, 3)
  GObject::Type
  default_vfunc_get_type_from_function (Builder *builder, const char *function_name) noexcept
  {
    ::GtkBuilderScopeInterface *_peel_iface = reinterpret_cast<::GtkBuilderScopeInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Builder::Scope> ()));
    ::GtkBuilderScope *_peel_this = reinterpret_cast<::GtkBuilderScope *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    return _peel_iface->get_type_from_function (_peel_this, _peel_builder, function_name);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  GObject::Type
  parent_vfunc_get_type_from_name (Builder *builder, const char *type_name) noexcept
  {
    ::GtkBuilderScopeInterface *_peel_iface = reinterpret_cast<::GtkBuilderScopeInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Builder::Scope> ())->peek_parent ());
    ::GtkBuilderScope *_peel_this = reinterpret_cast<::GtkBuilderScope *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    return _peel_iface->get_type_from_name (_peel_this, _peel_builder, type_name);
  }

  peel_nonnull_args (2, 3)
  GObject::Type
  default_vfunc_get_type_from_name (Builder *builder, const char *type_name) noexcept
  {
    ::GtkBuilderScopeInterface *_peel_iface = reinterpret_cast<::GtkBuilderScopeInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Builder::Scope> ()));
    ::GtkBuilderScope *_peel_this = reinterpret_cast<::GtkBuilderScope *> (this);
    ::GtkBuilder *_peel_builder = reinterpret_cast<::GtkBuilder *> (builder);
    return _peel_iface->get_type_from_name (_peel_this, _peel_builder, type_name);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkBuilderScopeInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_create_closure ()
    {
      ::GtkBuilderScopeInterface *klass = reinterpret_cast<::GtkBuilderScopeInterface *> (this);
      klass->create_closure = +[] (::GtkBuilderScope *self, ::GtkBuilder *builder, const char *function_name, ::GtkBuilderClosureFlags flags, ::GObject *object, ::GError **error) -> ::GClosure *
      {
        Builder::Scope *_peel_this = reinterpret_cast<Builder::Scope *> (self);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        Builder::ClosureFlags _peel_flags = static_cast<Builder::ClosureFlags> (flags);
        GObject::Object *_peel_object = reinterpret_cast<GObject::Object *> (object);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<GObject::Closure> _peel_return = _peel_this->DerivedClass::vfunc_create_closure (_peel_builder, function_name, _peel_flags, _peel_object, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GClosure *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_type_from_function ()
    {
      ::GtkBuilderScopeInterface *klass = reinterpret_cast<::GtkBuilderScopeInterface *> (this);
      klass->get_type_from_function = +[] (::GtkBuilderScope *self, ::GtkBuilder *builder, const char *function_name) -> GType
      {
        Builder::Scope *_peel_this = reinterpret_cast<Builder::Scope *> (self);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        return _peel_this->DerivedClass::vfunc_get_type_from_function (_peel_builder, function_name);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_type_from_name ()
    {
      ::GtkBuilderScopeInterface *klass = reinterpret_cast<::GtkBuilderScopeInterface *> (this);
      klass->get_type_from_name = +[] (::GtkBuilderScope *self, ::GtkBuilder *builder, const char *type_name) -> GType
      {
        Builder::Scope *_peel_this = reinterpret_cast<Builder::Scope *> (self);
        Builder *_peel_builder = reinterpret_cast<Builder *> (builder);
        return _peel_this->DerivedClass::vfunc_get_type_from_name (_peel_builder, type_name);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkBuilderScopeInterface),
                 "Builder::Scope::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkBuilderScopeInterface),
                 "Builder::Scope::Iface align mismatch");
}; /* interface Builder::Scope */
static_assert (sizeof (Builder::Scope) == sizeof (GObject::Object),
               "Builder::Scope size mismatch");
static_assert (alignof (Builder::Scope) == alignof (GObject::Object),
               "Builder::Scope align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GObject/Closure.h>
