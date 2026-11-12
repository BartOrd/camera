#ifndef XF16CAM_SENSOR_H
#define XF16CAM_SENSOR_H

#include <stdint.h>

#include "driver/component/csi_camera/camera_sensor.h"
#include "xf16cam_config.h"

typedef enum {
	XF16CAM_SENSOR_PROBE_NOT_TESTED = 0,
	XF16CAM_SENSOR_PROBE_MATCH = 1,
	XF16CAM_SENSOR_PROBE_ID_MISMATCH = 2,
	XF16CAM_SENSOR_PROBE_IO_ERROR = 3,
	XF16CAM_SENSOR_PROBE_TABLE_ERROR = 4,
} XF16CamSensorProbeStatus;

typedef struct {
	const char *name;
	uint8_t address;
	uint8_t id_count;
	uint8_t id_register[2];
	uint8_t expected_id[2];
	uint8_t actual_id[2];
	uint8_t read_ok[2];
	uint8_t attempts;
	uint8_t matched;
	uint8_t selected;
	uint8_t status;
} XF16CamSensorDiagnostic;

HAL_Status xf16cam_sensor_init(SENSOR_ConfigParam *cfg);
void xf16cam_sensor_deinit(SENSOR_ConfigParam *cfg);
int xf16cam_sensor_configure_camera(uint16_t configured_width,
				    uint16_t configured_height);
void xf16cam_sensor_prepare_capture(void);
int xf16cam_sensor_switch_cam_sensor_mode(int night_mode);
const char *xf16cam_sensor_name(void);
int xf16cam_sensor_available(void);
uint16_t xf16cam_sensor_width(void);
uint16_t xf16cam_sensor_height(void);
int xf16cam_sensor_supports_vga(void);
int xf16cam_sensor_supports_720p(void);
uint8_t xf16cam_sensor_diagnostic_count(void);
const XF16CamSensorDiagnostic *xf16cam_sensor_diagnostic(uint8_t index);
XF16CamSensorOverride xf16cam_sensor_override_mode(void);

#endif
