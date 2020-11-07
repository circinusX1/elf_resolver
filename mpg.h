//readelf -s /usr/lib/x86_64-linux-gnu/libmpg123.so | grep FUNC | grep DEFAULT | grep GLOBAL | grep -v 'GLIBC' | grep -v '__' | awk {'print $8'} | awk -F '@' '{print $1}'#ifndef LIBR_RESOLVER_H
#define LIBR_RESOLVER_H
// Copyright Marius C. https://github/comarius (do not remove)
#include <stdio.h>
#include <errno.h>
#include <dlfcn.h>


// -------------- constants ---------------
// review before compile...
#define MPG123_LIB_H
#define MPG123_API_VERSION 44
#define MPG123_EXPORT __declspec(dllexport)
#define MPG123_EXPORT __declspec(dllimport)
#define MPG123_EXPORT
#define MPG123_DEF_SSIZE_T
#define MPG123_MACROCAT_REALLY(a
 b) a ## b
#define MPG123_MACROCAT(a
 b) MPG123_MACROCAT_REALLY(a
 b)
#define MPG123_LARGESUFFIX MPG123_MACROCAT(_
 _FILE_OFFSET_BITS)
#define MPG123_LARGENAME(func) MPG123_MACROCAT(func
 MPG123_LARGESUFFIX)
#define mpg123_open         MPG123_LARGENAME(mpg123_open)
#define mpg123_open_fd      MPG123_LARGENAME(mpg123_open_fd)
#define mpg123_open_handle  MPG123_LARGENAME(mpg123_open_handle)
#define mpg123_framebyframe_decode MPG123_LARGENAME(mpg123_framebyframe_decode)
#define mpg123_decode_frame MPG123_LARGENAME(mpg123_decode_frame)
#define mpg123_tell         MPG123_LARGENAME(mpg123_tell)
#define mpg123_tellframe    MPG123_LARGENAME(mpg123_tellframe)
#define mpg123_tell_stream  MPG123_LARGENAME(mpg123_tell_stream)
#define mpg123_seek         MPG123_LARGENAME(mpg123_seek)
#define mpg123_feedseek     MPG123_LARGENAME(mpg123_feedseek)
#define mpg123_seek_frame   MPG123_LARGENAME(mpg123_seek_frame)
#define mpg123_timeframe    MPG123_LARGENAME(mpg123_timeframe)
#define mpg123_index        MPG123_LARGENAME(mpg123_index)
#define mpg123_set_index    MPG123_LARGENAME(mpg123_set_index)
#define mpg123_position     MPG123_LARGENAME(mpg123_position)
#define mpg123_length       MPG123_LARGENAME(mpg123_length)
#define mpg123_framelength  MPG123_LARGENAME(mpg123_framelength)
#define mpg123_set_filesize MPG123_LARGENAME(mpg123_set_filesize)
#define mpg123_replace_reader MPG123_LARGENAME(mpg123_replace_reader)
#define mpg123_replace_reader_handle MPG123_LARGENAME(mpg123_replace_reader_handle)
#define mpg123_framepos MPG123_LARGENAME(mpg123_framepos)
#define MPG123_ID3     0x3 /**< 0011 There is some ID3 info. Also matches 0010 or NEW_ID3. */
#define MPG123_NEW_ID3 0x1 /**< 0001 There is ID3 info that changed since last call to mpg123_id3. */
#define MPG123_ICY     0xc /**< 1100 There is some ICY info. Also matches 0100 or NEW_ICY.*/
#define MPG123_NEW_ICY 0x4 /**< 0100 There is ICY info that changed since last call to mpg123_icy. */


// -------------- functions ---------------
// review before compile...

//MPG123_EXPORT long mpg123_clip(mpg123_handle *mh);
#define PF_mpg123_clip (* (MPG123_EXPORT long (*)(mpg123_handle *mh ))             _ptr[0].ptr)

//MPG123_EXPORT int mpg123_volume_change(mpg123_handle *mh, double change);
#define PF_mpg123_volume_change (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,double change ))    _ptr[1].ptr)

//MPG123_EXPORT void mpg123_meta_free(mpg123_handle *mh);
#define PF_mpg123_meta_free (* (MPG123_EXPORT void (*)(mpg123_handle *mh ))        _ptr[2].ptr)

