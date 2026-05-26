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
#include <peel/Gtk/Sorter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class Collation : std::underlying_type<::GtkCollation>::type;
class Expression;
class StringSorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StringSorter> ()
{
  return gtk_string_sorter_get_type ();
}


namespace Gtk
{
class StringSorter : public Sorter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StringSorter () = delete;
  StringSorter (const StringSorter &) = delete;
  StringSorter (StringSorter &&) = delete;
  StringSorter &
  operator = (const StringSorter &) = delete;
  StringSorter &
  operator = (StringSorter &&) = delete;
  ~StringSorter () = delete;
public:

  static peel::RefPtr<StringSorter>
  create (peel::RefPtr<Expression> expression) noexcept
  {
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GtkStringSorter *_peel_return = gtk_string_sorter_new (_peel_expression);
    peel_assume (_peel_return);
    return peel::RefPtr<StringSorter>::adopt_ref (reinterpret_cast<StringSorter *> (_peel_return));
  }

  Collation
  get_collation () noexcept
  {
    ::GtkStringSorter *_peel_this = reinterpret_cast<::GtkStringSorter *> (this);
    ::GtkCollation _peel_return = gtk_string_sorter_get_collation (_peel_this);
    return static_cast<Collation> (_peel_return);
  }

  Expression *
  get_expression () noexcept
  {
    ::GtkStringSorter *_peel_this = reinterpret_cast<::GtkStringSorter *> (this);
    ::GtkExpression *_peel_return = gtk_string_sorter_get_expression (_peel_this);
    return reinterpret_cast<Expression *> (_peel_return);
  }

  bool
  get_ignore_case () noexcept
  {
    ::GtkStringSorter *_peel_this = reinterpret_cast<::GtkStringSorter *> (this);
    gboolean _peel_return = gtk_string_sorter_get_ignore_case (_peel_this);
    return !!_peel_return;
  }

  void
  set_collation (Collation collation) noexcept
  {
    ::GtkStringSorter *_peel_this = reinterpret_cast<::GtkStringSorter *> (this);
    ::GtkCollation _peel_collation = static_cast<::GtkCollation> (collation);
    gtk_string_sorter_set_collation (_peel_this, _peel_collation);
  }

  void
  set_expression (Expression *expression) noexcept
  {
    ::GtkStringSorter *_peel_this = reinterpret_cast<::GtkStringSorter *> (this);
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (expression);
    gtk_string_sorter_set_expression (_peel_this, _peel_expression);
  }

  void
  set_ignore_case (bool ignore_case) noexcept
  {
    ::GtkStringSorter *_peel_this = reinterpret_cast<::GtkStringSorter *> (this);
    gboolean _peel_ignore_case = static_cast<gboolean> (ignore_case);
    gtk_string_sorter_set_ignore_case (_peel_this, _peel_ignore_case);
  }

  static peel::Property<Collation>
  prop_collation ()
  {
    return peel::Property<Collation> { "collation" };
  }

  static peel::Property<Expression>
  prop_expression ()
  {
    return peel::Property<Expression> { "expression" };
  }

  static peel::Property<bool>
  prop_ignore_case ()
  {
    return peel::Property<bool> { "ignore-case" };
  }

  class Class : public Sorter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkStringSorterClass),
                 "StringSorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkStringSorterClass),
                 "StringSorter::Class align mismatch");
}; /* class StringSorter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Expression.h>
