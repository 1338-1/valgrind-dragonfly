
/*
   This file is part of Valgrind, a dynamic binary instrumentation
   framework.

   Copyright (C) 2000-2005 Julian Seward 
      jseward@acm.org

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307, USA.

   The GNU General Public License is contained in the file COPYING.
*/

#ifndef __VKI_UNISTD_DRAGONFLY_H
#define __VKI_UNISTD_DRAGONFLY_H

#define VG_DRAGONFLY_SYSCALL_STD	0
#define VG_DRAGONFLY_SYSCALL0	1
#define VG_DRAGONFLY_SYSCALL198	2

// From sys/syscall.h

#define	__NR_syscall	0
#define	__NR_exit	1
#define	__NR_fork	2
#define	__NR_read	3
#define	__NR_write	4
#define	__NR_open	5
#define	__NR_close	6
#define	__NR_wait4	7
				/* 8 is obsolete 4.3 creat */
#define	__NR_link	9
#define	__NR_unlink	10
				/* 11 is obsolete execv */
#define	__NR_chdir	12
#define	__NR_fchdir	13
#define	__NR_mknod	14
#define	__NR_chmod	15
#define	__NR_chown	16
#define	__NR_break	17
#define	__NR_getfsstat	18
				/* 19 is obsolete old lseek */
#define	__NR_getpid	20
#define	__NR_mount	21
#define	__NR_unmount	22
#define	__NR_setuid	23
#define	__NR_getuid	24
#define	__NR_geteuid	25
#define	__NR_ptrace	26
#define	__NR_recvmsg	27
#define	__NR_sendmsg	28
#define	__NR_recvfrom	29
#define	__NR_accept	30
#define	__NR_getpeername	31
#define	__NR_getsockname	32
#define	__NR_access	33
#define	__NR_chflags	34
#define	__NR_fchflags	35
#define	__NR_sync	36
#define	__NR_kill	37
				/* 38 is obsolete old stat */
#define	__NR_getppid	39
				/* 40 is obsolete old lstat */
#define	__NR_dup	41
#define	__NR_pipe	42
#define	__NR_getegid	43
#define	__NR_profil	44
#define	__NR_ktrace	45
				/* 46 is obsolete freebsd3_sigaction */
#define	__NR_getgid	47
				/* 48 is obsolete freebsd3_sigprocmask */
#define	__NR_getlogin	49
#define	__NR_setlogin	50
#define	__NR_acct	51
				/* 52 is obsolete freebsd3_sigpending */
#define	__NR_sigaltstack	53
#define	__NR_ioctl	54
#define	__NR_reboot	55
#define	__NR_revoke	56
#define	__NR_symlink	57
#define	__NR_readlink	58
#define	__NR_execve	59
#define	__NR_umask	60
#define	__NR_chroot	61
				/* 62 is obsolete old fstat */
				/* 63 is obsolete getkerninfo */
				/* 64 is obsolete getpagesize */
#define	__NR_msync	65
#define	__NR_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	__NR_sbrk	69
#define	__NR_sstk	70
				/* 71 is obsolete old mmap */
				/* 72 is obsolete vadvise */
#define	__NR_munmap	73
#define	__NR_mprotect	74
#define	__NR_madvise	75
				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
#define	__NR_mincore	78
#define	__NR_getgroups	79
#define	__NR_setgroups	80
#define	__NR_getpgrp	81
#define	__NR_setpgid	82
#define	__NR_setitimer	83
				/* 84 is obsolete wait */
#define	__NR_swapon	85
#define	__NR_getitimer	86
				/* 87 is obsolete gethostname */
				/* 88 is obsolete sethostname */
#define	__NR_getdtablesize	89
#define	__NR_dup2	90
#define	__NR_fcntl	92
#define	__NR_select	93
#define	__NR_fsync	95
#define	__NR_setpriority	96
#define	__NR_socket	97
#define	__NR_connect	98
				/* 99 is obsolete old accept */
#define	__NR_getpriority	100
				/* 101 is obsolete send */
				/* 102 is obsolete recv */
				/* 103 is obsolete freebsd3_sigreturn */
#define	__NR_bind	104
#define	__NR_setsockopt	105
#define	__NR_listen	106
				/* 107 is obsolete vtimes */
				/* 108 is obsolete 4.3 sigvec */
				/* 109 is obsolete 4.3 sigblock */
				/* 110 is obsolete 4.3 sigsetmask */
				/* 111 is obsolete freebsd3_sigsuspend */
				/* 112 is obsolete sigstack */
				/* 113 is obsolete old recvmsg */
				/* 114 is obsolete old sendmsg */
				/* 115 is obsolete vtrace */
#define	__NR_gettimeofday	116
#define	__NR_getrusage	117
#define	__NR_getsockopt	118
#define	__NR_readv	120
#define	__NR_writev	121
#define	__NR_settimeofday	122
#define	__NR_fchown	123
#define	__NR_fchmod	124
				/* 125 is obsolete old recvfrom */
