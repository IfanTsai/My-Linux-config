#ifndef HACKING_H_PA2UMYTB
#define HACKING_H_PA2UMYTB
enum hacking {
	PR_INFO,
	WATCH_DOG,
	KTHREAD,
	// 测试 https://docs.kernel.org/RCU/Design/Requirements/Requirements.html
	RCU,
	MUTEX,
	MEMORY_MODEL_1, // load load，x86 上找不到
	MEMORY_MODEL_2, // store load
	SEQ_FILE_1,
	SEQ_FILE_2,
	SYS_FS,
	WORKQUEUE,
};

int simple_seq_init(void);
void simple_seq_fini(void);

int simple_seq_init2(void);
void simple_seq_fini2(void);

int simple_seq_init3(void);
void simple_seq_fini3(void);

int sysfs_init(void);
void sysfs_exit(void);

int my_workqueue_init(void);
void my_workqueue_exit(void);

#endif /* end of include guard: HACKING_H_PA2UMYTB */
