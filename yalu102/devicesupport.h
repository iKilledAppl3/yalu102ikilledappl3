#ifndef devicesupport_h
#define devicesupport_h

#define KERNEL_TASK 0
#define IOSURFACEROOT_VTABLE 1
#define READ_GADGET 2
#define WRITE_GADGET 3
#define KERNBASE 4
#define ROOTFS_VNODE 5
#define SETX0 6
#define IOBUFMEMDESC 7
#define GETBYTESNOCOPY 8
#define PMAP 9
#define PHYS 10
#define TTBRMAGIC_BX0 11
#define TTBRMAGIC_ENTRYF 12
#define TTBRMAGIC_ENTRY0 13
#define TTBRMAGIC_ENTRY1 14
#define GADGET0_PTR 16
#define GADGET0_X8REL 15
#define GADGET0_NEXT 17
#define GADGET1_PTR 18
#define GADGET2_PTR 19
#define GADGET3_PTR 20
#define GADGET4_PTR 21
#define GADGET5_PTR 22
#define MEMCPYP 23
#define GADGET6_PTR 24
#define GADGET7_PTR 25
#define GADGET8_PTR 26
#define GADGET9_PTR 27
#define GADGET10_PTR 28
#define GADGET11_PTR 29
#define PINST 30
#define VBAR 31
#define GADGET12_PTR 32
#define GADGET13_PTR 33
#define GADGET14_PTR 34
#define GADGET15_PTR 35
#define GADGET16_PTR 36
#define GADGET17_PTR 37
#define GADGET18_PTR 38
#define LWVM_WRITETO 39
#define LWVM_NEWJUMP 40
#define I_CAN_HAS_DBG 41
#define MEMCMPSTUB 42
#define RETZERO 43
#define RETNONZERO 44
#define CPACR 45
#define TTBR0 46
#define TTBR1 47
#define TFP0_FCN 48
#define SBOPS 49
#define ARET 50
#define STRX0X1PTR 51
#define MOVX20X0PTR 52
#define SET1IMMPTR 53
#define ADDX0X1PTR 54
#define MOVX0SPPTR 55
#define SETX4TR 56


//0xFFFFFFF0075F6000+0x50 (0xfffffff006e4d620+0x4bc0)

#define G(type) constget(type)
#define S(type, val) constset(type,val)

#define	CS_VALID		0x0000001	/* dynamically valid */
#define CS_ADHOC		0x0000002	/* ad hoc signed */
#define CS_GET_TASK_ALLOW	0x0000004	/* has get-task-allow entitlement */
#define CS_INSTALLER		0x0000008	/* has installer entitlement */

#define	CS_HARD			0x0000100	/* don't load invalid pages */
#define	CS_KILL			0x0000200	/* kill process if it becomes invalid */
#define CS_CHECK_EXPIRATION	0x0000400	/* force expiration checking */
#define CS_RESTRICT		0x0000800	/* tell dyld to treat restricted */
#define CS_ENFORCEMENT		0x0001000	/* require enforcement */
#define CS_REQUIRE_LV		0x0002000	/* require library validation */
#define CS_ENTITLEMENTS_VALIDATED	0x0004000

#define	CS_ALLOWED_MACHO	0x00ffffe

#define CS_EXEC_SET_HARD	0x0100000	/* set CS_HARD on any exec'ed process */
#define CS_EXEC_SET_KILL	0x0200000	/* set CS_KILL on any exec'ed process */
#define CS_EXEC_SET_ENFORCEMENT	0x0400000	/* set CS_ENFORCEMENT on any exec'ed process */
#define CS_EXEC_SET_INSTALLER	0x0800000	/* set CS_INSTALLER on any exec'ed process */

#define CS_KILLED		0x1000000	/* was killed by kernel for invalidity */
#define CS_DYLD_PLATFORM	0x2000000	/* dyld used to load this is a platform binary */
#define CS_PLATFORM_BINARY	0x4000000	/* this is a platform binary */
#define CS_PLATFORM_PATH	0x8000000	/* platform binary by the fact of path (osx only) */

uint64_t constget(int idx);
#import <stdint.h>
struct mac_policy_ops{
    uint64_t mpo_audit_check_postselect;
    uint64_t mpo_audit_check_preselect;
    
