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
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::AsyncResult> ()
{
  return g_async_result_get_type ();
}


namespace Gio
{
class /* interface */ AsyncResult : public GObject::Object
/* requires GObject::Object */
{
private:
  AsyncResult () = delete;
  AsyncResult (const AsyncResult &) = delete;
  AsyncResult (AsyncResult &&) = delete;

  AsyncResult &
  operator = (const AsyncResult &) = delete;
  AsyncResult &
  operator = (AsyncResult &&) = delete;

protected:
  ~AsyncResult () = default;

public:

  peel::RefPtr<GObject::Object>
  get_source_object () noexcept
  {
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    ::GObject *_peel_return = g_async_result_get_source_object (_peel_this);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  void *
  get_user_data () noexcept
  {
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    return g_async_result_get_user_data (_peel_this);
  }

  bool
  is_tagged (void *source_tag) noexcept
  {
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    gboolean _peel_return = g_async_result_is_tagged (_peel_this, source_tag);
    return !!_peel_return;
  }

  bool
  legacy_propagate_error (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_async_result_legacy_propagate_error (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<GObject::Object>
  parent_vfunc_get_source_object () noexcept
  {
    ::GAsyncResultIface *_peel_iface = reinterpret_cast<::GAsyncResultIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AsyncResult> ())->peek_parent ());
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    ::GObject *_peel_return = _peel_iface->get_source_object (_peel_this);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  peel::RefPtr<GObject::Object>
  default_vfunc_get_source_object () noexcept
  {
    ::GAsyncResultIface *_peel_iface = reinterpret_cast<::GAsyncResultIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AsyncResult> ()));
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    ::GObject *_peel_return = _peel_iface->get_source_object (_peel_this);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  template<typename DerivedClass>
  void *
  parent_vfunc_get_user_data () noexcept
  {
    ::GAsyncResultIface *_peel_iface = reinterpret_cast<::GAsyncResultIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AsyncResult> ())->peek_parent ());
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    return _peel_iface->get_user_data (_peel_this);
  }

  void *
  default_vfunc_get_user_data () noexcept
  {
    ::GAsyncResultIface *_peel_iface = reinterpret_cast<::GAsyncResultIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AsyncResult> ()));
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    return _peel_iface->get_user_data (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_tagged (void *source_tag) noexcept
  {
    ::GAsyncResultIface *_peel_iface = reinterpret_cast<::GAsyncResultIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AsyncResult> ())->peek_parent ());
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    gboolean _peel_return = _peel_iface->is_tagged (_peel_this, source_tag);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_tagged (void *source_tag) noexcept
  {
    ::GAsyncResultIface *_peel_iface = reinterpret_cast<::GAsyncResultIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AsyncResult> ()));
    ::GAsyncResult *_peel_this = reinterpret_cast<::GAsyncResult *> (this);
    gboolean _peel_return = _peel_iface->is_tagged (_peel_this, source_tag);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GAsyncResultIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_source_object ()
    {
      ::GAsyncResultIface *klass = reinterpret_cast<::GAsyncResultIface *> (this);
      klass->get_source_object = +[] (::GAsyncResult *res) -> ::GObject *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (res);
        peel::RefPtr<GObject::Object> _peel_return = _peel_this->DerivedClass::vfunc_get_source_object ();
        return reinterpret_cast<::GObject *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_user_data ()
    {
      ::GAsyncResultIface *klass = reinterpret_cast<::GAsyncResultIface *> (this);
      klass->get_user_data = +[] (::GAsyncResult *res) -> gpointer
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (res);
        return _peel_this->DerivedClass::vfunc_get_user_data ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_tagged ()
    {
      ::GAsyncResultIface *klass = reinterpret_cast<::GAsyncResultIface *> (this);
      klass->is_tagged = +[] (::GAsyncResult *res, gpointer source_tag) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (res);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_tagged (source_tag);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GAsyncResultIface),
                 "AsyncResult::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GAsyncResultIface),
                 "AsyncResult::Iface align mismatch");
}; /* interface AsyncResult */
static_assert (sizeof (AsyncResult) == sizeof (GObject::Object),
               "AsyncResult size mismatch");
static_assert (alignof (AsyncResult) == alignof (GObject::Object),
               "AsyncResult align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
