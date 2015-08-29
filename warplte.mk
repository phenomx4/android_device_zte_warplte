$(call inherit-product, $(SRC_TARGET_DIR)/product/languages_full.mk)

$(call inherit-product-if-exists, vendor/zte/warplte/warplte-vendor.mk)

DEVICE_PACKAGE_OVERLAYS += device/zte/warplte/overlay

# This device is hdpi.
PRODUCT_AAPT_CONFIG := normal xhdpi
PRODUCT_AAPT_PREF_CONFIG := xhdpi
PRODUCT_LOCALES += xhdpi

# adb + root
ADDITIONAL_DEFAULT_PROPERTIES += \
	ro.secure=0 \
	ro.allow.mock.location=0 \
	ro.adb.secure=0 \
	ro.debuggable=1

PRODUCT_BUILD_PROP_OVERRIDES += BUILD_UTC_DATE=0

# Set default USB interface
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    persist.sys.usb.config=mtp

# Camera
PRODUCT_PACKAGES += \
    camera.msm8960

# GPS
PRODUCT_PACKAGES += \
    gps.msm8960

#These aren't getting built for some reason!!!
PRODUCT_PACKAGES += \
    wcnss_service \
    lib_driver_cmd_qcwcn \
    wpa_supplicant \
    hostapd \
    libbundlewrapper \
    libreverbwrapper \
    libvisualizer \
    libdownmix \
    libldnhncr
    

# GPS configuration
#PRODUCT_COPY_FILES += \
#    device/zte/warplte/gps/gps.conf:system/etc/gps.conf

# Light
PRODUCT_PACKAGES += \
    lights.msm8960

# Graphics
PRODUCT_PACKAGES += \
    copybit.msm8960 \
    gralloc.msm8960 \
    hwcomposer.msm8960 \
    memtrack.msm8960 \
    power.msm8960 \
    libgenlock \
    libmemalloc \
    liboverlay \
    libqdutils

# Audio
PRODUCT_PACKAGES += \
	alsa.msm8960 \
	audio.a2dp.default \
        audio_policy.msm8960 \
	audio.primary.msm8960 \
	audio.usb.default \
	audio.r_submix.default \
	libaudio-resampler

# Power
PRODUCT_PACKAGES += \
	power.msm8960

PRODUCT_PACKAGES += \
	Torch \
	FloatSysPop \
	DeviceSettings

# Charger
PRODUCT_PACKAGES += \
        zte_charger \
        charger_res_images_zte \

# STK
PRODUCT_PACKAGES += Stk

# Filesystem management tools
PRODUCT_PACKAGES += \
    make_ext4fs \
    e2fsck \
    setup_fs

# Live Wallpapers
PRODUCT_PACKAGES += \
	LiveWallpapers \
	LiveWallpapersPicker \
	VisualizationWallpapers \
	librs_jni

PRODUCT_PACKAGES += \
	libdivxdrmdecrypt \
	libstagefrighthw \
        libmm-omxcore \
        libOmxCore \
        libc2dcolorconvert \
        libOmxVdecHevc \
        libstagefrighthw \
        libOmxVdec \
        libOmxVenc \
        libOmxAacEnc \
        libOmxAmrEnc \
        libOmxEvrcEnc \
        libOmxQcelp13Enc \
        libdashplayer \
        qcmediaplayer

# NFC HAL
#PRODUCT_PACKAGES += \
#    nfc.msm8960


# NFC
PRODUCT_PACKAGES += \
    Nfc \
    libnfc_jni \
    libnfc_ndef \
    libnfc \
    Tag \
    com.android.nfc_extras

# ramdisk
PRODUCT_COPY_FILES += \
    device/zte/warplte/ramdisk/fstab.qcom:root/fstab.qcom \
    device/zte/warplte/ramdisk/init.qcom.class_core.sh:root/init.qcom.class_core.sh \
    device/zte/warplte/ramdisk/init.class_main.sh:root/init.class_main.sh \
    device/zte/warplte/ramdisk/init.qcom.early_boot.sh:root/init.qcom.early_boot.sh \
    device/zte/warplte/ramdisk/init.qcom.rc:root/init.qcom.rc \
    device/zte/warplte/ramdisk/init.qcom.sh:root/init.qcom.sh \
    device/zte/warplte/ramdisk/init.qcom.syspart_fixup.sh:root/init.qcom.syspart_fixup.sh \
    device/zte/warplte/ramdisk/init.qcom.usb.rc:root/init.qcom.usb.rc \
    device/zte/warplte/ramdisk/init.qcom.usb.sh:root/init.qcom.usb.sh \
    device/zte/warplte/ramdisk/init.target.rc:root/init.target.rc \
    device/zte/warplte/ramdisk/ueventd.qcom.rc:root/ueventd.qcom.rc \
    device/zte/warplte/ramdisk/res/images/charger/battery_0.png:root/res/images/charger/battery_0.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_1.png:root/res/images/charger/battery_1.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_2.png:root/res/images/charger/battery_2.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_3.png:root/res/images/charger/battery_3.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_4.png:root/res/images/charger/battery_4.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_5.png:root/res/images/charger/battery_5.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_6.png:root/res/images/charger/battery_6.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_7.png:root/res/images/charger/battery_7.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_8.png:root/res/images/charger/battery_8.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_9.png:root/res/images/charger/battery_9.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_10.png:root/res/images/charger/battery_10.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_full.png:root/res/images/charger/battery_full.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_low.png:root/res/images/charger/battery_low.png \
    device/zte/warplte/ramdisk/res/images/charger/battery_fail.png:root/res/images/charger/battery_fail.png