//MPG123_EXPORT int mpg123_decode_frame( mpg123_handle *mh,	off_t *num, unsigned char **audio, size_t *bytes );
#define PF_mpg123_decode_frame (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t *num ,unsigned char **audio ,size_t *bytes  ))    _ptr[3].ptr)

//MPG123_EXPORT int mpg123_feature(const enum mpg123_feature_set key);
#define PF_mpg123_feature (* (MPG123_EXPORT int (*)(const enum mpg123_feature_set key ))    _ptr[4].ptr)

//MPG123_EXPORT int mpg123_framebyframe_decode( mpg123_handle *mh,	off_t *num, unsigned char **audio, size_t *bytes );
#define PF_mpg123_framebyframe_decode (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t *num ,unsigned char **audio ,size_t *bytes  ))    _ptr[5].ptr)

//MPG123_EXPORT const char **mpg123_decoders(void);
#define PF_void ))                                                                 _ptr[6].ptr)

//MPG123_EXPORT int mpg123_decoder(mpg123_handle *mh, const char* decoder_name);
#define PF_mpg123_decoder (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,const char* decoder_name ))    _ptr[7].ptr)

//MPG123_EXPORT int mpg123_decode( mpg123_handle *mh,	const unsigned char *inmemory, size_t inmemsize,	unsigned char *outmemory, size_t outmemsize, size_t *done );
#define PF_mpg123_decode (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,const unsigned char *inmemory ,size_t inmemsize ,unsigned char *outmemory ,size_t outmemsize ,size_t *done  ))    _ptr[8].ptr)

//MPG123_EXPORT int mpg123_decode_frame( mpg123_handle *mh,	off_t *num, unsigned char **audio, size_t *bytes );
#define PF_mpg123_decode_frame (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t *num ,unsigned char **audio ,size_t *bytes  ))    _ptr[9].ptr)

//MPG123_EXPORT const char* mpg123_plain_strerror(int errcode);
#define PF_int errcode ))                                                          _ptr[10].ptr)

//MPG123_EXPORT int mpg123_open_fd(mpg123_handle *mh, int fd);
#define PF_mpg123_open_fd (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,int fd ))    _ptr[11].ptr)

//MPG123_EXPORT int mpg123_chomp_string(mpg123_string *sb);
#define PF_mpg123_chomp_string (* (MPG123_EXPORT int (*)(mpg123_string *sb ))      _ptr[12].ptr)

//MPG123_EXPORT int mpg123_getstate( mpg123_handle *mh,	enum mpg123_state key, long *val, double *fval );
#define PF_mpg123_getstate (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,enum mpg123_state key ,long *val ,double *fval  ))    _ptr[13].ptr)

//MPG123_EXPORT int mpg123_reset_eq(mpg123_handle *mh);
#define PF_mpg123_reset_eq (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))          _ptr[14].ptr)

//MPG123_EXPORT int mpg123_framebyframe_next(mpg123_handle *mh);
#define PF_mpg123_framebyframe_next (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))    _ptr[15].ptr)

//MPG123_EXPORT int mpg123_format_all(mpg123_handle *mh);
#define PF_mpg123_format_all (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))        _ptr[16].ptr)

//MPG123_EXPORT mpg123_pars *mpg123_new_pars(int *error);
#define PF_mpg123_new_pars (* (MPG123_EXPORT mpg123_pars (*)(int *error ))         _ptr[17].ptr)

//MPG123_EXPORT int mpg123_add_substring( mpg123_string *sb,	const char *stuff, size_t from, size_t count );
#define PF_mpg123_add_substring (* (MPG123_EXPORT int (*)(mpg123_string *sb ,const char *stuff ,size_t from ,size_t count  ))    _ptr[18].ptr)

//MPG123_EXPORT off_t mpg123_timeframe(mpg123_handle *mh, double sec);
#define PF_mpg123_timeframe (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ,double sec ))    _ptr[19].ptr)

//MPG123_EXPORT int mpg123_format_none(mpg123_handle *mh);
#define PF_mpg123_format_none (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))       _ptr[20].ptr)

//MPG123_EXPORT int mpg123_format( mpg123_handle *mh,	long rate, int channels, int encodings );
#define PF_mpg123_format (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,long rate ,int channels ,int encodings  ))    _ptr[21].ptr)

//MPG123_EXPORT int mpg123_format_support( mpg123_handle *mh,	long rate, int encoding );
#define PF_mpg123_format_support (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,long rate ,int encoding  ))    _ptr[22].ptr)