    uint64_t mpo_bpfdesc_label_associate;
    uint64_t mpo_bpfdesc_label_destroy;
    uint64_t mpo_bpfdesc_label_init;
    uint64_t mpo_bpfdesc_check_receive;
    
    uint64_t mpo_cred_check_label_update_execve;
    uint64_t mpo_cred_check_label_update;
    uint64_t mpo_cred_check_visible;
    uint64_t mpo_cred_label_associate_fork;
    uint64_t mpo_cred_label_associate_kernel;
    uint64_t mpo_cred_label_associate;
    uint64_t mpo_cred_label_associate_user;
    uint64_t mpo_cred_label_destroy;
    uint64_t mpo_cred_label_externalize_audit;
    uint64_t mpo_cred_label_externalize;
    uint64_t mpo_cred_label_init;
    uint64_t mpo_cred_label_internalize;
    uint64_t mpo_cred_label_update_execve;
    uint64_t mpo_cred_label_update;
    
    uint64_t mpo_devfs_label_associate_device;
    uint64_t mpo_devfs_label_associate_directory;
    uint64_t mpo_devfs_label_copy;
    uint64_t mpo_devfs_label_destroy;
    uint64_t mpo_devfs_label_init;
    uint64_t mpo_devfs_label_update;
    
    uint64_t mpo_file_check_change_offset;
    uint64_t mpo_file_check_create;
    uint64_t mpo_file_check_dup;
    uint64_t mpo_file_check_fcntl;
    uint64_t mpo_file_check_get_offset;
    uint64_t mpo_file_check_get;
    uint64_t mpo_file_check_inherit;
    uint64_t mpo_file_check_ioctl;
    uint64_t mpo_file_check_lock;
    uint64_t mpo_file_check_mmap_downgrade;
    uint64_t mpo_file_check_mmap;
    uint64_t mpo_file_check_receive;
    uint64_t mpo_file_check_set;
    uint64_t mpo_file_label_init;
    uint64_t mpo_file_label_destroy;
    uint64_t mpo_file_label_associate;
    
    uint64_t mpo_ifnet_check_label_update;
    uint64_t mpo_ifnet_check_transmit;
    uint64_t mpo_ifnet_label_associate;
    uint64_t mpo_ifnet_label_copy;
    uint64_t mpo_ifnet_label_destroy;
    uint64_t mpo_ifnet_label_externalize;
    uint64_t mpo_ifnet_label_init;
    uint64_t mpo_ifnet_label_internalize;
    uint64_t mpo_ifnet_label_update;
    uint64_t mpo_ifnet_label_recycle;
    
    uint64_t mpo_inpcb_check_deliver;
    uint64_t mpo_inpcb_label_associate;
    uint64_t mpo_inpcb_label_destroy;
    uint64_t mpo_inpcb_label_init;
    uint64_t mpo_inpcb_label_recycle;
    uint64_t mpo_inpcb_label_update;
    
    uint64_t mpo_iokit_check_device;
    
    uint64_t mpo_ipq_label_associate;
    uint64_t mpo_ipq_label_compare;
    uint64_t mpo_ipq_label_destroy;
    uint64_t mpo_ipq_label_init;
    uint64_t mpo_ipq_label_update;
    
    uint64_t mpo_reserved1;
    uint64_t mpo_reserved2;
    uint64_t mpo_reserved3;
    uint64_t mpo_reserved4;
    uint64_t mpo_reserved5;
    uint64_t mpo_reserved6;
    uint64_t mpo_reserved7;
    uint64_t mpo_reserved8;
    uint64_t mpo_reserved9;
    
    uint64_t mpo_mbuf_label_associate_bpfdesc;
    uint64_t mpo_mbuf_label_associate_ifnet;
    uint64_t mpo_mbuf_label_associate_inpcb;
    uint64_t mpo_mbuf_label_associate_ipq;
    uint64_t mpo_mbuf_label_associate_linklayer;
    uint64_t mpo_mbuf_label_associate_multicast_encap;
    uint64_t mpo_mbuf_label_associate_netlayer;
    uint64_t mpo_mbuf_label_associate_socket;
    uint64_t mpo_mbuf_label_copy;
    uint64_t mpo_mbuf_label_destroy;
    uint64_t mpo_mbuf_label_init;
    
