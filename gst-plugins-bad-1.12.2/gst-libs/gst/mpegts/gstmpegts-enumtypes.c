


#include "gstmpegts-enumtypes.h"

#include "gstmpegtssection.h" 
#include "gstmpegtsdescriptor.h" 
#include "gst-atsc-section.h" 
#include "gst-dvb-section.h" 
#include "gst-scte-section.h" 
#include "gst-dvb-descriptor.h"

/* enumerations from "gstmpegtssection.h" */
GType
gst_mpegts_section_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_SECTION_UNKNOWN, "GST_MPEGTS_SECTION_UNKNOWN", "unknown" },
      { GST_MPEGTS_SECTION_PAT, "GST_MPEGTS_SECTION_PAT", "pat" },
      { GST_MPEGTS_SECTION_PMT, "GST_MPEGTS_SECTION_PMT", "pmt" },
      { GST_MPEGTS_SECTION_CAT, "GST_MPEGTS_SECTION_CAT", "cat" },
      { GST_MPEGTS_SECTION_TSDT, "GST_MPEGTS_SECTION_TSDT", "tsdt" },
      { GST_MPEGTS_SECTION_EIT, "GST_MPEGTS_SECTION_EIT", "eit" },
      { GST_MPEGTS_SECTION_NIT, "GST_MPEGTS_SECTION_NIT", "nit" },
      { GST_MPEGTS_SECTION_BAT, "GST_MPEGTS_SECTION_BAT", "bat" },
      { GST_MPEGTS_SECTION_SDT, "GST_MPEGTS_SECTION_SDT", "sdt" },
      { GST_MPEGTS_SECTION_TDT, "GST_MPEGTS_SECTION_TDT", "tdt" },
      { GST_MPEGTS_SECTION_TOT, "GST_MPEGTS_SECTION_TOT", "tot" },
      { GST_MPEGTS_SECTION_ATSC_TVCT, "GST_MPEGTS_SECTION_ATSC_TVCT", "atsc-tvct" },
      { GST_MPEGTS_SECTION_ATSC_CVCT, "GST_MPEGTS_SECTION_ATSC_CVCT", "atsc-cvct" },
      { GST_MPEGTS_SECTION_ATSC_MGT, "GST_MPEGTS_SECTION_ATSC_MGT", "atsc-mgt" },
      { GST_MPEGTS_SECTION_ATSC_ETT, "GST_MPEGTS_SECTION_ATSC_ETT", "atsc-ett" },
      { GST_MPEGTS_SECTION_ATSC_EIT, "GST_MPEGTS_SECTION_ATSC_EIT", "atsc-eit" },
      { GST_MPEGTS_SECTION_ATSC_STT, "GST_MPEGTS_SECTION_ATSC_STT", "atsc-stt" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSectionType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_section_table_id_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_TABLE_ID_PROGRAM_ASSOCIATION, "GST_MTS_TABLE_ID_PROGRAM_ASSOCIATION", "program-association" },
      { GST_MTS_TABLE_ID_CONDITIONAL_ACCESS, "GST_MTS_TABLE_ID_CONDITIONAL_ACCESS", "conditional-access" },
      { GST_MTS_TABLE_ID_TS_PROGRAM_MAP, "GST_MTS_TABLE_ID_TS_PROGRAM_MAP", "ts-program-map" },
      { GST_MTS_TABLE_ID_TS_DESCRIPTION, "GST_MTS_TABLE_ID_TS_DESCRIPTION", "ts-description" },
      { GST_MTS_TABLE_ID_14496_SCENE_DESCRIPTION, "GST_MTS_TABLE_ID_14496_SCENE_DESCRIPTION", "14496-scene-description" },
      { GST_MTS_TABLE_ID_14496_OBJET_DESCRIPTOR, "GST_MTS_TABLE_ID_14496_OBJET_DESCRIPTOR", "14496-objet-descriptor" },
      { GST_MTS_TABLE_ID_METADATA, "GST_MTS_TABLE_ID_METADATA", "metadata" },
      { GST_MTS_TABLE_ID_IPMP_CONTROL_INFORMATION, "GST_MTS_TABLE_ID_IPMP_CONTROL_INFORMATION", "ipmp-control-information" },
      { GST_MTS_TABLE_ID_DSM_CC_MULTIPROTO_ENCAPSULATED_DATA, "GST_MTS_TABLE_ID_DSM_CC_MULTIPROTO_ENCAPSULATED_DATA", "dsm-cc-multiproto-encapsulated-data" },
      { GST_MTS_TABLE_ID_DSM_CC_U_N_MESSAGES, "GST_MTS_TABLE_ID_DSM_CC_U_N_MESSAGES", "dsm-cc-u-n-messages" },
      { GST_MTS_TABLE_ID_DSM_CC_DOWNLOAD_DATA_MESSAGES, "GST_MTS_TABLE_ID_DSM_CC_DOWNLOAD_DATA_MESSAGES", "dsm-cc-download-data-messages" },
      { GST_MTS_TABLE_ID_DSM_CC_STREAM_DESCRIPTORS, "GST_MTS_TABLE_ID_DSM_CC_STREAM_DESCRIPTORS", "dsm-cc-stream-descriptors" },
      { GST_MTS_TABLE_ID_DSM_CC_PRIVATE_DATA, "GST_MTS_TABLE_ID_DSM_CC_PRIVATE_DATA", "dsm-cc-private-data" },
      { GST_MTS_TABLE_ID_DSM_CC_ADDRESSABLE_SECTIONS, "GST_MTS_TABLE_ID_DSM_CC_ADDRESSABLE_SECTIONS", "dsm-cc-addressable-sections" },
      { GST_MTS_TABLE_ID_UNSET, "GST_MTS_TABLE_ID_UNSET", "unset" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSectionTableID", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_stream_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_STREAM_TYPE_RESERVED_00, "GST_MPEGTS_STREAM_TYPE_RESERVED_00", "reserved-00" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG1, "GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG1", "video-mpeg1" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG2, "GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG2", "video-mpeg2" },
      { GST_MPEGTS_STREAM_TYPE_AUDIO_MPEG1, "GST_MPEGTS_STREAM_TYPE_AUDIO_MPEG1", "audio-mpeg1" },
      { GST_MPEGTS_STREAM_TYPE_AUDIO_MPEG2, "GST_MPEGTS_STREAM_TYPE_AUDIO_MPEG2", "audio-mpeg2" },
      { GST_MPEGTS_STREAM_TYPE_PRIVATE_SECTIONS, "GST_MPEGTS_STREAM_TYPE_PRIVATE_SECTIONS", "private-sections" },
      { GST_MPEGTS_STREAM_TYPE_PRIVATE_PES_PACKETS, "GST_MPEGTS_STREAM_TYPE_PRIVATE_PES_PACKETS", "private-pes-packets" },
      { GST_MPEGTS_STREAM_TYPE_MHEG, "GST_MPEGTS_STREAM_TYPE_MHEG", "mheg" },
      { GST_MPEGTS_STREAM_TYPE_DSM_CC, "GST_MPEGTS_STREAM_TYPE_DSM_CC", "dsm-cc" },
      { GST_MPEGTS_STREAM_TYPE_H_222_1, "GST_MPEGTS_STREAM_TYPE_H_222_1", "h-222-1" },
      { GST_MPEGTS_STREAM_TYPE_DSMCC_A, "GST_MPEGTS_STREAM_TYPE_DSMCC_A", "dsmcc-a" },
      { GST_MPEGTS_STREAM_TYPE_DSMCC_B, "GST_MPEGTS_STREAM_TYPE_DSMCC_B", "dsmcc-b" },
      { GST_MPEGTS_STREAM_TYPE_DSMCC_C, "GST_MPEGTS_STREAM_TYPE_DSMCC_C", "dsmcc-c" },
      { GST_MPEGTS_STREAM_TYPE_DSMCC_D, "GST_MPEGTS_STREAM_TYPE_DSMCC_D", "dsmcc-d" },
      { GST_MPEGTS_STREAM_TYPE_AUXILIARY, "GST_MPEGTS_STREAM_TYPE_AUXILIARY", "auxiliary" },
      { GST_MPEGTS_STREAM_TYPE_AUDIO_AAC_ADTS, "GST_MPEGTS_STREAM_TYPE_AUDIO_AAC_ADTS", "audio-aac-adts" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG4, "GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG4", "video-mpeg4" },
      { GST_MPEGTS_STREAM_TYPE_AUDIO_AAC_LATM, "GST_MPEGTS_STREAM_TYPE_AUDIO_AAC_LATM", "audio-aac-latm" },
      { GST_MPEGTS_STREAM_TYPE_SL_FLEXMUX_PES_PACKETS, "GST_MPEGTS_STREAM_TYPE_SL_FLEXMUX_PES_PACKETS", "sl-flexmux-pes-packets" },
      { GST_MPEGTS_STREAM_TYPE_SL_FLEXMUX_SECTIONS, "GST_MPEGTS_STREAM_TYPE_SL_FLEXMUX_SECTIONS", "sl-flexmux-sections" },
      { GST_MPEGTS_STREAM_TYPE_SYNCHRONIZED_DOWNLOAD, "GST_MPEGTS_STREAM_TYPE_SYNCHRONIZED_DOWNLOAD", "synchronized-download" },
      { GST_MPEGTS_STREAM_TYPE_METADATA_PES_PACKETS, "GST_MPEGTS_STREAM_TYPE_METADATA_PES_PACKETS", "metadata-pes-packets" },
      { GST_MPEGTS_STREAM_TYPE_METADATA_SECTIONS, "GST_MPEGTS_STREAM_TYPE_METADATA_SECTIONS", "metadata-sections" },
      { GST_MPEGTS_STREAM_TYPE_METADATA_DATA_CAROUSEL, "GST_MPEGTS_STREAM_TYPE_METADATA_DATA_CAROUSEL", "metadata-data-carousel" },
      { GST_MPEGTS_STREAM_TYPE_METADATA_OBJECT_CAROUSEL, "GST_MPEGTS_STREAM_TYPE_METADATA_OBJECT_CAROUSEL", "metadata-object-carousel" },
      { GST_MPEGTS_STREAM_TYPE_METADATA_SYNCHRONIZED_DOWNLOAD, "GST_MPEGTS_STREAM_TYPE_METADATA_SYNCHRONIZED_DOWNLOAD", "metadata-synchronized-download" },
      { GST_MPEGTS_STREAM_TYPE_MPEG2_IPMP, "GST_MPEGTS_STREAM_TYPE_MPEG2_IPMP", "mpeg2-ipmp" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_H264, "GST_MPEGTS_STREAM_TYPE_VIDEO_H264", "video-h264" },
      { GST_MPEGTS_STREAM_TYPE_AUDIO_AAC_CLEAN, "GST_MPEGTS_STREAM_TYPE_AUDIO_AAC_CLEAN", "audio-aac-clean" },
      { GST_MPEGTS_STREAM_TYPE_MPEG4_TIMED_TEXT, "GST_MPEGTS_STREAM_TYPE_MPEG4_TIMED_TEXT", "mpeg4-timed-text" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_RVC, "GST_MPEGTS_STREAM_TYPE_VIDEO_RVC", "video-rvc" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_H264_SVC_SUB_BITSTREAM, "GST_MPEGTS_STREAM_TYPE_VIDEO_H264_SVC_SUB_BITSTREAM", "video-h264-svc-sub-bitstream" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_H264_MVC_SUB_BITSTREAM, "GST_MPEGTS_STREAM_TYPE_VIDEO_H264_MVC_SUB_BITSTREAM", "video-h264-mvc-sub-bitstream" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_JP2K, "GST_MPEGTS_STREAM_TYPE_VIDEO_JP2K", "video-jp2k" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG2_STEREO_ADDITIONAL_VIEW, "GST_MPEGTS_STREAM_TYPE_VIDEO_MPEG2_STEREO_ADDITIONAL_VIEW", "video-mpeg2-stereo-additional-view" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_H264_STEREO_ADDITIONAL_VIEW, "GST_MPEGTS_STREAM_TYPE_VIDEO_H264_STEREO_ADDITIONAL_VIEW", "video-h264-stereo-additional-view" },
      { GST_MPEGTS_STREAM_TYPE_VIDEO_HEVC, "GST_MPEGTS_STREAM_TYPE_VIDEO_HEVC", "video-hevc" },
      { GST_MPEGTS_STREAM_TYPE_IPMP_STREAM, "GST_MPEGTS_STREAM_TYPE_IPMP_STREAM", "ipmp-stream" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsStreamType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gstmpegtsdescriptor.h" */
GType
gst_mpegts_descriptor_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_DESC_RESERVED_00, "GST_MTS_DESC_RESERVED_00", "reserved-00" },
      { GST_MTS_DESC_RESERVED_01, "GST_MTS_DESC_RESERVED_01", "reserved-01" },
      { GST_MTS_DESC_VIDEO_STREAM, "GST_MTS_DESC_VIDEO_STREAM", "video-stream" },
      { GST_MTS_DESC_AUDIO_STREAM, "GST_MTS_DESC_AUDIO_STREAM", "audio-stream" },
      { GST_MTS_DESC_HIERARCHY, "GST_MTS_DESC_HIERARCHY", "hierarchy" },
      { GST_MTS_DESC_REGISTRATION, "GST_MTS_DESC_REGISTRATION", "registration" },
      { GST_MTS_DESC_DATA_STREAM_ALIGNMENT, "GST_MTS_DESC_DATA_STREAM_ALIGNMENT", "data-stream-alignment" },
      { GST_MTS_DESC_TARGET_BACKGROUND_GRID, "GST_MTS_DESC_TARGET_BACKGROUND_GRID", "target-background-grid" },
      { GST_MTS_DESC_VIDEO_WINDOW, "GST_MTS_DESC_VIDEO_WINDOW", "video-window" },
      { GST_MTS_DESC_CA, "GST_MTS_DESC_CA", "ca" },
      { GST_MTS_DESC_ISO_639_LANGUAGE, "GST_MTS_DESC_ISO_639_LANGUAGE", "iso-639-language" },
      { GST_MTS_DESC_SYSTEM_CLOCK, "GST_MTS_DESC_SYSTEM_CLOCK", "system-clock" },
      { GST_MTS_DESC_MULTIPLEX_BUFFER_UTILISATION, "GST_MTS_DESC_MULTIPLEX_BUFFER_UTILISATION", "multiplex-buffer-utilisation" },
      { GST_MTS_DESC_COPYRIGHT, "GST_MTS_DESC_COPYRIGHT", "copyright" },
      { GST_MTS_DESC_MAXIMUM_BITRATE, "GST_MTS_DESC_MAXIMUM_BITRATE", "maximum-bitrate" },
      { GST_MTS_DESC_PRIVATE_DATA_INDICATOR, "GST_MTS_DESC_PRIVATE_DATA_INDICATOR", "private-data-indicator" },
      { GST_MTS_DESC_SMOOTHING_BUFFER, "GST_MTS_DESC_SMOOTHING_BUFFER", "smoothing-buffer" },
      { GST_MTS_DESC_STD, "GST_MTS_DESC_STD", "std" },
      { GST_MTS_DESC_IBP, "GST_MTS_DESC_IBP", "ibp" },
      { GST_MTS_DESC_DSMCC_CAROUSEL_IDENTIFIER, "GST_MTS_DESC_DSMCC_CAROUSEL_IDENTIFIER", "dsmcc-carousel-identifier" },
      { GST_MTS_DESC_DSMCC_ASSOCIATION_TAG, "GST_MTS_DESC_DSMCC_ASSOCIATION_TAG", "dsmcc-association-tag" },
      { GST_MTS_DESC_DSMCC_DEFERRED_ASSOCIATION_TAG, "GST_MTS_DESC_DSMCC_DEFERRED_ASSOCIATION_TAG", "dsmcc-deferred-association-tag" },
      { GST_MTS_DESC_DSMCC_NPT_REFERENCE, "GST_MTS_DESC_DSMCC_NPT_REFERENCE", "dsmcc-npt-reference" },
      { GST_MTS_DESC_DSMCC_NPT_ENDPOINT, "GST_MTS_DESC_DSMCC_NPT_ENDPOINT", "dsmcc-npt-endpoint" },
      { GST_MTS_DESC_DSMCC_STREAM_MODE, "GST_MTS_DESC_DSMCC_STREAM_MODE", "dsmcc-stream-mode" },
      { GST_MTS_DESC_DSMCC_STREAM_EVENT, "GST_MTS_DESC_DSMCC_STREAM_EVENT", "dsmcc-stream-event" },
      { GST_MTS_DESC_MPEG4_VIDEO, "GST_MTS_DESC_MPEG4_VIDEO", "mpeg4-video" },
      { GST_MTS_DESC_MPEG4_AUDIO, "GST_MTS_DESC_MPEG4_AUDIO", "mpeg4-audio" },
      { GST_MTS_DESC_IOD, "GST_MTS_DESC_IOD", "iod" },
      { GST_MTS_DESC_SL, "GST_MTS_DESC_SL", "sl" },
      { GST_MTS_DESC_FMC, "GST_MTS_DESC_FMC", "fmc" },
      { GST_MTS_DESC_EXTERNAL_ES_ID, "GST_MTS_DESC_EXTERNAL_ES_ID", "external-es-id" },
      { GST_MTS_DESC_MUX_CODE, "GST_MTS_DESC_MUX_CODE", "mux-code" },
      { GST_MTS_DESC_FMX_BUFFER_SIZE, "GST_MTS_DESC_FMX_BUFFER_SIZE", "fmx-buffer-size" },
      { GST_MTS_DESC_MULTIPLEX_BUFFER, "GST_MTS_DESC_MULTIPLEX_BUFFER", "multiplex-buffer" },
      { GST_MTS_DESC_CONTENT_LABELING, "GST_MTS_DESC_CONTENT_LABELING", "content-labeling" },
      { GST_MTS_DESC_METADATA_POINTER, "GST_MTS_DESC_METADATA_POINTER", "metadata-pointer" },
      { GST_MTS_DESC_METADATA, "GST_MTS_DESC_METADATA", "metadata" },
      { GST_MTS_DESC_METADATA_STD, "GST_MTS_DESC_METADATA_STD", "metadata-std" },
      { GST_MTS_DESC_AVC_VIDEO, "GST_MTS_DESC_AVC_VIDEO", "avc-video" },
      { GST_MTS_DESC_IPMP, "GST_MTS_DESC_IPMP", "ipmp" },
      { GST_MTS_DESC_AVC_TIMING_AND_HRD, "GST_MTS_DESC_AVC_TIMING_AND_HRD", "avc-timing-and-hrd" },
      { GST_MTS_DESC_MPEG2_AAC_AUDIO, "GST_MTS_DESC_MPEG2_AAC_AUDIO", "mpeg2-aac-audio" },
      { GST_MTS_DESC_FLEX_MUX_TIMING, "GST_MTS_DESC_FLEX_MUX_TIMING", "flex-mux-timing" },
      { GST_MTS_DESC_MPEG4_TEXT, "GST_MTS_DESC_MPEG4_TEXT", "mpeg4-text" },
      { GST_MTS_DESC_MPEG4_AUDIO_EXTENSION, "GST_MTS_DESC_MPEG4_AUDIO_EXTENSION", "mpeg4-audio-extension" },
      { GST_MTS_DESC_AUXILIARY_VIDEO_STREAM, "GST_MTS_DESC_AUXILIARY_VIDEO_STREAM", "auxiliary-video-stream" },
      { GST_MTS_DESC_SVC_EXTENSION, "GST_MTS_DESC_SVC_EXTENSION", "svc-extension" },
      { GST_MTS_DESC_MVC_EXTENSION, "GST_MTS_DESC_MVC_EXTENSION", "mvc-extension" },
      { GST_MTS_DESC_J2K_VIDEO, "GST_MTS_DESC_J2K_VIDEO", "j2k-video" },
      { GST_MTS_DESC_MVC_OPERATION_POINT, "GST_MTS_DESC_MVC_OPERATION_POINT", "mvc-operation-point" },
      { GST_MTS_DESC_MPEG2_STEREOSCOPIC_VIDEO_FORMAT, "GST_MTS_DESC_MPEG2_STEREOSCOPIC_VIDEO_FORMAT", "mpeg2-stereoscopic-video-format" },
      { GST_MTS_DESC_STEREOSCOPIC_PROGRAM_INFO, "GST_MTS_DESC_STEREOSCOPIC_PROGRAM_INFO", "stereoscopic-program-info" },
      { GST_MTS_DESC_STEREOSCOPIC_VIDEO_INFO, "GST_MTS_DESC_STEREOSCOPIC_VIDEO_INFO", "stereoscopic-video-info" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDescriptorType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_misc_descriptor_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_DESC_AC3_AUDIO_STREAM, "GST_MTS_DESC_AC3_AUDIO_STREAM", "ac3-audio-stream" },
      { GST_MTS_DESC_DTG_LOGICAL_CHANNEL, "GST_MTS_DESC_DTG_LOGICAL_CHANNEL", "dtg-logical-channel" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsMiscDescriptorType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_atsc_descriptor_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_DESC_ATSC_STUFFING, "GST_MTS_DESC_ATSC_STUFFING", "stuffing" },
      { GST_MTS_DESC_ATSC_AC3, "GST_MTS_DESC_ATSC_AC3", "ac3" },
      { GST_MTS_DESC_ATSC_CAPTION_SERVICE, "GST_MTS_DESC_ATSC_CAPTION_SERVICE", "caption-service" },
      { GST_MTS_DESC_ATSC_CONTENT_ADVISORY, "GST_MTS_DESC_ATSC_CONTENT_ADVISORY", "content-advisory" },
      { GST_MTS_DESC_ATSC_EXTENDED_CHANNEL_NAME, "GST_MTS_DESC_ATSC_EXTENDED_CHANNEL_NAME", "extended-channel-name" },
      { GST_MTS_DESC_ATSC_SERVICE_LOCATION, "GST_MTS_DESC_ATSC_SERVICE_LOCATION", "service-location" },
      { GST_MTS_DESC_ATSC_TIME_SHIFTED_SERVICE, "GST_MTS_DESC_ATSC_TIME_SHIFTED_SERVICE", "time-shifted-service" },
      { GST_MTS_DESC_ATSC_COMPONENT_NAME, "GST_MTS_DESC_ATSC_COMPONENT_NAME", "component-name" },
      { GST_MTS_DESC_ATSC_DCC_DEPARTING_REQUEST, "GST_MTS_DESC_ATSC_DCC_DEPARTING_REQUEST", "dcc-departing-request" },
      { GST_MTS_DESC_ATSC_DCC_ARRIVING_REQUEST, "GST_MTS_DESC_ATSC_DCC_ARRIVING_REQUEST", "dcc-arriving-request" },
      { GST_MTS_DESC_ATSC_REDISTRIBUTION_CONTROL, "GST_MTS_DESC_ATSC_REDISTRIBUTION_CONTROL", "redistribution-control" },
      { GST_MTS_DESC_ATSC_GENRE, "GST_MTS_DESC_ATSC_GENRE", "genre" },
      { GST_MTS_DESC_ATSC_PRIVATE_INFORMATION, "GST_MTS_DESC_ATSC_PRIVATE_INFORMATION", "private-information" },
      { GST_MTS_DESC_ATSC_EAC3, "GST_MTS_DESC_ATSC_EAC3", "eac3" },
      { GST_MTS_DESC_ATSC_ENHANCED_SIGNALING, "GST_MTS_DESC_ATSC_ENHANCED_SIGNALING", "enhanced-signaling" },
      { GST_MTS_DESC_ATSC_DATA_SERVICE, "GST_MTS_DESC_ATSC_DATA_SERVICE", "data-service" },
      { GST_MTS_DESC_ATSC_PID_COUNT, "GST_MTS_DESC_ATSC_PID_COUNT", "pid-count" },
      { GST_MTS_DESC_ATSC_DOWNLOAD_DESCRIPTOR, "GST_MTS_DESC_ATSC_DOWNLOAD_DESCRIPTOR", "download-descriptor" },
      { GST_MTS_DESC_ATSC_MULTIPROTOCOL_ENCAPSULATION, "GST_MTS_DESC_ATSC_MULTIPROTOCOL_ENCAPSULATION", "multiprotocol-encapsulation" },
      { GST_MTS_DESC_ATSC_MODULE_LINK, "GST_MTS_DESC_ATSC_MODULE_LINK", "module-link" },
      { GST_MTS_DESC_ATSC_CRC32, "GST_MTS_DESC_ATSC_CRC32", "crc32" },
      { GST_MTS_DESC_ATSC_GROUP_LINK, "GST_MTS_DESC_ATSC_GROUP_LINK", "group-link" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsATSCDescriptorType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_isdb_descriptor_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_DESC_ISDB_HIERARCHICAL_TRANSMISSION, "GST_MTS_DESC_ISDB_HIERARCHICAL_TRANSMISSION", "hierarchical-transmission" },
      { GST_MTS_DESC_ISDB_DIGITAL_COPY_CONTROL, "GST_MTS_DESC_ISDB_DIGITAL_COPY_CONTROL", "digital-copy-control" },
      { GST_MTS_DESC_ISDB_NETWORK_IDENTIFICATION, "GST_MTS_DESC_ISDB_NETWORK_IDENTIFICATION", "network-identification" },
      { GST_MTS_DESC_ISDB_PARTIAL_TS_TIME, "GST_MTS_DESC_ISDB_PARTIAL_TS_TIME", "partial-ts-time" },
      { GST_MTS_DESC_ISDB_AUDIO_COMPONENT, "GST_MTS_DESC_ISDB_AUDIO_COMPONENT", "audio-component" },
      { GST_MTS_DESC_ISDB_HYPERLINK, "GST_MTS_DESC_ISDB_HYPERLINK", "hyperlink" },
      { GST_MTS_DESC_ISDB_TARGET_REGION, "GST_MTS_DESC_ISDB_TARGET_REGION", "target-region" },
      { GST_MTS_DESC_ISDB_DATA_CONTENT, "GST_MTS_DESC_ISDB_DATA_CONTENT", "data-content" },
      { GST_MTS_DESC_ISDB_VIDEO_DECODE_CONTROL, "GST_MTS_DESC_ISDB_VIDEO_DECODE_CONTROL", "video-decode-control" },
      { GST_MTS_DESC_ISDB_DOWNLOAD_CONTENT, "GST_MTS_DESC_ISDB_DOWNLOAD_CONTENT", "download-content" },
      { GST_MTS_DESC_ISDB_CA_EMM_TS, "GST_MTS_DESC_ISDB_CA_EMM_TS", "ca-emm-ts" },
      { GST_MTS_DESC_ISDB_CA_CONTRACT_INFORMATION, "GST_MTS_DESC_ISDB_CA_CONTRACT_INFORMATION", "ca-contract-information" },
      { GST_MTS_DESC_ISDB_CA_SERVICE, "GST_MTS_DESC_ISDB_CA_SERVICE", "ca-service" },
      { GST_MTS_DESC_ISDB_TS_INFORMATION, "GST_MTS_DESC_ISDB_TS_INFORMATION", "ts-information" },
      { GST_MTS_DESC_ISDB_EXTENDED_BROADCASTER, "GST_MTS_DESC_ISDB_EXTENDED_BROADCASTER", "extended-broadcaster" },
      { GST_MTS_DESC_ISDB_LOGO_TRANSMISSION, "GST_MTS_DESC_ISDB_LOGO_TRANSMISSION", "logo-transmission" },
      { GST_MTS_DESC_ISDB_BASIC_LOCAL_EVENT, "GST_MTS_DESC_ISDB_BASIC_LOCAL_EVENT", "basic-local-event" },
      { GST_MTS_DESC_ISDB_REFERENCE, "GST_MTS_DESC_ISDB_REFERENCE", "reference" },
      { GST_MTS_DESC_ISDB_NODE_RELATION, "GST_MTS_DESC_ISDB_NODE_RELATION", "node-relation" },
      { GST_MTS_DESC_ISDB_SHORT_NODE_INFORMATION, "GST_MTS_DESC_ISDB_SHORT_NODE_INFORMATION", "short-node-information" },
      { GST_MTS_DESC_ISDB_STC_REFERENCE, "GST_MTS_DESC_ISDB_STC_REFERENCE", "stc-reference" },
      { GST_MTS_DESC_ISDB_SERIES, "GST_MTS_DESC_ISDB_SERIES", "series" },
      { GST_MTS_DESC_ISDB_EVENT_GROUP, "GST_MTS_DESC_ISDB_EVENT_GROUP", "event-group" },
      { GST_MTS_DESC_ISDB_SI_PARAMETER, "GST_MTS_DESC_ISDB_SI_PARAMETER", "si-parameter" },
      { GST_MTS_DESC_ISDB_BROADCASTER_NAME, "GST_MTS_DESC_ISDB_BROADCASTER_NAME", "broadcaster-name" },
      { GST_MTS_DESC_ISDB_COMPONENT_GROUP, "GST_MTS_DESC_ISDB_COMPONENT_GROUP", "component-group" },
      { GST_MTS_DESC_ISDB_SI_PRIME_TS, "GST_MTS_DESC_ISDB_SI_PRIME_TS", "si-prime-ts" },
      { GST_MTS_DESC_ISDB_BOARD_INFORMATION, "GST_MTS_DESC_ISDB_BOARD_INFORMATION", "board-information" },
      { GST_MTS_DESC_ISDB_LDT_LINKAGE, "GST_MTS_DESC_ISDB_LDT_LINKAGE", "ldt-linkage" },
      { GST_MTS_DESC_ISDB_CONNECTED_TRANSMISSION, "GST_MTS_DESC_ISDB_CONNECTED_TRANSMISSION", "connected-transmission" },
      { GST_MTS_DESC_ISDB_CONTENT_AVAILABILITY, "GST_MTS_DESC_ISDB_CONTENT_AVAILABILITY", "content-availability" },
      { GST_MTS_DESC_ISDB_SERVICE_GROUP, "GST_MTS_DESC_ISDB_SERVICE_GROUP", "service-group" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsISDBDescriptorType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_iso639_audio_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_AUDIO_TYPE_UNDEFINED, "GST_MPEGTS_AUDIO_TYPE_UNDEFINED", "undefined" },
      { GST_MPEGTS_AUDIO_TYPE_CLEAN_EFFECTS, "GST_MPEGTS_AUDIO_TYPE_CLEAN_EFFECTS", "clean-effects" },
      { GST_MPEGTS_AUDIO_TYPE_HEARING_IMPAIRED, "GST_MPEGTS_AUDIO_TYPE_HEARING_IMPAIRED", "hearing-impaired" },
      { GST_MPEGTS_AUDIO_TYPE_VISUAL_IMPAIRED_COMMENTARY, "GST_MPEGTS_AUDIO_TYPE_VISUAL_IMPAIRED_COMMENTARY", "visual-impaired-commentary" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsIso639AudioType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gst-atsc-section.h" */
GType
gst_mpegts_section_atsc_table_id_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_TABLE_ID_ATSC_MASTER_GUIDE, "GST_MTS_TABLE_ID_ATSC_MASTER_GUIDE", "master-guide" },
      { GST_MTS_TABLE_ID_ATSC_TERRESTRIAL_VIRTUAL_CHANNEL, "GST_MTS_TABLE_ID_ATSC_TERRESTRIAL_VIRTUAL_CHANNEL", "terrestrial-virtual-channel" },
      { GST_MTS_TABLE_ID_ATSC_CABLE_VIRTUAL_CHANNEL, "GST_MTS_TABLE_ID_ATSC_CABLE_VIRTUAL_CHANNEL", "cable-virtual-channel" },
      { GST_MTS_TABLE_ID_ATSC_RATING_REGION, "GST_MTS_TABLE_ID_ATSC_RATING_REGION", "rating-region" },
      { GST_MTS_TABLE_ID_ATSC_EVENT_INFORMATION, "GST_MTS_TABLE_ID_ATSC_EVENT_INFORMATION", "event-information" },
      { GST_MTS_TABLE_ID_ATSC_CHANNEL_OR_EVENT_EXTENDED_TEXT, "GST_MTS_TABLE_ID_ATSC_CHANNEL_OR_EVENT_EXTENDED_TEXT", "channel-or-event-extended-text" },
      { GST_MTS_TABLE_ID_ATSC_SYSTEM_TIME, "GST_MTS_TABLE_ID_ATSC_SYSTEM_TIME", "system-time" },
      { GST_MTS_TABLE_ID_ATSC_DATA_EVENT, "GST_MTS_TABLE_ID_ATSC_DATA_EVENT", "data-event" },
      { GST_MTS_TABLE_ID_ATSC_DATA_SERVICE, "GST_MTS_TABLE_ID_ATSC_DATA_SERVICE", "data-service" },
      { GST_MTS_TABLE_ID_ATSC_NETWORK_RESOURCE, "GST_MTS_TABLE_ID_ATSC_NETWORK_RESOURCE", "network-resource" },
      { GST_MTS_TABLE_ID_ATSC_LONG_TERM_SERVICE, "GST_MTS_TABLE_ID_ATSC_LONG_TERM_SERVICE", "long-term-service" },
      { GST_MTS_TABLE_ID_ATSC_DIRECTED_CHANNEL_CHANGE, "GST_MTS_TABLE_ID_ATSC_DIRECTED_CHANNEL_CHANGE", "directed-channel-change" },
      { GST_MTS_TABLE_ID_ATSC_DIRECTED_CHANNEL_CHANGE_SECTION_CODE, "GST_MTS_TABLE_ID_ATSC_DIRECTED_CHANNEL_CHANGE_SECTION_CODE", "directed-channel-change-section-code" },
      { GST_MTS_TABLE_ID_ATSC_AGGREGATE_EVENT_INFORMATION, "GST_MTS_TABLE_ID_ATSC_AGGREGATE_EVENT_INFORMATION", "aggregate-event-information" },
      { GST_MTS_TABLE_ID_ATSC_AGGREGATE_EXTENDED_TEXT, "GST_MTS_TABLE_ID_ATSC_AGGREGATE_EXTENDED_TEXT", "aggregate-extended-text" },
      { GST_MTS_TABLE_ID_ATSC_AGGREGATE_DATA_EVENT, "GST_MTS_TABLE_ID_ATSC_AGGREGATE_DATA_EVENT", "aggregate-data-event" },
      { GST_MTS_TABLE_ID_ATSC_SATELLITE_VIRTUAL_CHANNEL, "GST_MTS_TABLE_ID_ATSC_SATELLITE_VIRTUAL_CHANNEL", "satellite-virtual-channel" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSectionATSCTableID", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_atsc_mgt_table_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_ATSC_MGT_TABLE_TYPE_EIT0, "GST_MPEGTS_ATSC_MGT_TABLE_TYPE_EIT0", "eit0" },
      { GST_MPEGTS_ATSC_MGT_TABLE_TYPE_EIT127, "GST_MPEGTS_ATSC_MGT_TABLE_TYPE_EIT127", "eit127" },
      { GST_MPEGTS_ATSC_MGT_TABLE_TYPE_ETT0, "GST_MPEGTS_ATSC_MGT_TABLE_TYPE_ETT0", "ett0" },
      { GST_MPEGTS_ATSC_MGT_TABLE_TYPE_ETT127, "GST_MPEGTS_ATSC_MGT_TABLE_TYPE_ETT127", "ett127" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsAtscMGTTableType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gst-dvb-section.h" */
GType
gst_mpegts_section_dvb_table_id_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_TABLE_ID_NETWORK_INFORMATION_ACTUAL_NETWORK, "GST_MTS_TABLE_ID_NETWORK_INFORMATION_ACTUAL_NETWORK", "network-information-actual-network" },
      { GST_MTS_TABLE_ID_NETWORK_INFORMATION_OTHER_NETWORK, "GST_MTS_TABLE_ID_NETWORK_INFORMATION_OTHER_NETWORK", "network-information-other-network" },
      { GST_MTS_TABLE_ID_SERVICE_DESCRIPTION_ACTUAL_TS, "GST_MTS_TABLE_ID_SERVICE_DESCRIPTION_ACTUAL_TS", "service-description-actual-ts" },
      { GST_MTS_TABLE_ID_SERVICE_DESCRIPTION_OTHER_TS, "GST_MTS_TABLE_ID_SERVICE_DESCRIPTION_OTHER_TS", "service-description-other-ts" },
      { GST_MTS_TABLE_ID_BOUQUET_ASSOCIATION, "GST_MTS_TABLE_ID_BOUQUET_ASSOCIATION", "bouquet-association" },
      { GST_MTS_TABLE_ID_EVENT_INFORMATION_ACTUAL_TS_PRESENT, "GST_MTS_TABLE_ID_EVENT_INFORMATION_ACTUAL_TS_PRESENT", "event-information-actual-ts-present" },
      { GST_MTS_TABLE_ID_EVENT_INFORMATION_OTHER_TS_PRESENT, "GST_MTS_TABLE_ID_EVENT_INFORMATION_OTHER_TS_PRESENT", "event-information-other-ts-present" },
      { GST_MTS_TABLE_ID_EVENT_INFORMATION_ACTUAL_TS_SCHEDULE_1, "GST_MTS_TABLE_ID_EVENT_INFORMATION_ACTUAL_TS_SCHEDULE_1", "event-information-actual-ts-schedule-1" },
      { GST_MTS_TABLE_ID_EVENT_INFORMATION_ACTUAL_TS_SCHEDULE_N, "GST_MTS_TABLE_ID_EVENT_INFORMATION_ACTUAL_TS_SCHEDULE_N", "event-information-actual-ts-schedule-n" },
      { GST_MTS_TABLE_ID_EVENT_INFORMATION_OTHER_TS_SCHEDULE_1, "GST_MTS_TABLE_ID_EVENT_INFORMATION_OTHER_TS_SCHEDULE_1", "event-information-other-ts-schedule-1" },
      { GST_MTS_TABLE_ID_EVENT_INFORMATION_OTHER_TS_SCHEDULE_N, "GST_MTS_TABLE_ID_EVENT_INFORMATION_OTHER_TS_SCHEDULE_N", "event-information-other-ts-schedule-n" },
      { GST_MTS_TABLE_ID_TIME_DATE, "GST_MTS_TABLE_ID_TIME_DATE", "time-date" },
      { GST_MTS_TABLE_ID_RUNNING_STATUS, "GST_MTS_TABLE_ID_RUNNING_STATUS", "running-status" },
      { GST_MTS_TABLE_ID_STUFFING, "GST_MTS_TABLE_ID_STUFFING", "stuffing" },
      { GST_MTS_TABLE_ID_TIME_OFFSET, "GST_MTS_TABLE_ID_TIME_OFFSET", "time-offset" },
      { GST_MTS_TABLE_ID_APPLICATION_INFORMATION_TABLE, "GST_MTS_TABLE_ID_APPLICATION_INFORMATION_TABLE", "application-information-table" },
      { GST_MTS_TABLE_ID_CONTAINER, "GST_MTS_TABLE_ID_CONTAINER", "container" },
      { GST_MTS_TABLE_ID_RELATED_CONTENT, "GST_MTS_TABLE_ID_RELATED_CONTENT", "related-content" },
      { GST_MTS_TABLE_ID_CONTENT_IDENTIFIER, "GST_MTS_TABLE_ID_CONTENT_IDENTIFIER", "content-identifier" },
      { GST_MTS_TABLE_ID_MPE_FEC, "GST_MTS_TABLE_ID_MPE_FEC", "mpe-fec" },
      { GST_MTS_TABLE_ID_RESOLUTION_NOTIFICATION, "GST_MTS_TABLE_ID_RESOLUTION_NOTIFICATION", "resolution-notification" },
      { GST_MTS_TABLE_ID_MPE_IFEC, "GST_MTS_TABLE_ID_MPE_IFEC", "mpe-ifec" },
      { GST_MTS_TABLE_ID_DISCONTINUITY_INFORMATION, "GST_MTS_TABLE_ID_DISCONTINUITY_INFORMATION", "discontinuity-information" },
      { GST_MTS_TABLE_ID_SELECTION_INFORMATION, "GST_MTS_TABLE_ID_SELECTION_INFORMATION", "selection-information" },
      { GST_MTS_TABLE_ID_CA_MESSAGE_ECM_0, "GST_MTS_TABLE_ID_CA_MESSAGE_ECM_0", "ca-message-ecm-0" },
      { GST_MTS_TABLE_ID_CA_MESSAGE_ECM_1, "GST_MTS_TABLE_ID_CA_MESSAGE_ECM_1", "ca-message-ecm-1" },
      { GST_MTS_TABLE_ID_CA_MESSAGE_SYSTEM_PRIVATE_1, "GST_MTS_TABLE_ID_CA_MESSAGE_SYSTEM_PRIVATE_1", "ca-message-system-private-1" },
      { GST_MTS_TABLE_ID_CA_MESSAGE_SYSTEM_PRIVATE_N, "GST_MTS_TABLE_ID_CA_MESSAGE_SYSTEM_PRIVATE_N", "ca-message-system-private-n" },
      { GST_MTS_TABLE_ID_SCT, "GST_MTS_TABLE_ID_SCT", "sct" },
      { GST_MTS_TABLE_ID_FCT, "GST_MTS_TABLE_ID_FCT", "fct" },
      { GST_MTS_TABLE_ID_TCT, "GST_MTS_TABLE_ID_TCT", "tct" },
      { GST_MTS_TABLE_ID_SPT, "GST_MTS_TABLE_ID_SPT", "spt" },
      { GST_MTS_TABLE_ID_CMT, "GST_MTS_TABLE_ID_CMT", "cmt" },
      { GST_MTS_TABLE_ID_TBTP, "GST_MTS_TABLE_ID_TBTP", "tbtp" },
      { GST_MTS_TABLE_ID_PCR_PACKET_PAYLOAD, "GST_MTS_TABLE_ID_PCR_PACKET_PAYLOAD", "pcr-packet-payload" },
      { GST_MTS_TABLE_ID_TRANSMISSION_MODE_SUPPORT_PAYLOAD, "GST_MTS_TABLE_ID_TRANSMISSION_MODE_SUPPORT_PAYLOAD", "transmission-mode-support-payload" },
      { GST_MTS_TABLE_ID_TIM, "GST_MTS_TABLE_ID_TIM", "tim" },
      { GST_MTS_TABLE_ID_LL_FEC_PARITY_DATA_TABLE, "GST_MTS_TABLE_ID_LL_FEC_PARITY_DATA_TABLE", "ll-fec-parity-data-table" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSectionDVBTableID", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_running_status_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_RUNNING_STATUS_UNDEFINED, "GST_MPEGTS_RUNNING_STATUS_UNDEFINED", "undefined" },
      { GST_MPEGTS_RUNNING_STATUS_NOT_RUNNING, "GST_MPEGTS_RUNNING_STATUS_NOT_RUNNING", "not-running" },
      { GST_MPEGTS_RUNNING_STATUS_STARTS_IN_FEW_SECONDS, "GST_MPEGTS_RUNNING_STATUS_STARTS_IN_FEW_SECONDS", "starts-in-few-seconds" },
      { GST_MPEGTS_RUNNING_STATUS_PAUSING, "GST_MPEGTS_RUNNING_STATUS_PAUSING", "pausing" },
      { GST_MPEGTS_RUNNING_STATUS_RUNNING, "GST_MPEGTS_RUNNING_STATUS_RUNNING", "running" },
      { GST_MPEGTS_RUNNING_STATUS_OFF_AIR, "GST_MPEGTS_RUNNING_STATUS_OFF_AIR", "off-air" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsRunningStatus", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gst-scte-section.h" */
GType
gst_mpegts_scte_stream_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_STREAM_TYPE_SCTE_SUBTITLING, "GST_MPEGTS_STREAM_TYPE_SCTE_SUBTITLING", "subtitling" },
      { GST_MPEGTS_STREAM_TYPE_SCTE_ISOCH_DATA, "GST_MPEGTS_STREAM_TYPE_SCTE_ISOCH_DATA", "isoch-data" },
      { GST_MPEGTS_STREAM_TYPE_SCTE_DST_NRT, "GST_MPEGTS_STREAM_TYPE_SCTE_DST_NRT", "dst-nrt" },
      { GST_MPEGTS_STREAM_TYPE_SCTE_DSMCC_DCB, "GST_MPEGTS_STREAM_TYPE_SCTE_DSMCC_DCB", "dsmcc-dcb" },
      { GST_MPEGTS_STREAM_TYPE_SCTE_SIGNALING, "GST_MPEGTS_STREAM_TYPE_SCTE_SIGNALING", "signaling" },
      { GST_MPEGTS_STREAM_TYPE_SCTE_SYNC_DATA, "GST_MPEGTS_STREAM_TYPE_SCTE_SYNC_DATA", "sync-data" },
      { GST_MPEGTS_STREAM_TYPE_SCTE_ASYNC_DATA, "GST_MPEGTS_STREAM_TYPE_SCTE_ASYNC_DATA", "async-data" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsScteStreamType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_section_scte_table_id_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_TABLE_ID_SCTE_EAS, "GST_MTS_TABLE_ID_SCTE_EAS", "eas" },
      { GST_MTS_TABLE_ID_SCTE_EBIF, "GST_MTS_TABLE_ID_SCTE_EBIF", "ebif" },
      { GST_MTS_TABLE_ID_SCTE_RESERVED, "GST_MTS_TABLE_ID_SCTE_RESERVED", "reserved" },
      { GST_MTS_TABLE_ID_SCTE_EISS, "GST_MTS_TABLE_ID_SCTE_EISS", "eiss" },
      { GST_MTS_TABLE_ID_SCTE_DII, "GST_MTS_TABLE_ID_SCTE_DII", "dii" },
      { GST_MTS_TABLE_ID_SCTE_DDB, "GST_MTS_TABLE_ID_SCTE_DDB", "ddb" },
      { GST_MTS_TABLE_ID_SCTE_SPLICE, "GST_MTS_TABLE_ID_SCTE_SPLICE", "splice" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSectionSCTETableID", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}

/* enumerations from "gst-dvb-descriptor.h" */
GType
gst_mpegts_dvb_descriptor_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_DESC_DVB_NETWORK_NAME, "GST_MTS_DESC_DVB_NETWORK_NAME", "network-name" },
      { GST_MTS_DESC_DVB_SERVICE_LIST, "GST_MTS_DESC_DVB_SERVICE_LIST", "service-list" },
      { GST_MTS_DESC_DVB_STUFFING, "GST_MTS_DESC_DVB_STUFFING", "stuffing" },
      { GST_MTS_DESC_DVB_SATELLITE_DELIVERY_SYSTEM, "GST_MTS_DESC_DVB_SATELLITE_DELIVERY_SYSTEM", "satellite-delivery-system" },
      { GST_MTS_DESC_DVB_CABLE_DELIVERY_SYSTEM, "GST_MTS_DESC_DVB_CABLE_DELIVERY_SYSTEM", "cable-delivery-system" },
      { GST_MTS_DESC_DVB_VBI_DATA, "GST_MTS_DESC_DVB_VBI_DATA", "vbi-data" },
      { GST_MTS_DESC_DVB_VBI_TELETEXT, "GST_MTS_DESC_DVB_VBI_TELETEXT", "vbi-teletext" },
      { GST_MTS_DESC_DVB_BOUQUET_NAME, "GST_MTS_DESC_DVB_BOUQUET_NAME", "bouquet-name" },
      { GST_MTS_DESC_DVB_SERVICE, "GST_MTS_DESC_DVB_SERVICE", "service" },
      { GST_MTS_DESC_DVB_COUNTRY_AVAILABILITY, "GST_MTS_DESC_DVB_COUNTRY_AVAILABILITY", "country-availability" },
      { GST_MTS_DESC_DVB_LINKAGE, "GST_MTS_DESC_DVB_LINKAGE", "linkage" },
      { GST_MTS_DESC_DVB_NVOD_REFERENCE, "GST_MTS_DESC_DVB_NVOD_REFERENCE", "nvod-reference" },
      { GST_MTS_DESC_DVB_TIME_SHIFTED_SERVICE, "GST_MTS_DESC_DVB_TIME_SHIFTED_SERVICE", "time-shifted-service" },
      { GST_MTS_DESC_DVB_SHORT_EVENT, "GST_MTS_DESC_DVB_SHORT_EVENT", "short-event" },
      { GST_MTS_DESC_DVB_EXTENDED_EVENT, "GST_MTS_DESC_DVB_EXTENDED_EVENT", "extended-event" },
      { GST_MTS_DESC_DVB_TIME_SHIFTED_EVENT, "GST_MTS_DESC_DVB_TIME_SHIFTED_EVENT", "time-shifted-event" },
      { GST_MTS_DESC_DVB_COMPONENT, "GST_MTS_DESC_DVB_COMPONENT", "component" },
      { GST_MTS_DESC_DVB_MOSAIC, "GST_MTS_DESC_DVB_MOSAIC", "mosaic" },
      { GST_MTS_DESC_DVB_STREAM_IDENTIFIER, "GST_MTS_DESC_DVB_STREAM_IDENTIFIER", "stream-identifier" },
      { GST_MTS_DESC_DVB_CA_IDENTIFIER, "GST_MTS_DESC_DVB_CA_IDENTIFIER", "ca-identifier" },
      { GST_MTS_DESC_DVB_CONTENT, "GST_MTS_DESC_DVB_CONTENT", "content" },
      { GST_MTS_DESC_DVB_PARENTAL_RATING, "GST_MTS_DESC_DVB_PARENTAL_RATING", "parental-rating" },
      { GST_MTS_DESC_DVB_TELETEXT, "GST_MTS_DESC_DVB_TELETEXT", "teletext" },
      { GST_MTS_DESC_DVB_TELEPHONE, "GST_MTS_DESC_DVB_TELEPHONE", "telephone" },
      { GST_MTS_DESC_DVB_LOCAL_TIME_OFFSET, "GST_MTS_DESC_DVB_LOCAL_TIME_OFFSET", "local-time-offset" },
      { GST_MTS_DESC_DVB_SUBTITLING, "GST_MTS_DESC_DVB_SUBTITLING", "subtitling" },
      { GST_MTS_DESC_DVB_TERRESTRIAL_DELIVERY_SYSTEM, "GST_MTS_DESC_DVB_TERRESTRIAL_DELIVERY_SYSTEM", "terrestrial-delivery-system" },
      { GST_MTS_DESC_DVB_MULTILINGUAL_NETWORK_NAME, "GST_MTS_DESC_DVB_MULTILINGUAL_NETWORK_NAME", "multilingual-network-name" },
      { GST_MTS_DESC_DVB_MULTILINGUAL_BOUQUET_NAME, "GST_MTS_DESC_DVB_MULTILINGUAL_BOUQUET_NAME", "multilingual-bouquet-name" },
      { GST_MTS_DESC_DVB_MULTILINGUAL_SERVICE_NAME, "GST_MTS_DESC_DVB_MULTILINGUAL_SERVICE_NAME", "multilingual-service-name" },
      { GST_MTS_DESC_DVB_MULTILINGUAL_COMPONENT, "GST_MTS_DESC_DVB_MULTILINGUAL_COMPONENT", "multilingual-component" },
      { GST_MTS_DESC_DVB_PRIVATE_DATA_SPECIFIER, "GST_MTS_DESC_DVB_PRIVATE_DATA_SPECIFIER", "private-data-specifier" },
      { GST_MTS_DESC_DVB_SERVICE_MOVE, "GST_MTS_DESC_DVB_SERVICE_MOVE", "service-move" },
      { GST_MTS_DESC_DVB_SHORT_SMOOTHING_BUFFER, "GST_MTS_DESC_DVB_SHORT_SMOOTHING_BUFFER", "short-smoothing-buffer" },
      { GST_MTS_DESC_DVB_FREQUENCY_LIST, "GST_MTS_DESC_DVB_FREQUENCY_LIST", "frequency-list" },
      { GST_MTS_DESC_DVB_PARTIAL_TRANSPORT_STREAM, "GST_MTS_DESC_DVB_PARTIAL_TRANSPORT_STREAM", "partial-transport-stream" },
      { GST_MTS_DESC_DVB_DATA_BROADCAST, "GST_MTS_DESC_DVB_DATA_BROADCAST", "data-broadcast" },
      { GST_MTS_DESC_DVB_SCRAMBLING, "GST_MTS_DESC_DVB_SCRAMBLING", "scrambling" },
      { GST_MTS_DESC_DVB_DATA_BROADCAST_ID, "GST_MTS_DESC_DVB_DATA_BROADCAST_ID", "data-broadcast-id" },
      { GST_MTS_DESC_DVB_TRANSPORT_STREAM, "GST_MTS_DESC_DVB_TRANSPORT_STREAM", "transport-stream" },
      { GST_MTS_DESC_DVB_DSNG, "GST_MTS_DESC_DVB_DSNG", "dsng" },
      { GST_MTS_DESC_DVB_PDC, "GST_MTS_DESC_DVB_PDC", "pdc" },
      { GST_MTS_DESC_DVB_AC3, "GST_MTS_DESC_DVB_AC3", "ac3" },
      { GST_MTS_DESC_DVB_ANCILLARY_DATA, "GST_MTS_DESC_DVB_ANCILLARY_DATA", "ancillary-data" },
      { GST_MTS_DESC_DVB_CELL_LIST, "GST_MTS_DESC_DVB_CELL_LIST", "cell-list" },
      { GST_MTS_DESC_DVB_CELL_FREQUENCY_LINK, "GST_MTS_DESC_DVB_CELL_FREQUENCY_LINK", "cell-frequency-link" },
      { GST_MTS_DESC_DVB_ANNOUNCEMENT_SUPPORT, "GST_MTS_DESC_DVB_ANNOUNCEMENT_SUPPORT", "announcement-support" },
      { GST_MTS_DESC_DVB_APPLICATION_SIGNALLING, "GST_MTS_DESC_DVB_APPLICATION_SIGNALLING", "application-signalling" },
      { GST_MTS_DESC_DVB_ADAPTATION_FIELD_DATA, "GST_MTS_DESC_DVB_ADAPTATION_FIELD_DATA", "adaptation-field-data" },
      { GST_MTS_DESC_DVB_SERVICE_IDENTIFIER, "GST_MTS_DESC_DVB_SERVICE_IDENTIFIER", "service-identifier" },
      { GST_MTS_DESC_DVB_SERVICE_AVAILABILITY, "GST_MTS_DESC_DVB_SERVICE_AVAILABILITY", "service-availability" },
      { GST_MTS_DESC_DVB_DEFAULT_AUTHORITY, "GST_MTS_DESC_DVB_DEFAULT_AUTHORITY", "default-authority" },
      { GST_MTS_DESC_DVB_RELATED_CONTENT, "GST_MTS_DESC_DVB_RELATED_CONTENT", "related-content" },
      { GST_MTS_DESC_DVB_TVA_ID, "GST_MTS_DESC_DVB_TVA_ID", "tva-id" },
      { GST_MTS_DESC_DVB_CONTENT_IDENTIFIER, "GST_MTS_DESC_DVB_CONTENT_IDENTIFIER", "content-identifier" },
      { GST_MTS_DESC_DVB_TIMESLICE_FEC_IDENTIFIER, "GST_MTS_DESC_DVB_TIMESLICE_FEC_IDENTIFIER", "timeslice-fec-identifier" },
      { GST_MTS_DESC_DVB_ECM_REPETITION_RATE, "GST_MTS_DESC_DVB_ECM_REPETITION_RATE", "ecm-repetition-rate" },
      { GST_MTS_DESC_DVB_S2_SATELLITE_DELIVERY_SYSTEM, "GST_MTS_DESC_DVB_S2_SATELLITE_DELIVERY_SYSTEM", "s2-satellite-delivery-system" },
      { GST_MTS_DESC_DVB_ENHANCED_AC3, "GST_MTS_DESC_DVB_ENHANCED_AC3", "enhanced-ac3" },
      { GST_MTS_DESC_DVB_DTS, "GST_MTS_DESC_DVB_DTS", "dts" },
      { GST_MTS_DESC_DVB_AAC, "GST_MTS_DESC_DVB_AAC", "aac" },
      { GST_MTS_DESC_DVB_XAIT_LOCATION, "GST_MTS_DESC_DVB_XAIT_LOCATION", "xait-location" },
      { GST_MTS_DESC_DVB_FTA_CONTENT_MANAGEMENT, "GST_MTS_DESC_DVB_FTA_CONTENT_MANAGEMENT", "fta-content-management" },
      { GST_MTS_DESC_DVB_EXTENSION, "GST_MTS_DESC_DVB_EXTENSION", "extension" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBDescriptorType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_extended_descriptor_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MTS_DESC_EXT_DVB_IMAGE_ICON, "GST_MTS_DESC_EXT_DVB_IMAGE_ICON", "image-icon" },
      { GST_MTS_DESC_EXT_DVB_CPCM_DELIVERY_SIGNALLING, "GST_MTS_DESC_EXT_DVB_CPCM_DELIVERY_SIGNALLING", "cpcm-delivery-signalling" },
      { GST_MTS_DESC_EXT_DVB_CP, "GST_MTS_DESC_EXT_DVB_CP", "cp" },
      { GST_MTS_DESC_EXT_DVB_CP_IDENTIFIER, "GST_MTS_DESC_EXT_DVB_CP_IDENTIFIER", "cp-identifier" },
      { GST_MTS_DESC_EXT_DVB_T2_DELIVERY_SYSTEM, "GST_MTS_DESC_EXT_DVB_T2_DELIVERY_SYSTEM", "t2-delivery-system" },
      { GST_MTS_DESC_EXT_DVB_SH_DELIVERY_SYSTEM, "GST_MTS_DESC_EXT_DVB_SH_DELIVERY_SYSTEM", "sh-delivery-system" },
      { GST_MTS_DESC_EXT_DVB_SUPPLEMENTARY_AUDIO, "GST_MTS_DESC_EXT_DVB_SUPPLEMENTARY_AUDIO", "supplementary-audio" },
      { GST_MTS_DESC_EXT_DVB_NETWORK_CHANGE_NOTIFY, "GST_MTS_DESC_EXT_DVB_NETWORK_CHANGE_NOTIFY", "network-change-notify" },
      { GST_MTS_DESC_EXT_DVB_MESSAGE, "GST_MTS_DESC_EXT_DVB_MESSAGE", "message" },
      { GST_MTS_DESC_EXT_DVB_TARGET_REGION, "GST_MTS_DESC_EXT_DVB_TARGET_REGION", "target-region" },
      { GST_MTS_DESC_EXT_DVB_TARGET_REGION_NAME, "GST_MTS_DESC_EXT_DVB_TARGET_REGION_NAME", "target-region-name" },
      { GST_MTS_DESC_EXT_DVB_SERVICE_RELOCATED, "GST_MTS_DESC_EXT_DVB_SERVICE_RELOCATED", "service-relocated" },
      { GST_MTS_DESC_EXT_DVB_XAIT_PID, "GST_MTS_DESC_EXT_DVB_XAIT_PID", "xait-pid" },
      { GST_MTS_DESC_EXT_DVB_C2_DELIVERY_SYSTEM, "GST_MTS_DESC_EXT_DVB_C2_DELIVERY_SYSTEM", "c2-delivery-system" },
      { GST_MTS_DESC_EXT_DVB_DTS_HD_AUDIO_STREAM, "GST_MTS_DESC_EXT_DVB_DTS_HD_AUDIO_STREAM", "dts-hd-audio-stream" },
      { GST_MTS_DESC_EXT_DVB_DTS_NEUTRAL, "GST_MTS_DESC_EXT_DVB_DTS_NEUTRAL", "dts-neutral" },
      { GST_MTS_DESC_EXT_DVB_VIDEO_DEPTH_RANGE, "GST_MTS_DESC_EXT_DVB_VIDEO_DEPTH_RANGE", "video-depth-range" },
      { GST_MTS_DESC_EXT_DVB_T2MI, "GST_MTS_DESC_EXT_DVB_T2MI", "t2mi" },
      { GST_MTS_DESC_EXT_DVB_URI_LINKAGE, "GST_MTS_DESC_EXT_DVB_URI_LINKAGE", "uri-linkage" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBExtendedDescriptorType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_modulation_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_MODULATION_QPSK, "GST_MPEGTS_MODULATION_QPSK", "qpsk" },
      { GST_MPEGTS_MODULATION_QAM_16, "GST_MPEGTS_MODULATION_QAM_16", "qam-16" },
      { GST_MPEGTS_MODULATION_QAM_32, "GST_MPEGTS_MODULATION_QAM_32", "qam-32" },
      { GST_MPEGTS_MODULATION_QAM_64, "GST_MPEGTS_MODULATION_QAM_64", "qam-64" },
      { GST_MPEGTS_MODULATION_QAM_128, "GST_MPEGTS_MODULATION_QAM_128", "qam-128" },
      { GST_MPEGTS_MODULATION_QAM_256, "GST_MPEGTS_MODULATION_QAM_256", "qam-256" },
      { GST_MPEGTS_MODULATION_QAM_AUTO, "GST_MPEGTS_MODULATION_QAM_AUTO", "qam-auto" },
      { GST_MPEGTS_MODULATION_VSB_8, "GST_MPEGTS_MODULATION_VSB_8", "vsb-8" },
      { GST_MPEGTS_MODULATION_VSB_16, "GST_MPEGTS_MODULATION_VSB_16", "vsb-16" },
      { GST_MPEGTS_MODULATION_PSK_8, "GST_MPEGTS_MODULATION_PSK_8", "psk-8" },
      { GST_MPEGTS_MODULATION_APSK_16, "GST_MPEGTS_MODULATION_APSK_16", "apsk-16" },
      { GST_MPEGTS_MODULATION_APSK_32, "GST_MPEGTS_MODULATION_APSK_32", "apsk-32" },
      { GST_MPEGTS_MODULATION_DQPSK, "GST_MPEGTS_MODULATION_DQPSK", "dqpsk" },
      { GST_MPEGTS_MODULATION_QAM_4_NR_, "GST_MPEGTS_MODULATION_QAM_4_NR_", "qam-4-nr-" },
      { GST_MPEGTS_MODULATION_NONE, "GST_MPEGTS_MODULATION_NONE", "none" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsModulationType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_code_rate_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_FEC_NONE, "GST_MPEGTS_FEC_NONE", "none" },
      { GST_MPEGTS_FEC_1_2, "GST_MPEGTS_FEC_1_2", "1-2" },
      { GST_MPEGTS_FEC_2_3, "GST_MPEGTS_FEC_2_3", "2-3" },
      { GST_MPEGTS_FEC_3_4, "GST_MPEGTS_FEC_3_4", "3-4" },
      { GST_MPEGTS_FEC_4_5, "GST_MPEGTS_FEC_4_5", "4-5" },
      { GST_MPEGTS_FEC_5_6, "GST_MPEGTS_FEC_5_6", "5-6" },
      { GST_MPEGTS_FEC_6_7, "GST_MPEGTS_FEC_6_7", "6-7" },
      { GST_MPEGTS_FEC_7_8, "GST_MPEGTS_FEC_7_8", "7-8" },
      { GST_MPEGTS_FEC_8_9, "GST_MPEGTS_FEC_8_9", "8-9" },
      { GST_MPEGTS_FEC_AUTO, "GST_MPEGTS_FEC_AUTO", "auto" },
      { GST_MPEGTS_FEC_3_5, "GST_MPEGTS_FEC_3_5", "3-5" },
      { GST_MPEGTS_FEC_9_10, "GST_MPEGTS_FEC_9_10", "9-10" },
      { GST_MPEGTS_FEC_2_5, "GST_MPEGTS_FEC_2_5", "2-5" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBCodeRate", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_satellite_rolloff_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_ROLLOFF_35, "GST_MPEGTS_ROLLOFF_35", "35" },
      { GST_MPEGTS_ROLLOFF_20, "GST_MPEGTS_ROLLOFF_20", "20" },
      { GST_MPEGTS_ROLLOFF_25, "GST_MPEGTS_ROLLOFF_25", "25" },
      { GST_MPEGTS_ROLLOFF_RESERVED, "GST_MPEGTS_ROLLOFF_RESERVED", "reserved" },
      { GST_MPEGTS_ROLLOFF_AUTO, "GST_MPEGTS_ROLLOFF_AUTO", "auto" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSatelliteRolloff", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_satellite_polarization_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_POLARIZATION_LINEAR_HORIZONTAL, "GST_MPEGTS_POLARIZATION_LINEAR_HORIZONTAL", "linear-horizontal" },
      { GST_MPEGTS_POLARIZATION_LINEAR_VERTICAL, "GST_MPEGTS_POLARIZATION_LINEAR_VERTICAL", "linear-vertical" },
      { GST_MPEGTS_POLARIZATION_CIRCULAR_LEFT, "GST_MPEGTS_POLARIZATION_CIRCULAR_LEFT", "circular-left" },
      { GST_MPEGTS_POLARIZATION_CIRCULAR_RIGHT, "GST_MPEGTS_POLARIZATION_CIRCULAR_RIGHT", "circular-right" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsSatellitePolarizationType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_cable_outer_fec_scheme_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_CABLE_OUTER_FEC_UNDEFINED, "GST_MPEGTS_CABLE_OUTER_FEC_UNDEFINED", "undefined" },
      { GST_MPEGTS_CABLE_OUTER_FEC_NONE, "GST_MPEGTS_CABLE_OUTER_FEC_NONE", "none" },
      { GST_MPEGTS_CABLE_OUTER_FEC_RS_204_188, "GST_MPEGTS_CABLE_OUTER_FEC_RS_204_188", "rs-204-188" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsCableOuterFECScheme", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_service_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_DVB_SERVICE_RESERVED_00, "GST_DVB_SERVICE_RESERVED_00", "reserved-00" },
      { GST_DVB_SERVICE_DIGITAL_TELEVISION, "GST_DVB_SERVICE_DIGITAL_TELEVISION", "digital-television" },
      { GST_DVB_SERVICE_DIGITAL_RADIO_SOUND, "GST_DVB_SERVICE_DIGITAL_RADIO_SOUND", "digital-radio-sound" },
      { GST_DVB_SERVICE_TELETEXT, "GST_DVB_SERVICE_TELETEXT", "teletext" },
      { GST_DVB_SERVICE_NVOD_REFERENCE, "GST_DVB_SERVICE_NVOD_REFERENCE", "nvod-reference" },
      { GST_DVB_SERVICE_NVOD_TIME_SHIFTED, "GST_DVB_SERVICE_NVOD_TIME_SHIFTED", "nvod-time-shifted" },
      { GST_DVB_SERVICE_MOSAIC, "GST_DVB_SERVICE_MOSAIC", "mosaic" },
      { GST_DVB_SERVICE_FM_RADIO, "GST_DVB_SERVICE_FM_RADIO", "fm-radio" },
      { GST_DVB_SERVICE_DVB_SRM, "GST_DVB_SERVICE_DVB_SRM", "dvb-srm" },
      { GST_DVB_SERVICE_RESERVED_09, "GST_DVB_SERVICE_RESERVED_09", "reserved-09" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_DIGITAL_RADIO_SOUND, "GST_DVB_SERVICE_ADVANCED_CODEC_DIGITAL_RADIO_SOUND", "advanced-codec-digital-radio-sound" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_MOSAIC, "GST_DVB_SERVICE_ADVANCED_CODEC_MOSAIC", "advanced-codec-mosaic" },
      { GST_DVB_SERVICE_DATA_BROADCAST, "GST_DVB_SERVICE_DATA_BROADCAST", "data-broadcast" },
      { GST_DVB_SERVICE_RESERVED_0D_COMMON_INTERFACE, "GST_DVB_SERVICE_RESERVED_0D_COMMON_INTERFACE", "reserved-0d-common-interface" },
      { GST_DVB_SERVICE_RCS_MAP, "GST_DVB_SERVICE_RCS_MAP", "rcs-map" },
      { GST_DVB_SERVICE_RCS_FLS, "GST_DVB_SERVICE_RCS_FLS", "rcs-fls" },
      { GST_DVB_SERVICE_DVB_MHP, "GST_DVB_SERVICE_DVB_MHP", "dvb-mhp" },
      { GST_DVB_SERVICE_MPEG2_HD_DIGITAL_TELEVISION, "GST_DVB_SERVICE_MPEG2_HD_DIGITAL_TELEVISION", "mpeg2-hd-digital-television" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_SD_DIGITAL_TELEVISION, "GST_DVB_SERVICE_ADVANCED_CODEC_SD_DIGITAL_TELEVISION", "advanced-codec-sd-digital-television" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_SD_NVOD_TIME_SHIFTED, "GST_DVB_SERVICE_ADVANCED_CODEC_SD_NVOD_TIME_SHIFTED", "advanced-codec-sd-nvod-time-shifted" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_SD_NVOD_REFERENCE, "GST_DVB_SERVICE_ADVANCED_CODEC_SD_NVOD_REFERENCE", "advanced-codec-sd-nvod-reference" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_HD_DIGITAL_TELEVISION, "GST_DVB_SERVICE_ADVANCED_CODEC_HD_DIGITAL_TELEVISION", "advanced-codec-hd-digital-television" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_HD_NVOD_TIME_SHIFTED, "GST_DVB_SERVICE_ADVANCED_CODEC_HD_NVOD_TIME_SHIFTED", "advanced-codec-hd-nvod-time-shifted" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_HD_NVOD_REFERENCE, "GST_DVB_SERVICE_ADVANCED_CODEC_HD_NVOD_REFERENCE", "advanced-codec-hd-nvod-reference" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_STEREO_HD_DIGITAL_TELEVISION, "GST_DVB_SERVICE_ADVANCED_CODEC_STEREO_HD_DIGITAL_TELEVISION", "advanced-codec-stereo-hd-digital-television" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_STEREO_HD_NVOD_TIME_SHIFTED, "GST_DVB_SERVICE_ADVANCED_CODEC_STEREO_HD_NVOD_TIME_SHIFTED", "advanced-codec-stereo-hd-nvod-time-shifted" },
      { GST_DVB_SERVICE_ADVANCED_CODEC_STEREO_HD_NVOD_REFERENCE, "GST_DVB_SERVICE_ADVANCED_CODEC_STEREO_HD_NVOD_REFERENCE", "advanced-codec-stereo-hd-nvod-reference" },
      { GST_DVB_SERVICE_RESERVED_FF, "GST_DVB_SERVICE_RESERVED_FF", "reserved-ff" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBServiceType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_linkage_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_DVB_LINKAGE_RESERVED_00, "GST_MPEGTS_DVB_LINKAGE_RESERVED_00", "reserved-00" },
      { GST_MPEGTS_DVB_LINKAGE_INFORMATION, "GST_MPEGTS_DVB_LINKAGE_INFORMATION", "information" },
      { GST_MPEGTS_DVB_LINKAGE_EPG, "GST_MPEGTS_DVB_LINKAGE_EPG", "epg" },
      { GST_MPEGTS_DVB_LINKAGE_CA_REPLACEMENT, "GST_MPEGTS_DVB_LINKAGE_CA_REPLACEMENT", "ca-replacement" },
      { GST_MPEGTS_DVB_LINKAGE_TS_CONTAINING_COMPLETE_SI, "GST_MPEGTS_DVB_LINKAGE_TS_CONTAINING_COMPLETE_SI", "ts-containing-complete-si" },
      { GST_MPEGTS_DVB_LINKAGE_SERVICE_REPLACEMENT, "GST_MPEGTS_DVB_LINKAGE_SERVICE_REPLACEMENT", "service-replacement" },
      { GST_MPEGTS_DVB_LINKAGE_DATA_BROADCAST, "GST_MPEGTS_DVB_LINKAGE_DATA_BROADCAST", "data-broadcast" },
      { GST_MPEGTS_DVB_LINKAGE_RCS_MAP, "GST_MPEGTS_DVB_LINKAGE_RCS_MAP", "rcs-map" },
      { GST_MPEGTS_DVB_LINKAGE_MOBILE_HAND_OVER, "GST_MPEGTS_DVB_LINKAGE_MOBILE_HAND_OVER", "mobile-hand-over" },
      { GST_MPEGTS_DVB_LINKAGE_SYSTEM_SOFTWARE_UPDATE, "GST_MPEGTS_DVB_LINKAGE_SYSTEM_SOFTWARE_UPDATE", "system-software-update" },
      { GST_MPEGTS_DVB_LINKAGE_TS_CONTAINING_SSU, "GST_MPEGTS_DVB_LINKAGE_TS_CONTAINING_SSU", "ts-containing-ssu" },
      { GST_MPEGTS_DVB_LINKAGE_IP_MAC_NOTIFICATION, "GST_MPEGTS_DVB_LINKAGE_IP_MAC_NOTIFICATION", "ip-mac-notification" },
      { GST_MPEGTS_DVB_LINKAGE_TS_CONTAINING_INT, "GST_MPEGTS_DVB_LINKAGE_TS_CONTAINING_INT", "ts-containing-int" },
      { GST_MPEGTS_DVB_LINKAGE_EVENT, "GST_MPEGTS_DVB_LINKAGE_EVENT", "event" },
      { GST_MPEGTS_DVB_LINKAGE_EXTENDED_EVENT, "GST_MPEGTS_DVB_LINKAGE_EXTENDED_EVENT", "extended-event" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBLinkageType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_linkage_hand_over_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_DVB_LINKAGE_HAND_OVER_RESERVED, "GST_MPEGTS_DVB_LINKAGE_HAND_OVER_RESERVED", "reserved" },
      { GST_MPEGTS_DVB_LINKAGE_HAND_OVER_IDENTICAL, "GST_MPEGTS_DVB_LINKAGE_HAND_OVER_IDENTICAL", "identical" },
      { GST_MPEGTS_DVB_LINKAGE_HAND_OVER_LOCAL_VARIATION, "GST_MPEGTS_DVB_LINKAGE_HAND_OVER_LOCAL_VARIATION", "local-variation" },
      { GST_MPEGTS_DVB_LINKAGE_HAND_OVER_ASSOCIATED, "GST_MPEGTS_DVB_LINKAGE_HAND_OVER_ASSOCIATED", "associated" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBLinkageHandOverType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_component_stream_content_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_STREAM_CONTENT_MPEG2_VIDEO, "GST_MPEGTS_STREAM_CONTENT_MPEG2_VIDEO", "mpeg2-video" },
      { GST_MPEGTS_STREAM_CONTENT_MPEG1_LAYER2_AUDIO, "GST_MPEGTS_STREAM_CONTENT_MPEG1_LAYER2_AUDIO", "mpeg1-layer2-audio" },
      { GST_MPEGTS_STREAM_CONTENT_TELETEXT_OR_SUBTITLE, "GST_MPEGTS_STREAM_CONTENT_TELETEXT_OR_SUBTITLE", "teletext-or-subtitle" },
      { GST_MPEGTS_STREAM_CONTENT_AC_3, "GST_MPEGTS_STREAM_CONTENT_AC_3", "ac-3" },
      { GST_MPEGTS_STREAM_CONTENT_AVC, "GST_MPEGTS_STREAM_CONTENT_AVC", "avc" },
      { GST_MPEGTS_STREAM_CONTENT_AAC, "GST_MPEGTS_STREAM_CONTENT_AAC", "aac" },
      { GST_MPEGTS_STREAM_CONTENT_DTS, "GST_MPEGTS_STREAM_CONTENT_DTS", "dts" },
      { GST_MPEGTS_STREAM_CONTENT_SRM_CPCM, "GST_MPEGTS_STREAM_CONTENT_SRM_CPCM", "srm-cpcm" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsComponentStreamContent", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_content_nibble_hi_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_CONTENT_MOVIE_DRAMA, "GST_MPEGTS_CONTENT_MOVIE_DRAMA", "movie-drama" },
      { GST_MPEGTS_CONTENT_NEWS_CURRENT_AFFAIRS, "GST_MPEGTS_CONTENT_NEWS_CURRENT_AFFAIRS", "news-current-affairs" },
      { GST_MPEGTS_CONTENT_SHOW_GAME_SHOW, "GST_MPEGTS_CONTENT_SHOW_GAME_SHOW", "show-game-show" },
      { GST_MPEGTS_CONTENT_SPORTS, "GST_MPEGTS_CONTENT_SPORTS", "sports" },
      { GST_MPEGTS_CONTENT_CHILDREN_YOUTH_PROGRAM, "GST_MPEGTS_CONTENT_CHILDREN_YOUTH_PROGRAM", "children-youth-program" },
      { GST_MPEGTS_CONTENT_MUSIC_BALLET_DANCE, "GST_MPEGTS_CONTENT_MUSIC_BALLET_DANCE", "music-ballet-dance" },
      { GST_MPEGTS_CONTENT_ARTS_CULTURE, "GST_MPEGTS_CONTENT_ARTS_CULTURE", "arts-culture" },
      { GST_MPEGTS_CONTENT_SOCIAL_POLITICAL_ECONOMICS, "GST_MPEGTS_CONTENT_SOCIAL_POLITICAL_ECONOMICS", "social-political-economics" },
      { GST_MPEGTS_CONTENT_EDUCATION_SCIENCE_FACTUAL, "GST_MPEGTS_CONTENT_EDUCATION_SCIENCE_FACTUAL", "education-science-factual" },
      { GST_MPEGTS_CONTENT_LEISURE_HOBBIES, "GST_MPEGTS_CONTENT_LEISURE_HOBBIES", "leisure-hobbies" },
      { GST_MPEGTS_CONTENT_SPECIAL_CHARACTERISTICS, "GST_MPEGTS_CONTENT_SPECIAL_CHARACTERISTICS", "special-characteristics" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsContentNibbleHi", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_teletext_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { INITIAL_PAGE, "INITIAL_PAGE", "initial-page" },
      { SUBTITLE_PAGE, "SUBTITLE_PAGE", "subtitle-page" },
      { ADDITIONAL_INFO_PAGE, "ADDITIONAL_INFO_PAGE", "additional-info-page" },
      { PROGRAMME_SCHEDULE_PAGE, "PROGRAMME_SCHEDULE_PAGE", "programme-schedule-page" },
      { HEARING_IMPAIRED_PAGE, "HEARING_IMPAIRED_PAGE", "hearing-impaired-page" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBTeletextType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_terrestrial_transmission_mode_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_TRANSMISSION_MODE_2K, "GST_MPEGTS_TRANSMISSION_MODE_2K", "2k" },
      { GST_MPEGTS_TRANSMISSION_MODE_8K, "GST_MPEGTS_TRANSMISSION_MODE_8K", "8k" },
      { GST_MPEGTS_TRANSMISSION_MODE_AUTO, "GST_MPEGTS_TRANSMISSION_MODE_AUTO", "auto" },
      { GST_MPEGTS_TRANSMISSION_MODE_4K, "GST_MPEGTS_TRANSMISSION_MODE_4K", "4k" },
      { GST_MPEGTS_TRANSMISSION_MODE_1K, "GST_MPEGTS_TRANSMISSION_MODE_1K", "1k" },
      { GST_MPEGTS_TRANSMISSION_MODE_16K, "GST_MPEGTS_TRANSMISSION_MODE_16K", "16k" },
      { GST_MPEGTS_TRANSMISSION_MODE_32K, "GST_MPEGTS_TRANSMISSION_MODE_32K", "32k" },
      { GST_MPEGTS_TRANSMISSION_MODE_C1, "GST_MPEGTS_TRANSMISSION_MODE_C1", "c1" },
      { GST_MPEGTS_TRANSMISSION_MODE_C3780, "GST_MPEGTS_TRANSMISSION_MODE_C3780", "c3780" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsTerrestrialTransmissionMode", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_terrestrial_guard_interval_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_GUARD_INTERVAL_1_32, "GST_MPEGTS_GUARD_INTERVAL_1_32", "1-32" },
      { GST_MPEGTS_GUARD_INTERVAL_1_16, "GST_MPEGTS_GUARD_INTERVAL_1_16", "1-16" },
      { GST_MPEGTS_GUARD_INTERVAL_1_8, "GST_MPEGTS_GUARD_INTERVAL_1_8", "1-8" },
      { GST_MPEGTS_GUARD_INTERVAL_1_4, "GST_MPEGTS_GUARD_INTERVAL_1_4", "1-4" },
      { GST_MPEGTS_GUARD_INTERVAL_AUTO, "GST_MPEGTS_GUARD_INTERVAL_AUTO", "auto" },
      { GST_MPEGTS_GUARD_INTERVAL_1_128, "GST_MPEGTS_GUARD_INTERVAL_1_128", "1-128" },
      { GST_MPEGTS_GUARD_INTERVAL_19_128, "GST_MPEGTS_GUARD_INTERVAL_19_128", "19-128" },
      { GST_MPEGTS_GUARD_INTERVAL_19_256, "GST_MPEGTS_GUARD_INTERVAL_19_256", "19-256" },
      { GST_MPEGTS_GUARD_INTERVAL_PN420, "GST_MPEGTS_GUARD_INTERVAL_PN420", "pn420" },
      { GST_MPEGTS_GUARD_INTERVAL_PN595, "GST_MPEGTS_GUARD_INTERVAL_PN595", "pn595" },
      { GST_MPEGTS_GUARD_INTERVAL_PN945, "GST_MPEGTS_GUARD_INTERVAL_PN945", "pn945" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsTerrestrialGuardInterval", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_terrestrial_hierarchy_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_HIERARCHY_NONE, "GST_MPEGTS_HIERARCHY_NONE", "none" },
      { GST_MPEGTS_HIERARCHY_1, "GST_MPEGTS_HIERARCHY_1", "1" },
      { GST_MPEGTS_HIERARCHY_2, "GST_MPEGTS_HIERARCHY_2", "2" },
      { GST_MPEGTS_HIERARCHY_4, "GST_MPEGTS_HIERARCHY_4", "4" },
      { GST_MPEGTS_HIERARCHY_AUTO, "GST_MPEGTS_HIERARCHY_AUTO", "auto" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsTerrestrialHierarchy", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}
GType
gst_mpegts_dvb_scrambling_mode_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GEnumValue values[] = {
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_RESERVED, "GST_MPEGTS_DVB_SCRAMBLING_MODE_RESERVED", "reserved" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA1, "GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA1", "csa1" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA2, "GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA2", "csa2" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA3_STANDARD, "GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA3_STANDARD", "csa3-standard" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA3_MINIMAL_ENHANCED, "GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA3_MINIMAL_ENHANCED", "csa3-minimal-enhanced" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA3_FULL_ENHANCED, "GST_MPEGTS_DVB_SCRAMBLING_MODE_CSA3_FULL_ENHANCED", "csa3-full-enhanced" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_CISSA, "GST_MPEGTS_DVB_SCRAMBLING_MODE_CISSA", "cissa" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_ATIS_0, "GST_MPEGTS_DVB_SCRAMBLING_MODE_ATIS_0", "atis-0" },
      { GST_MPEGTS_DVB_SCRAMBLING_MODE_ATIS_F, "GST_MPEGTS_DVB_SCRAMBLING_MODE_ATIS_F", "atis-f" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = g_enum_register_static ("GstMpegtsDVBScramblingModeType", values);
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
  return g_define_type_id__volatile;
}



