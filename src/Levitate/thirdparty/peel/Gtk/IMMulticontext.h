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
class IMMulticontext;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::IMMulticontext> ()
{
  return gtk_im_multicontext_get_type ();
}


namespace Gtk
{
class IMMulticontext : public IMContext
{
private:
  unsigned char _placeholder[sizeof (::GtkIMMulticontext) - sizeof (IMContext)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IMMulticontext () = delete;
  IMMulticontext (const IMMulticontext &) = delete;
  IMMulticontext (IMMulticontext &&) = delete;
  IMMulticontext &
  operator = (const IMMulticontext &) = delete;
  IMMulticontext &
  operator = (IMMulticontext &&) = delete;
protected:
  ~IMMulticontext () = default;
public:

  static peel::RefPtr<IMMulticontext>
  create () noexcept
  {
    ::GtkIMContext *_peel_return = gtk_im_multicontext_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<IMMulticontext>::adopt_ref (reinterpret_cast<IMMulticontext *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_context_id () noexcept
  {
    ::GtkIMMulticontext *_peel_this = reinterpret_cast<::GtkIMMulticontext *> (this);
    return gtk_im_multicontext_get_context_id (_peel_this);
  }

  void
  set_context_id (const char *context_id) noexcept
  {
    ::GtkIMMulticontext *_peel_this = reinterpret_cast<::GtkIMMulticontext *> (this);
    gtk_im_multicontext_set_context_id (_peel_this, context_id);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<IMMulticontext> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public IMContext::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkIMMulticontextClass) - sizeof (IMContext::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkIMMulticontextClass),
                 "IMMulticontext::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkIMMulticontextClass),
                 "IMMulticontext::Class align mismatch");
}; /* class IMMulticontext */

static_assert (sizeof (IMMulticontext) == sizeof (::GtkIMMulticontext),
               "IMMulticontext size mismatch");
static_assert (alignof (IMMulticontext) == alignof (::GtkIMMulticontext),
               "IMMulticontext align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