    uint64_t mpo_mount_check_fsctl;
    uint64_t mpo_mount_check_getattr;
    uint64_t mpo_mount_check_label_update;
    uint64_t mpo_mount_check_mount;
    uint64_t mpo_mount_check_remount;
    uint64_t mpo_mount_check_setattr;
    uint64_t mpo_mount_check_stat;
    uint64_t mpo_mount_check_umount;
    uint64_t mpo_mount_label_associate;
    uint64_t mpo_mount_label_destroy;
    uint64_t mpo_mount_label_externalize;
    uint64_t mpo_mount_label_init;
    uint64_t mpo_mount_label_internalize;
    
    uint64_t mpo_netinet_fragment;
    uint64_t mpo_netinet_icmp_reply;
    uint64_t mpo_netinet_tcp_reply;
    
    uint64_t mpo_pipe_check_ioctl;
    uint64_t mpo_pipe_check_kqfilter;
    uint64_t mpo_pipe_check_label_update;
    uint64_t mpo_pipe_check_read;
    uint64_t mpo_pipe_check_select;
    uint64_t mpo_pipe_check_stat;
    uint64_t mpo_pipe_check_write;
    uint64_t mpo_pipe_label_associate;
    uint64_t mpo_pipe_label_copy;
    uint64_t mpo_pipe_label_destroy;
    uint64_t mpo_pipe_label_externalize;
    uint64_t mpo_pipe_label_init;
    uint64_t mpo_pipe_label_internalize;
    uint64_t mpo_pipe_label_update;
    
    uint64_t mpo_policy_destroy;
    uint64_t mpo_policy_init;
    uint64_t mpo_policy_initbsd;
    uint64_t mpo_policy_syscall;
    
    uint64_t mpo_system_check_sysctlbyname;
    uint64_t mpo_proc_check_inherit_ipc_ports;
    uint64_t mpo_vnode_check_rename;
    uint64_t mpo_kext_check_query;
    uint64_t mpo_iokit_check_nvram_get;
    uint64_t mpo_iokit_check_nvram_set;
    uint64_t mpo_iokit_check_nvram_delete;
    uint64_t mpo_proc_check_expose_task;
    uint64_t mpo_proc_check_set_host_special_port;
    uint64_t mpo_proc_check_set_host_exception_port;
    uint64_t mpo_reserved11;
    uint64_t mpo_reserved12;
    uint64_t mpo_reserved13;
    uint64_t mpo_reserved14;
    uint64_t mpo_reserved15;
    uint64_t mpo_reserved16;
    uint64_t mpo_reserved17;
    uint64_t mpo_reserved18;
    uint64_t mpo_reserved19;
    uint64_t mpo_reserved20;
    uint64_t mpo_reserved21;
    uint64_t mpo_reserved22;
    
    uint64_t mpo_posixsem_check_create;
    uint64_t mpo_posixsem_check_open;
    uint64_t mpo_posixsem_check_post;
    uint64_t mpo_posixsem_check_unlink;
    uint64_t mpo_posixsem_check_wait;
    uint64_t mpo_posixsem_label_associate;
    uint64_t mpo_posixsem_label_destroy;
    uint64_t mpo_posixsem_label_init;
    uint64_t mpo_posixshm_check_create;
    uint64_t mpo_posixshm_check_mmap;
    uint64_t mpo_posixshm_check_open;
    uint64_t mpo_posixshm_check_stat;
    uint64_t mpo_posixshm_check_truncate;
    uint64_t mpo_posixshm_check_unlink;
    uint64_t mpo_posixshm_label_associate;
    uint64_t mpo_posixshm_label_destroy;
    uint64_t mpo_posixshm_label_init;
    
    uint64_t mpo_proc_check_debug;
    uint64_t mpo_proc_check_fork;
    uint64_t mpo_proc_check_get_task_name;
    uint64_t mpo_proc_check_get_task;
    uint64_t mpo_proc_check_getaudit;
    uint64_t mpo_proc_check_getauid;
    uint64_t mpo_proc_check_getlcid;
    uint64_t mpo_proc_check_mprotect;
    uint64_t mpo_proc_check_sched;
    uint64_t mpo_proc_check_setaudit;
    uint64_t mpo_proc_check_setauid;
    uint64_t mpo_proc_check_setlcid;
    uint64_t mpo_proc_check_signal;
    uint64_t mpo_proc_check_wait;
    uint64_t mpo_proc_label_destroy;
    uint64_t mpo_proc_label_init;
    