//MPG123_EXPORT int mpg123_set_string(mpg123_string* sb, const char* stuff);
#define PF_mpg123_set_string (* (MPG123_EXPORT int (*)(mpg123_string* sb ,const char* stuff ))    _ptr[23].ptr)

//MPG123_EXPORT int mpg123_errcode(mpg123_handle *mh);
#define PF_mpg123_errcode (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))           _ptr[24].ptr)

//MPG123_EXPORT int mpg123_grow_string(mpg123_string* sb, size_t news);
#define PF_mpg123_grow_string (* (MPG123_EXPORT int (*)(mpg123_string* sb ,size_t news ))    _ptr[25].ptr)

//MPG123_EXPORT int mpg123_open_handle(mpg123_handle *mh, void *iohandle);
#define PF_mpg123_open_handle (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,void *iohandle ))    _ptr[26].ptr)

//MPG123_EXPORT int mpg123_info(mpg123_handle *mh, struct mpg123_frameinfo *mi);
#define PF_mpg123_info (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,struct mpg123_frameinfo *mi ))    _ptr[27].ptr)

//MPG123_EXPORT off_t mpg123_tell_stream(mpg123_handle *mh);
#define PF_mpg123_tell_stream (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ))     _ptr[28].ptr)

//MPG123_EXPORT int mpg123_open(mpg123_handle *mh, const char *path);
#define PF_mpg123_open (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,const char *path ))    _ptr[29].ptr)

//MPG123_EXPORT int mpg123_open_feed(mpg123_handle *mh);
#define PF_mpg123_open_feed (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))         _ptr[30].ptr)

//MPG123_EXPORT const char* mpg123_strerror(mpg123_handle *mh);
#define PF_mpg123_handle *mh ))                                                    _ptr[31].ptr)

//MPG123_EXPORT void mpg123_delete_pars(mpg123_pars* mp);
#define PF_mpg123_delete_pars (* (MPG123_EXPORT void (*)(mpg123_pars* mp ))        _ptr[32].ptr)

//MPG123_EXPORT void mpg123_free_string(mpg123_string* sb);
#define PF_mpg123_free_string (* (MPG123_EXPORT void (*)(mpg123_string* sb ))      _ptr[33].ptr)

//MPG123_EXPORT off_t mpg123_length(mpg123_handle *mh);
#define PF_mpg123_length (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ))          _ptr[34].ptr)

//MPG123_EXPORT int mpg123_replace_reader_handle( mpg123_handle *mh,	ssize_t (*r_read) (void *, void *, size_t),	off_t (*r_lseek)(void *, off_t, int),	void (*cleanup)(void*) );
#define PF_mpg123_replace_reader_handle (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,ssize_t ))    _ptr[35].ptr)

//MPG123_EXPORT int mpg123_feed( mpg123_handle *mh,	const unsigned char *in, size_t size );
#define PF_mpg123_feed (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,const unsigned char *in ,size_t size  ))    _ptr[36].ptr)

//MPG123_EXPORT off_t mpg123_feedseek( mpg123_handle *mh,	off_t sampleoff, int whence, off_t *input_offset );
#define PF_mpg123_feedseek (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ,off_t sampleoff ,int whence ,off_t *input_offset  ))    _ptr[37].ptr)

//MPG123_EXPORT int mpg123_getformat2( mpg123_handle *mh,	long *rate, int *channels, int *encoding, int clear_flag );
#define PF_mpg123_getformat2 (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,long *rate ,int *channels ,int *encoding ,int clear_flag  ))    _ptr[38].ptr)

//MPG123_EXPORT int mpg123_format_support( mpg123_handle *mh,	long rate, int encoding );
#define PF_mpg123_format_support (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,long rate ,int encoding  ))    _ptr[39].ptr)

//MPG123_EXPORT int mpg123_init(void);
#define PF_mpg123_init (* (MPG123_EXPORT int (*)(void ))                           _ptr[40].ptr)

//MPG123_EXPORT void mpg123_init_string(mpg123_string* sb);
#define PF_mpg123_init_string (* (MPG123_EXPORT void (*)(mpg123_string* sb ))      _ptr[41].ptr)

//MPG123_EXPORT int mpg123_framebyframe_decode( mpg123_handle *mh,	off_t *num, unsigned char **audio, size_t *bytes );
#define PF_mpg123_framebyframe_decode (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t *num ,unsigned char **audio ,size_t *bytes  ))    _ptr[42].ptr)

