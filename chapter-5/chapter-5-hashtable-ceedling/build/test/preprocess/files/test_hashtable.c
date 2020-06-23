#include "build/temp/_test_hashtable.c"
#include "src/khash.h"
#include "src/uthash.h"
#include "src/hashtable.h"
#include "/home/steven/.gem/ruby/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




struct hash_struct{

  char name[10];

  int id;

  UT_hash_handle hh;

};



struct hash_struct* users = 

                           ((void *)0)

                               ;



void setUp(void)

{

}



void tearDown(void)

{

}



void test_when_new_hash_table_is_created_its_size_is_zero(void)

{

  int num_users = ((users != 

                 ((void *)0)

                 )?((users)->hh.tbl->num_items):0U);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((num_users)), (

 ((void *)0)

 ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

}



void test_when_one_item_is_added_to_hast_table_its_size_is_1(void)

{

  const char* names = "steven";

  struct hash_struct *s;

  s = (struct hash_struct*)malloc(sizeof *s);

  strcpy(s->name, names);

  s->id = 0;

  do { unsigned _uthash_hastr_keylen = (unsigned)strlen((s)->name); do { unsigned _ha_hashv; do { do { unsigned _hj_i,_hj_j,_hj_k; unsigned const char *_hj_key=(unsigned const char*)(&((s)->name[0])); _ha_hashv = 0xfeedbeefu; _hj_i = _hj_j = 0x9e3779b9u; _hj_k = (unsigned)(_uthash_hastr_keylen); while (_hj_k >= 12U) { _hj_i += (_hj_key[0] + ( (unsigned)_hj_key[1] << 8 ) + ( (unsigned)_hj_key[2] << 16 ) + ( (unsigned)_hj_key[3] << 24 ) ); _hj_j += (_hj_key[4] + ( (unsigned)_hj_key[5] << 8 ) + ( (unsigned)_hj_key[6] << 16 ) + ( (unsigned)_hj_key[7] << 24 ) ); _ha_hashv += (_hj_key[8] + ( (unsigned)_hj_key[9] << 8 ) + ( (unsigned)_hj_key[10] << 16 ) + ( (unsigned)_hj_key[11] << 24 ) ); do { _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 13 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 12 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 3 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 15 ); } while (0); _hj_key += 12; _hj_k -= 12U; } _ha_hashv += (unsigned)(_uthash_hastr_keylen); switch ( _hj_k ) { case 11: _ha_hashv += ( (unsigned)_hj_key[10] << 24 ); case 10: _ha_hashv += ( (unsigned)_hj_key[9] << 16 ); case 9: _ha_hashv += ( (unsigned)_hj_key[8] << 8 ); case 8: _hj_j += ( (unsigned)_hj_key[7] << 24 ); case 7: _hj_j += ( (unsigned)_hj_key[6] << 16 ); case 6: _hj_j += ( (unsigned)_hj_key[5] << 8 ); case 5: _hj_j += _hj_key[4]; case 4: _hj_i += ( (unsigned)_hj_key[3] << 24 ); case 3: _hj_i += ( (unsigned)_hj_key[2] << 16 ); case 2: _hj_i += ( (unsigned)_hj_key[1] << 8 ); case 1: _hj_i += _hj_key[0]; } do { _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 13 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 12 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 3 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 15 ); } while (0); } while (0); } while (0); do { (s)->hh.hashv = (_ha_hashv); (s)->hh.key = (char*) (&((s)->name[0])); (s)->hh.keylen = (unsigned) (_uthash_hastr_keylen); if (!(users)) { (s)->hh.next = 

 ((void *)0)

 ; (s)->hh.prev = 

 ((void *)0)

 ; do { (s)->hh.tbl = (UT_hash_table*)malloc(sizeof(UT_hash_table)); if (!(s)->hh.tbl) { exit(-1); } else { memset((s)->hh.tbl,'\0',sizeof(UT_hash_table)); (s)->hh.tbl->tail = &((s)->hh); (s)->hh.tbl->num_buckets = 32U; (s)->hh.tbl->log2_num_buckets = 5U; (s)->hh.tbl->hho = (char*)(&(s)->hh) - (char*)(s); (s)->hh.tbl->buckets = (UT_hash_bucket*)malloc(32U * sizeof(struct UT_hash_bucket)); (s)->hh.tbl->signature = 0xa0111fe1u; if (!(s)->hh.tbl->buckets) { exit(-1); free((s)->hh.tbl); } else { memset((s)->hh.tbl->buckets,'\0',32U * sizeof(struct UT_hash_bucket)); ; } } } while (0); (users) = (s); } else { (s)->hh.tbl = (users)->hh.tbl; do { (s)->hh.next = 

 ((void *)0)

 ; (s)->hh.prev = ((void*)(((char*)((users)->hh.tbl->tail)) - (((users)->hh.tbl)->hho))); (users)->hh.tbl->tail->next = (s); (users)->hh.tbl->tail = &((s)->hh); } while (0); } do { unsigned _ha_bkt; (users)->hh.tbl->num_items++; do { _ha_bkt = ((_ha_hashv) & (((users)->hh.tbl->num_buckets) - 1U)); } while (0); do { UT_hash_bucket *_ha_head = &((users)->hh.tbl->buckets[_ha_bkt]); _ha_head->count++; (&(s)->hh)->hh_next = _ha_head->hh_head; (&(s)->hh)->hh_prev = 

 ((void *)0)

 ; if (_ha_head->hh_head != 

 ((void *)0)

 ) { _ha_head->hh_head->hh_prev = (&(s)->hh); } _ha_head->hh_head = (&(s)->hh); if ((_ha_head->count >= ((_ha_head->expand_mult + 1U) * 10U)) && !(&(s)->hh)->tbl->noexpand) { do { unsigned _he_bkt; unsigned _he_bkt_i; struct UT_hash_handle *_he_thh, *_he_hh_nxt; UT_hash_bucket *_he_new_buckets, *_he_newbkt; _he_new_buckets = (UT_hash_bucket*)malloc(2UL * ((&(s)->hh)->tbl)->num_buckets * sizeof(struct UT_hash_bucket)); if (!_he_new_buckets) { exit(-1); } else { memset(_he_new_buckets,'\0',2UL * ((&(s)->hh)->tbl)->num_buckets * sizeof(struct UT_hash_bucket)); ((&(s)->hh)->tbl)->ideal_chain_maxlen = (((&(s)->hh)->tbl)->num_items >> (((&(s)->hh)->tbl)->log2_num_buckets+1U)) + (((((&(s)->hh)->tbl)->num_items & ((((&(s)->hh)->tbl)->num_buckets*2U)-1U)) != 0U) ? 1U : 0U); ((&(s)->hh)->tbl)->nonideal_items = 0; for (_he_bkt_i = 0; _he_bkt_i < ((&(s)->hh)->tbl)->num_buckets; _he_bkt_i++) { _he_thh = ((&(s)->hh)->tbl)->buckets[ _he_bkt_i ].hh_head; while (_he_thh != 

 ((void *)0)

 ) { _he_hh_nxt = _he_thh->hh_next; do { _he_bkt = ((_he_thh->hashv) & ((((&(s)->hh)->tbl)->num_buckets * 2U) - 1U)); } while (0); _he_newbkt = &(_he_new_buckets[_he_bkt]); if (++(_he_newbkt->count) > ((&(s)->hh)->tbl)->ideal_chain_maxlen) { ((&(s)->hh)->tbl)->nonideal_items++; if (_he_newbkt->count > _he_newbkt->expand_mult * ((&(s)->hh)->tbl)->ideal_chain_maxlen) { _he_newbkt->expand_mult++; } } _he_thh->hh_prev = 

 ((void *)0)

 ; _he_thh->hh_next = _he_newbkt->hh_head; if (_he_newbkt->hh_head != 

 ((void *)0)

 ) { _he_newbkt->hh_head->hh_prev = _he_thh; } _he_newbkt->hh_head = _he_thh; _he_thh = _he_hh_nxt; } } free(((&(s)->hh)->tbl)->buckets); ((&(s)->hh)->tbl)->num_buckets *= 2U; ((&(s)->hh)->tbl)->log2_num_buckets++; ((&(s)->hh)->tbl)->buckets = _he_new_buckets; ((&(s)->hh)->tbl)->ineff_expands = (((&(s)->hh)->tbl)->nonideal_items > (((&(s)->hh)->tbl)->num_items >> 1)) ? (((&(s)->hh)->tbl)->ineff_expands+1U) : 0U; if (((&(s)->hh)->tbl)->ineff_expands > 1U) { ((&(s)->hh)->tbl)->noexpand = 1; ; } ; } } while (0); } } while (0); ; ; } while (0); ; } while (0); } while (0); } while (0);



  int num_users = ((users != 

                 ((void *)0)

                 )?((users)->hh.tbl->num_items):0U);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((num_users)), (

 ((void *)0)

 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);

}