    uint64_t mpo_socket_check_accept;
    uint64_t mpo_socket_check_accepted;
    uint64_t mpo_socket_check_bind;
    uint64_t mpo_socket_check_connect;
    uint64_t mpo_socket_check_create;
    uint64_t mpo_socket_check_deliver;
    uint64_t mpo_socket_check_kqfilter;
    uint64_t mpo_socket_check_label_update;
    uint64_t mpo_socket_check_listen;
    uint64_t mpo_socket_check_receive;
    uint64_t mpo_socket_check_received;
    uint64_t mpo_socket_check_select;
    uint64_t mpo_socket_check_send;
    uint64_t mpo_socket_check_stat;
    uint64_t mpo_socket_check_setsockopt;
    uint64_t mpo_socket_check_getsockopt;
    uint64_t mpo_socket_label_associate_accept;
    uint64_t mpo_socket_label_associate;
    uint64_t mpo_socket_label_copy;
    uint64_t mpo_socket_label_destroy;
    uint64_t mpo_socket_label_externalize;
    uint64_t mpo_socket_label_init;
    uint64_t mpo_socket_label_internalize;
    uint64_t mpo_socket_label_update;
    
    uint64_t mpo_socketpeer_label_associate_mbuf;
    uint64_t mpo_socketpeer_label_associate_socket;
    uint64_t mpo_socketpeer_label_destroy;
    uint64_t mpo_socketpeer_label_externalize;
    uint64_t mpo_socketpeer_label_init;
    
    uint64_t mpo_system_check_acct;
    uint64_t mpo_system_check_audit;
    uint64_t mpo_system_check_auditctl;
    uint64_t mpo_system_check_auditon;
    uint64_t mpo_system_check_host_priv;
    uint64_t mpo_system_check_nfsd;
    uint64_t mpo_system_check_reboot;
    uint64_t mpo_system_check_settime;
    uint64_t mpo_system_check_swapoff;
    uint64_t mpo_system_check_swapon;
    uint64_t mpo_reserved31;
    
    uint64_t mpo_sysvmsg_label_associate;
    uint64_t mpo_sysvmsg_label_destroy;
    uint64_t mpo_sysvmsg_label_init;
    uint64_t mpo_sysvmsg_label_recycle;
    uint64_t mpo_sysvmsq_check_enqueue;
    uint64_t mpo_sysvmsq_check_msgrcv;
    uint64_t mpo_sysvmsq_check_msgrmid;
    uint64_t mpo_sysvmsq_check_msqctl;
    uint64_t mpo_sysvmsq_check_msqget;
    uint64_t mpo_sysvmsq_check_msqrcv;
    uint64_t mpo_sysvmsq_check_msqsnd;
    uint64_t mpo_sysvmsq_label_associate;
    uint64_t mpo_sysvmsq_label_destroy;
    uint64_t mpo_sysvmsq_label_init;
    uint64_t mpo_sysvmsq_label_recycle;
    uint64_t mpo_sysvsem_check_semctl;
    uint64_t mpo_sysvsem_check_semget;
    uint64_t mpo_sysvsem_check_semop;
    uint64_t mpo_sysvsem_label_associate;
    uint64_t mpo_sysvsem_label_destroy;
    uint64_t mpo_sysvsem_label_init;
    uint64_t mpo_sysvsem_label_recycle;
    uint64_t mpo_sysvshm_check_shmat;
    uint64_t mpo_sysvshm_check_shmctl;
    uint64_t mpo_sysvshm_check_shmdt;
    uint64_t mpo_sysvshm_check_shmget;
    uint64_t mpo_sysvshm_label_associate;
    uint64_t mpo_sysvshm_label_destroy;
    uint64_t mpo_sysvshm_label_init;
    uint64_t mpo_sysvshm_label_recycle;
    
    uint64_t mpo_reserved23;
    uint64_t mpo_reserved24;
    uint64_t mpo_reserved25;
    uint64_t mpo_reserved26;
    uint64_t mpo_reserved27;
    uint64_t mpo_reserved28;
    uint64_t mpo_reserved29;
    uint64_t mpo_reserved30;
    
    uint64_t mpo_iokit_check_hid_control;
    
