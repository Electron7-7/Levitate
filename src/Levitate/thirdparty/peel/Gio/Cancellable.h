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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct PollFD;
struct Source;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Cancellable> ()
{
  return g_cancellable_get_type ();
}


namespace Gio
{
class Cancellable : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GCancellable) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Cancellable () = delete;
  Cancellable (const Cancellable &) = delete;
  Cancellable (Cancellable &&) = delete;
  Cancellable &
  operator = (const Cancellable &) = delete;
  Cancellable &
  operator = (Cancellable &&) = delete;
protected:
  ~Cancellable () = default;
public:

  static peel::RefPtr<Cancellable>
  create () noexcept
  {
    ::GCancellable *_peel_return = g_cancellable_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Cancellable>::adopt_ref (reinterpret_cast<Cancellable *> (_peel_return));
  }

  static Cancellable *
  get_current () noexcept
  {
    ::GCancellable *_peel_return = g_cancellable_get_current ();
    return reinterpret_cast<Cancellable *> (_peel_return);
  }

  void
  cancel () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    g_cancellable_cancel (_peel_this);
  }

  /* Unsupported for now: connect: explicitly skipped */
  static void
  connect (UnsupportedForNowToken);

  void
  disconnect (unsigned long handler_id) noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    g_cancellable_disconnect (_peel_this, handler_id);
  }

  int
  get_fd () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    return g_cancellable_get_fd (_peel_this);
  }

  bool
  is_cancelled () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    gboolean _peel_return = g_cancellable_is_cancelled (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  make_pollfd (GLib::PollFD *pollfd) noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    ::GPollFD *_peel_pollfd = reinterpret_cast<::GPollFD *> (pollfd);
    gboolean _peel_return = g_cancellable_make_pollfd (_peel_this, _peel_pollfd);
    return !!_peel_return;
  }

  void
  pop_current () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    g_cancellable_pop_current (_peel_this);
  }

  void
  push_current () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    g_cancellable_push_current (_peel_this);
  }

  void
  release_fd () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    g_cancellable_release_fd (_peel_this);
  }

  void
  reset () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    g_cancellable_reset (_peel_this);
  }

  bool
  set_error_if_cancelled (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_cancellable_set_error_if_cancelled (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Source>
  source_new () noexcept
  {
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    ::GSource *_peel_return = g_cancellable_source_new (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cancelled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Cancellable, void ()>::_peel_connect_by_name (this, "cancelled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cancelled (HandlerObject *object, void (HandlerObject::*handler_method) (Cancellable *), bool after = false) noexcept
  {
    return Signal<Cancellable, void ()>::_peel_connect_by_name (this, "cancelled", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Cancellable> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_cancelled () noexcept
  {
    ::GCancellableClass *_peel_class = reinterpret_cast<::GCancellableClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GCancellable *_peel_this = reinterpret_cast<::GCancellable *> (this);
    _peel_class->cancelled (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GCancellableClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_cancelled ()
    {
      ::GCancellableClass *klass = reinterpret_cast<::GCancellableClass *> (this);
      klass->cancelled = +[] (::GCancellable *cancellable) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cancellable);
        _peel_this->DerivedClass::vfunc_cancelled ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GCancellableClass),
                 "Cancellable::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GCancellableClass),
                 "Cancellable::Class align mismatch");
}; /* class Cancellable */

static_assert (sizeof (Cancellable) == sizeof (::GCancellable),
               "Cancellable size mismatch");
static_assert (alignof (Cancellable) == alignof (::GCancellable),
               "Cancellable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Source.h>