#define	__NR_setreuid	126
#define	__NR_setregid	127
#define	__NR_rename	128
				/* 129 is obsolete old truncate */
				/* 130 is obsolete old ftruncate */
#define	__NR_flock	131
#define	__NR_mkfifo	132
#define	__NR_sendto	133
#define	__NR_shutdown	134
#define	__NR_socketpair	135
#define	__NR_mkdir	136
#define	__NR_rmdir	137
#define	__NR_utimes	138
				/* 139 is obsolete 4.2 sigreturn */
#define	__NR_adjtime	140
				/* 141 is obsolete old getpeername */
				/* 142 is obsolete 4.3 gethostid */
				/* 143 is obsolete 4.3 sethostid */
				/* 144 is obsolete old getrlimit */
				/* 145 is obsolete old setrlimit */
				/* 146 is obsolete 4.3 killpg */
#define	__NR_setsid	147
#define	__NR_quotactl	148
				/* 149 is obsolete quota */
				/* 150 is obsolete old getsockname */
#define	__NR_nfssvc	155
				/* 156 is obsolete old getdirentries */
#define	__NR_statfs	157
#define	__NR_fstatfs	158
#define	__NR_getfh	161
#define	__NR_getdomainname	162
#define	__NR_setdomainname	163
#define	__NR_uname	164
#define	__NR_sysarch	165
#define	__NR_rtprio	166
				/* 169 is obsolete semsys */
				/* 170 is obsolete msgsys */
				/* 171 is obsolete shmsys */
#define	__NR_extpread	173
#define	__NR_extpwrite	174
#define	__NR_ntp_adjtime	176
#define	__NR_setgid	181
#define	__NR_setegid	182
#define	__NR_seteuid	183
#define	__NR_pathconf	191
#define	__NR_fpathconf	192
#define	__NR_getrlimit	194
#define	__NR_setrlimit	195
#define	__NR_mmap	197
#define	__NR___syscall	198
#define	__NR_lseek	199
#define	__NR_truncate	200
#define	__NR_ftruncate	201
#define	__NR___sysctl	202
#define	__NR_mlock	203
#define	__NR_munlock	204
#define	__NR_undelete	205
#define	__NR_futimes	206
#define	__NR_getpgid	207
#define	__NR_poll	209
#define	__NR___semctl	220
#define	__NR_semget	221
#define	__NR_semop	222
#define	__NR_msgctl	224
#define	__NR_msgget	225
#define	__NR_msgsnd	226
#define	__NR_msgrcv	227
#define	__NR_shmat	228
#define	__NR_shmctl	229
#define	__NR_shmdt	230
#define	__NR_shmget	231
#define	__NR_clock_gettime	232
#define	__NR_clock_settime	233
#define	__NR_clock_getres	234
#define	__NR_nanosleep	240
#define	__NR_minherit	250
#define	__NR_rfork	251
#define	__NR_openbsd_poll	252
#define	__NR_issetugid	253
#define	__NR_lchown	254
#define	__NR_lchmod	274
#define	__NR_netbsd_lchown	275
#define	__NR_lutimes	276
#define	__NR_netbsd_msync	277
				/* 278 is obsolete nstat */
				/* 279 is obsolete nfstat */
				/* 280 is obsolete nlstat */
#define	__NR_extpreadv	289
#define	__NR_extpwritev	290
#define	__NR_fhstatfs	297
#define	__NR_fhopen	298
#define	__NR_modnext	300
#define	__NR_modstat	301
#define	__NR_modfnext	302
#define	__NR_modfind	303
#define	__NR_kldload	304
#define	__NR_kldunload	305
#define	__NR_kldfind	306
#define	__NR_kldnext	307
#define	__NR_kldstat	308
#define	__NR_kldfirstmod	309
#define	__NR_getsid	310
#define	__NR_setresuid	311
#define	__NR_setresgid	312
				/* 313 is obsolete signanosleep */
#define	__NR_aio_return	314
#define	__NR_aio_suspend	315
#define	__NR_aio_cancel	316
#define	__NR_aio_error	317
#define	__NR_aio_read	318
#define	__NR_aio_write	319
#define	__NR_lio_listio	320
#define	__NR_yield	321
#define	__NR_mlockall	324
#define	__NR_munlockall	325
#define	__NR___getcwd	326
#define	__NR_sched_setparam	327
#define	__NR_sched_getparam	328
#define	__NR_sched_setscheduler	329
#define	__NR_sched_getscheduler	330
#define	__NR_sched_yield	331
#define	__NR_sched_get_priority_max	332
#define	__NR_sched_get_priority_min	333
#define	__NR_sched_rr_get_interval	334
#define	__NR_utrace	335
				/* 336 is obsolete freebsd4_sendfile */