typedef struct kh_32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; char *vals; } kh_32_t; static inline __attribute__ ((__unused__)) kh_32_t *kh_init_32(void) { return (kh_32_t*)calloc(1,sizeof(kh_32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_32(kh_32_t *h) { if (h) { free((void *)h->keys); free(h->flags); free((void *)h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_32(kh_32_t *h) { if (h && h->flags) { memset(h->flags, 0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof(khint32_t)); h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_32(const kh_32_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3)? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_32(kh_32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t)(new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t*)malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (!new_flags) return -1; memset(new_flags, 0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t*)realloc((void *)h->keys,new_n_buckets * sizeof(khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { char *new_vals = (char*)realloc((void *)h->vals,new_n_buckets * sizeof(char)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; char val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { char tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t*)realloc((void *)h->keys,new_n_buckets * sizeof(khint32_t)); if (1) h->vals = (char*)realloc((void *)h->vals,new_n_buckets * sizeof(char)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t)(h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_32(kh_32_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size<<1)) { if (kh_resize_32(h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_32(h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_32(kh_32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } }



void test_creating_empty_table_size_is_zero(void)

{

  khiter_t k;

  int ret;

  kh_32_t* h = kh_init_32();



  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

}



void test_creating_one_item_size_is_one(void)

{

  khiter_t k;

  int ret;

  kh_32_t* h = kh_init_32();

  k = kh_put_32(h, 5, &ret);



  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);

}



typedef struct kh_str_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; int *vals; } kh_str_t; static inline __attribute__ ((__unused__)) kh_str_t *kh_init_str(void) { return (kh_str_t*)calloc(1,sizeof(kh_str_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_str(kh_str_t *h) { if (h) { free((void *)h->keys); free(h->flags); free((void *)h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_str(kh_str_t *h) { if (h && h->flags) { memset(h->flags, 0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof(khint32_t)); h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_str(const kh_str_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3)? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_str(kh_str_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t)(new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t*)malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (!new_flags) return -1; memset(new_flags, 0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t*)realloc((void *)h->keys,new_n_buckets * sizeof(kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { int *new_vals = (int*)realloc((void *)h->vals,new_n_buckets * sizeof(int)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; int val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { int tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t*)realloc((void *)h->keys,new_n_buckets * sizeof(kh_cstr_t)); if (1) h->vals = (int*)realloc((void *)h->vals,new_n_buckets * sizeof(int)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t)(h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_str(kh_str_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size<<1)) { if (kh_resize_str(h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_str(h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_str(kh_str_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } }



void test_creating_hash_table_for_string_keys(void)

{

  khiter_t k;

  int ret;

  kh_str_t* h;

  h = kh_init_str();





  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

}



void test_adding_single_element_in_hash_table_for_string_keys(void)

{

  khiter_t k;

  int ret;

  kh_str_t* h;

  h = kh_init_str();



  k = kh_put_str(h, "steven", &ret);



  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(89), UNITY_DISPLAY_STYLE_INT);

}



void test_testing_value_and_get_for_string_keys(void)

{

  khiter_t k;

  int ret;

  kh_str_t* h;

  h = kh_init_str();



  k = kh_put_str(h, "steven", &ret);

  ((h)->vals[k]) = 1234;



  k = kh_get_str(h, "steven");

  int ret_value = ((h)->vals[k]);



  UnityAssertEqualNumber((UNITY_INT)((1234)), (UNITY_INT)((ret_value)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_INT);

}



typedef struct kh_array_of_strings_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; char** *vals; } kh_array_of_strings_t; static inline __attribute__ ((__unused__)) kh_array_of_strings_t *kh_init_array_of_strings(void) { return (kh_array_of_strings_t*)calloc(1,sizeof(kh_array_of_strings_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_array_of_strings(kh_array_of_strings_t *h) { if (h) { free((void *)h->keys); free(h->flags); free((void *)h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_array_of_strings(kh_array_of_strings_t *h) { if (h && h->flags) { memset(h->flags, 0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof(khint32_t)); h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_array_of_strings(const kh_array_of_strings_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3)? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_array_of_strings(kh_array_of_strings_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t)(new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t*)malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (!new_flags) return -1; memset(new_flags, 0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t*)realloc((void *)h->keys,new_n_buckets * sizeof(kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { char** *new_vals = (char***)realloc((void *)h->vals,new_n_buckets * sizeof(char**)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; char** val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { char** tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t*)realloc((void *)h->keys,new_n_buckets * sizeof(kh_cstr_t)); if (1) h->vals = (char***)realloc((void *)h->vals,new_n_buckets * sizeof(char**)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t)(h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_array_of_strings(kh_array_of_strings_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size<<1)) { if (kh_resize_array_of_strings(h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_array_of_strings(h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_array_of_strings(kh_array_of_strings_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } }

void test_testing_hash_table_where_value_is_array_of_strings(void)

{

  khiter_t k;

  int ret;

  kh_array_of_strings_t* h;

  h = kh_init_array_of_strings();



  char* graph[3] = {"alice", "bob", "claire"};

  k = kh_put_array_of_strings(h, "you", &ret);

  ((h)->vals[k]) = (char**)graph;



  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_INT);





  k = kh_get_array_of_strings(h, "you");

  char** array_test = ((h)->vals[k]);



  char expected_string[] = "alice";

  char expected_string_1[] = "bob";

  char expected_string_2[] = "claire";



  UnityAssertEqualString((const char*)((expected_string)), (const char*)((array_test[0])), (

 ((void *)0)

 ), (UNITY_UINT)(131));

  UnityAssertEqualString((const char*)((expected_string_1)), (const char*)((array_test[1])), (

 ((void *)0)

 ), (UNITY_UINT)(132));

  UnityAssertEqualString((const char*)((expected_string_2)), (const char*)((array_test[2])), (

 ((void *)0)

 ), (UNITY_UINT)(133));

}



struct array_struct {

  int size;

  char** strings;

};



typedef struct kh_array_of_struct_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; struct array_struct *vals; } kh_array_of_struct_t; static inline __attribute__ ((__unused__)) kh_array_of_struct_t *kh_init_array_of_struct(void) { return (kh_array_of_struct_t*)calloc(1,sizeof(kh_array_of_struct_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_array_of_struct(kh_array_of_struct_t *h) { if (h) { free((void *)h->keys); free(h->flags); free((void *)h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_array_of_struct(kh_array_of_struct_t *h) { if (h && h->flags) { memset(h->flags, 0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof(khint32_t)); h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_array_of_struct(const kh_array_of_struct_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3)? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_array_of_struct(kh_array_of_struct_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t)(new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t*)malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (!new_flags) return -1; memset(new_flags, 0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof(khint32_t)); if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t*)realloc((void *)h->keys,new_n_buckets * sizeof(kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { struct array_struct *new_vals = (struct array_struct*)realloc((void *)h->vals,new_n_buckets * sizeof(struct array_struct)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; struct array_struct val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { struct array_struct tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t*)realloc((void *)h->keys,new_n_buckets * sizeof(kh_cstr_t)); if (1) h->vals = (struct array_struct*)realloc((void *)h->vals,new_n_buckets * sizeof(struct array_struct)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t)(h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_array_of_struct(kh_array_of_struct_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size<<1)) { if (kh_resize_array_of_struct(h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_array_of_struct(h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_array_of_struct(kh_array_of_struct_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

void test_testing_hash_table_where_value_is_array_structs_containing_size_of_array_and_array(void)

{

  khiter_t k;

  int ret;

  kh_array_of_struct_t* h = kh_init_array_of_struct();



  char* temp_graph[3] = {"alice", "bob", "claire"};

  struct array_struct graph;

  graph.size = 3;

  graph.strings = temp_graph;



  k = kh_put_array_of_struct(h, "you", &ret);

  ((h)->vals[k]) = (struct array_struct)graph;



  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_INT);



  k = kh_get_array_of_struct(h, "you");

  struct array_struct array_test = ((h)->vals[k]);



  int array_size = array_test.size;

  UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((array_size)), (

 ((void *)0)

 ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualString((const char*)(("alice")), (const char*)((array_test.strings[0])), (

 ((void *)0)

 ), (UNITY_UINT)(165));

  UnityAssertEqualString((const char*)(("bob")), (const char*)((array_test.strings[1])), (

 ((void *)0)

 ), (UNITY_UINT)(166));

  UnityAssertEqualString((const char*)(("claire")), (const char*)((array_test.strings[2])), (

 ((void *)0)

 ), (UNITY_UINT)(167));

}



void test_testing_something(void) {

   khiter_t k;

  int ret;

  kh_array_of_struct_t* h = kh_init_array_of_struct();



  char* temp_graph[3] = {"alice", "bob", "claire"};

  char* temp_graph_2[] = {"anuj", "peggy"};



  struct array_struct graph;

  graph.size = 3;

  graph.strings = temp_graph;

  struct array_struct graph_bob;

  graph_bob.size = 2;

  graph_bob.strings = temp_graph_2;



  k = kh_put_array_of_struct(h, "you", &ret);

  ((h)->vals[k]) = (struct array_struct)graph;



  int size = ((h)->size);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((size)), (

 ((void *)0)

 ), (UNITY_UINT)(189), UNITY_DISPLAY_STYLE_INT);



  k = kh_get_array_of_struct(h, "you");

  struct array_struct array_test = ((h)->vals[k]);



  k = kh_put_array_of_struct(h, array_test.strings[0], &ret);

  ((h)->vals[k]) = graph_bob;



  k = kh_get_array_of_struct(h, "alice");

  array_test = ((h)->vals[k]);



  int array_size = array_test.size;

  UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((array_size)), (

 ((void *)0)

 ), (UNITY_UINT)(201), UNITY_DISPLAY_STYLE_INT);



  UnityAssertEqualString((const char*)(("anuj")), (const char*)((array_test.strings[0])), (

 ((void *)0)

 ), (UNITY_UINT)(203));

  UnityAssertEqualString((const char*)(("peggy")), (const char*)((array_test.strings[1])), (

 ((void *)0)

 ), (UNITY_UINT)(204));

}
