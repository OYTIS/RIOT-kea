#ifndef CANDEV_KEA_H
#define CANDEV_KEA_H

#include "can/candev.h"
#include "can/device.h"

#ifndef CANDEV_KEA_DEFAULT_BITRATE
#define CANDEV_KEA_DEFAULT_BITRATE (50000)
#endif

#ifndef CANDEV_KEA_DEFAULT_SPT
#define CANDEV_KEA_DEFAULT_SPT (875)
#endif

typedef struct candev_kea_conf {
    uint32_t clock_freq;
    candev_params_t params;
} candev_kea_conf_t;

typedef struct candev_kea {
    candev_t candev;
    canopt_state_t mode;
    const candev_kea_conf_t *conf;
} candev_kea_t;

int candev_kea_init(candev_kea_t *dev, const candev_kea_conf_t *conf);

#endif // CANDEV_KEA_H
