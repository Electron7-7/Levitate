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
#include <gdk/gdk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gdk
{
class CicpParams;
enum class CicpRange : std::underlying_type<::GdkCicpRange>::type;
class /* record */ ColorState;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::CicpParams> ()
{
  return gdk_cicp_params_get_type ();
}


namespace Gdk
{
class CicpParams : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CicpParams () = delete;
  CicpParams (const CicpParams &) = delete;
  CicpParams (CicpParams &&) = delete;
  CicpParams &
  operator = (const CicpParams &) = delete;
  CicpParams &
  operator = (CicpParams &&) = delete;
  ~CicpParams () = delete;
public:

  static peel::RefPtr<CicpParams>
  create () noexcept
  {
    ::GdkCicpParams *_peel_return = gdk_cicp_params_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<CicpParams>::adopt_ref (reinterpret_cast<CicpParams *> (_peel_return));
  }

  peel::RefPtr<ColorState>
  build_color_state (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    ::GError *_peel_error = nullptr;
    ::GdkColorState *_peel_return = gdk_cicp_params_build_color_state (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<ColorState>::adopt_ref (reinterpret_cast<ColorState *> (_peel_return));
  }

  unsigned
  get_color_primaries () noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    return gdk_cicp_params_get_color_primaries (_peel_this);
  }

  unsigned
  get_matrix_coefficients () noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    return gdk_cicp_params_get_matrix_coefficients (_peel_this);
  }

  CicpRange
  get_range () noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    ::GdkCicpRange _peel_return = gdk_cicp_params_get_range (_peel_this);
    return static_cast<CicpRange> (_peel_return);
  }

  unsigned
  get_transfer_function () noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    return gdk_cicp_params_get_transfer_function (_peel_this);
  }

  void
  set_color_primaries (unsigned color_primaries) noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    gdk_cicp_params_set_color_primaries (_peel_this, color_primaries);
  }

  void
  set_matrix_coefficients (unsigned matrix_coefficients) noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    gdk_cicp_params_set_matrix_coefficients (_peel_this, matrix_coefficients);
  }

  void
  set_range (CicpRange range) noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    ::GdkCicpRange _peel_range = static_cast<::GdkCicpRange> (range);
    gdk_cicp_params_set_range (_peel_this, _peel_range);
  }

  void
  set_transfer_function (unsigned transfer_function) noexcept
  {
    ::GdkCicpParams *_peel_this = reinterpret_cast<::GdkCicpParams *> (this);
    gdk_cicp_params_set_transfer_function (_peel_this, transfer_function);
  }

  static peel::Property<unsigned>
  prop_color_primaries ()
  {
    return peel::Property<unsigned> { "color-primaries" };
  }

  static peel::Property<unsigned>
  prop_matrix_coefficients ()
  {
    return peel::Property<unsigned> { "matrix-coefficients" };
  }

  static peel::Property<CicpRange>
  prop_range ()
  {
    return peel::Property<CicpRange> { "range" };
  }

  static peel::Property<unsigned>
  prop_transfer_function ()
  {
    return peel::Property<unsigned> { "transfer-function" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class CicpParams */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/ColorState.h>
