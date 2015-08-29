/*
 * Copyright (C) 2014 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::KEY_SUPPORTED_HFR_SIZES[] = "hfr-size-values"; \
const char CameraParameters::KEY_PREVIEW_FRAME_RATE_MODE[] = "preview-frame-rate-mode"; \
const char CameraParameters::KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[] = "preview-frame-rate-modes"; \
const char CameraParameters::KEY_PREVIEW_FRAME_RATE_AUTO_MODE[] = "frame-rate-auto"; \
const char CameraParameters::KEY_PREVIEW_FRAME_RATE_FIXED_MODE[] = "frame-rate-fixed"; \
const char CameraParameters::KEY_TOUCH_AF_AEC[] = "touch-af-aec"; \
const char CameraParameters::KEY_SUPPORTED_TOUCH_AF_AEC[] = "touch-af-aec-values"; \
const char CameraParameters::KEY_TOUCH_INDEX_AEC[] = "touch-index-aec"; \
const char CameraParameters::KEY_TOUCH_INDEX_AF[] = "touch-index-af"; \
const char CameraParameters::KEY_SCENE_DETECT[] = "scene-detect"; \
const char CameraParameters::KEY_SUPPORTED_SCENE_DETECT[] = "scene-detect-values"; \
const char CameraParameters::KEY_ISO_MODE[] = "iso"; \
const char CameraParameters::KEY_SUPPORTED_ISO_MODES[] = "iso-values"; \
const char CameraParameters::KEY_LENSSHADE[] = "lensshade"; \
const char CameraParameters::KEY_SUPPORTED_LENSSHADE_MODES[] = "lensshade-values"; \
const char CameraParameters::KEY_AUTO_EXPOSURE[] = "auto-exposure"; \
const char CameraParameters::KEY_SUPPORTED_AUTO_EXPOSURE[] = "auto-exposure-values"; \
const char CameraParameters::KEY_DENOISE[] = "denoise"; \
const char CameraParameters::KEY_SUPPORTED_DENOISE[] = "denoise-values"; \
const char CameraParameters::KEY_SELECTABLE_ZONE_AF[] = "selectable-zone-af"; \
const char CameraParameters::KEY_SUPPORTED_SELECTABLE_ZONE_AF[] = "selectable-zone-af-values"; \
const char CameraParameters::KEY_FACE_DETECTION[] = "face-detection"; \
const char CameraParameters::KEY_SUPPORTED_FACE_DETECTION[] = "face-detection-values"; \
const char CameraParameters::KEY_MEMORY_COLOR_ENHANCEMENT[] = "mce"; \
const char CameraParameters::KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[] = "mce-values"; \
const char CameraParameters::KEY_VIDEO_HIGH_FRAME_RATE[] = "video-hfr"; \
const char CameraParameters::KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[] = "video-hfr-values"; \
const char CameraParameters::KEY_REDEYE_REDUCTION[] = "redeye-reduction"; \
const char CameraParameters::KEY_SUPPORTED_REDEYE_REDUCTION[] = "redeye-reduction-values"; \
const char CameraParameters::KEY_HIGH_DYNAMIC_RANGE_IMAGING[] = "hdr"; \
const char CameraParameters::KEY_SUPPORTED_HDR_IMAGING_MODES[] = "hdr-values"; \
const char CameraParameters::KEY_ZSL[] = "zsl"; \
const char CameraParameters::KEY_SUPPORTED_ZSL_MODES[] = "zsl-values"; \
const char CameraParameters::KEY_CAMERA_MODE[] = "camera-mode"; \
const char CameraParameters::KEY_POWER_MODE[] = "power-mode"; \
const char CameraParameters::KEY_POWER_MODE_SUPPORTED[] = "power-mode-supported"; \
const char CameraParameters::KEY_AE_BRACKET_HDR[] = "ae-bracket-hdr"; \
const char CameraParameters::KEY_SHUTTER_SOUND_SELECT[] = "shutter-sound-select"; \
const char CameraParameters::KEY_SHUTTER_SOUND_ENABLE[] = "shutter-sound-enable"; \
const char CameraParameters::KEY_SHUTTER_SOUND[] = "shutter-sound"; \
const char CameraParameters::KEY_BURSTMODE_SNAPSHOT_NUM[] = "burstmode-snapshot-num"; \
const char CameraParameters::EFFECT_CHALK[] = "chalk"; \
const char CameraParameters::EFFECT_MARKER[] = "marker"; \
const char CameraParameters::EFFECT_EMBOSS[] = "emboss"; \
const char CameraParameters::EFFECT_SKETCH[] = "sketch"; \
const char CameraParameters::EFFECT_NEON[] = "neon"; \
const char CameraParameters::TOUCH_AF_AEC_OFF[] = "touch-off"; \
const char CameraParameters::TOUCH_AF_AEC_ON[] = "touch-on"; \
const char CameraParameters::SCENE_MODE_ASD[] = "asd"; \
const char CameraParameters::SCENE_MODE_BACKLIGHT[] = "backlight"; \
const char CameraParameters::SCENE_MODE_AR[] = "AR"; \
const char CameraParameters::SCENE_DETECT_OFF[] = "off"; \
const char CameraParameters::SCENE_DETECT_ON[] = "on"; \
const char CameraParameters::PIXEL_FORMAT_YUV420SP_ADRENO[] = "yuv420sp-adreno"; \
const char CameraParameters::PIXEL_FORMAT_RAW[] = "raw"; \
const char CameraParameters::PIXEL_FORMAT_YV12[] = "yuv420p"; \
const char CameraParameters::PIXEL_FORMAT_NV12[] = "nv12"; \
const char CameraParameters::FOCUS_MODE_NORMAL[] = "normal"; \
const char CameraParameters::KEY_SKIN_TONE_ENHANCEMENT[] = "skinToneEnhancement"; \
const char CameraParameters::KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[] = "skinToneEnhancement-values"; \
const char CameraParameters::ISO_AUTO[] = "auto"; \
const char CameraParameters::ISO_HJR[] = "ISO_HJR"; \
const char CameraParameters::ISO_100[] = "ISO100"; \
const char CameraParameters::ISO_200[] = "ISO200"; \
const char CameraParameters::ISO_400[] = "ISO400"; \
const char CameraParameters::ISO_800[] = "ISO800"; \
const char CameraParameters::ISO_1600[] = "ISO1600"; \
const char CameraParameters::ISO_3200[] = "ISO3200"; \
const char CameraParameters::ISO_6400[] = "ISO6400"; \
const char CameraParameters::LENSSHADE_ENABLE[] = "enable"; \
const char CameraParameters::LENSSHADE_DISABLE[] = "disable"; \
const char CameraParameters::AUTO_EXPOSURE_FRAME_AVG[] = "frame-average"; \
const char CameraParameters::AUTO_EXPOSURE_CENTER_WEIGHTED[] = "center-weighted"; \
const char CameraParameters::AUTO_EXPOSURE_SPOT_METERING[] = "spot-metering"; \
const char CameraParameters::KEY_GPS_LATITUDE_REF[] = "gps-latitude-ref"; \
const char CameraParameters::KEY_GPS_LONGITUDE_REF[] = "gps-longitude-ref"; \
const char CameraParameters::KEY_GPS_ALTITUDE_REF[] = "gps-altitude-ref"; \
const char CameraParameters::KEY_GPS_STATUS[] = "gps-status"; \
const char CameraParameters::KEY_EXIF_DATETIME[] = "exif-datetime"; \
const char CameraParameters::KEY_HISTOGRAM[] = "histogram"; \
const char CameraParameters::KEY_SUPPORTED_HISTOGRAM_MODES[] = "histogram-values"; \
const char CameraParameters::HISTOGRAM_ENABLE[] = "enable"; \
const char CameraParameters::HISTOGRAM_DISABLE[] = "disable"; \
const char CameraParameters::SKIN_TONE_ENHANCEMENT_ENABLE[] = "enable"; \
const char CameraParameters::SKIN_TONE_ENHANCEMENT_DISABLE[] = "disable"; \
const char CameraParameters::KEY_SHARPNESS[] = "sharpness"; \
const char CameraParameters::KEY_MAX_SHARPNESS[] = "max-sharpness"; \
const char CameraParameters::KEY_CONTRAST[] = "contrast"; \
const char CameraParameters::KEY_MAX_CONTRAST[] = "max-contrast"; \
const char CameraParameters::KEY_SATURATION[] = "saturation"; \
const char CameraParameters::KEY_MAX_SATURATION[] = "max-saturation"; \
const char CameraParameters::DENOISE_OFF[] = "denoise-off"; \
const char CameraParameters::DENOISE_ON[] = "denoise-on"; \
const char CameraParameters::SELECTABLE_ZONE_AF_AUTO[] = "auto"; \
const char CameraParameters::SELECTABLE_ZONE_AF_SPOT_METERING[] = "spot-metering"; \
const char CameraParameters::SELECTABLE_ZONE_AF_CENTER_WEIGHTED[] = "center-weighted"; \
const char CameraParameters::SELECTABLE_ZONE_AF_FRAME_AVERAGE[] = "frame-average"; \
const char CameraParameters::FACE_DETECTION_OFF[] = "off"; \
const char CameraParameters::FACE_DETECTION_ON[] = "on"; \
const char CameraParameters::MCE_ENABLE[] = "enable"; \
const char CameraParameters::MCE_DISABLE[] = "disable"; \
const char CameraParameters::VIDEO_HFR_OFF[] = "off"; \
const char CameraParameters::VIDEO_HFR_2X[] = "60"; \
const char CameraParameters::VIDEO_HFR_3X[] = "90"; \
const char CameraParameters::VIDEO_HFR_4X[] = "120"; \
const char CameraParameters::REDEYE_REDUCTION_ENABLE[] = "enable"; \
const char CameraParameters::REDEYE_REDUCTION_DISABLE[] = "disable"; \
const char CameraParameters::HDR_ENABLE[] = "enable"; \
const char CameraParameters::HDR_DISABLE[] = "disable"; \
const char CameraParameters::ZSL_OFF[] = "off"; \
const char CameraParameters::ZSL_ON[] = "on"; \
const char CameraParameters::AE_BRACKET_HDR_OFF[] = "Off"; \
const char CameraParameters::AE_BRACKET_HDR[] = "HDR"; \
const char CameraParameters::AE_BRACKET[] = "AE-Bracket"; \
const char CameraParameters::LOW_POWER[] = "Low_Power"; \
const char CameraParameters::NORMAL_POWER[] = "Normal_Power"; \
int CameraParameters::getInt64(const char *key) const { return -1; }; \
const char *CameraParameters::getPreviewFrameRateMode() const { return get(KEY_PREVIEW_FRAME_RATE_MODE); }; \
void CameraParameters::setPreviewFrameRateMode(const char *mode) { set(KEY_PREVIEW_FRAME_RATE_MODE, mode); }; \
void CameraParameters::getMeteringAreaCenter(int *x, int *y) const { }; \
void CameraParameters::setTouchIndexAec(int x, int y) { }; \
void CameraParameters::setTouchIndexAf(int x, int y) { }; \
void CameraParameters::setPreviewFpsRange(int minFPS, int maxFPS) { };
 

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_SUPPORTED_HFR_SIZES[]; \
    static const char KEY_PREVIEW_FRAME_RATE_MODE[]; \
    static const char KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[]; \
    static const char KEY_PREVIEW_FRAME_RATE_AUTO_MODE[]; \
    static const char KEY_PREVIEW_FRAME_RATE_FIXED_MODE[]; \
    static const char KEY_SKIN_TONE_ENHANCEMENT[] ; \
    static const char KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[] ; \
    static const char KEY_TOUCH_AF_AEC[]; \
    static const char KEY_SUPPORTED_TOUCH_AF_AEC[]; \
    static const char KEY_TOUCH_INDEX_AEC[]; \
    static const char KEY_TOUCH_INDEX_AF[]; \
    static const char KEY_SCENE_DETECT[]; \
    static const char KEY_SUPPORTED_SCENE_DETECT[]; \
    static const char KEY_ISO_MODE[]; \
    static const char KEY_SUPPORTED_ISO_MODES[]; \
    static const char KEY_LENSSHADE[] ; \
    static const char KEY_SUPPORTED_LENSSHADE_MODES[] ; \
    static const char KEY_AUTO_EXPOSURE[]; \
    static const char KEY_SUPPORTED_AUTO_EXPOSURE[]; \
    static const char KEY_GPS_LATITUDE_REF[]; \
    static const char KEY_GPS_LONGITUDE_REF[]; \
    static const char KEY_GPS_ALTITUDE_REF[]; \
    static const char KEY_GPS_STATUS[]; \
    static const char KEY_EXIF_DATETIME[]; \
    static const char KEY_MEMORY_COLOR_ENHANCEMENT[]; \
    static const char KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[]; \
    static const char KEY_POWER_MODE_SUPPORTED[]; \
    static const char KEY_POWER_MODE[]; \
    static const char KEY_ZSL[]; \
    static const char KEY_SUPPORTED_ZSL_MODES[]; \
    static const char KEY_CAMERA_MODE[]; \
    static const char KEY_VIDEO_HIGH_FRAME_RATE[]; \
    static const char KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[]; \
    static const char KEY_HIGH_DYNAMIC_RANGE_IMAGING[]; \
    static const char KEY_SUPPORTED_HDR_IMAGING_MODES[]; \
    static const char KEY_SHUTTER_SOUND_SELECT[]; \
    static const char KEY_SHUTTER_SOUND_ENABLE[]; \
    static const char KEY_SHUTTER_SOUND[]; \
    static const char KEY_BURSTMODE_SNAPSHOT_NUM[]; \
    static const char EFFECT_CHALK[]; \
    static const char EFFECT_MARKER[]; \
    static const char KEY_AE_BRACKET_HDR[]; \
    static const char KEY_DENOISE[]; \
    static const char KEY_SUPPORTED_DENOISE[]; \
    static const char KEY_SELECTABLE_ZONE_AF[]; \
    static const char KEY_SUPPORTED_SELECTABLE_ZONE_AF[]; \
    static const char KEY_FACE_DETECTION[]; \
    static const char KEY_SUPPORTED_FACE_DETECTION[]; \
    static const char KEY_REDEYE_REDUCTION[]; \
    static const char KEY_SUPPORTED_REDEYE_REDUCTION[]; \
    static const char EFFECT_EMBOSS[]; \
    static const char EFFECT_SKETCH[]; \
    static const char EFFECT_NEON[]; \
    static const char TOUCH_AF_AEC_OFF[] ; \
    static const char TOUCH_AF_AEC_ON[] ; \
    static const char SCENE_MODE_ASD[]; \
    static const char SCENE_MODE_BACKLIGHT[]; \
    static const char SCENE_MODE_FLOWERS[]; \
    static const char SCENE_MODE_AR[]; \
    static const char SCENE_DETECT_OFF[]; \
    static const char SCENE_DETECT_ON[]; \
    static const char PIXEL_FORMAT_YUV420SP_ADRENO[]; \
    static const char PIXEL_FORMAT_RAW[]; \
    static const char PIXEL_FORMAT_YV12[]; \
    static const char PIXEL_FORMAT_NV12[]; \
    static const char FOCUS_MODE_NORMAL[]; \
    static const char ISO_AUTO[]; \
    static const char ISO_HJR[]; \
    static const char ISO_100[]; \
    static const char ISO_200[]; \
    static const char ISO_400[]; \
    static const char ISO_800[]; \
    static const char ISO_1600[]; \
    static const char ISO_3200[]; \
    static const char ISO_6400[]; \
    static const char LENSSHADE_ENABLE[]; \
    static const char LENSSHADE_DISABLE[]; \
    static const char AUTO_EXPOSURE_FRAME_AVG[]; \
    static const char AUTO_EXPOSURE_CENTER_WEIGHTED[]; \
    static const char AUTO_EXPOSURE_SPOT_METERING[]; \
    static const char KEY_SHARPNESS[]; \
    static const char KEY_MAX_SHARPNESS[]; \
    static const char KEY_CONTRAST[]; \
    static const char KEY_MAX_CONTRAST[]; \
    static const char KEY_SATURATION[]; \
    static const char KEY_MAX_SATURATION[]; \
    static const char KEY_HISTOGRAM[]; \
    static const char KEY_SUPPORTED_HISTOGRAM_MODES[]; \
    static const char HISTOGRAM_ENABLE[]; \
    static const char HISTOGRAM_DISABLE[]; \
    static const char SKIN_TONE_ENHANCEMENT_ENABLE[]; \
    static const char SKIN_TONE_ENHANCEMENT_DISABLE[]; \
    static const char DENOISE_OFF[]; \
    static const char DENOISE_ON[]; \
    static const char SELECTABLE_ZONE_AF_AUTO[]; \
    static const char SELECTABLE_ZONE_AF_SPOT_METERING[]; \
    static const char SELECTABLE_ZONE_AF_CENTER_WEIGHTED[]; \
    static const char SELECTABLE_ZONE_AF_FRAME_AVERAGE[]; \
    static const char FACE_DETECTION_OFF[]; \
    static const char FACE_DETECTION_ON[]; \
    static const char MCE_ENABLE[]; \
    static const char MCE_DISABLE[]; \
    static const char ZSL_OFF[]; \
    static const char ZSL_ON[]; \
    static const char AE_BRACKET_HDR_OFF[]; \
    static const char AE_BRACKET_HDR[]; \
    static const char AE_BRACKET[]; \
    static const char LOW_POWER[]; \
    static const char NORMAL_POWER[]; \
    static const char VIDEO_HFR_OFF[]; \
    static const char VIDEO_HFR_2X[]; \
    static const char VIDEO_HFR_3X[]; \
    static const char VIDEO_HFR_4X[]; \
    static const char REDEYE_REDUCTION_ENABLE[]; \
    static const char REDEYE_REDUCTION_DISABLE[]; \
    static const char HDR_ENABLE[]; \
    static const char HDR_DISABLE[]; \
    int getInt64(const char *key) const; \
    const char *getPreviewFrameRateMode() const; \
    void setPreviewFrameRateMode(const char *mode); \
    void getMeteringAreaCenter(int *x, int *y) const; \
    void setTouchIndexAec(int x, int y); \
    void setTouchIndexAf(int x, int y); \
    void setPreviewFpsRange(int minFPS, int maxFPS);
