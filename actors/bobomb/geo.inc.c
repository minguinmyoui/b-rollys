
/**************************************************************/
/*	shape data bom_basedata (skeleton & animation) */
/**************************************************************/

#define	softspriteON	1

extern const Gfx gfx_bom[];
extern const Gfx RCP_bom_basedata0[];
extern const Gfx RCP_bom_basedata1[];
extern const Gfx RCP_bom_basedata2[];
extern const Gfx RCP_bom_basedata3[];

// 0x0F0007B8
const GeoLayout black_bobomb_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 24576),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_BILLBOARD(),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_seg8_dl_08022D08),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 57, -60, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bobomb_seg8_dl_08023270),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 55, 62, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bobomb_seg8_dl_08023378),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bobomb_seg8_dl_08023480),
               GEO_SWITCH_CASE(2, geo_switch_anim_state),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, bobomb_seg8_dl_08022B58),
                  GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, bobomb_seg8_dl_08022B88),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

/*const GeoLayout black_bobomb_geo[] = {
 GEO_SHADOW(1, 200, 70),
 GEO_OPEN_NODE(),

 GEO_SCALE(0, 0.25f),
    GEO_OPEN_NODE(),
 
#if softspriteON
      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  
	  GEO_OPEN_NODE(),
		GEO_BILLBOARD(),
	    GEO_OPEN_NODE(),
		  GEO_DISPLAY_LIST(LAYER_ALPHA,gfx_bom),
	  	GEO_CLOSE_NODE(),
	  GEO_CLOSE_NODE(),
#else
     GEO_ANIMATED_PART(LAYER_OPAQUE,0, 0,0,RCP_bom_basedata3),  
#endif

      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0, RCP_bom_basedata2),  
         GEO_ANIMATED_PART(LAYER_OPAQUE,42,-39,0,NULL),  
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),  
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,63,0,0,NULL),  
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0, RCP_bom_basedata0),  
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,-42,-39,0,NULL), 
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL), 
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,63,0,0,NULL),  
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_bom_basedata1), 
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),

 GEO_CLOSE_NODE(),
 GEO_END(),
};*/

// 0x0F0008F4
const GeoLayout bobomb_buddy_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 24576),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_BILLBOARD(),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_seg8_dl_08022D78),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 57, -60, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bobomb_seg8_dl_08023270),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 55, 62, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 91, 0, 0, NULL),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bobomb_seg8_dl_08023378),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bobomb_seg8_dl_08023480),
               GEO_SWITCH_CASE(2, geo_switch_anim_state),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, bobomb_seg8_dl_08022B58),
                  GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, bobomb_seg8_dl_08022B88),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
