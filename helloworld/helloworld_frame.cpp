#include "framework.h"
#include <math.h>


namespace helloworld
{


   frame::frame(::layered * pobjectContext) :
      ::object(papp),
      simple_frame_window(papp)
   {

      window_enable_full_screen();

      m_bWindowFrame = !Application.has_property("client_only");

   }


   frame::~frame()
   {

   }


   void frame::assert_valid() const
   {

	   simple_frame_window::assert_valid();

   }


   void frame::dump(dump_context & dumpcontext) const
   {

	   simple_frame_window::dump(dumpcontext);

   }


   ::experience::frame * frame::experience_get_frame()
   {

      auto pframe = Application.experience().experience_get_frame(NULL, "001");

      pframe->set_style("StyleLightBlue");

      return pframe;

   }


   bool frame::get_translucency(::user::ETranslucency & etranslucency)
   {

      etranslucency = ::user::TranslucencyPresent;

      return true;

   }


   bool frame::has_pending_graphical_update()
   {

      return true;

   }


} // namespace helloworld



