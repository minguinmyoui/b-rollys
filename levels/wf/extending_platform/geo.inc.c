
extern Gfx RCP_RisingPlatformArrow[];

// 0x0E000B10
const GeoLayout wf_geo_000B10[] = {
   GEO_CULLING_RADIUS(650),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700F018),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E000B38
const GeoLayout wf_geo_000B38[] = {
   GEO_CULLING_RADIUS(650),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700F018),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E000B60
const GeoLayout wf_geo_000B60[] = {
   GEO_CULLING_RADIUS(650),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_seg7_dl_0700F018),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, RCP_RisingPlatformArrow),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
