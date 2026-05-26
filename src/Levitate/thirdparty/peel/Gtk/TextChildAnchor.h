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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class TextChildAnchor;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextChildAnchor> ()
{
  return gtk_text_child_anchor_get_type ();
}


namespace Gtk
{
class TextChildAnchor : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GtkTextChildAnchor) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextChildAnchor () = delete;
  TextChildAnchor (const TextChildAnchor &) = delete;
  TextChildAnchor (TextChildAnchor &&) = delete;
  TextChildAnchor &
  operator = (const TextChildAnchor &) = delete;
  TextChildAnchor &
  operator = (TextChildAnchor &&) = delete;
protected:
  ~TextChildAnchor () = default;
public:

  static peel::RefPtr<TextChildAnchor>
  create () noexcept
  {
    ::GtkTextChildAnchor *_peel_return = gtk_text_child_anchor_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<TextChildAnchor>::adopt_ref (reinterpret_cast<TextChildAnchor *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<TextChildAnchor>
  create_with_replacement (const char *character) noexcept
  {
    ::GtkTextChildAnchor *_peel_return = gtk_text_child_anchor_new_with_replacement (character);
    peel_assume (_peel_return);
    return peel::RefPtr<TextChildAnchor>::adopt_ref (reinterpret_cast<TextChildAnchor *> (_peel_return));
  }

  bool
  get_deleted () noexcept
  {
    ::GtkTextChildAnchor *_peel_this = reinterpret_cast<::GtkTextChildAnchor *> (this);
    gboolean _peel_return = gtk_text_child_anchor_get_deleted (_peel_this);
    return !!_peel_return;
  }

  peel::UniquePtr<Widget *[]>
  get_widgets () noexcept
  {
    guint _peel_out_len;
    ::GtkTextChildAnchor *_peel_this = reinterpret_cast<::GtkTextChildAnchor *> (this);
    ::GtkWidget **_peel_return = gtk_text_child_anchor_get_widgets (_peel_this, &_peel_out_len);
    peel_assume (_peel_return);
    return peel::UniquePtr<Widget *[]>::adopt_ref (reinterpret_cast<Widget **> (_peel_return), _peel_out_len);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TextChildAnchor> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTextChildAnchorClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTextChildAnchorClass),
                 "TextChildAnchor::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTextChildAnchorClass),
                 "TextChildAnchor::Class align mismatch");
}; /* class TextChildAnchor */

static_assert (sizeof (TextChildAnchor) == sizeof (::GtkTextChildAnchor),
               "TextChildAnchor size mismatch");
static_assert (alignof (TextChildAnchor) == alignof (::GtkTextChildAnchor),
               "TextChildAnchor align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
