#include "src/game/envfx_snow.h"
extern Gfx wf_dl_cutout_mesh[];
extern Gfx wf_dl_non_solid_mesh[];
extern Gfx wf_dl_objects_mesh[];
extern Gfx wf_dl_solid_mesh[];
extern Gfx wf_dl_material_revert_render_settings[];
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(1, 0, 2000, 6000, 0, 2000, 0, geo_camera_main),
				GEO_OPEN_NODE(),
	                GEO_DISPLAY_LIST(LAYER_ALPHA,  wf_dl_cutout_mesh),
	                //GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_non_solid_mesh),
	                GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_objects_mesh),
	                GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_solid_mesh),
	                //GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, wf_seg7_dl_070052B8),
					GEO_RENDER_OBJ(),
					GEO_ASM(   0, geo_movtex_pause_control),
                    GEO_ASM(0x2401, geo_movtex_draw_water_regions),
					GEO_ASM(0, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA,  wf_dl_material_revert_render_settings),
		GEO_ZBUFFER(0),
        GEO_OPEN_NODE(),
           GEO_ASM(0, geo_cannon_circle_base),
           GEO_ASM(0, AreaMap),
        GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
