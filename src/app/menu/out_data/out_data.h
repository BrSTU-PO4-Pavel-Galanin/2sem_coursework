#ifndef _OUT_DATA_H_
    #define _OUT_DATA_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    #include "../menu.h"
    #include "../../../my_libs/pause_console/pause_console.h"
    #include "../../../my_libs/clear_console/clear_console.h"
    #include "write_table/write_table.h"

    void out_data(struct reservoirs_of_the_country* array, int length);
#endif