//MPG123_EXPORT const char **mpg123_supported_decoders(void);
#define PF_void ))                                                                 _ptr[43].ptr)

//MPG123_EXPORT int mpg123_fmt_all(mpg123_pars *mp);
#define PF_mpg123_fmt_all (* (MPG123_EXPORT int (*)(mpg123_pars *mp ))             _ptr[44].ptr)

//MPG123_EXPORT int mpg123_spf(mpg123_handle *mh);
#define PF_mpg123_spf (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))               _ptr[45].ptr)

//MPG123_EXPORT int mpg123_getparam( mpg123_handle *mh,	enum mpg123_parms type, long *value, double *fvalue );
#define PF_mpg123_getparam (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,enum mpg123_parms type ,long *value ,double *fvalue  ))    _ptr[46].ptr)

//MPG123_EXPORT off_t mpg123_tellframe(mpg123_handle *mh);
#define PF_mpg123_tellframe (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ))       _ptr[47].ptr)

//MPG123_EXPORT int mpg123_set_index( mpg123_handle *mh,	off_t *offsets, off_t step, size_t fill );
#define PF_mpg123_set_index (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t *offsets ,off_t step ,size_t fill  ))    _ptr[48].ptr)

//MPG123_EXPORT int mpg123_index( mpg123_handle *mh,	off_t **offsets, off_t *step, size_t *fill );
#define PF_mpg123_index (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t **offsets ,off_t *step ,size_t *fill  ))    _ptr[49].ptr)

//MPG123_EXPORT int mpg123_add_string(mpg123_string* sb, const char* stuff);
#define PF_mpg123_add_string (* (MPG123_EXPORT int (*)(mpg123_string* sb ,const char* stuff ))    _ptr[50].ptr)

//MPG123_EXPORT int mpg123_id3( mpg123_handle *mh,	mpg123_id3v1 **v1, mpg123_id3v2 **v2 );
#define PF_mpg123_id3 (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,mpg123_id3v1 **v1 ,mpg123_id3v2 **v2  ))    _ptr[51].ptr)

//MPG123_EXPORT const char* mpg123_current_decoder(mpg123_handle *mh);
#define PF_mpg123_handle *mh ))                                                    _ptr[52].ptr)

//MPG123_EXPORT int mpg123_getformat( mpg123_handle *mh,	long *rate, int *channels, int *encoding );
#define PF_mpg123_getformat (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,long *rate ,int *channels ,int *encoding  ))    _ptr[53].ptr)

//MPG123_EXPORT int mpg123_getformat2( mpg123_handle *mh,	long *rate, int *channels, int *encoding, int clear_flag );
#define PF_mpg123_getformat2 (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,long *rate ,int *channels ,int *encoding ,int clear_flag  ))    _ptr[54].ptr)

//MPG123_EXPORT int mpg123_fmt_none(mpg123_pars *mp);
#define PF_mpg123_fmt_none (* (MPG123_EXPORT int (*)(mpg123_pars *mp ))            _ptr[55].ptr)

//MPG123_EXPORT int mpg123_fmt(mpg123_pars *mp,	long rate, int channels, int encodings);
#define PF_mpg123_fmt (* (MPG123_EXPORT int (*)(mpg123_pars *mp ,long rate ,int channels ,int encodings ))    _ptr[56].ptr)

//MPG123_EXPORT int mpg123_fmt_support(mpg123_pars *mp, long rate, int encoding);
#define PF_mpg123_fmt_support (* (MPG123_EXPORT int (*)(mpg123_pars *mp ,long rate ,int encoding ))    _ptr[57].ptr)

//MPG123_EXPORT int mpg123_getvolume(mpg123_handle *mh, double *base, double *really, double *rva_db);
#define PF_mpg123_getvolume (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,double *base ,double *really ,double *rva_db ))    _ptr[58].ptr)

//MPG123_EXPORT size_t mpg123_safe_buffer(void);
#define PF_mpg123_safe_buffer (* (MPG123_EXPORT size_t (*)(void ))                 _ptr[59].ptr)

//MPG123_EXPORT off_t mpg123_tell(mpg123_handle *mh);
#define PF_mpg123_tell (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ))            _ptr[60].ptr)

