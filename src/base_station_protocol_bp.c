// Code generated from base_station_protocol.bitproto (bitproto v1.2.2 compatible).

#include "bitproto.h"
#include "base_station_protocol_bp.h"

// BasePing
static void BpFieldDescriptorsInitBasePing(struct BasePing *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->seq), BpUint(32, sizeof(uint32_t)), "seq");
}
static void BpXXXProcessBasePing(void *data, struct BpProcessorContext *ctx) {
    struct BasePing *m = (struct BasePing *)(data);
    struct BpMessageFieldDescriptor fds[1];
    BpFieldDescriptorsInitBasePing(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 1, 32, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBasePing(void *data, struct BpJsonFormatContext *ctx) {
    struct BasePing *m = (struct BasePing *)(data);
    struct BpMessageFieldDescriptor fds[1];
    BpFieldDescriptorsInitBasePing(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 1, 32, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBasePing(struct BasePing *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBasePing((void *)m, &ctx);
    return 0;
}
int DecodeBasePing(struct BasePing *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBasePing((void *)m, &ctx);
    return 0;
}
int JsonBasePing(struct BasePing *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBasePing((void *)m, &ctx);
    return ctx.n;
}

// BaseEmpty
static void BpFieldDescriptorsInitBaseEmpty(struct BaseEmpty *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->reserved), BpUint(8, sizeof(uint8_t)), "reserved");
}
static void BpXXXProcessBaseEmpty(void *data, struct BpProcessorContext *ctx) {
    struct BaseEmpty *m = (struct BaseEmpty *)(data);
    struct BpMessageFieldDescriptor fds[1];
    BpFieldDescriptorsInitBaseEmpty(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 1, 8, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseEmpty(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseEmpty *m = (struct BaseEmpty *)(data);
    struct BpMessageFieldDescriptor fds[1];
    BpFieldDescriptorsInitBaseEmpty(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 1, 8, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseEmpty(struct BaseEmpty *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseEmpty((void *)m, &ctx);
    return 0;
}
int DecodeBaseEmpty(struct BaseEmpty *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseEmpty((void *)m, &ctx);
    return 0;
}
int JsonBaseEmpty(struct BaseEmpty *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseEmpty((void *)m, &ctx);
    return ctx.n;
}

// BaseRadioConfig
static void BpXXXProcessArrayU8_4(void *data, struct BpProcessorContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 4, BpUint(8, sizeof(uint8_t)));
    BpEndecodeArray(&descriptor, ctx, data);
}
static void BpXXXJsonFormatArrayU8_4(void *data, struct BpJsonFormatContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 4, BpUint(8, sizeof(uint8_t)));
    BpJsonFormatArray(&descriptor, ctx, data);
}
static void BpFieldDescriptorsInitBaseRadioConfig(struct BaseRadioConfig *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->channel), BpUint(8, sizeof(uint8_t)), "channel");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->data_rate), BpUint(8, sizeof(uint8_t)), "data_rate");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->pa_level), BpUint(8, sizeof(uint8_t)), "pa_level");
    fds[3] = BpMessageFieldDescriptor((void *)&(m->retransmit_delay), BpUint(8, sizeof(uint8_t)), "retransmit_delay");
    fds[4] = BpMessageFieldDescriptor((void *)&(m->retransmit_count), BpUint(8, sizeof(uint8_t)), "retransmit_count");
    fds[5] = BpMessageFieldDescriptor((void *)&(m->persist_nvs), BpUint(8, sizeof(uint8_t)), "persist_nvs");
    fds[6] = BpMessageFieldDescriptor((void *)&(m->addr_suffix), BpArray(32, 4 * sizeof(uint8_t), BpXXXProcessArrayU8_4, BpXXXJsonFormatArrayU8_4), "addr_suffix");
    fds[7] = BpMessageFieldDescriptor((void *)&(m->base_addr_lsb), BpUint(8, sizeof(uint8_t)), "base_addr_lsb");
}
static void BpXXXProcessBaseRadioConfig(void *data, struct BpProcessorContext *ctx) {
    struct BaseRadioConfig *m = (struct BaseRadioConfig *)(data);
    struct BpMessageFieldDescriptor fds[8];
    BpFieldDescriptorsInitBaseRadioConfig(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 8, 88, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseRadioConfig(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseRadioConfig *m = (struct BaseRadioConfig *)(data);
    struct BpMessageFieldDescriptor fds[8];
    BpFieldDescriptorsInitBaseRadioConfig(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 8, 88, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseRadioConfig(struct BaseRadioConfig *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseRadioConfig((void *)m, &ctx);
    return 0;
}
int DecodeBaseRadioConfig(struct BaseRadioConfig *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseRadioConfig((void *)m, &ctx);
    return 0;
}
int JsonBaseRadioConfig(struct BaseRadioConfig *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseRadioConfig((void *)m, &ctx);
    return ctx.n;
}

// BaseScanRequest
static void BpFieldDescriptorsInitBaseScanRequest(struct BaseScanRequest *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->start_channel), BpUint(8, sizeof(uint8_t)), "start_channel");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->end_channel), BpUint(8, sizeof(uint8_t)), "end_channel");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->samples_per_channel), BpUint(8, sizeof(uint8_t)), "samples_per_channel");
}
static void BpXXXProcessBaseScanRequest(void *data, struct BpProcessorContext *ctx) {
    struct BaseScanRequest *m = (struct BaseScanRequest *)(data);
    struct BpMessageFieldDescriptor fds[3];
    BpFieldDescriptorsInitBaseScanRequest(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 3, 24, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseScanRequest(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseScanRequest *m = (struct BaseScanRequest *)(data);
    struct BpMessageFieldDescriptor fds[3];
    BpFieldDescriptorsInitBaseScanRequest(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 3, 24, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseScanRequest(struct BaseScanRequest *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseScanRequest((void *)m, &ctx);
    return 0;
}
int DecodeBaseScanRequest(struct BaseScanRequest *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseScanRequest((void *)m, &ctx);
    return 0;
}
int JsonBaseScanRequest(struct BaseScanRequest *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseScanRequest((void *)m, &ctx);
    return ctx.n;
}

// BaseRfTx
static void BpXXXProcessArrayU8_31(void *data, struct BpProcessorContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 31, BpUint(8, sizeof(uint8_t)));
    BpEndecodeArray(&descriptor, ctx, data);
}
static void BpXXXJsonFormatArrayU8_31(void *data, struct BpJsonFormatContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 31, BpUint(8, sizeof(uint8_t)));
    BpJsonFormatArray(&descriptor, ctx, data);
}
static void BpFieldDescriptorsInitBaseRfTx(struct BaseRfTx *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->seq), BpUint(16, sizeof(uint16_t)), "seq");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->target_robot_id), BpUint(8, sizeof(uint8_t)), "target_robot_id");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->tx_flags), BpUint(8, sizeof(uint8_t)), "tx_flags");
    fds[3] = BpMessageFieldDescriptor((void *)&(m->payload_len), BpUint(8, sizeof(uint8_t)), "payload_len");
    fds[4] = BpMessageFieldDescriptor((void *)&(m->payload), BpArray(248, 31 * sizeof(uint8_t), BpXXXProcessArrayU8_31, BpXXXJsonFormatArrayU8_31), "payload");
}
static void BpXXXProcessBaseRfTx(void *data, struct BpProcessorContext *ctx) {
    struct BaseRfTx *m = (struct BaseRfTx *)(data);
    struct BpMessageFieldDescriptor fds[5];
    BpFieldDescriptorsInitBaseRfTx(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 5, 288, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseRfTx(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseRfTx *m = (struct BaseRfTx *)(data);
    struct BpMessageFieldDescriptor fds[5];
    BpFieldDescriptorsInitBaseRfTx(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 5, 288, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseRfTx(struct BaseRfTx *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseRfTx((void *)m, &ctx);
    return 0;
}
int DecodeBaseRfTx(struct BaseRfTx *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseRfTx((void *)m, &ctx);
    return 0;
}
int JsonBaseRfTx(struct BaseRfTx *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseRfTx((void *)m, &ctx);
    return ctx.n;
}

// BaseInfo
static void BpFieldDescriptorsInitBaseInfo(struct BaseInfo *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->protocol_version), BpUint(8, sizeof(uint8_t)), "protocol_version");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->radio_ready), BpUint(8, sizeof(uint8_t)), "radio_ready");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->channel), BpUint(8, sizeof(uint8_t)), "channel");
    fds[3] = BpMessageFieldDescriptor((void *)&(m->data_rate), BpUint(8, sizeof(uint8_t)), "data_rate");
    fds[4] = BpMessageFieldDescriptor((void *)&(m->pa_level), BpUint(8, sizeof(uint8_t)), "pa_level");
    fds[5] = BpMessageFieldDescriptor((void *)&(m->retransmit_delay), BpUint(8, sizeof(uint8_t)), "retransmit_delay");
    fds[6] = BpMessageFieldDescriptor((void *)&(m->retransmit_count), BpUint(8, sizeof(uint8_t)), "retransmit_count");
    fds[7] = BpMessageFieldDescriptor((void *)&(m->tx_ok_count), BpUint(32, sizeof(uint32_t)), "tx_ok_count");
    fds[8] = BpMessageFieldDescriptor((void *)&(m->tx_fail_count), BpUint(32, sizeof(uint32_t)), "tx_fail_count");
    fds[9] = BpMessageFieldDescriptor((void *)&(m->rx_count), BpUint(32, sizeof(uint32_t)), "rx_count");
    fds[10] = BpMessageFieldDescriptor((void *)&(m->radio_reinit_count), BpUint(16, sizeof(uint16_t)), "radio_reinit_count");
    fds[11] = BpMessageFieldDescriptor((void *)&(m->addr_suffix), BpArray(32, 4 * sizeof(uint8_t), BpXXXProcessArrayU8_4, BpXXXJsonFormatArrayU8_4), "addr_suffix");
    fds[12] = BpMessageFieldDescriptor((void *)&(m->base_addr_lsb), BpUint(8, sizeof(uint8_t)), "base_addr_lsb");
}
static void BpXXXProcessBaseInfo(void *data, struct BpProcessorContext *ctx) {
    struct BaseInfo *m = (struct BaseInfo *)(data);
    struct BpMessageFieldDescriptor fds[13];
    BpFieldDescriptorsInitBaseInfo(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 13, 208, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseInfo(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseInfo *m = (struct BaseInfo *)(data);
    struct BpMessageFieldDescriptor fds[13];
    BpFieldDescriptorsInitBaseInfo(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 13, 208, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseInfo(struct BaseInfo *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseInfo((void *)m, &ctx);
    return 0;
}
int DecodeBaseInfo(struct BaseInfo *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseInfo((void *)m, &ctx);
    return 0;
}
int JsonBaseInfo(struct BaseInfo *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseInfo((void *)m, &ctx);
    return ctx.n;
}

// BaseRfTxStatus
static void BpFieldDescriptorsInitBaseRfTxStatus(struct BaseRfTxStatus *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->seq), BpUint(16, sizeof(uint16_t)), "seq");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->target_robot_id), BpUint(8, sizeof(uint8_t)), "target_robot_id");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->status), BpUint(8, sizeof(uint8_t)), "status");
    fds[3] = BpMessageFieldDescriptor((void *)&(m->retries), BpUint(8, sizeof(uint8_t)), "retries");
    fds[4] = BpMessageFieldDescriptor((void *)&(m->tx_time_us), BpUint(16, sizeof(uint16_t)), "tx_time_us");
}
static void BpXXXProcessBaseRfTxStatus(void *data, struct BpProcessorContext *ctx) {
    struct BaseRfTxStatus *m = (struct BaseRfTxStatus *)(data);
    struct BpMessageFieldDescriptor fds[5];
    BpFieldDescriptorsInitBaseRfTxStatus(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 5, 56, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseRfTxStatus(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseRfTxStatus *m = (struct BaseRfTxStatus *)(data);
    struct BpMessageFieldDescriptor fds[5];
    BpFieldDescriptorsInitBaseRfTxStatus(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 5, 56, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseRfTxStatus(struct BaseRfTxStatus *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseRfTxStatus((void *)m, &ctx);
    return 0;
}
int DecodeBaseRfTxStatus(struct BaseRfTxStatus *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseRfTxStatus((void *)m, &ctx);
    return 0;
}
int JsonBaseRfTxStatus(struct BaseRfTxStatus *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseRfTxStatus((void *)m, &ctx);
    return ctx.n;
}

// BaseRfRx
static void BpFieldDescriptorsInitBaseRfRx(struct BaseRfRx *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->rx_timestamp_ms), BpUint(32, sizeof(uint32_t)), "rx_timestamp_ms");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->pipe), BpUint(8, sizeof(uint8_t)), "pipe");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->payload_len), BpUint(8, sizeof(uint8_t)), "payload_len");
    fds[3] = BpMessageFieldDescriptor((void *)&(m->payload), BpArray(248, 31 * sizeof(uint8_t), BpXXXProcessArrayU8_31, BpXXXJsonFormatArrayU8_31), "payload");
}
static void BpXXXProcessBaseRfRx(void *data, struct BpProcessorContext *ctx) {
    struct BaseRfRx *m = (struct BaseRfRx *)(data);
    struct BpMessageFieldDescriptor fds[4];
    BpFieldDescriptorsInitBaseRfRx(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 4, 296, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseRfRx(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseRfRx *m = (struct BaseRfRx *)(data);
    struct BpMessageFieldDescriptor fds[4];
    BpFieldDescriptorsInitBaseRfRx(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 4, 296, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseRfRx(struct BaseRfRx *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseRfRx((void *)m, &ctx);
    return 0;
}
int DecodeBaseRfRx(struct BaseRfRx *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseRfRx((void *)m, &ctx);
    return 0;
}
int JsonBaseRfRx(struct BaseRfRx *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseRfRx((void *)m, &ctx);
    return ctx.n;
}

// BaseScanResult
static void BpXXXProcessArrayU8_126(void *data, struct BpProcessorContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 126, BpUint(8, sizeof(uint8_t)));
    BpEndecodeArray(&descriptor, ctx, data);
}
static void BpXXXJsonFormatArrayU8_126(void *data, struct BpJsonFormatContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 126, BpUint(8, sizeof(uint8_t)));
    BpJsonFormatArray(&descriptor, ctx, data);
}
static void BpFieldDescriptorsInitBaseScanResult(struct BaseScanResult *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->start_channel), BpUint(8, sizeof(uint8_t)), "start_channel");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->count), BpUint(8, sizeof(uint8_t)), "count");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->best_channel), BpUint(8, sizeof(uint8_t)), "best_channel");
    fds[3] = BpMessageFieldDescriptor((void *)&(m->busy_pct), BpArray(1008, 126 * sizeof(uint8_t), BpXXXProcessArrayU8_126, BpXXXJsonFormatArrayU8_126), "busy_pct");
}
static void BpXXXProcessBaseScanResult(void *data, struct BpProcessorContext *ctx) {
    struct BaseScanResult *m = (struct BaseScanResult *)(data);
    struct BpMessageFieldDescriptor fds[4];
    BpFieldDescriptorsInitBaseScanResult(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 4, 1032, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseScanResult(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseScanResult *m = (struct BaseScanResult *)(data);
    struct BpMessageFieldDescriptor fds[4];
    BpFieldDescriptorsInitBaseScanResult(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 4, 1032, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseScanResult(struct BaseScanResult *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseScanResult((void *)m, &ctx);
    return 0;
}
int DecodeBaseScanResult(struct BaseScanResult *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseScanResult((void *)m, &ctx);
    return 0;
}
int JsonBaseScanResult(struct BaseScanResult *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseScanResult((void *)m, &ctx);
    return ctx.n;
}

// BaseLog
static void BpXXXProcessArrayU8_96(void *data, struct BpProcessorContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 96, BpUint(8, sizeof(uint8_t)));
    BpEndecodeArray(&descriptor, ctx, data);
}
static void BpXXXJsonFormatArrayU8_96(void *data, struct BpJsonFormatContext *ctx) {
    struct BpArrayDescriptor descriptor = BpArrayDescriptor(false, 96, BpUint(8, sizeof(uint8_t)));
    BpJsonFormatArray(&descriptor, ctx, data);
}
static void BpFieldDescriptorsInitBaseLog(struct BaseLog *m, struct BpMessageFieldDescriptor *fds) {
    fds[0] = BpMessageFieldDescriptor((void *)&(m->level), BpUint(8, sizeof(uint8_t)), "level");
    fds[1] = BpMessageFieldDescriptor((void *)&(m->text_len), BpUint(8, sizeof(uint8_t)), "text_len");
    fds[2] = BpMessageFieldDescriptor((void *)&(m->text), BpArray(768, 96 * sizeof(uint8_t), BpXXXProcessArrayU8_96, BpXXXJsonFormatArrayU8_96), "text");
}
static void BpXXXProcessBaseLog(void *data, struct BpProcessorContext *ctx) {
    struct BaseLog *m = (struct BaseLog *)(data);
    struct BpMessageFieldDescriptor fds[3];
    BpFieldDescriptorsInitBaseLog(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 3, 784, fds);
    BpEndecodeMessage(&descriptor, ctx, data);
}
static void BpXXXJsonFormatBaseLog(void *data, struct BpJsonFormatContext *ctx) {
    struct BaseLog *m = (struct BaseLog *)(data);
    struct BpMessageFieldDescriptor fds[3];
    BpFieldDescriptorsInitBaseLog(m, fds);
    struct BpMessageDescriptor descriptor = BpMessageDescriptor(false, 3, 784, fds);
    BpJsonFormatMessage(&descriptor, ctx, data);
}
int EncodeBaseLog(struct BaseLog *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(true, s);
    BpXXXProcessBaseLog((void *)m, &ctx);
    return 0;
}
int DecodeBaseLog(struct BaseLog *m, unsigned char *s) {
    struct BpProcessorContext ctx = BpProcessorContext(false, s);
    BpXXXProcessBaseLog((void *)m, &ctx);
    return 0;
}
int JsonBaseLog(struct BaseLog *m, char *s) {
    struct BpJsonFormatContext ctx = BpJsonFormatContext(s);
    BpXXXJsonFormatBaseLog((void *)m, &ctx);
    return ctx.n;
}
