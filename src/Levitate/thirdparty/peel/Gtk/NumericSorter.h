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
class Expression;
class NumericSorter;
enum class SortType : std::underlying_type<::GtkSortType>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::NumericSorter> ()
{
  return gtk_numeric_sorter_get_type ();
}


namespace Gtk
{
class NumericSorter : public Sorter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NumericSorter () = delete;
  NumericSorter (const NumericSorter &) = delete;
  NumericSorter (NumericSorter &&) = delete;
  NumericSorter &
  operator = (const NumericSorter &) = delete;
  NumericSorter &
  operator = (NumericSorter &&) = delete;
  ~NumericSorter () = delete;
public:

  static peel::RefPtr<NumericSorter>
  create (peel::RefPtr<Expression> expression) noexcept
  {
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GtkNumericSorter *_peel_return = gtk_numeric_sorter_new (_peel_expression);
    peel_assume (_peel_return);
    return peel::RefPtr<NumericSorter>::adopt_ref (reinterpret_cast<NumericSorter *> (_peel_return));
  }

  Expression *
  get_expression () noexcept
  {
    ::GtkNumericSorter *_peel_this = reinterpret_cast<::GtkNumericSorter *> (this);
    ::GtkExpression *_peel_return = gtk_numeric_sorter_get_expression (_peel_this);
    return reinterpret_cast<Expression *> (_peel_return);
  }

  SortType
  get_sort_order () noexcept
  {
    ::GtkNumericSorter *_peel_this = reinterpret_cast<::GtkNumericSorter *> (this);
    ::GtkSortType _peel_return = gtk_numeric_sorter_get_sort_order (_peel_this);
    return static_cast<SortType> (_peel_return);
  }

  void
  set_expression (Expression *expression) noexcept
  {
    ::GtkNumericSorter *_peel_this = reinterpret_cast<::GtkNumericSorter *> (this);
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (expression);
    gtk_numeric_sorter_set_expression (_peel_this, _peel_expression);
  }

  void
  set_sort_order (SortType sort_order) noexcept
  {
    ::GtkNumericSorter *_peel_this = reinterpret_cast<::GtkNumericSorter *> (this);
    ::GtkSortType _peel_sort_order = static_cast<::GtkSortType> (sort_order);
    gtk_numeric_sorter_set_sort_order (_peel_this, _peel_sort_order);
  }

  static peel::Property<Expression>
  prop_expression ()
  {
    return peel::Property<Expression> { "expression" };
  }

  static peel::Property<SortType>
  prop_sort_order ()
  {
    return peel::Property<SortType> { "sort-order" };
  }

  class Class : public Sorter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkNumericSorterClass),
                 "NumericSorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkNumericSorterClass),
                 "NumericSorter::Class align mismatch");
}; /* class NumericSorter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Expression.h>