//MPG123_EXPORT mpg123_handle *mpg123_parnew( mpg123_pars *mp,	const char* decoder, int *error );
#define PF_mpg123_parnew (* (MPG123_EXPORT mpg123_handle (*)(mpg123_pars *mp ,const char* decoder ,int *error  ))    _ptr[61].ptr)

//MPG123_EXPORT int mpg123_position( mpg123_handle *mh, off_t frame_offset, off_t buffered_bytes, off_t *current_frame, off_t *frames_left, double *current_seconds, double *seconds_left);
#define PF_mpg123_position (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t frame_offset ,off_t buffered_bytes ,off_t *current_frame ,off_t *frames_left ,double *current_seconds ,double *seconds_left ))    _ptr[62].ptr)

//MPG123_EXPORT void mpg123_delete(mpg123_handle *mh);
#define PF_mpg123_delete (* (MPG123_EXPORT void (*)(mpg123_handle *mh ))           _ptr[63].ptr)

//MPG123_EXPORT int mpg123_getparam( mpg123_handle *mh,	enum mpg123_parms type, long *value, double *fvalue );
#define PF_mpg123_getparam (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,enum mpg123_parms type ,long *value ,double *fvalue  ))    _ptr[64].ptr)

//MPG123_EXPORT int mpg123_getpar( mpg123_pars *mp,	enum mpg123_parms type, long *value, double *fvalue);
#define PF_mpg123_getpar (* (MPG123_EXPORT int (*)(mpg123_pars *mp ,enum mpg123_parms type ,long *value ,double *fvalue ))    _ptr[65].ptr)

//MPG123_EXPORT int mpg123_set_substring( mpg123_string *sb,	const char *stuff, size_t from, size_t count );
#define PF_mpg123_set_substring (* (MPG123_EXPORT int (*)(mpg123_string *sb ,const char *stuff ,size_t from ,size_t count  ))    _ptr[66].ptr)

//MPG123_EXPORT int mpg123_volume(mpg123_handle *mh, double vol);
#define PF_mpg123_volume (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,double vol ))    _ptr[67].ptr)

//MPG123_EXPORT double mpg123_tpf(mpg123_handle *mh);
#define PF_mpg123_tpf (* (MPG123_EXPORT double (*)(mpg123_handle *mh ))            _ptr[68].ptr)

//MPG123_EXPORT int mpg123_copy_string(mpg123_string* from, mpg123_string* to);
#define PF_mpg123_copy_string (* (MPG123_EXPORT int (*)(mpg123_string* from ,mpg123_string* to ))    _ptr[69].ptr)

//MPG123_EXPORT void mpg123_encodings(const int **list, size_t *number);
#define PF_mpg123_encodings (* (MPG123_EXPORT void (*)(const int **list ,size_t *number ))    _ptr[70].ptr)

//MPG123_EXPORT int mpg123_framedata( mpg123_handle *mh,	unsigned long *header, unsigned char **bodydata, size_t *bodybytes );
#define PF_mpg123_framedata (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,unsigned long *header ,unsigned char **bodydata ,size_t *bodybytes  ))    _ptr[71].ptr)

//MPG123_EXPORT int mpg123_replace_reader( mpg123_handle *mh,	ssize_t (*r_read) (int, void *, size_t),	off_t (*r_lseek)(int, off_t, int));
#define PF_mpg123_replace_reader (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,ssize_t ))    _ptr[72].ptr)

//MPG123_EXPORT int mpg123_replace_reader_handle( mpg123_handle *mh,	ssize_t (*r_read) (void *, void *, size_t),	off_t (*r_lseek)(void *, off_t, int),	void (*cleanup)(void*) );
#define PF_mpg123_replace_reader_handle (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,ssize_t ))    _ptr[73].ptr)

//MPG123_EXPORT int mpg123_encsize(int encoding);
#define PF_mpg123_encsize (* (MPG123_EXPORT int (*)(int encoding ))                _ptr[74].ptr)

//MPG123_EXPORT int mpg123_close(mpg123_handle *mh);
#define PF_mpg123_close (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))             _ptr[75].ptr)

//MPG123_EXPORT enum mpg123_text_encoding mpg123_enc_from_id3(unsigned char id3_enc_byte);
#define PF_unsigned char id3_enc_byte ))                                           _ptr[76].ptr)

