
# Inherit device configuration
$(call inherit-product, device/zte/warplte/warplte.mk)

$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Boot animation
TARGET_SCREEN_HEIGHT := 720
TARGET_SCREEN_WIDTH := 1280
TARGET_BOOTANIMATION_NAME := 720

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := warplte
PRODUCT_NAME := cm_warplte
PRODUCT_BRAND := ZTE
PRODUCT_MODEL := N9510
PRODUCT_MANUFACTURER := ZTE
PRODUCT_RELEASE_NAME := Warp 4G
