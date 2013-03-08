#define __VERSION__ ""
#define SDC_INIT_RETRY              100
#define SERIAL_DEFAULT_BITRATE      38400
#define SERIAL_BUFFERS_SIZE         16
#define CH_FREQUENCY                    1000
#define CH_TIME_QUANTUM                 20
#define CH_MEMCORE_SIZE                 0x20000

#ifdef HAL_USE_PAL
  #define HAL_USE_PAL 1
#else
  #define HAL_USE_PAL 0
#endif
#ifdef HAL_USE_SERIAL
  #define HAL_USE_SERIAL 1
#else
  #define HAL_USE_SERIAL 0
#endif
#ifdef ADC_USE_MUTUAL_EXCLUSION
  #define ADC_USE_MUTUAL_EXCLUSION 1
#else
  #define ADC_USE_MUTUAL_EXCLUSION 0
#endif
#ifdef CAN_USE_SLEEP_MODE
  #define CAN_USE_SLEEP_MODE 1
#else
  #define CAN_USE_SLEEP_MODE 0
#endif
#ifdef I2C_USE_MUTUAL_EXCLUSION
  #define I2C_USE_MUTUAL_EXCLUSION 1
#else
  #define I2C_USE_MUTUAL_EXCLUSION 0
#endif
#ifdef MAC_USE_ZERO_COPY
  #define MAC_USE_ZERO_COPY 1
#else
  #define MAC_USE_ZERO_COPY 0
#endif
#ifdef MAC_USE_EVENTS
  #define MAC_USE_EVENTS 1
#else
  #define MAC_USE_EVENTS 0
#endif
#ifdef MMC_NICE_WAITING
  #define MMC_NICE_WAITING 1
#else
  #define MMC_NICE_WAITING 0
#endif
#ifdef SDC_MMC_SUPPORT
  #define SDC_MMC_SUPPORT 1
#else
  #define SDC_MMC_SUPPORT 0
#endif
#ifdef SDC_NICE_WAITING
  #define SDC_NICE_WAITING 1
#else
  #define SDC_NICE_WAITING 0
#endif
#ifdef SPI_USE_WAIT
  #define SPI_USE_WAIT 1
#else
  #define SPI_USE_WAIT 0
#endif
#ifdef SPI_USE_MUTUAL_EXCLUSION
  #define SPI_USE_MUTUAL_EXCLUSION 1
#else
  #define SPI_USE_MUTUAL_EXCLUSION 0
#endif
#ifdef CH_NO_IDLE_THREAD
  #define CH_NO_IDLE_THREAD 1
#else
  #define CH_NO_IDLE_THREAD 0
#endif
#ifdef CH_OPTIMIZE_SPEED
  #define CH_OPTIMIZE_SPEED 1
#else
  #define CH_OPTIMIZE_SPEED 0
#endif
#ifdef CH_USE_REGISTRY
  #define CH_USE_REGISTRY 1
#else
  #define CH_USE_REGISTRY 0
#endif
#ifdef CH_USE_WAITEXIT
  #define CH_USE_WAITEXIT 1
#else
  #define CH_USE_WAITEXIT 0
#endif
#ifdef CH_USE_SEMAPHORES
  #define CH_USE_SEMAPHORES 1
#else
  #define CH_USE_SEMAPHORES 0
#endif
#ifdef CH_USE_SEMAPHORES_PRIORITY
  #define CH_USE_SEMAPHORES_PRIORITY 1
#else
  #define CH_USE_SEMAPHORES_PRIORITY 0
#endif
#ifdef CH_USE_SEMSW
  #define CH_USE_SEMSW 1
#else
  #define CH_USE_SEMSW 0
#endif
#ifdef CH_USE_MUTEXES
  #define CH_USE_MUTEXES 1
#else
  #define CH_USE_MUTEXES 0
#endif
#ifdef CH_USE_CONDVARS
  #define CH_USE_CONDVARS 1
#else
  #define CH_USE_CONDVARS 0
#endif
#ifdef CH_USE_CONDVARS_TIMEOUT
  #define CH_USE_CONDVARS_TIMEOUT 1
#else
  #define CH_USE_CONDVARS_TIMEOUT 0
#endif
#ifdef CH_USE_EVENTS
  #define CH_USE_EVENTS 1
#else
  #define CH_USE_EVENTS 0
#endif
#ifdef CH_USE_EVENTS_TIMEOUT
  #define CH_USE_EVENTS_TIMEOUT 1
#else
  #define CH_USE_EVENTS_TIMEOUT 0
#endif
#ifdef CH_USE_MESSAGES
  #define CH_USE_MESSAGES 1
#else
  #define CH_USE_MESSAGES 0
#endif
#ifdef CH_USE_MESSAGES_PRIORITY
  #define CH_USE_MESSAGES_PRIORITY 1
#else
  #define CH_USE_MESSAGES_PRIORITY 0
#endif
#ifdef CH_USE_MAILBOXES
  #define CH_USE_MAILBOXES 1
#else
  #define CH_USE_MAILBOXES 0
#endif
#ifdef CH_USE_QUEUES
  #define CH_USE_QUEUES 1
#else
  #define CH_USE_QUEUES 0
#endif
#ifdef CH_USE_MEMCORE
  #define CH_USE_MEMCORE 1
#else
  #define CH_USE_MEMCORE 0
#endif
#ifdef CH_USE_HEAP
  #define CH_USE_HEAP 1
#else
  #define CH_USE_HEAP 0
#endif
#ifdef CH_USE_MALLOC_HEAP
  #define CH_USE_MALLOC_HEAP 1
#else
  #define CH_USE_MALLOC_HEAP 0
#endif
#ifdef CH_USE_MEMPOOLS
  #define CH_USE_MEMPOOLS 1
#else
  #define CH_USE_MEMPOOLS 0
#endif
#ifdef CH_USE_DYNAMIC
  #define CH_USE_DYNAMIC 1
#else
  #define CH_USE_DYNAMIC 0
#endif
#ifdef CH_DBG_SYSTEM_STATE_CHECK
  #define CH_DBG_SYSTEM_STATE_CHECK 1
#else
  #define CH_DBG_SYSTEM_STATE_CHECK 0
#endif
#ifdef CH_DBG_ENABLE_CHECKS
  #define CH_DBG_ENABLE_CHECKS 1
#else
  #define CH_DBG_ENABLE_CHECKS 0
#endif
#ifdef CH_DBG_ENABLE_ASSERTS
  #define CH_DBG_ENABLE_ASSERTS 1
#else
  #define CH_DBG_ENABLE_ASSERTS 0
#endif
#ifdef CH_DBG_ENABLE_TRACE
  #define CH_DBG_ENABLE_TRACE 1
#else
  #define CH_DBG_ENABLE_TRACE 0
#endif
#ifdef CH_DBG_ENABLE_STACK_CHECK
  #define CH_DBG_ENABLE_STACK_CHECK 1
#else
  #define CH_DBG_ENABLE_STACK_CHECK 0
#endif
#ifdef CH_DBG_FILL_THREADS
  #define CH_DBG_FILL_THREADS 1
#else
  #define CH_DBG_FILL_THREADS 0
#endif
#ifdef CH_DBG_THREADS_PROFILING
  #define CH_DBG_THREADS_PROFILING 1
#else
  #define CH_DBG_THREADS_PROFILING 0
#endif