//MPG123_EXPORT int mpg123_resize_string(mpg123_string* sb, size_t news);
#define PF_mpg123_resize_string (* (MPG123_EXPORT int (*)(mpg123_string* sb ,size_t news ))    _ptr[77].ptr)

//MPG123_EXPORT mpg123_handle *mpg123_new(const char* decoder, int *error);
#define PF_mpg123_new (* (MPG123_EXPORT mpg123_handle (*)(const char* decoder ,int *error ))    _ptr[78].ptr)

//MPG123_EXPORT void mpg123_rates(const long **list, size_t *number);
#define PF_mpg123_rates (* (MPG123_EXPORT void (*)(const long **list ,size_t *number ))    _ptr[79].ptr)

//MPG123_EXPORT void mpg123_exit(void);
#define PF_mpg123_exit (* (MPG123_EXPORT void (*)(void ))                          _ptr[80].ptr)

//MPG123_EXPORT int mpg123_meta_check(mpg123_handle *mh);
#define PF_mpg123_meta_check (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))        _ptr[81].ptr)

//MPG123_EXPORT off_t mpg123_framelength(mpg123_handle *mh);
#define PF_mpg123_framelength (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ))     _ptr[82].ptr)

//MPG123_EXPORT size_t mpg123_outblock(mpg123_handle *mh);
#define PF_mpg123_outblock (* (MPG123_EXPORT size_t (*)(mpg123_handle *mh ))       _ptr[83].ptr)

//MPG123_EXPORT off_t mpg123_seek( mpg123_handle *mh,	off_t sampleoff, int whence );
#define PF_mpg123_seek (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ,off_t sampleoff ,int whence  ))    _ptr[84].ptr)

//MPG123_EXPORT off_t mpg123_seek_frame( mpg123_handle *mh,	off_t frameoff, int whence );
#define PF_mpg123_seek_frame (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ,off_t frameoff ,int whence  ))    _ptr[85].ptr)

//MPG123_EXPORT int mpg123_store_utf8(mpg123_string *sb, enum mpg123_text_encoding enc, const unsigned char *source, size_t source_size);
#define PF_mpg123_store_utf8 (* (MPG123_EXPORT int (*)(mpg123_string *sb ,enum mpg123_text_encoding enc ,const unsigned char *source ,size_t source_size ))    _ptr[86].ptr)

//MPG123_EXPORT double mpg123_geteq(mpg123_handle *mh, enum mpg123_channels channel, int band);
#define PF_mpg123_geteq (* (MPG123_EXPORT double (*)(mpg123_handle *mh ,enum mpg123_channels channel ,int band ))    _ptr[87].ptr)

//MPG123_EXPORT int mpg123_eq( mpg123_handle *mh,	enum mpg123_channels channel, int band, double val );
#define PF_mpg123_eq (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,enum mpg123_channels channel ,int band ,double val  ))    _ptr[88].ptr)

//MPG123_EXPORT int mpg123_param( mpg123_handle *mh,	enum mpg123_parms type, long value, double fvalue );
#define PF_mpg123_param (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,enum mpg123_parms type ,long value ,double fvalue  ))    _ptr[89].ptr)

//MPG123_EXPORT mpg123_handle *mpg123_parnew( mpg123_pars *mp,	const char* decoder, int *error );
#define PF_mpg123_parnew (* (MPG123_EXPORT mpg123_handle (*)(mpg123_pars *mp ,const char* decoder ,int *error  ))    _ptr[90].ptr)

//MPG123_EXPORT int mpg123_fmt(mpg123_pars *mp,	long rate, int channels, int encodings);
#define PF_mpg123_fmt (* (MPG123_EXPORT int (*)(mpg123_pars *mp ,long rate ,int channels ,int encodings ))    _ptr[91].ptr)

//MPG123_EXPORT int mpg123_par( mpg123_pars *mp,	enum mpg123_parms type, long value, double fvalue );
#define PF_mpg123_par (* (MPG123_EXPORT int (*)(mpg123_pars *mp ,enum mpg123_parms type ,long value ,double fvalue  ))    _ptr[92].ptr)

//MPG123_EXPORT int mpg123_getpar( mpg123_pars *mp,	enum mpg123_parms type, long *value, double *fvalue);
#define PF_mpg123_getpar (* (MPG123_EXPORT int (*)(mpg123_pars *mp ,enum mpg123_parms type ,long *value ,double *fvalue ))    _ptr[93].ptr)