#define	__NR_kldsym	337
#define	__NR_jail	338
#define	__NR_sigprocmask	340
#define	__NR_sigsuspend	341
#define	__NR_sigaction	342
#define	__NR_sigpending	343
#define	__NR_sigreturn	344
#define	__NR_sigtimedwait	345
#define	__NR_sigwaitinfo	346
#define	__NR___acl_get_file	347
#define	__NR___acl_set_file	348
#define	__NR___acl_get_fd	349
#define	__NR___acl_set_fd	350
#define	__NR___acl_delete_file	351
#define	__NR___acl_delete_fd	352
#define	__NR___acl_aclcheck_file	353
#define	__NR___acl_aclcheck_fd	354
#define	__NR_extattrctl	355
#define	__NR_extattr_set_file	356
#define	__NR_extattr_get_file	357
#define	__NR_extattr_delete_file	358
#define	__NR_aio_waitcomplete	359
#define	__NR_getresuid	360
#define	__NR_getresgid	361
#define	__NR_kqueue	362
#define	__NR_kevent	363
#define	__NR_kenv	390
#define	__NR_lchflags	391
#define	__NR_uuidgen	392
#define	__NR_sendfile	393
#define	__NR_varsym_set	450
#define	__NR_varsym_get	451
#define	__NR_varsym_list	452
				/* 453 is obsolete upc_register */
				/* 454 is obsolete upc_control */
				/* 455 is obsolete caps_sys_service */
				/* 456 is obsolete caps_sys_client */
				/* 457 is obsolete caps_sys_close */
				/* 458 is obsolete caps_sys_put */
				/* 459 is obsolete caps_sys_reply */
				/* 460 is obsolete caps_sys_get */
				/* 461 is obsolete caps_sys_wait */
				/* 462 is obsolete caps_sys_abort */
				/* 463 is obsolete caps_sys_getgen */
				/* 464 is obsolete caps_sys_setgen */
#define	__NR_exec_sys_register	465
#define	__NR_exec_sys_unregister	466
#define	__NR_sys_checkpoint	467
#define	__NR_mountctl	468
#define	__NR_umtx_sleep	469
#define	__NR_umtx_wakeup	470
#define	__NR_jail_attach	471
#define	__NR_set_tls_area	472
#define	__NR_get_tls_area	473
#define	__NR_closefrom	474
#define	__NR_stat	475
#define	__NR_fstat	476
#define	__NR_lstat	477
#define	__NR_fhstat	478
#define	__NR_getdirentries	479
#define	__NR_getdents	480
#define	__NR_usched_set	481
#define	__NR_extaccept	482
#define	__NR_extconnect	483
				/* 484 is obsolete syslink */
#define	__NR_mcontrol	485
#define	__NR_vmspace_create	486
#define	__NR_vmspace_destroy	487
#define	__NR_vmspace_ctl	488
#define	__NR_vmspace_mmap	489
#define	__NR_vmspace_munmap	490
#define	__NR_vmspace_mcontrol	491
#define	__NR_vmspace_pread	492
#define	__NR_vmspace_pwrite	493
#define	__NR_extexit	494
#define	__NR_lwp_create	495
#define	__NR_lwp_gettid	496
#define	__NR_lwp_kill	497
#define	__NR_lwp_rtprio	498
#define	__NR_pselect	499
#define	__NR_statvfs	500
#define	__NR_fstatvfs	501
#define	__NR_fhstatvfs	502
#define	__NR_getvfsstat	503
#define	__NR_openat	504
#define	__NR_fstatat	505
#define	__NR_fchmodat	506
#define	__NR_fchownat	507
#define	__NR_unlinkat	508
#define	__NR_faccessat	509
#define	__NR_mq_open	510
#define	__NR_mq_close	511
#define	__NR_mq_unlink	512
#define	__NR_mq_getattr	513
#define	__NR_mq_setattr	514
#define	__NR_mq_notify	515
#define	__NR_mq_send	516
#define	__NR_mq_receive	517
#define	__NR_mq_timedsend	518
#define	__NR_mq_timedreceive	519
#define	__NR_ioprio_set	520
#define	__NR_ioprio_get	521
#define	__NR_chroot_kernel	522
#define	__NR_renameat	523
#define	__NR_mkdirat	524
#define	__NR_mkfifoat	525
#define	__NR_mknodat	526
#define	__NR_readlinkat	527
#define	__NR_symlinkat	528
#define	__NR_swapoff	529
#define	__NR_vquotactl	530
#define	__NR_linkat	531
#define	__NR_eaccess	532
#define	__NR_lpathconf	533
#define	__NR_vmm_guest_ctl	534
#define	__NR_vmm_guest_sync_addr	535
#define	__NR_procctl	536
#define	__NR_chflagsat	537
#define	__NR_pipe2	538
#define	__NR_utimensat	539
#define	__NR_futimens	540
#define	__NR_accept4	541
#define	__NR_lwp_setname	542
#define	__NR_ppoll	543
#define	__NR_lwp_setaffinity	544
#define	__NR_lwp_getaffinity	545
#define	__NR_lwp_create2	546
#define	__NR_getcpuclockid	547
#define	__NR_wait6	548
#define	__NR_lwp_getname	549
#define	__NR_getrandom	550
#define	__NR___realpath	551
#define	__NR_MAXSYSCALL	552

#define __NR_fake_sigreturn	1000

#endif /* __VKI_UNISTD_DRAGONFLY_H */

