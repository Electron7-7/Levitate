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
#include <peel/Gtk/IMContext.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class IMContextSimple;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::IMContextSimple> ()
{
  return gtk_im_context_simple_get_type ();
}


namespace Gtk
{
class IMContextSimple : public IMContext
{
private:
  unsigned char _placeholder[sizeof (::GtkIMContextSimple) - sizeof (IMContext)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IMContextSimple () = delete;
  IMContextSimple (const IMContextSimple &) = delete;
  IMContextSimple (IMContextSimple &&) = delete;
  IMContextSimple &
  operator = (const IMContextSimple &) = delete;
  IMContextSimple &
  operator = (IMContextSimple &&) = delete;
protected:
  ~IMContextSimple () = default;
public:

  static peel::RefPtr<IMContextSimple>
  create () noexcept
  {
    ::GtkIMContext *_peel_return = gtk_im_context_simple_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<IMContextSimple>::adopt_ref (reinterpret_cast<IMContextSimple *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_compose_file (const char *compose_file) noexcept
  {
    ::GtkIMContextSimple *_peel_this = reinterpret_cast<::GtkIMContextSimple *> (this);
    gtk_im_context_simple_add_compose_file (_peel_this, compose_file);
  }

  void
  add_table (uint16_t *data, int max_seq_len, int n_seqs) noexcept
  {
    ::GtkIMContextSimple *_peel_this = reinterpret_cast<::GtkIMContextSimple *> (this);
    guint16 *_peel_data = reinterpret_cast<guint16 *> (data);
    gtk_im_context_simple_add_table (_peel_this, _peel_data, max_seq_len, n_seqs);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<IMContextSimple> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public IMContext::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkIMContextSimpleClass),
                 "IMContextSimple::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkIMContextSimpleClass),
                 "IMContextSimple::Class align mismatch");
}; /* class IMContextSimple */

static_assert (sizeof (IMContextSimple) == sizeof (::GtkIMContextSimple),
               "IMContextSimple size mismatch");
static_assert (alignof (IMContextSimple) == alignof (::GtkIMContextSimple),
               "IMContextSimple align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
