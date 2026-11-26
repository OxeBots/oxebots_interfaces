// Code generated from base_station_protocol.bitproto (bitproto v1.2.2 compatible).

#ifndef __BITPROTO__BASE_STATION_PROTOCOL_H__
#define __BITPROTO__BASE_STATION_PROTOCOL_H__ 1

#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>
#ifndef __cplusplus
#include <stdbool.h>
#endif

#include "bitproto.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define BS_PROTO_VERSION 1

#define BS_MSG_PING 128
#define BS_MSG_GET_INFO 129
#define BS_MSG_SET_CONFIG 130
#define BS_MSG_SCAN_REQ 131
#define BS_MSG_RF_TX 132

#define BS_MSG_INFO 136
#define BS_MSG_RF_TX_STATUS 137
#define BS_MSG_RF_RX 138
#define BS_MSG_SCAN_RESULT 139
#define BS_MSG_LOG 140

#define BS_TX_FLAG_NO_ACK 1
#define BS_TX_FLAG_EXPECT_REPLY 2

#define BS_TX_STATUS_OK 0
#define BS_TX_STATUS_MAX_RT 1
#define BS_TX_STATUS_NO_ACK_SENT 2
#define BS_TX_STATUS_RADIO_ERR 3
#define BS_TX_STATUS_QUEUE_FULL 4

#define BS_RATE_1MBPS 0
#define BS_RATE_2MBPS 1
#define BS_RATE_250KBPS 2

#define BYTES_LENGTH_BASE_PING 4
struct BasePing {
    uint32_t seq;
};

#define BYTES_LENGTH_BASE_EMPTY 1
struct BaseEmpty {
    uint8_t reserved;
};

#define BYTES_LENGTH_BASE_RADIO_CONFIG 11
struct BaseRadioConfig {
    uint8_t channel;
    uint8_t data_rate;
    uint8_t pa_level;
    uint8_t retransmit_delay;
    uint8_t retransmit_count;
    uint8_t persist_nvs;
    uint8_t addr_suffix[4];
    uint8_t base_addr_lsb;
};

#define BYTES_LENGTH_BASE_SCAN_REQUEST 3
struct BaseScanRequest {
    uint8_t start_channel;
    uint8_t end_channel;
    uint8_t samples_per_channel;
};

#define BYTES_LENGTH_BASE_RF_TX 36
struct BaseRfTx {
    uint16_t seq;
    uint8_t target_robot_id;
    uint8_t tx_flags;
    uint8_t payload_len;
    uint8_t payload[31];
};

#define BYTES_LENGTH_BASE_INFO 26
struct BaseInfo {
    uint8_t protocol_version;
    uint8_t radio_ready;
    uint8_t channel;
    uint8_t data_rate;
    uint8_t pa_level;
    uint8_t retransmit_delay;
    uint8_t retransmit_count;
    uint32_t tx_ok_count;
    uint32_t tx_fail_count;
    uint32_t rx_count;
    uint16_t radio_reinit_count;
    uint8_t addr_suffix[4];
    uint8_t base_addr_lsb;
};

#define BYTES_LENGTH_BASE_RF_TX_STATUS 7
struct BaseRfTxStatus {
    uint16_t seq;
    uint8_t target_robot_id;
    uint8_t status;
    uint8_t retries;
    uint16_t tx_time_us;
};

#define BYTES_LENGTH_BASE_RF_RX 37
struct BaseRfRx {
    uint32_t rx_timestamp_ms;
    uint8_t pipe;
    uint8_t payload_len;
    uint8_t payload[31];
};

#define BYTES_LENGTH_BASE_SCAN_RESULT 129
struct BaseScanResult {
    uint8_t start_channel;
    uint8_t count;
    uint8_t best_channel;
    uint8_t busy_pct[126];
};

#define BYTES_LENGTH_BASE_LOG 98
struct BaseLog {
    uint8_t level;
    uint8_t text_len;
    uint8_t text[96];
};

int EncodeBasePing(struct BasePing *m, unsigned char *s);
int DecodeBasePing(struct BasePing *m, unsigned char *s);
int JsonBasePing(struct BasePing *m, char *s);

int EncodeBaseEmpty(struct BaseEmpty *m, unsigned char *s);
int DecodeBaseEmpty(struct BaseEmpty *m, unsigned char *s);
int JsonBaseEmpty(struct BaseEmpty *m, char *s);

int EncodeBaseRadioConfig(struct BaseRadioConfig *m, unsigned char *s);
int DecodeBaseRadioConfig(struct BaseRadioConfig *m, unsigned char *s);
int JsonBaseRadioConfig(struct BaseRadioConfig *m, char *s);

int EncodeBaseScanRequest(struct BaseScanRequest *m, unsigned char *s);
int DecodeBaseScanRequest(struct BaseScanRequest *m, unsigned char *s);
int JsonBaseScanRequest(struct BaseScanRequest *m, char *s);

int EncodeBaseRfTx(struct BaseRfTx *m, unsigned char *s);
int DecodeBaseRfTx(struct BaseRfTx *m, unsigned char *s);
int JsonBaseRfTx(struct BaseRfTx *m, char *s);

int EncodeBaseInfo(struct BaseInfo *m, unsigned char *s);
int DecodeBaseInfo(struct BaseInfo *m, unsigned char *s);
int JsonBaseInfo(struct BaseInfo *m, char *s);

int EncodeBaseRfTxStatus(struct BaseRfTxStatus *m, unsigned char *s);
int DecodeBaseRfTxStatus(struct BaseRfTxStatus *m, unsigned char *s);
int JsonBaseRfTxStatus(struct BaseRfTxStatus *m, char *s);

int EncodeBaseRfRx(struct BaseRfRx *m, unsigned char *s);
int DecodeBaseRfRx(struct BaseRfRx *m, unsigned char *s);
int JsonBaseRfRx(struct BaseRfRx *m, char *s);

int EncodeBaseScanResult(struct BaseScanResult *m, unsigned char *s);
int DecodeBaseScanResult(struct BaseScanResult *m, unsigned char *s);
int JsonBaseScanResult(struct BaseScanResult *m, char *s);

int EncodeBaseLog(struct BaseLog *m, unsigned char *s);
int DecodeBaseLog(struct BaseLog *m, unsigned char *s);
int JsonBaseLog(struct BaseLog *m, char *s);

#if defined(__cplusplus)
}
#endif

#endif
