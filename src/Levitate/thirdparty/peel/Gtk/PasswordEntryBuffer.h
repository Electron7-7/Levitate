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
#include <peel/Gtk/EntryBuffer.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class PasswordEntryBuffer;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PasswordEntryBuffer> ()
{
  return gtk_password_entry_buffer_get_type ();
}


namespace Gtk
{
class PasswordEntryBuffer : public EntryBuffer
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PasswordEntryBuffer () = delete;
  PasswordEntryBuffer (const PasswordEntryBuffer &) = delete;
  PasswordEntryBuffer (PasswordEntryBuffer &&) = delete;
  PasswordEntryBuffer &
  operator = (const PasswordEntryBuffer &) = delete;
  PasswordEntryBuffer &
  operator = (PasswordEntryBuffer &&) = delete;
  ~PasswordEntryBuffer () = delete;
public:

  static peel::RefPtr<PasswordEntryBuffer>
  create () noexcept
  {
    ::GtkEntryBuffer *_peel_return = gtk_password_entry_buffer_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PasswordEntryBuffer>::adopt_ref (reinterpret_cast<PasswordEntryBuffer *> (_peel_return));
  }

  class Class : public EntryBuffer::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkPasswordEntryBufferClass),
                 "PasswordEntryBuffer::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkPasswordEntryBufferClass),
                 "PasswordEntryBuffer::Class align mismatch");
}; /* class PasswordEntryBuffer */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