    uint64_t mpo_vnode_check_access;
    uint64_t mpo_vnode_check_chdir;
    uint64_t mpo_vnode_check_chroot;
    uint64_t mpo_vnode_check_create;
    uint64_t mpo_vnode_check_deleteextattr;
    uint64_t mpo_vnode_check_exchangedata;
    uint64_t mpo_vnode_check_exec;
    uint64_t mpo_vnode_check_getattrlist;
    uint64_t mpo_vnode_check_getextattr;
    uint64_t mpo_vnode_check_ioctl;
    uint64_t mpo_vnode_check_kqfilter;
    uint64_t mpo_vnode_check_label_update;
    uint64_t mpo_vnode_check_link;
    uint64_t mpo_vnode_check_listextattr;
    uint64_t mpo_vnode_check_lookup;
    uint64_t mpo_vnode_check_open;
    uint64_t mpo_vnode_check_read;
    uint64_t mpo_vnode_check_readdir;
    uint64_t mpo_vnode_check_readlink;
    uint64_t mpo_vnode_check_rename_from;
    uint64_t mpo_vnode_check_rename_to;
    uint64_t mpo_vnode_check_revoke;
    uint64_t mpo_vnode_check_select;
    uint64_t mpo_vnode_check_setattrlist;
    uint64_t mpo_vnode_check_setextattr;
    uint64_t mpo_vnode_check_setflags;
    uint64_t mpo_vnode_check_setmode;
    uint64_t mpo_vnode_check_setowner;
    uint64_t mpo_vnode_check_setutimes;
    uint64_t mpo_vnode_check_stat;
    uint64_t mpo_vnode_check_truncate;
    uint64_t mpo_vnode_check_unlink;
    uint64_t mpo_vnode_check_write;
    uint64_t mpo_vnode_label_associate_devfs;
    uint64_t mpo_vnode_label_associate_extattr;
    uint64_t mpo_vnode_label_associate_file;
    uint64_t mpo_vnode_label_associate_pipe;
    uint64_t mpo_vnode_label_associate_posixsem;
    uint64_t mpo_vnode_label_associate_posixshm;
    uint64_t mpo_vnode_label_associate_singlelabel;
    uint64_t mpo_vnode_label_associate_socket;
    uint64_t mpo_vnode_label_copy;
    uint64_t mpo_vnode_label_destroy;
    uint64_t mpo_vnode_label_externalize_audit;
    uint64_t mpo_vnode_label_externalize;
    uint64_t mpo_vnode_label_init;
    uint64_t mpo_vnode_label_internalize;
    uint64_t mpo_vnode_label_recycle;
    uint64_t mpo_vnode_label_store;
    uint64_t mpo_vnode_label_update_extattr;
    uint64_t mpo_vnode_label_update;
    uint64_t mpo_vnode_notify_create;
    uint64_t mpo_vnode_check_signature;
    uint64_t mpo_vnode_check_uipc_bind;
    uint64_t mpo_vnode_check_uipc_connect;
    
    uint64_t mpo_proc_check_run_cs_invalid;
    uint64_t mpo_proc_check_suspend_resume;
    
    uint64_t mpo_thread_userret;
    
    uint64_t mpo_iokit_check_set_properties;
    
    uint64_t mpo_system_check_chud;
    
    uint64_t mpo_vnode_check_searchfs;
    
    uint64_t mpo_priv_check;
    uint64_t mpo_priv_grant;
    
    uint64_t mpo_proc_check_map_anon;
    
    uint64_t mpo_vnode_check_fsgetpath;
    
    uint64_t mpo_iokit_check_open;
    
    uint64_t mpo_proc_check_ledger;
    
    uint64_t mpo_vnode_notify_rename;
    
    uint64_t mpo_reserved32;
    uint64_t mpo_reserved33;
    
    uint64_t mpo_system_check_kas_info;
    
    uint64_t mpo_proc_check_cpumon;
    
    uint64_t mpo_vnode_notify_open;
    
    uint64_t mpo_system_check_info;
    
    uint64_t mpo_pty_notify_grant;
    uint64_t mpo_pty_notify_close;
    
    uint64_t mpo_vnode_find_sigs;
    
    uint64_t mpo_kext_check_load;
    uint64_t mpo_kext_check_unload;
    
    uint64_t mpo_proc_check_proc_info;
    uint64_t mpo_vnode_notify_link;
    uint64_t mpo_iokit_check_filter_properties;
    uint64_t mpo_iokit_check_get_property;
};



#endif /* devicesupport_h */
