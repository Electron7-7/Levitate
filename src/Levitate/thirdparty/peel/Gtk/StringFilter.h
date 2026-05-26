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
#include <peel/Gtk/Filter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Expression;
class StringFilter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StringFilter> ()
{
  return gtk_string_filter_get_type ();
}


namespace Gtk
{
class StringFilter : public Filter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  StringFilter () = delete;
  StringFilter (const StringFilter &) = delete;
  StringFilter (StringFilter &&) = delete;
  StringFilter &
  operator = (const StringFilter &) = delete;
  StringFilter &
  operator = (StringFilter &&) = delete;
  ~StringFilter () = delete;
public:
  enum class MatchMode : std::underlying_type<::GtkStringFilterMatchMode>::type;

  static peel::RefPtr<StringFilter>
  create (peel::RefPtr<Expression> expression) noexcept
  {
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GtkStringFilter *_peel_return = gtk_string_filter_new (_peel_expression);
    peel_assume (_peel_return);
    return peel::RefPtr<StringFilter>::adopt_ref (reinterpret_cast<StringFilter *> (_peel_return));
  }

  Expression *
  get_expression () noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    ::GtkExpression *_peel_return = gtk_string_filter_get_expression (_peel_this);
    return reinterpret_cast<Expression *> (_peel_return);
  }

  bool
  get_ignore_case () noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    gboolean _peel_return = gtk_string_filter_get_ignore_case (_peel_this);
    return !!_peel_return;
  }

  StringFilter::MatchMode
  get_match_mode () noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    ::GtkStringFilterMatchMode _peel_return = gtk_string_filter_get_match_mode (_peel_this);
    return static_cast<StringFilter::MatchMode> (_peel_return);
  }

  const char *
  get_search () noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    return gtk_string_filter_get_search (_peel_this);
  }

  void
  set_expression (Expression *expression) noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (expression);
    gtk_string_filter_set_expression (_peel_this, _peel_expression);
  }

  void
  set_ignore_case (bool ignore_case) noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    gboolean _peel_ignore_case = static_cast<gboolean> (ignore_case);
    gtk_string_filter_set_ignore_case (_peel_this, _peel_ignore_case);
  }

  void
  set_match_mode (StringFilter::MatchMode mode) noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    ::GtkStringFilterMatchMode _peel_mode = static_cast<::GtkStringFilterMatchMode> (mode);
    gtk_string_filter_set_match_mode (_peel_this, _peel_mode);
  }

  void
  set_search (const char *search) noexcept
  {
    ::GtkStringFilter *_peel_this = reinterpret_cast<::GtkStringFilter *> (this);
    gtk_string_filter_set_search (_peel_this, search);
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

  static peel::Property<StringFilter::MatchMode>
  prop_match_mode ()
  {
    return peel::Property<StringFilter::MatchMode> { "match-mode" };
  }

  static peel::Property<const char *>
  prop_search ()
  {
    return peel::Property<const char *> { "search" };
  }

  class Class : public Filter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkStringFilterClass),
                 "StringFilter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkStringFilterClass),
                 "StringFilter::Class align mismatch");
}; /* class StringFilter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Expression.h>