//MPG123_EXPORT int mpg123_replace_reader_handle( mpg123_handle *mh,	ssize_t (*r_read) (void *, void *, size_t),	off_t (*r_lseek)(void *, off_t, int),	void (*cleanup)(void*) );
#define PF_mpg123_replace_reader_handle (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,ssize_t ))    _ptr[94].ptr)

//MPG123_EXPORT int mpg123_replace_buffer(mpg123_handle *mh,	unsigned char *data, size_t size);
#define PF_mpg123_replace_buffer (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,unsigned char *data ,size_t size ))    _ptr[95].ptr)

//MPG123_EXPORT int mpg123_read(mpg123_handle *mh,	unsigned char *outmemory, size_t outmemsize, size_t *done );
#define PF_mpg123_read (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,unsigned char *outmemory ,size_t outmemsize ,size_t *done  ))    _ptr[96].ptr)

//MPG123_EXPORT size_t mpg123_strlen(mpg123_string *sb, int utf8);
#define PF_mpg123_strlen (* (MPG123_EXPORT size_t (*)(mpg123_string *sb ,int utf8 ))    _ptr[97].ptr)

//MPG123_EXPORT int mpg123_param( mpg123_handle *mh,	enum mpg123_parms type, long value, double fvalue );
#define PF_mpg123_param (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,enum mpg123_parms type ,long value ,double fvalue  ))    _ptr[98].ptr)

//MPG123_EXPORT off_t mpg123_feedseek( mpg123_handle *mh,	off_t sampleoff, int whence, off_t *input_offset );
#define PF_mpg123_feedseek (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ,off_t sampleoff ,int whence ,off_t *input_offset  ))    _ptr[99].ptr)

//MPG123_EXPORT off_t mpg123_seek_frame( mpg123_handle *mh,	off_t frameoff, int whence );
#define PF_mpg123_seek_frame (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ,off_t frameoff ,int whence  ))    _ptr[100].ptr)

//MPG123_EXPORT int mpg123_icy(mpg123_handle *mh, char **icy_meta);
#define PF_mpg123_icy (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,char **icy_meta ))    _ptr[101].ptr)

//MPG123_EXPORT char* mpg123_icy2utf8(const char* icy_text);
#define PF_mpg123_icy2utf8 (* (MPG123_EXPORT char* (*)(const char* icy_text ))     _ptr[102].ptr)

//MPG123_EXPORT off_t mpg123_framepos(mpg123_handle *mh);
#define PF_mpg123_framepos (* (MPG123_EXPORT off_t (*)(mpg123_handle *mh ))        _ptr[103].ptr)

//MPG123_EXPORT int mpg123_scan(mpg123_handle *mh);
#define PF_mpg123_scan (* (MPG123_EXPORT int (*)(mpg123_handle *mh ))              _ptr[104].ptr)

//MPG123_EXPORT int mpg123_set_filesize(mpg123_handle *mh, off_t size);
#define PF_mpg123_set_filesize (* (MPG123_EXPORT int (*)(mpg123_handle *mh ,off_t size ))    _ptr[105].ptr)


// -------------- all funcs array ---------------
struct FUNCS_ {
  const char *name;
  void  (*ptr)(void);
};

