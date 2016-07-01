#include "iotlab_serial.h"
#include "cn_logger.h"

iotlab_packet_t *cn_logger_pkt = NULL;

/* Alloc a pkt if necessary and return it */
void cn_logger_reset()
{
    if (!cn_logger_pkt)
        cn_logger_pkt = _iotlab_serial_packet_alloc();
}

