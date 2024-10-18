#ifndef MPV_MPV_H
#define MPV_MPV_H

typedef void (*mp_backup_log_cb)(const char* format, ...);

// This should be accessed by glue code only, never normal code.
// The only purpose of this is to make mpv library-safe.
// Think hard before adding new members.
struct mpv_global {
    struct mp_log *log;
    mp_backup_log_cb backup_log;
    struct m_config_shadow *config;
    struct mp_client_api *client_api;
    char *configdir;
    struct stats_base *stats;
};

#endif
