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
struct PtrArray;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ Icon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Icon> ()
{
  return g_icon_get_type ();
}


namespace Gio
{
class /* interface */ Icon : public GObject::Object
/* requires GObject::Object */
{
private:
  Icon () = delete;
  Icon (const Icon &) = delete;
  Icon (Icon &&) = delete;

  Icon &
  operator = (const Icon &) = delete;
  Icon &
  operator = (Icon &&) = delete;

protected:
  ~Icon () = default;

public:

  peel_nonnull_args (1)
  static peel::RefPtr<Icon>
  create_for_string (const char *str, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GIcon *_peel_return = g_icon_new_for_string (str, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Icon>
  deserialize (GLib::Variant *value) noexcept
  {
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    ::GIcon *_peel_return = g_icon_deserialize (_peel_value);
    return peel::RefPtr<Icon>::adopt_ref (reinterpret_cast<Icon *> (_peel_return));
  }

  bool
  equal (Icon *icon2) noexcept
  {
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GIcon *_peel_icon2 = reinterpret_cast<::GIcon *> (icon2);
    gboolean _peel_return = g_icon_equal (_peel_this, _peel_icon2);
    return !!_peel_return;
  }

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return g_icon_hash (_peel_this);
  }

  peel::RefPtr<GLib::Variant>
  serialize () noexcept
  {
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GVariant *_peel_return = g_icon_serialize (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::String
  to_string () noexcept
  {
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    gchar *_peel_return = g_icon_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_equal (Icon *icon2) noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Icon> ())->peek_parent ());
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GIcon *_peel_icon2 = reinterpret_cast<::GIcon *> (icon2);
    gboolean _peel_return = _peel_iface->equal (_peel_this, _peel_icon2);
    return !!_peel_return;
  }

  bool
  default_vfunc_equal (Icon *icon2) noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Icon> ()));
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GIcon *_peel_icon2 = reinterpret_cast<::GIcon *> (icon2);
    gboolean _peel_return = _peel_iface->equal (_peel_this, _peel_icon2);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_hash () noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Icon> ())->peek_parent ());
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    return _peel_iface->hash (_peel_this);
  }

  unsigned
  default_vfunc_hash () noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Icon> ()));
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    return _peel_iface->hash (_peel_this);
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Variant>
  parent_vfunc_serialize () noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Icon> ())->peek_parent ());
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GVariant *_peel_return = _peel_iface->serialize (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::RefPtr<GLib::Variant>
  default_vfunc_serialize () noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Icon> ()));
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GVariant *_peel_return = _peel_iface->serialize (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_to_tokens (GLib::PtrArray *tokens, int *out_version) noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Icon> ())->peek_parent ());
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GPtrArray *_peel_tokens = reinterpret_cast<::GPtrArray *> (tokens);
    gint *_peel_out_version = reinterpret_cast<gint *> (out_version);
    gboolean _peel_return = _peel_iface->to_tokens (_peel_this, _peel_tokens, _peel_out_version);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_to_tokens (GLib::PtrArray *tokens, int *out_version) noexcept
  {
    ::GIconIface *_peel_iface = reinterpret_cast<::GIconIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Icon> ()));
    ::GIcon *_peel_this = reinterpret_cast<::GIcon *> (this);
    ::GPtrArray *_peel_tokens = reinterpret_cast<::GPtrArray *> (tokens);
    gint *_peel_out_version = reinterpret_cast<gint *> (out_version);
    gboolean _peel_return = _peel_iface->to_tokens (_peel_this, _peel_tokens, _peel_out_version);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GIconIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_equal ()
    {
      ::GIconIface *klass = reinterpret_cast<::GIconIface *> (this);
      klass->equal = +[] (::GIcon *icon1, ::GIcon *icon2) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (icon1);
        Icon *_peel_icon2 = reinterpret_cast<Icon *> (icon2);
        bool _peel_return = _peel_this->DerivedClass::vfunc_equal (_peel_icon2);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_hash ()
    {
      ::GIconIface *klass = reinterpret_cast<::GIconIface *> (this);
      klass->hash = +[] (::GIcon *icon) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (icon);
        return _peel_this->DerivedClass::vfunc_hash ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_serialize ()
    {
      ::GIconIface *klass = reinterpret_cast<::GIconIface *> (this);
      klass->serialize = +[] (::GIcon *icon) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (icon);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_serialize ();
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_to_tokens ()
    {
      ::GIconIface *klass = reinterpret_cast<::GIconIface *> (this);
      klass->to_tokens = +[] (::GIcon *icon, ::GPtrArray *tokens, gint *out_version) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (icon);
        GLib::PtrArray *_peel_tokens = reinterpret_cast<GLib::PtrArray *> (tokens);
        bool _peel_return = _peel_this->DerivedClass::vfunc_to_tokens (_peel_tokens, out_version);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GIconIface),
                 "Icon::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GIconIface),
                 "Icon::Iface align mismatch");
}; /* interface Icon */
static_assert (sizeof (Icon) == sizeof (GObject::Object),
               "Icon size mismatch");
static_assert (alignof (Icon) == alignof (GObject::Object),
               "Icon align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