#TWRP
PRODUCT_COPY_FILES += \
    device/zte/warplte/recovery/recovery.fstab:recovery/root/etc/twrp.fstab \

PRODUCT_COPY_FILES += \
    $(call find-copy-subdir-files,*,device/zte/warplte/recovery/root,recovery/root)

# Prebuilt
PRODUCT_COPY_FILES += \
    $(call find-copy-subdir-files,*,device/zte/warplte/prebuilt/system,system)

# Permissions
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/handheld_core_hardware.xml:/system/etc/permissions/handheld_core_hardware.xml \
    frameworks/native/data/etc/android.hardware.camera.flash-autofocus.xml:/system/etc/permissions/android.hardware.camera.flash-autofocus.xml \
    frameworks/native/data/etc/android.hardware.camera.front.xml:/system/etc/permissions/android.hardware.camera.front.xml \
    frameworks/native/data/etc/android.hardware.location.gps.xml:/system/etc/permissions/android.hardware.location.gps.xml \
    frameworks/native/data/etc/android.hardware.wifi.xml:/system/etc/permissions/android.hardware.wifi.xml \
    frameworks/native/data/etc/android.hardware.wifi.direct.xml:/system/etc/permissions/android.hardware.wifi.direct.xml \
    frameworks/native/data/etc/android.hardware.bluetooth_le.xml:system/etc/permissions/android.hardware.bluetooth_le.xml \
    frameworks/native/data/etc/android.hardware.sensor.proximity.xml:/system/etc/permissions/android.hardware.sensor.proximity.xml \
    frameworks/native/data/etc/android.hardware.sensor.light.xml:/system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/native/data/etc/android.hardware.sensor.gyroscope.xml:/system/etc/permissions/android.hardwardware.sensor.gyroscope.xml \
    frameworks/native/data/etc/android.hardware.touchscreen.multitouch.distinct.xml:/system/etc/permissions/android.hardware.touchscreen.multitouch.distinct.xml \
    frameworks/native/data/etc/android.hardware.touchscreen.multitouch.jazzhand.xml:/system/etc/permissions/android.hardware.touchscreen.multitouch.jazzhand.xml \
    frameworks/native/data/etc/android.hardware.usb.accessory.xml:/system/etc/permissions/android.hardware.usb.accessory.xml \
    frameworks/native/data/etc/android.hardware.usb.host.xml:/system/etc/permissions/android.hardware.usb.host.xml \
    frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:/system/etc/permissions/android.hardware.sensor.accelerometer.xml \
    frameworks/native/data/etc/android.hardware.sensor.compass.xml:/system/etc/permissions/android.hardware.compass.xml \
    packages/wallpapers/LivePicker/android.software.live_wallpaper.xml:/system/etc/permissions/android.software.live_wallpaper.xml \
    frameworks/native/data/etc/android.hardware.telephony.cdma.xml:/system/etc/permissions/android.hardware.telephony.cdma.xml \
    frameworks/native/data/etc/android.hardware.nfc.xml:system/etc/permissions/android.hardware.nfc.xml \
    frameworks/base/nfc-extras/com.android.nfc_extras.xml:system/etc/permissions/com.android.nfc_extras.xml
#    frameworks/native/data/etc/android.hardware.nfc.hce.xml:system/etc/permissions/android.hardware.nfc.hce.xml

# DSPManager
PRODUCT_PACKAGES += \
    DSPManager \
    audio_effects.conf \
    libcyanogen-dsp

# Apollo
PRODUCT_PACKAGES += \
    Apollo \

# We have enough storage space to hold precise GC data
PRODUCT_TAGS += dalvik.gc.type-precise

$(call inherit-product, build/target/product/full.mk)

$(call inherit-product, build/target/product/full_base_telephony.mk)

$(call inherit-product-if-exists, vendor/zte/warplte/warplte-vendor.mk)

$(call inherit-product, frameworks/native/build/phone-xhdpi-1024-dalvik-heap.mk)

PRODUCT_BUILD_PROP_OVERRIDES += BUILD_UTC_DATE=8
