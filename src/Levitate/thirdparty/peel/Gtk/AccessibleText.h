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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Graphene
{
struct Point;
struct Rect;
} /* namespace Graphene */

namespace Gtk
{
class /* interface */ AccessibleText;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AccessibleText> ()
{
  return gtk_accessible_text_get_type ();
}


namespace Gtk
{
class /* interface */ AccessibleText : public Accessible
/* requires Accessible */
{
private:
  AccessibleText () = delete;
  AccessibleText (const AccessibleText &) = delete;
  AccessibleText (AccessibleText &&) = delete;

  AccessibleText &
  operator = (const AccessibleText &) = delete;
  AccessibleText &
  operator = (AccessibleText &&) = delete;

protected:
  ~AccessibleText () = default;

public:
  enum class ContentChange : std::underlying_type<::GtkAccessibleTextContentChange>::type;
  enum class Granularity : std::underlying_type<::GtkAccessibleTextGranularity>::type;
  struct Range;

  void
  update_caret_position () noexcept
  {
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    gtk_accessible_text_update_caret_position (_peel_this);
  }

  void
  update_contents (AccessibleText::ContentChange change, unsigned start, unsigned end) noexcept
  {
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextContentChange _peel_change = static_cast<::GtkAccessibleTextContentChange> (change);
    gtk_accessible_text_update_contents (_peel_this, _peel_change, start, end);
  }

  void
  update_selection_bound () noexcept
  {
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    gtk_accessible_text_update_selection_bound (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_get_attributes (unsigned offset, peel::UniquePtr<AccessibleText::Range[]> *ranges, peel::Strv *attribute_names, peel::Strv *attribute_values) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    gsize _peel_n_ranges;
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextRange *_peel_ranges;
    char **_peel_attribute_names;
    char **_peel_attribute_values;
    gboolean _peel_return = _peel_iface->get_attributes (_peel_this, offset, &_peel_n_ranges, ranges ? &_peel_ranges : nullptr, attribute_names ? &_peel_attribute_names : nullptr, attribute_values ? &_peel_attribute_values : nullptr);
    if (ranges)
      *ranges = peel::UniquePtr<AccessibleText::Range[]>::adopt_ref (reinterpret_cast<AccessibleText::Range *> (_peel_ranges), _peel_n_ranges);
    if (attribute_names)
      *attribute_names = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_names));
    if (attribute_values)
      *attribute_values = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_values));
    return !!_peel_return;
  }

  bool
  default_vfunc_get_attributes (unsigned offset, peel::UniquePtr<AccessibleText::Range[]> *ranges, peel::Strv *attribute_names, peel::Strv *attribute_values) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    gsize _peel_n_ranges;
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextRange *_peel_ranges;
    char **_peel_attribute_names;
    char **_peel_attribute_values;
    gboolean _peel_return = _peel_iface->get_attributes (_peel_this, offset, &_peel_n_ranges, ranges ? &_peel_ranges : nullptr, attribute_names ? &_peel_attribute_names : nullptr, attribute_values ? &_peel_attribute_values : nullptr);
    if (ranges)
      *ranges = peel::UniquePtr<AccessibleText::Range[]>::adopt_ref (reinterpret_cast<AccessibleText::Range *> (_peel_ranges), _peel_n_ranges);
    if (attribute_names)
      *attribute_names = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_names));
    if (attribute_values)
      *attribute_values = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_values));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_get_caret_position () noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    return _peel_iface->get_caret_position (_peel_this);
  }

  unsigned
  default_vfunc_get_caret_position () noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    return _peel_iface->get_caret_position (_peel_this);
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Bytes>
  parent_vfunc_get_contents (unsigned start, unsigned end) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GBytes *_peel_return = _peel_iface->get_contents (_peel_this, start, end);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel::RefPtr<GLib::Bytes>
  default_vfunc_get_contents (unsigned start, unsigned end) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GBytes *_peel_return = _peel_iface->get_contents (_peel_this, start, end);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  peel::RefPtr<GLib::Bytes>
  parent_vfunc_get_contents_at (unsigned offset, AccessibleText::Granularity granularity, unsigned *start, unsigned *end) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextGranularity _peel_granularity = static_cast<::GtkAccessibleTextGranularity> (granularity);
    unsigned int *_peel_start = reinterpret_cast<unsigned int *> (start);
    unsigned int *_peel_end = reinterpret_cast<unsigned int *> (end);
    ::GBytes *_peel_return = _peel_iface->get_contents_at (_peel_this, offset, _peel_granularity, _peel_start, _peel_end);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (4, 5)
  peel::RefPtr<GLib::Bytes>
  default_vfunc_get_contents_at (unsigned offset, AccessibleText::Granularity granularity, unsigned *start, unsigned *end) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextGranularity _peel_granularity = static_cast<::GtkAccessibleTextGranularity> (granularity);
    unsigned int *_peel_start = reinterpret_cast<unsigned int *> (start);
    unsigned int *_peel_end = reinterpret_cast<unsigned int *> (end);
    ::GBytes *_peel_return = _peel_iface->get_contents_at (_peel_this, offset, _peel_granularity, _peel_start, _peel_end);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  template<typename DerivedClass>
  void
  parent_vfunc_get_default_attributes (peel::Strv *attribute_names, peel::Strv *attribute_values) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    char **_peel_attribute_names;
    char **_peel_attribute_values;
    _peel_iface->get_default_attributes (_peel_this, attribute_names ? &_peel_attribute_names : nullptr, attribute_values ? &_peel_attribute_values : nullptr);
    if (attribute_names)
      *attribute_names = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_names));
    if (attribute_values)
      *attribute_values = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_values));
  }

  void
  default_vfunc_get_default_attributes (peel::Strv *attribute_names, peel::Strv *attribute_values) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    char **_peel_attribute_names;
    char **_peel_attribute_values;
    _peel_iface->get_default_attributes (_peel_this, attribute_names ? &_peel_attribute_names : nullptr, attribute_values ? &_peel_attribute_values : nullptr);
    if (attribute_names)
      *attribute_names = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_names));
    if (attribute_values)
      *attribute_values = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_attribute_values));
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (4)
  bool
  parent_vfunc_get_extents (unsigned start, unsigned end, Graphene::Rect *extents) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::graphene_rect_t *_peel_extents = reinterpret_cast<::graphene_rect_t *> (extents);
    gboolean _peel_return = _peel_iface->get_extents (_peel_this, start, end, _peel_extents);
    return !!_peel_return;
  }

  peel_arg_in (4) peel_nonnull_args (4)
  bool
  default_vfunc_get_extents (unsigned start, unsigned end, Graphene::Rect *extents) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::graphene_rect_t *_peel_extents = reinterpret_cast<::graphene_rect_t *> (extents);
    gboolean _peel_return = _peel_iface->get_extents (_peel_this, start, end, _peel_extents);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_get_offset (const Graphene::Point *point, unsigned *offset) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    unsigned int *_peel_offset = reinterpret_cast<unsigned int *> (offset);
    gboolean _peel_return = _peel_iface->get_offset (_peel_this, _peel_point, _peel_offset);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_get_offset (const Graphene::Point *point, unsigned *offset) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    const ::graphene_point_t *_peel_point = reinterpret_cast<const ::graphene_point_t *> (point);
    unsigned int *_peel_offset = reinterpret_cast<unsigned int *> (offset);
    gboolean _peel_return = _peel_iface->get_offset (_peel_this, _peel_point, _peel_offset);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_get_selection (peel::UniquePtr<AccessibleText::Range[]> *ranges) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    gsize _peel_n_ranges;
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextRange *_peel_ranges;
    gboolean _peel_return = _peel_iface->get_selection (_peel_this, &_peel_n_ranges, ranges ? &_peel_ranges : nullptr);
    if (ranges)
      *ranges = peel::UniquePtr<AccessibleText::Range[]>::adopt_ref (reinterpret_cast<AccessibleText::Range *> (_peel_ranges), _peel_n_ranges);
    return !!_peel_return;
  }

  bool
  default_vfunc_get_selection (peel::UniquePtr<AccessibleText::Range[]> *ranges) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    gsize _peel_n_ranges;
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextRange *_peel_ranges;
    gboolean _peel_return = _peel_iface->get_selection (_peel_this, &_peel_n_ranges, ranges ? &_peel_ranges : nullptr);
    if (ranges)
      *ranges = peel::UniquePtr<AccessibleText::Range[]>::adopt_ref (reinterpret_cast<AccessibleText::Range *> (_peel_ranges), _peel_n_ranges);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_set_caret_position (unsigned offset) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    gboolean _peel_return = _peel_iface->set_caret_position (_peel_this, offset);
    return !!_peel_return;
  }

  bool
  default_vfunc_set_caret_position (unsigned offset) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    gboolean _peel_return = _peel_iface->set_caret_position (_peel_this, offset);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (3)
  bool
  parent_vfunc_set_selection (size_t i, AccessibleText::Range *range) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleText> ())->peek_parent ());
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextRange *_peel_range = reinterpret_cast<::GtkAccessibleTextRange *> (range);
    gboolean _peel_return = _peel_iface->set_selection (_peel_this, i, _peel_range);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (3)
  bool
  default_vfunc_set_selection (size_t i, AccessibleText::Range *range) noexcept
  {
    ::GtkAccessibleTextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleTextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleText> ()));
    ::GtkAccessibleText *_peel_this = reinterpret_cast<::GtkAccessibleText *> (this);
    ::GtkAccessibleTextRange *_peel_range = reinterpret_cast<::GtkAccessibleTextRange *> (range);
    gboolean _peel_return = _peel_iface->set_selection (_peel_this, i, _peel_range);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkAccessibleTextInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_attributes ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_attributes = +[] (::GtkAccessibleText *self, unsigned int offset, gsize *n_ranges, ::GtkAccessibleTextRange **ranges, char ***attribute_names, char ***attribute_values) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::UniquePtr<AccessibleText::Range[]> _peel_ranges;
        peel::Strv _peel_attribute_names;
        peel::Strv _peel_attribute_values;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_attributes (offset, ranges ? &_peel_ranges : nullptr, attribute_names ? &_peel_attribute_names : nullptr, attribute_values ? &_peel_attribute_values : nullptr);
        if (ranges)
          *ranges = (*n_ranges = _peel_ranges.size (), reinterpret_cast<::GtkAccessibleTextRange *> (std::move (_peel_ranges).release_ref ()));
        if (attribute_names)
          *attribute_names = reinterpret_cast<char **> (std::move (_peel_attribute_names).release_ref ());
        if (attribute_values)
          *attribute_values = reinterpret_cast<char **> (std::move (_peel_attribute_values).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_caret_position ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_caret_position = +[] (::GtkAccessibleText *self) -> unsigned int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        return _peel_this->DerivedClass::vfunc_get_caret_position ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_contents ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_contents = +[] (::GtkAccessibleText *self, unsigned int start, unsigned int end) -> ::GBytes *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::RefPtr<GLib::Bytes> _peel_return = _peel_this->DerivedClass::vfunc_get_contents (start, end);
        return reinterpret_cast<::GBytes *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_contents_at ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_contents_at = +[] (::GtkAccessibleText *self, unsigned int offset, ::GtkAccessibleTextGranularity granularity, unsigned int *start, unsigned int *end) -> ::GBytes *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AccessibleText::Granularity _peel_granularity = static_cast<AccessibleText::Granularity> (granularity);
        peel::RefPtr<GLib::Bytes> _peel_return = _peel_this->DerivedClass::vfunc_get_contents_at (offset, _peel_granularity, start, end);
        return reinterpret_cast<::GBytes *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_default_attributes ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_default_attributes = +[] (::GtkAccessibleText *self, char ***attribute_names, char ***attribute_values) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::Strv _peel_attribute_names;
        peel::Strv _peel_attribute_values;
        _peel_this->DerivedClass::vfunc_get_default_attributes (attribute_names ? &_peel_attribute_names : nullptr, attribute_values ? &_peel_attribute_values : nullptr);
        if (attribute_names)
          *attribute_names = reinterpret_cast<char **> (std::move (_peel_attribute_names).release_ref ());
        if (attribute_values)
          *attribute_values = reinterpret_cast<char **> (std::move (_peel_attribute_values).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_extents ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_extents = +[] (::GtkAccessibleText *self, unsigned int start, unsigned int end, ::graphene_rect_t *extents) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        Graphene::Rect *_peel_extents = reinterpret_cast<Graphene::Rect *> (extents);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_extents (start, end, _peel_extents);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_offset ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_offset = +[] (::GtkAccessibleText *self, const ::graphene_point_t *point, unsigned int *offset) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        const Graphene::Point *_peel_point = reinterpret_cast<const Graphene::Point *> (point);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_offset (_peel_point, offset);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_selection ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->get_selection = +[] (::GtkAccessibleText *self, gsize *n_ranges, ::GtkAccessibleTextRange **ranges) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::UniquePtr<AccessibleText::Range[]> _peel_ranges;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_selection (ranges ? &_peel_ranges : nullptr);
        if (ranges)
          *ranges = (*n_ranges = _peel_ranges.size (), reinterpret_cast<::GtkAccessibleTextRange *> (std::move (_peel_ranges).release_ref ()));
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_caret_position ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->set_caret_position = +[] (::GtkAccessibleText *self, unsigned int offset) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_caret_position (offset);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_selection ()
    {
      ::GtkAccessibleTextInterface *klass = reinterpret_cast<::GtkAccessibleTextInterface *> (this);
      klass->set_selection = +[] (::GtkAccessibleText *self, gsize i, ::GtkAccessibleTextRange *range) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AccessibleText::Range *_peel_range = reinterpret_cast<AccessibleText::Range *> (range);
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_selection (i, _peel_range);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkAccessibleTextInterface),
                 "AccessibleText::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkAccessibleTextInterface),
                 "AccessibleText::Iface align mismatch");
}; /* interface AccessibleText */
static_assert (sizeof (AccessibleText) == sizeof (Accessible),
               "AccessibleText size mismatch");
static_assert (alignof (AccessibleText) == alignof (Accessible),
               "AccessibleText align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
