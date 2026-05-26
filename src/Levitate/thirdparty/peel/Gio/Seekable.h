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
enum class SeekType : std::underlying_type<::GSeekType>::type;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class /* interface */ Seekable;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Seekable> ()
{
  return g_seekable_get_type ();
}


namespace Gio
{
class /* interface */ Seekable : public GObject::Object
/* requires GObject::Object */
{
private:
  Seekable () = delete;
  Seekable (const Seekable &) = delete;
  Seekable (Seekable &&) = delete;

  Seekable &
  operator = (const Seekable &) = delete;
  Seekable &
  operator = (Seekable &&) = delete;

protected:
  ~Seekable () = default;

public:

  bool
  can_seek () noexcept
  {
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    gboolean _peel_return = g_seekable_can_seek (_peel_this);
    return !!_peel_return;
  }

  bool
  can_truncate () noexcept
  {
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    gboolean _peel_return = g_seekable_can_truncate (_peel_this);
    return !!_peel_return;
  }

  bool
  seek (int64_t offset, GLib::SeekType type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    ::GSeekType _peel_type = static_cast<::GSeekType> (type);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_seekable_seek (_peel_this, offset, _peel_type, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  int64_t
  tell () noexcept
  {
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    return g_seekable_tell (_peel_this);
  }

  bool
  truncate (int64_t offset, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_seekable_truncate (_peel_this, offset, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_seek () noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Seekable> ())->peek_parent ());
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    gboolean _peel_return = _peel_iface->can_seek (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_seek () noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Seekable> ()));
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    gboolean _peel_return = _peel_iface->can_seek (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_truncate () noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Seekable> ())->peek_parent ());
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    gboolean _peel_return = _peel_iface->can_truncate (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_truncate () noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Seekable> ()));
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    gboolean _peel_return = _peel_iface->can_truncate (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_seek (int64_t offset, GLib::SeekType type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Seekable> ())->peek_parent ());
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    ::GSeekType _peel_type = static_cast<::GSeekType> (type);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->seek (_peel_this, offset, _peel_type, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_seek (int64_t offset, GLib::SeekType type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Seekable> ()));
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    ::GSeekType _peel_type = static_cast<::GSeekType> (type);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->seek (_peel_this, offset, _peel_type, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  int64_t
  parent_vfunc_tell () noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Seekable> ())->peek_parent ());
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    return _peel_iface->tell (_peel_this);
  }

  int64_t
  default_vfunc_tell () noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Seekable> ()));
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    return _peel_iface->tell (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_truncate_fn (int64_t offset, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Seekable> ())->peek_parent ());
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->truncate_fn (_peel_this, offset, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_truncate_fn (int64_t offset, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GSeekableIface *_peel_iface = reinterpret_cast<::GSeekableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Seekable> ()));
    ::GSeekable *_peel_this = reinterpret_cast<::GSeekable *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->truncate_fn (_peel_this, offset, _peel_cancellable, error ? &_peel_error : nullptr);
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

    unsigned char _placeholder[sizeof (::GSeekableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_seek ()
    {
      ::GSeekableIface *klass = reinterpret_cast<::GSeekableIface *> (this);
      klass->can_seek = +[] (::GSeekable *seekable) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (seekable);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_seek ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_truncate ()
    {
      ::GSeekableIface *klass = reinterpret_cast<::GSeekableIface *> (this);
      klass->can_truncate = +[] (::GSeekable *seekable) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (seekable);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_truncate ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_seek ()
    {
      ::GSeekableIface *klass = reinterpret_cast<::GSeekableIface *> (this);
      klass->seek = +[] (::GSeekable *seekable, goffset offset, ::GSeekType type, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (seekable);
        GLib::SeekType _peel_type = static_cast<GLib::SeekType> (type);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_seek (offset, _peel_type, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_tell ()
    {
      ::GSeekableIface *klass = reinterpret_cast<::GSeekableIface *> (this);
      klass->tell = +[] (::GSeekable *seekable) -> goffset
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (seekable);
        return _peel_this->DerivedClass::vfunc_tell ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_truncate_fn ()
    {
      ::GSeekableIface *klass = reinterpret_cast<::GSeekableIface *> (this);
      klass->truncate_fn = +[] (::GSeekable *seekable, goffset offset, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (seekable);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_truncate_fn (offset, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GSeekableIface),
                 "Seekable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GSeekableIface),
                 "Seekable::Iface align mismatch");
}; /* interface Seekable */
static_assert (sizeof (Seekable) == sizeof (GObject::Object),
               "Seekable size mismatch");
static_assert (alignof (Seekable) == alignof (GObject::Object),
               "Seekable align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
