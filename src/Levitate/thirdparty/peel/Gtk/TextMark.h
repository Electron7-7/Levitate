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
class TextBuffer;
class TextMark;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextMark> ()
{
  return gtk_text_mark_get_type ();
}


namespace Gtk
{
class TextMark : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GtkTextMark) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextMark () = delete;
  TextMark (const TextMark &) = delete;
  TextMark (TextMark &&) = delete;
  TextMark &
  operator = (const TextMark &) = delete;
  TextMark &
  operator = (TextMark &&) = delete;
protected:
  ~TextMark () = default;
public:

  static peel::RefPtr<TextMark>
  create (const char *name, bool left_gravity) noexcept
  {
    gboolean _peel_left_gravity = static_cast<gboolean> (left_gravity);
    ::GtkTextMark *_peel_return = gtk_text_mark_new (name, _peel_left_gravity);
    peel_assume (_peel_return);
    return peel::RefPtr<TextMark>::adopt_ref (reinterpret_cast<TextMark *> (_peel_return));
  }

  TextBuffer *
  get_buffer () noexcept
  {
    ::GtkTextMark *_peel_this = reinterpret_cast<::GtkTextMark *> (this);
    ::GtkTextBuffer *_peel_return = gtk_text_mark_get_buffer (_peel_this);
    return reinterpret_cast<TextBuffer *> (_peel_return);
  }

  bool
  get_deleted () noexcept
  {
    ::GtkTextMark *_peel_this = reinterpret_cast<::GtkTextMark *> (this);
    gboolean _peel_return = gtk_text_mark_get_deleted (_peel_this);
    return !!_peel_return;
  }

  bool
  get_left_gravity () noexcept
  {
    ::GtkTextMark *_peel_this = reinterpret_cast<::GtkTextMark *> (this);
    gboolean _peel_return = gtk_text_mark_get_left_gravity (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_name () noexcept
  {
    ::GtkTextMark *_peel_this = reinterpret_cast<::GtkTextMark *> (this);
    return gtk_text_mark_get_name (_peel_this);
  }

  bool
  get_visible () noexcept
  {
    ::GtkTextMark *_peel_this = reinterpret_cast<::GtkTextMark *> (this);
    gboolean _peel_return = gtk_text_mark_get_visible (_peel_this);
    return !!_peel_return;
  }

  void
  set_visible (bool setting) noexcept
  {
    ::GtkTextMark *_peel_this = reinterpret_cast<::GtkTextMark *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_text_mark_set_visible (_peel_this, _peel_setting);
  }

  static peel::Property<bool>
  prop_left_gravity ()
  {
    return peel::Property<bool> { "left-gravity" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TextMark> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTextMarkClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTextMarkClass),
                 "TextMark::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTextMarkClass),
                 "TextMark::Class align mismatch");
}; /* class TextMark */

static_assert (sizeof (TextMark) == sizeof (::GtkTextMark),
               "TextMark size mismatch");
static_assert (alignof (TextMark) == alignof (::GtkTextMark),
               "TextMark align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
