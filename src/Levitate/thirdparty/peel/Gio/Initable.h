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
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
struct Parameter;
} /* namespace GObject */

namespace Gio
{
class Cancellable;
class /* interface */ Initable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Initable> ()
{
  return g_initable_get_type ();
}


namespace Gio
{
class /* interface */ Initable : public GObject::Object
/* requires GObject::Object */
{
private:
  Initable () = delete;
  Initable (const Initable &) = delete;
  Initable (Initable &&) = delete;

  Initable &
  operator = (const Initable &) = delete;
  Initable &
  operator = (Initable &&) = delete;

protected:
  ~Initable () = default;

public:

  template<typename... Args>
  peel_arg_in (3) peel_nonnull_args (3)
  static peel::RefPtr<Initable>
  create (GObject::Type object_type, Cancellable *cancellable, GLib::Error *error, Args &&...args) noexcept
  {
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError **_peel_error = reinterpret_cast<::GError **> (error);
    ::gpointer _peel_return = peel::internals::ObjectCreateHelper<Args...>::template invoke<::gpointer, decltype (g_initable_new) *, GType, ::GCancellable *, ::GError **> (g_initable_new, object_type, _peel_cancellable, _peel_error, std::forward<Args> (args)...);
    peel_assume (_peel_return);
    return peel::RefPtr<Initable>::adopt_ref (reinterpret_cast<Initable *> (_peel_return));
  }

  peel_nonnull_args (2)
  static peel::RefPtr<Initable>
  create_valist (GObject::Type object_type, const char *first_property_name, va_list var_args, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GObject *_peel_return = g_initable_new_valist (object_type, first_property_name, var_args, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Initable>::adopt_ref (reinterpret_cast<Initable *> (_peel_return));
  }

  static peel::RefPtr<GObject::Object>
  newv (GObject::Type object_type, peel::ArrayRef<GObject::Parameter *> parameters, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    guint _peel_n_parameters;
    ::GParameter *_peel_parameters = (_peel_n_parameters = parameters.size (), reinterpret_cast<::GParameter *> (parameters.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::gpointer _peel_return = g_initable_newv (object_type, _peel_n_parameters, _peel_parameters, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  bool
  init (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInitable *_peel_this = reinterpret_cast<::GInitable *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_initable_init (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_init (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInitableIface *_peel_iface = reinterpret_cast<::GInitableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Initable> ())->peek_parent ());
    ::GInitable *_peel_this = reinterpret_cast<::GInitable *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->init (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_init (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInitableIface *_peel_iface = reinterpret_cast<::GInitableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Initable> ()));
    ::GInitable *_peel_this = reinterpret_cast<::GInitable *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->init (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GInitableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_init ()
    {
      ::GInitableIface *klass = reinterpret_cast<::GInitableIface *> (this);
      klass->init = +[] (::GInitable *initable, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (initable);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_init (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GInitableIface),
                 "Initable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GInitableIface),
                 "Initable::Iface align mismatch");
}; /* interface Initable */
static_assert (sizeof (Initable) == sizeof (GObject::Object),
               "Initable size mismatch");
static_assert (alignof (Initable) == alignof (GObject::Object),
               "Initable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
