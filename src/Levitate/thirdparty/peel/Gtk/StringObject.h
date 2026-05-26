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
class StringObject;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StringObject> ()
{
  return gtk_string_object_get_type ();
}


namespace Gtk
{
class StringObject : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StringObject () = delete;
  StringObject (const StringObject &) = delete;
  StringObject (StringObject &&) = delete;
  StringObject &
  operator = (const StringObject &) = delete;
  StringObject &
  operator = (StringObject &&) = delete;
  ~StringObject () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<StringObject>
  create (const char *string) noexcept
  {
    ::GtkStringObject *_peel_return = gtk_string_object_new (string);
    peel_assume (_peel_return);
    return peel::RefPtr<StringObject>::adopt_ref (reinterpret_cast<StringObject *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_string () noexcept
  {
    ::GtkStringObject *_peel_this = reinterpret_cast<::GtkStringObject *> (this);
    return gtk_string_object_get_string (_peel_this);
  }

  static peel::Property<const char *>
  prop_string ()
  {
    return peel::Property<const char *> { "string" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkStringObjectClass),
                 "StringObject::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkStringObjectClass),
                 "StringObject::Class align mismatch");
}; /* class StringObject */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
