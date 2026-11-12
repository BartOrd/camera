#ifndef XF16CAM_SENSOR_TABLES_H
#define XF16CAM_SENSOR_TABLES_H

#include <stdint.h>

extern const uint8_t gc0328c_init_reg_tbl[][2];
#define XF16CAM_GC0328_TABLE_SIZE 748
extern const uint8_t gc0328c_post_init_reg_tbl[][2];
#define XF16CAM_GC0328_POST_TABLE_SIZE 28

extern const uint8_t xf16cam_gc0308_table[];
#define XF16CAM_GC0308_TABLE_SIZE 510
extern const uint8_t xf16cam_gc0309_table[];
#define XF16CAM_GC0309_TABLE_SIZE 400
extern const uint8_t xf16cam_gc0311_table[];
#define XF16CAM_GC0311_TABLE_SIZE 528
extern const uint8_t xf16cam_gc0311_vga_table[];
#define XF16CAM_GC0311_VGA_TABLE_SIZE 6
extern const uint8_t xf16cam_gc0310_gc0312_table[];
#define XF16CAM_GC0310_TABLE_SIZE 576
#define XF16CAM_GC0312_TABLE_SIZE 578
extern const uint8_t xf16cam_gc0329_table[];
#define XF16CAM_GC0329_PROBE_TABLE_SIZE 6
#define XF16CAM_GC0329_TABLE_SIZE 512
extern const uint8_t xf16cam_gc0329_vga_table[];
#define XF16CAM_GC0329_VGA_TABLE_SIZE 24
extern const uint8_t xf16cam_hi704_table[];
#define XF16CAM_HI704_TABLE_SIZE 704
extern const uint8_t xf16cam_ov7690_table[];
#define XF16CAM_OV7690_TABLE_SIZE 238
extern const uint8_t xf16cam_sp0a19_table[];
#define XF16CAM_SP0A19_TABLE_SIZE 544
extern const uint8_t xf16cam_sp0a20_table[];
#define XF16CAM_SP0A20_TABLE_SIZE 724
extern const uint8_t xf16cam_sp0a39_table[];
#define XF16CAM_SP0A39_TABLE_SIZE 702
extern const uint8_t xf16cam_sp0828_table[];
#define XF16CAM_SP0828_TABLE_SIZE 458
extern const char xf16cam_gc2145_table_base64[];
#define XF16CAM_GC2145_TABLE_SIZE 3988
#define XF16CAM_GC2145_TABLE_BASE64_SIZE 5320
extern const uint8_t xf16cam_gc2145_720p_table[];
#define XF16CAM_GC2145_720P_TABLE_SIZE 128

#endif
