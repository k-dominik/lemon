#ifndef LEMON_EXPORT_CONFIG_H
    #define LEMON_EXPORT_CONFIG_H

    #ifdef _WIN32
        #ifdef LEMON_EXPORTING
            #define LEMON_EXPORT __declspec(dllexport)
        #elif defined(LEMON_IMPORTING)
            #define LEMON_EXPORT __declspec(dllimport)
        #endif
    #endif // _WIN32

    #ifndef LEMON_EXPORT
        #define LEMON_EXPORT
    #endif

#endif // LEMON_EXPORT_CONFIG_H
