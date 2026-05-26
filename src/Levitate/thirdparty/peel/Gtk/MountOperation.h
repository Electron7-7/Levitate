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
#include <peel/Gio/MountOperation.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
} /* namespace Gdk */

namespace Gtk
{
class MountOperation;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MountOperation> ()
{
  return gtk_mount_operation_get_type ();
}


namespace Gtk
{
class MountOperation : public Gio::MountOperation
{
private:
  unsigned char _placeholder[sizeof (::GtkMountOperation) - sizeof (Gio::MountOperation)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MountOperation () = delete;
  MountOperation (const MountOperation &) = delete;
  MountOperation (MountOperation &&) = delete;
  MountOperation &
  operator = (const MountOperation &) = delete;
  MountOperation &
  operator = (MountOperation &&) = delete;
protected:
  ~MountOperation () = default;
public:

  static peel::RefPtr<MountOperation>
  create (Window *parent) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GMountOperation *_peel_return = gtk_mount_operation_new (_peel_parent);
    peel_assume (_peel_return);
    return peel::RefPtr<MountOperation>::adopt_ref (reinterpret_cast<MountOperation *> (_peel_return));
  }

  peel_returns_nonnull
  Gdk::Display *
  get_display () noexcept
  {
    ::GtkMountOperation *_peel_this = reinterpret_cast<::GtkMountOperation *> (this);
    ::GdkDisplay *_peel_return = gtk_mount_operation_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Display *> (_peel_return);
  }

  Window *
  get_parent () noexcept
  {
    ::GtkMountOperation *_peel_this = reinterpret_cast<::GtkMountOperation *> (this);
    ::GtkWindow *_peel_return = gtk_mount_operation_get_parent (_peel_this);
    return reinterpret_cast<Window *> (_peel_return);
  }

  bool
  is_showing () noexcept
  {
    ::GtkMountOperation *_peel_this = reinterpret_cast<::GtkMountOperation *> (this);
    gboolean _peel_return = gtk_mount_operation_is_showing (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_display (Gdk::Display *display) noexcept
  {
    ::GtkMountOperation *_peel_this = reinterpret_cast<::GtkMountOperation *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    gtk_mount_operation_set_display (_peel_this, _peel_display);
  }

  void
  set_parent (Window *parent) noexcept
  {
    ::GtkMountOperation *_peel_this = reinterpret_cast<::GtkMountOperation *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    gtk_mount_operation_set_parent (_peel_this, _peel_parent);
  }

  static peel::Property<Gdk::Display>
  prop_display ()
  {
    return peel::Property<Gdk::Display> { "display" };
  }

  static peel::Property<bool>
  prop_is_showing ()
  {
    return peel::Property<bool> { "is-showing" };
  }

  static peel::Property<Window>
  prop_parent ()
  {
    return peel::Property<Window> { "parent" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MountOperation> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Gio::MountOperation::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkMountOperationClass) - sizeof (Gio::MountOperation::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkMountOperationClass),
                 "MountOperation::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMountOperationClass),
                 "MountOperation::Class align mismatch");
}; /* class MountOperation */

static_assert (sizeof (MountOperation) == sizeof (::GtkMountOperation),
               "MountOperation size mismatch");
static_assert (alignof (MountOperation) == alignof (::GtkMountOperation),
               "MountOperation align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