inline const FUNCS_* load()
{
    union
    {
    void *p;
    void (*fp)(void);
    } u;

    static struct FUNCS_ _funcs[] ={
        {"mpg123_clip", nullptr},
        {"mpg123_volume_change", nullptr},
        {"mpg123_meta_free", nullptr},
        {"mpg123_decode_frame", nullptr},
        {"mpg123_feature", nullptr},
        {"mpg123_framebyframe_decode", nullptr},
        {"mpg123_decoder", nullptr},
        {"mpg123_decode", nullptr},
        {"mpg123_decode_frame", nullptr},
        {"mpg123_open_fd", nullptr},
        {"mpg123_chomp_string", nullptr},
        {"mpg123_getstate", nullptr},
        {"mpg123_reset_eq", nullptr},
        {"mpg123_framebyframe_next", nullptr},
        {"mpg123_format_all", nullptr},
        {"mpg123_new_pars", nullptr},
        {"mpg123_add_substring", nullptr},
        {"mpg123_timeframe", nullptr},
        {"mpg123_format_none", nullptr},
        {"mpg123_format", nullptr},
        {"mpg123_format_support", nullptr},
        {"mpg123_set_string", nullptr},
        {"mpg123_errcode", nullptr},
        {"mpg123_grow_string", nullptr},
        {"mpg123_open_handle", nullptr},
        {"mpg123_info", nullptr},
        {"mpg123_tell_stream", nullptr},
        {"mpg123_open", nullptr},
        {"mpg123_open_feed", nullptr},
        {"mpg123_delete_pars", nullptr},
        {"mpg123_free_string", nullptr},
        {"mpg123_length", nullptr},
        {"mpg123_replace_reader_handle", nullptr},
        {"mpg123_feed", nullptr},
        {"mpg123_feedseek", nullptr},
        {"mpg123_getformat2", nullptr},
        {"mpg123_format_support", nullptr},
        {"mpg123_init", nullptr},
        {"mpg123_init_string", nullptr},
        {"mpg123_framebyframe_decode", nullptr},
        {"mpg123_fmt_all", nullptr},
        {"mpg123_spf", nullptr},
        {"mpg123_getparam", nullptr},
        {"mpg123_tellframe", nullptr},
        {"mpg123_set_index", nullptr},
        {"mpg123_index", nullptr},
        {"mpg123_add_string", nullptr},
        {"mpg123_id3", nullptr},
        {"mpg123_getformat", nullptr},
        {"mpg123_getformat2", nullptr},
        {"mpg123_fmt_none", nullptr},
        {"mpg123_fmt", nullptr},
        {"mpg123_fmt_support", nullptr},
        {"mpg123_getvolume", nullptr},
        {"mpg123_safe_buffer", nullptr},
        {"mpg123_tell", nullptr},
        {"mpg123_parnew", nullptr},
        {"mpg123_position", nullptr},
        {"mpg123_delete", nullptr},
        {"mpg123_getparam", nullptr},
        {"mpg123_getpar", nullptr},
        {"mpg123_set_substring", nullptr},
        {"mpg123_volume", nullptr},
        {"mpg123_tpf", nullptr},
        {"mpg123_copy_string", nullptr},
        {"mpg123_encodings", nullptr},
        {"mpg123_framedata", nullptr},
        {"mpg123_replace_reader", nullptr},
        {"mpg123_replace_reader_handle", nullptr},
        {"mpg123_encsize", nullptr},
        {"mpg123_close", nullptr},
        {"mpg123_resize_string", nullptr},
        {"mpg123_new", nullptr},
        {"mpg123_rates", nullptr},
        {"mpg123_exit", nullptr},
        {"mpg123_meta_check", nullptr},
        {"mpg123_framelength", nullptr},
        {"mpg123_outblock", nullptr},
        {"mpg123_seek", nullptr},
        {"mpg123_seek_frame", nullptr},
        {"mpg123_store_utf8", nullptr},
        {"mpg123_geteq", nullptr},
        {"mpg123_eq", nullptr},
        {"mpg123_param", nullptr},
        {"mpg123_parnew", nullptr},
        {"mpg123_fmt", nullptr},
        {"mpg123_par", nullptr},
        {"mpg123_getpar", nullptr},
        {"mpg123_replace_reader_handle", nullptr},
        {"mpg123_replace_buffer", nullptr},
        {"mpg123_read", nullptr},
        {"mpg123_strlen", nullptr},
        {"mpg123_param", nullptr},
        {"mpg123_feedseek", nullptr},
        {"mpg123_seek_frame", nullptr},
        {"mpg123_icy", nullptr},
        {"mpg123_icy2utf8", nullptr},
        {"mpg123_framepos", nullptr},
        {"mpg123_scan", nullptr},
        {"mpg123_set_filesize", nullptr},
        {nullptr, nullptr}
    };
    void  *dll_handle;
    if ((dll_handle = dlopen("/usr/lib/x86_64-linux-gnu/libmpg123.so", RTLD_LAZY)) == 0)
    {
        perror("cannot load:");
        return nullptr;
    }
    struct FUNCS_ *fp = _funcs;
    for (; fp->name != nullptr; fp++)
    {
        u.p = dlsym(dll_handle, fp->name);
        if (u.fp == 0)
        {
            perror("cannot load:");
        }
        else
        {
            fp->ptr = u.fp;
        }
    }
    return _funcs;
}
#endif // LIB_RESOLVER
/*
 add this to cpp 
const FUNCS_* _ptr; // global var
  _ptr = load(); // in main() 
*/
 
