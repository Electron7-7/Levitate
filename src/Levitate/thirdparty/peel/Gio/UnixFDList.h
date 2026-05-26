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
} /* namespace GLib */

namespace Gio
{
class UnixFDList;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::UnixFDList> ()
{
  return g_unix_fd_list_get_type ();
}


namespace Gio
{
class UnixFDList : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GUnixFDList) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  UnixFDList () = delete;
  UnixFDList (const UnixFDList &) = delete;
  UnixFDList (UnixFDList &&) = delete;
  UnixFDList &
  operator = (const UnixFDList &) = delete;
  UnixFDList &
  operator = (UnixFDList &&) = delete;
protected:
  ~UnixFDList () = default;
public:

  static peel::RefPtr<UnixFDList>
  create () noexcept
  {
    ::GUnixFDList *_peel_return = g_unix_fd_list_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<UnixFDList>::adopt_ref (reinterpret_cast<UnixFDList *> (_peel_return));
  }

  static peel::RefPtr<UnixFDList>
  create_from_array (peel::ArrayRef<const int> fds) noexcept
  {
    gint _peel_n_fds;
    const gint *_peel_fds = (_peel_n_fds = fds.size (), reinterpret_cast<const gint *> (fds.data ()));
    ::GUnixFDList *_peel_return = g_unix_fd_list_new_from_array (_peel_fds, _peel_n_fds);
    peel_assume (_peel_return);
    return peel::RefPtr<UnixFDList>::adopt_ref (reinterpret_cast<UnixFDList *> (_peel_return));
  }

  int
  append (int fd, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixFDList *_peel_this = reinterpret_cast<::GUnixFDList *> (this);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_unix_fd_list_append (_peel_this, fd, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int
  get (int index_, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GUnixFDList *_peel_this = reinterpret_cast<::GUnixFDList *> (this);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_unix_fd_list_get (_peel_this, index_, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int
  get_length () noexcept
  {
    ::GUnixFDList *_peel_this = reinterpret_cast<::GUnixFDList *> (this);
    return g_unix_fd_list_get_length (_peel_this);
  }

  peel::ArrayRef<const int>
  peek_fds () noexcept
  {
    gint _peel_length;
    ::GUnixFDList *_peel_this = reinterpret_cast<::GUnixFDList *> (this);
    const gint *_peel_return = g_unix_fd_list_peek_fds (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::ArrayRef<const int> (reinterpret_cast<const int *> (_peel_return), _peel_length);
  }

  peel::UniquePtr<int[]>
  steal_fds () noexcept
  {
    gint _peel_length;
    ::GUnixFDList *_peel_this = reinterpret_cast<::GUnixFDList *> (this);
    gint *_peel_return = g_unix_fd_list_steal_fds (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<int[]>::adopt_ref (reinterpret_cast<int *> (_peel_return), _peel_length);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<UnixFDList> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GUnixFDListClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GUnixFDListClass),
                 "UnixFDList::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GUnixFDListClass),
                 "UnixFDList::Class align mismatch");
}; /* class UnixFDList */

static_assert (sizeof (UnixFDList) == sizeof (::GUnixFDList),
               "UnixFDList size mismatch");
static_assert (alignof (UnixFDList) == alignof (::GUnixFDList),
               "UnixFDList align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
