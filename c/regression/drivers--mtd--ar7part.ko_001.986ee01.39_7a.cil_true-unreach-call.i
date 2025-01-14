extern void abort(void); 
void reach_error(){}

/* Generated by CIL v. 1.5.1 */
/* print_CIL_Input is false */

typedef __builtin_va_list __gnuc_va_list[1U];
typedef __gnuc_va_list va_list[1U];
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long long __kernel_loff_t;
typedef unsigned char __u8;
typedef unsigned short __u16;
typedef unsigned int __u32;
typedef unsigned long long __u64;
typedef __kernel_mode_t mode_t;
typedef __kernel_loff_t loff_t;
typedef __kernel_size_t size_t;
typedef __kernel_ssize_t ssize_t;
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef __u32 u_int32_t;
typedef __u8 uint8_t;
typedef __u32 uint32_t;
struct module;
struct bug_entry {
   unsigned long bug_addr ;
   char const   *file ;
   unsigned short line ;
   unsigned short flags ;
};
struct task_struct;
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
struct __anonstruct_raw_spinlock_t_22 {
   unsigned int slock ;
};
typedef struct __anonstruct_raw_spinlock_t_22 raw_spinlock_t;
struct lockdep_map;
struct stack_trace {
   unsigned int nr_entries ;
   unsigned int max_entries ;
   unsigned long *entries ;
   int skip ;
};
struct lockdep_subclass_key {
   char __one_byte ;
};
struct lock_class_key {
   struct lockdep_subclass_key subkeys[8U] ;
};
struct lock_class {
   struct list_head hash_entry ;
   struct list_head lock_entry ;
   struct lockdep_subclass_key *key ;
   unsigned int subclass ;
   unsigned long usage_mask ;
   struct stack_trace usage_traces[9U] ;
   struct list_head locks_after ;
   struct list_head locks_before ;
   unsigned int version ;
   unsigned long ops ;
   char const   *name ;
   int name_version ;
   unsigned long contention_point[4U] ;
};
struct lockdep_map {
   struct lock_class_key *key ;
   struct lock_class *class_cache ;
   char const   *name ;
   int cpu ;
};
struct __anonstruct_spinlock_t_24 {
   raw_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
typedef struct __anonstruct_spinlock_t_24 spinlock_t;
struct __anonstruct_atomic_t_26 {
   int counter ;
};
typedef struct __anonstruct_atomic_t_26 atomic_t;
struct __anonstruct_atomic64_t_27 {
   long counter ;
};
typedef struct __anonstruct_atomic64_t_27 atomic64_t;
typedef atomic64_t atomic_long_t;
struct notifier_block {
   int (*notifier_call)(struct notifier_block * , unsigned long  , void * ) ;
   struct notifier_block *next ;
   int priority ;
};
struct kobject;
struct attribute {
   char const   *name ;
   struct module *owner ;
   mode_t mode ;
};
struct attribute_group {
   char const   *name ;
   int (*is_visible)(struct kobject * , struct attribute * , int  ) ;
   struct attribute **attrs ;
};
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const   * , size_t  ) ;
};
struct kref {
   atomic_t refcount ;
};
struct kset;
struct kobj_type;
struct sysfs_dirent;
struct kobject {
   char const   *name ;
   struct kref kref ;
   struct list_head entry ;
   struct kobject *parent ;
   struct kset *kset ;
   struct kobj_type *ktype ;
   struct sysfs_dirent *sd ;
   unsigned char state_initialized : 1 ;
   unsigned char state_in_sysfs : 1 ;
   unsigned char state_add_uevent_sent : 1 ;
   unsigned char state_remove_uevent_sent : 1 ;
};
struct kobj_type {
   void (*release)(struct kobject * ) ;
   struct sysfs_ops *sysfs_ops ;
   struct attribute **default_attrs ;
};
struct kobj_uevent_env {
   char *envp[32U] ;
   int envp_idx ;
   char buf[2048U] ;
   int buflen ;
};
struct kset_uevent_ops {
   int (*filter)(struct kset * , struct kobject * ) ;
   char const   *(*name)(struct kset * , struct kobject * ) ;
   int (*uevent)(struct kset * , struct kobject * , struct kobj_uevent_env * ) ;
};
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops *uevent_ops ;
};
typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
struct elf64_sym {
   Elf64_Word st_name ;
   unsigned char st_info ;
   unsigned char st_other ;
   Elf64_Half st_shndx ;
   Elf64_Addr st_value ;
   Elf64_Xword st_size ;
};
typedef struct elf64_sym Elf64_Sym;
struct marker;
typedef void marker_probe_func(void * , void * , char const   * , va_list * );
struct marker_probe_closure {
   marker_probe_func *func ;
   void *probe_private ;
};
struct marker {
   char const   *name ;
   char const   *format ;
   char state ;
   char ptype ;
   void (*call)(struct marker  const  * , void * , char const   *  , ...) ;
   struct marker_probe_closure single ;
   struct marker_probe_closure *multi ;
};
struct __anonstruct_local_t_86 {
   atomic_long_t a ;
};
typedef struct __anonstruct_local_t_86 local_t;
struct mod_arch_specific {

};
struct kernel_symbol {
   unsigned long value ;
   char const   *name ;
};
struct module_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct module_attribute * , struct module * , char * ) ;
   ssize_t (*store)(struct module_attribute * , struct module * , char const   * ,
                    size_t  ) ;
   void (*setup)(struct module * , char const   * ) ;
   int (*test)(struct module * ) ;
   void (*free)(struct module * ) ;
};
struct module_kobject {
   struct kobject kobj ;
   struct module *mod ;
   struct kobject *drivers_dir ;
};
struct exception_table_entry;
struct module_ref {
   local_t count ;
};
enum module_state {
    MODULE_STATE_LIVE = 0,
    MODULE_STATE_COMING = 1,
    MODULE_STATE_GOING = 2
} ;
struct module_sect_attr {
   struct module_attribute mattr ;
   char *name ;
   unsigned long address ;
};
struct module_sect_attrs {
   struct attribute_group grp ;
   int nsections ;
   struct module_sect_attr attrs[0U] ;
};
struct module_param_attrs;
struct module_notes_attrs;
struct module {
   enum module_state state ;
   struct list_head list ;
   char name[56U] ;
   struct module_kobject mkobj ;
   struct module_param_attrs *param_attrs ;
   struct module_attribute *modinfo_attrs ;
   char const   *version ;
   char const   *srcversion ;
   struct kobject *holders_dir ;
   struct kernel_symbol  const  *syms ;
   unsigned int num_syms ;
   unsigned long const   *crcs ;
   struct kernel_symbol  const  *gpl_syms ;
   unsigned int num_gpl_syms ;
   unsigned long const   *gpl_crcs ;
   struct kernel_symbol  const  *unused_syms ;
   unsigned int num_unused_syms ;
   unsigned long const   *unused_crcs ;
   struct kernel_symbol  const  *unused_gpl_syms ;
   unsigned int num_unused_gpl_syms ;
   unsigned long const   *unused_gpl_crcs ;
   struct kernel_symbol  const  *gpl_future_syms ;
   unsigned int num_gpl_future_syms ;
   unsigned long const   *gpl_future_crcs ;
   unsigned int num_exentries ;
   struct exception_table_entry  const  *extable ;
   int (*init)(void) ;
   void *module_init ;
   void *module_core ;
   unsigned long init_size ;
   unsigned long core_size ;
   unsigned long init_text_size ;
   unsigned long core_text_size ;
   void *unwind_info ;
   struct mod_arch_specific arch ;
   unsigned int taints ;
   struct list_head bug_list ;
   struct bug_entry *bug_table ;
   unsigned int num_bugs ;
   struct module_ref ref[8U] ;
   struct list_head modules_which_use_me ;
   struct task_struct *waiter ;
   void (*exit)(void) ;
   Elf64_Sym *symtab ;
   unsigned long num_symtab ;
   char *strtab ;
   struct module_sect_attrs *sect_attrs ;
   struct module_notes_attrs *notes_attrs ;
   void *percpu ;
   char *args ;
   struct marker *markers ;
   unsigned int num_markers ;
};
struct kvec {
   void *iov_base ;
   size_t iov_len ;
};
struct otp_info {
   uint32_t start ;
   uint32_t length ;
   uint32_t locked ;
};
struct nand_oobfree {
   uint32_t offset ;
   uint32_t length ;
};
struct nand_ecclayout {
   uint32_t eccbytes ;
   uint32_t eccpos[64U] ;
   uint32_t oobavail ;
   struct nand_oobfree oobfree[8U] ;
};
struct mtd_ecc_stats {
   uint32_t corrected ;
   uint32_t failed ;
   uint32_t badblocks ;
   uint32_t bbtblocks ;
};
struct mtd_info;
struct erase_info {
   struct mtd_info *mtd ;
   u_int32_t addr ;
   u_int32_t len ;
   u_int32_t fail_addr ;
   u_long time ;
   u_long retries ;
   u_int dev ;
   u_int cell ;
   void (*callback)(struct erase_info * ) ;
   u_long priv ;
   u_char state ;
   struct erase_info *next ;
};
struct mtd_erase_region_info {
   u_int32_t offset ;
   u_int32_t erasesize ;
   u_int32_t numblocks ;
   unsigned long *lockmap ;
};
enum ldv_9407 {
    MTD_OOB_PLACE = 0,
    MTD_OOB_AUTO = 1,
    MTD_OOB_RAW = 2
} ;
typedef enum ldv_9407 mtd_oob_mode_t;
struct mtd_oob_ops {
   mtd_oob_mode_t mode ;
   size_t len ;
   size_t retlen ;
   size_t ooblen ;
   size_t oobretlen ;
   uint32_t ooboffs ;
   uint8_t *datbuf ;
   uint8_t *oobbuf ;
};
struct mtd_info {
   u_char type ;
   u_int32_t flags ;
   u_int32_t size ;
   u_int32_t erasesize ;
   u_int32_t writesize ;
   u_int32_t oobsize ;
   u_int32_t oobavail ;
   char *name ;
   int index ;
   struct nand_ecclayout *ecclayout ;
   int numeraseregions ;
   struct mtd_erase_region_info *eraseregions ;
   int (*erase)(struct mtd_info * , struct erase_info * ) ;
   int (*point)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char ** ) ;
   void (*unpoint)(struct mtd_info * , u_char * , loff_t  , size_t  ) ;
   int (*read)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char * ) ;
   int (*write)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char const   * ) ;
   int (*panic_write)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char const   * ) ;
   int (*read_oob)(struct mtd_info * , loff_t  , struct mtd_oob_ops * ) ;
   int (*write_oob)(struct mtd_info * , loff_t  , struct mtd_oob_ops * ) ;
   int (*get_fact_prot_info)(struct mtd_info * , struct otp_info * , size_t  ) ;
   int (*read_fact_prot_reg)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char * ) ;
   int (*get_user_prot_info)(struct mtd_info * , struct otp_info * , size_t  ) ;
   int (*read_user_prot_reg)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char * ) ;
   int (*write_user_prot_reg)(struct mtd_info * , loff_t  , size_t  , size_t * , u_char * ) ;
   int (*lock_user_prot_reg)(struct mtd_info * , loff_t  , size_t  ) ;
   int (*writev)(struct mtd_info * , struct kvec  const  * , unsigned long  , loff_t  ,
                 size_t * ) ;
   void (*sync)(struct mtd_info * ) ;
   int (*lock)(struct mtd_info * , loff_t  , size_t  ) ;
   int (*unlock)(struct mtd_info * , loff_t  , size_t  ) ;
   int (*suspend)(struct mtd_info * ) ;
   void (*resume)(struct mtd_info * ) ;
   int (*block_isbad)(struct mtd_info * , loff_t  ) ;
   int (*block_markbad)(struct mtd_info * , loff_t  ) ;
   struct notifier_block reboot_notifier ;
   struct mtd_ecc_stats ecc_stats ;
   int subpage_sft ;
   void *priv ;
   struct module *owner ;
   int usecount ;
   int (*get_device)(struct mtd_info * ) ;
   void (*put_device)(struct mtd_info * ) ;
};
struct mtd_partition {
   char *name ;
   u_int32_t size ;
   u_int32_t offset ;
   u_int32_t mask_flags ;
   struct nand_ecclayout *ecclayout ;
   struct mtd_info **mtdp ;
};
struct mtd_part_parser {
   struct list_head list ;
   struct module *owner ;
   char const   *name ;
   int (*parse_fn)(struct mtd_info * , struct mtd_partition ** , unsigned long  ) ;
};
struct ar7_bin_rec {
   unsigned int checksum ;
   unsigned int length ;
   unsigned int address ;
};
typedef int ldv_func_ret_type___1;
extern int printk(char const   *  , ...) ;
extern int strncmp(char const   * , char const   * , __kernel_size_t  ) ;
extern void __ldv_spin_lock(spinlock_t * ) ;
void ldv___ldv_spin_lock_1(spinlock_t *ldv_func_arg1 ) ;
void ldv___ldv_spin_lock_4(spinlock_t *ldv_func_arg1 ) ;
extern void __ldv_spin_unlock(spinlock_t * ) ;
void ldv___ldv_spin_unlock_2(spinlock_t *ldv_func_arg1 ) ;
void ldv___ldv_spin_unlock_5(spinlock_t *ldv_func_arg1 ) ;
extern int __ldv_spin_trylock(spinlock_t * ) ;
int ldv___ldv_spin_trylock_3(spinlock_t *ldv_func_arg1 ) ;
void ldv_spin_lock_dma_spin_lock(void) ;
void ldv_spin_unlock_dma_spin_lock(void) ;
void ldv_spin_lock_lock_of_NOT_ARG_SIGN(void) ;
void ldv_spin_unlock_lock_of_NOT_ARG_SIGN(void) ;
int ldv_spin_trylock_lock_of_NOT_ARG_SIGN(void) ;
extern struct module __this_module ;
extern int register_mtd_parser(struct mtd_part_parser * ) ;
static struct mtd_partition ar7_parts[4U]  ;
static int create_mtd_partitions(struct mtd_info *master , struct mtd_partition **pparts ,
                                 unsigned long origin ) 
{ 
  struct ar7_bin_rec header ;
  unsigned int offset ;
  size_t len ;
  unsigned int pre_size ;
  unsigned int post_size ;
  unsigned int root_offset ;
  int retries ;
  int tmp ;
  int tmp___0 ;

  {
  pre_size = master->erasesize;
  post_size = 0U;
  root_offset = 917504U;
  retries = 10;
  ar7_parts[0].name = (char *)"loader";
  ar7_parts[0].offset = 0U;
  ar7_parts[0].size = master->erasesize;
  ar7_parts[0].mask_flags = 1024U;
  ar7_parts[1].name = (char *)"config";
  ar7_parts[1].offset = 0U;
  ar7_parts[1].size = master->erasesize;
  ar7_parts[1].mask_flags = 0U;
  ldv_9296: 
  offset = pre_size;
  (*(master->read))(master, (loff_t )offset, 12UL, & len, (u_char *)(& header));
  tmp = strncmp((char const   *)(& header), "TIENV0.8", 8UL);
  if (tmp == 0) {
    ar7_parts[1].offset = pre_size;
  } else {

  }
  if (header.checksum == 4277008962U) {
    goto ldv_9295;
  } else {

  }
  if (header.checksum == 4276949633U) {
    goto ldv_9295;
  } else {

  }
  pre_size = master->erasesize + pre_size;
  tmp___0 = retries;
  retries = retries - 1;
  if (tmp___0 != 0) {
    goto ldv_9296;
  } else {

  }
  ldv_9295: 
  pre_size = offset;
  if (ar7_parts[1].offset == 0U) {
    ar7_parts[1].offset = master->size - master->erasesize;
    post_size = master->erasesize;
  } else {

  }
  switch (header.checksum) {
  case 4277008962U: ;
  goto ldv_9299;
  ldv_9298: 
  offset = (header.length + offset) + 12U;
  (*(master->read))(master, (loff_t )offset, 12UL, & len, (u_char *)(& header));
  ldv_9299: ;
  if (header.length != 0U) {
    goto ldv_9298;
  } else {

  }
  root_offset = offset + 16U;
  goto ldv_9301;
  case 4276949633U: ;
  goto ldv_9304;
  ldv_9303: 
  offset = (header.length + offset) + 12U;
  (*(master->read))(master, (loff_t )offset, 12UL, & len, (u_char *)(& header));
  ldv_9304: ;
  if (header.length != 0U) {
    goto ldv_9303;
  } else {

  }
  root_offset = offset + 271U;
  root_offset = root_offset & 4294967040U;
  goto ldv_9301;
  default: 
  printk("<4>Unknown magic: %08x\n", header.checksum);
  goto ldv_9301;
  }
  ldv_9301: 
  (*(master->read))(master, (loff_t )root_offset, 12UL, & len, (u_char *)(& header));
  if (header.checksum != 1936814952U) {
    root_offset = (master->erasesize + root_offset) - 1U;
    root_offset = - master->erasesize & root_offset;
  } else {

  }
  ar7_parts[2].name = (char *)"linux";
  ar7_parts[2].offset = pre_size;
  ar7_parts[2].size = (master->size - pre_size) - post_size;
  ar7_parts[2].mask_flags = 0U;
  ar7_parts[3].name = (char *)"rootfs";
  ar7_parts[3].offset = root_offset;
  ar7_parts[3].size = (master->size - root_offset) - post_size;
  ar7_parts[3].mask_flags = 0U;
  *pparts = (struct mtd_partition *)(& ar7_parts);
  return (4);
}
}
static struct mtd_part_parser ar7_parser  =    {{0, 0}, & __this_module, "ar7part", & create_mtd_partitions};
static int ar7_parser_init(void) 
{ 
  int tmp ;

  {
  tmp = register_mtd_parser(& ar7_parser);
  return (tmp);
}
}
void ldv_check_final_state(void) ;
void ldv_initialize(void) ;
extern void ldv_handler_precall(void) ;
extern int nondet_int(void) ;
int LDV_IN_INTERRUPT  ;
int main(void) 
{ 
  struct mtd_info *var_group1 ;
  struct mtd_partition **var_group2 ;
  unsigned long var_create_mtd_partitions_0_p2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  LDV_IN_INTERRUPT = 1;
  ldv_initialize();
  ldv_handler_precall();
  tmp = ar7_parser_init();
  if (tmp != 0) {
    goto ldv_final;
  } else {

  }
  goto ldv_9343;
  ldv_9342: 
  tmp___0 = nondet_int();
  switch (tmp___0) {
  case 0: 
  ldv_handler_precall();
  create_mtd_partitions(var_group1, var_group2, var_create_mtd_partitions_0_p2);
  goto ldv_9340;
  default: ;
  goto ldv_9340;
  }
  ldv_9340: ;
  ldv_9343: 
  tmp___1 = nondet_int();
  if (tmp___1 != 0) {
    goto ldv_9342;
  } else {

  }


  ldv_final: 
  ldv_check_final_state();
  return 0;
}
}
void ldv___ldv_spin_lock_1(spinlock_t *ldv_func_arg1 ) 
{ 


  {
  ldv_spin_lock_lock_of_NOT_ARG_SIGN();
  __ldv_spin_lock(ldv_func_arg1);
  return;
}
}
void ldv___ldv_spin_unlock_2(spinlock_t *ldv_func_arg1 ) 
{ 


  {
  ldv_spin_unlock_lock_of_NOT_ARG_SIGN();
  __ldv_spin_unlock(ldv_func_arg1);
  return;
}
}
int ldv___ldv_spin_trylock_3(spinlock_t *ldv_func_arg1 ) 
{ 
  ldv_func_ret_type___1 ldv_func_res ;
  int tmp ;
  int tmp___0 ;

  {
  tmp = __ldv_spin_trylock(ldv_func_arg1);
  ldv_func_res = tmp;
  tmp___0 = ldv_spin_trylock_lock_of_NOT_ARG_SIGN();
  return (tmp___0);
  return (ldv_func_res);
}
}
void ldv___ldv_spin_lock_4(spinlock_t *ldv_func_arg1 ) 
{ 


  {
  ldv_spin_lock_dma_spin_lock();
  __ldv_spin_lock(ldv_func_arg1);
  return;
}
}
void ldv___ldv_spin_unlock_5(spinlock_t *ldv_func_arg1 ) 
{ 


  {
  ldv_spin_unlock_dma_spin_lock();
  __ldv_spin_unlock(ldv_func_arg1);
  return;
}
}
long ldv__builtin_expect(long exp , long c ) ;
__inline static void ( __attribute__((__always_inline__)) ldv_error)(void) 
{ 


  {
  LDV_ERROR: {reach_error();abort();}
}
}
extern int ldv_undef_int(void) ;
long ldv__builtin_expect(long exp , long c ) 
{ 


  {
  return (exp);
}
}
static int ldv_spin_dma_spin_lock  ;
void ldv_spin_lock_dma_spin_lock(void) 
{ 


  {
  if (ldv_spin_dma_spin_lock == 1) {

  } else {
    ldv_error();
  }
  ldv_spin_dma_spin_lock = 2;
  return;
}
}
void ldv_spin_unlock_dma_spin_lock(void) 
{ 


  {
  if (ldv_spin_dma_spin_lock == 2) {

  } else {
    ldv_error();
  }
  ldv_spin_dma_spin_lock = 1;
  return;
}
}
int ldv_spin_trylock_dma_spin_lock(void) 
{ 
  int is_spin_held_by_another_thread ;

  {
  if (ldv_spin_dma_spin_lock == 1) {

  } else {
    ldv_error();
  }
  is_spin_held_by_another_thread = ldv_undef_int();
  if (is_spin_held_by_another_thread) {
    return (0);
  } else {
    ldv_spin_dma_spin_lock = 2;
    return (1);
  }
}
}
void ldv_spin_unlock_wait_dma_spin_lock(void) 
{ 


  {
  if (ldv_spin_dma_spin_lock == 1) {

  } else {
    ldv_error();
  }
  return;
}
}
int ldv_spin_is_locked_dma_spin_lock(void) 
{ 
  int is_spin_held_by_another_thread ;

  {
  is_spin_held_by_another_thread = ldv_undef_int();
  if (ldv_spin_dma_spin_lock == 1 && ! is_spin_held_by_another_thread) {
    return (0);
  } else {
    return (1);
  }
}
}
int ldv_spin_can_lock_dma_spin_lock(void) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  tmp = ldv_spin_is_locked_dma_spin_lock();
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  return (tmp___0);
}
}
int ldv_spin_is_contended_dma_spin_lock(void) 
{ 
  int is_spin_contended ;

  {
  is_spin_contended = ldv_undef_int();
  if (is_spin_contended) {
    return (0);
  } else {
    return (1);
  }
}
}
int ldv_atomic_dec_and_lock_dma_spin_lock(void) 
{ 
  int atomic_value_after_dec ;

  {
  if (ldv_spin_dma_spin_lock == 1) {

  } else {
    ldv_error();
  }
  atomic_value_after_dec = ldv_undef_int();
  if (atomic_value_after_dec == 0) {
    ldv_spin_dma_spin_lock = 2;
    return (1);
  } else {

  }
  return (0);
}
}
static int ldv_spin_lock_of_NOT_ARG_SIGN  ;
void ldv_spin_lock_lock_of_NOT_ARG_SIGN(void) 
{ 


  {
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 1) {

  } else {
    ldv_error();
  }
  ldv_spin_lock_of_NOT_ARG_SIGN = 2;
  return;
}
}
void ldv_spin_unlock_lock_of_NOT_ARG_SIGN(void) 
{ 


  {
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 2) {

  } else {
    ldv_error();
  }
  ldv_spin_lock_of_NOT_ARG_SIGN = 1;
  return;
}
}
int ldv_spin_trylock_lock_of_NOT_ARG_SIGN(void) 
{ 
  int is_spin_held_by_another_thread ;

  {
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 1) {

  } else {
    ldv_error();
  }
  is_spin_held_by_another_thread = ldv_undef_int();
  if (is_spin_held_by_another_thread) {
    return (0);
  } else {
    ldv_spin_lock_of_NOT_ARG_SIGN = 2;
    return (1);
  }
}
}
void ldv_spin_unlock_wait_lock_of_NOT_ARG_SIGN(void) 
{ 


  {
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 1) {

  } else {
    ldv_error();
  }
  return;
}
}
int ldv_spin_is_locked_lock_of_NOT_ARG_SIGN(void) 
{ 
  int is_spin_held_by_another_thread ;

  {
  is_spin_held_by_another_thread = ldv_undef_int();
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 1 && ! is_spin_held_by_another_thread) {
    return (0);
  } else {
    return (1);
  }
}
}
int ldv_spin_can_lock_lock_of_NOT_ARG_SIGN(void) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  tmp = ldv_spin_is_locked_lock_of_NOT_ARG_SIGN();
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  return (tmp___0);
}
}
int ldv_spin_is_contended_lock_of_NOT_ARG_SIGN(void) 
{ 
  int is_spin_contended ;

  {
  is_spin_contended = ldv_undef_int();
  if (is_spin_contended) {
    return (0);
  } else {
    return (1);
  }
}
}
int ldv_atomic_dec_and_lock_lock_of_NOT_ARG_SIGN(void) 
{ 
  int atomic_value_after_dec ;

  {
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 1) {

  } else {
    ldv_error();
  }
  atomic_value_after_dec = ldv_undef_int();
  if (atomic_value_after_dec == 0) {
    ldv_spin_lock_of_NOT_ARG_SIGN = 2;
    return (1);
  } else {

  }
  return (0);
}
}
void ldv_initialize(void) 
{ 


  {
  ldv_spin_dma_spin_lock = 1;
  ldv_spin_lock_of_NOT_ARG_SIGN = 1;
  return;
}
}
void ldv_check_final_state(void) 
{ 


  {
  if (ldv_spin_dma_spin_lock == 1) {

  } else {
    ldv_error();
  }
  if (ldv_spin_lock_of_NOT_ARG_SIGN == 1) {

  } else {
    ldv_error();
  }
  return;
}
}
