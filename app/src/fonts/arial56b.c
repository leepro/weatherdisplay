#include <ets_sys.h>

/* '*' */
static const unsigned int char42[12] ICACHE_RODATA_ATTR={
16,15,32,0,
0xF80FE003,0xFE3FFC1F,0x1F7C3E3E,0x0F780F78,0x1F7C0F78,0xFE3F3E3E,0xF80FFC1F,0x0000E003};

/* '+' */
static const unsigned int char43[22] ICACHE_RODATA_ATTR={
24,24,72,6,
0x00007E00,0x7E00007E,0x007E0000,0x00007E00,0x7E00007E,0x007E0000,0xFF007E00,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x007E00FF,0x00007E00,0x7E00007E,0x007E0000,0x00007E00,0x7E00007E,0x007E0000};

/* ',' */
static const unsigned int char44[12] ICACHE_RODATA_ATTR={
16,15,32,28,
0xF007F007,0xF007F007,0xF007F007,0x7000F007,0xF0007000,0xE003E001,0x8007C00F,0x00000006};

/* '-' */
static const unsigned int char45[7] ICACHE_RODATA_ATTR={
16,6,12,20,
0xFE3FFE3F,0xFE3FFE3F,0xFE3FFE3F};

/* '.' */
static const unsigned int char46[8] ICACHE_RODATA_ATTR={
16,7,16,28,
0xF007F007,0xF007F007,0xF007F007,0x0000F007};

/* '/' */
static const unsigned int char47[22] ICACHE_RODATA_ATTR={
16,35,72,0,
0x3E003E00,0x7C007C00,0x7C007C00,0xF800FC00,0xF800F800,0xF001F800,0xF001F001,0xE003F001,0xE003E003,0xE007E003,0xC007C007,0xC007C007,0x800F800F,0x800F800F,0x001F001F,0x001F001F,0x003E003F,0x0000003E};

/* '0' */
static const unsigned int char48[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x01007F00,0xFF07C0FF,0xF8FF0FF0,0x1FF8FF0F,0xE31FFCFF,0xFEC13FFC,0x3FFE803F,0x003FFE80,0x7F007F7E,0x7F7F007F,0x007F7F00,0x7F007F7F,0x7F7F007F,0x007F7F00,0x7F007F7F,0x7F7F007F,0x007F7F00,0x7F007F7F,0x3F7E003F,0x803FFE80,0xFEC13FFE,0x1FFCE31F,0xFF0FFCFF,0xF8FF0FF8,0x01F0FF07,0x7F00C0FF,0x00000000};

/* '1' */
static const unsigned int char49[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x00F00300,0x0700F003,0xF00F00F0,0x00F01F00,0x7F00F03F,0xF0FF01F0,0x0FF0FF07,0xF70FF0FF,0xF0E70FF0,0x0FF0C70F,0x0708F007,0xF00700F0,0x00F00700,0x0700F007,0xF00700F0,0x00F00700,0x0700F007,0xF00700F0,0x00F00700,0x0700F007,0xF00700F0,0x00F00700,0x0700F007,0xF00700F0,0x00F00700,0x0700F007,0x000000F0};

/* '2' */
static const unsigned int char50[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x01807F00,0xFF03F0FF,0xFCFF07F8,0x1FFEFF0F,0xE11FFEFF,0xFFC01FFF,0x3F7F803F,0x801F7F80,0x7F00007F,0x007F0000,0x0000FE00,0xFC0100FE,0x00FC0300,0x0F00F807,0xE01F00F0,0x00C03F00,0xFF00807F,0x00FE0100,0x0700FC03,0xF00700F8,0x00E00F00,0x1FFFFF1F,0xFF3FFFFF,0xFFFF3FFF,0x7FFFFF7F,0xFF7FFFFF,0x000000FF};

/* '3' */
static const unsigned int char51[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x01007F00,0xFF07C0FF,0xF0FF0FE0,0x1FF8FF0F,0xE31FF8FF,0xFCC13FFC,0x07FC813F,0x0100FC81,0xF80300FC,0x00F80700,0x3F00F01F,0x803F00C0,0x00F03F00,0x0100F83F,0xFE0000FC,0x00FE0000,0x00007F00,0x7F00007F,0x7F7F001F,0x807F7F00,0xFE803FFF,0x3FFEE33F,0xFF1FFCFF,0xF8FF0FFC,0x03F0FF07,0x7F00C0FF,0x00000000};

/* '4' */
static const unsigned int char52[39] ICACHE_RODATA_ATTR={
32,35,140,0,
0x801F0000,0x803F0000,0x807F0000,0x807F0000,0x80FF0000,0x80FF0100,0x80FF0100,0x80FF0300,0x80FF0700,0x80FF0F00,0x80FF0F00,0x80BF1F00,0x803F3F00,0x803F3F00,0x803F7E00,0x803FFC00,0x803FFC00,0x803FF801,0x803FF003,0x803FF003,0x803FE007,0x803FC00F,0xF8FFFF0F,0xF8FFFF0F,0xF8FFFF0F,0xF8FFFF0F,0xF8FFFF0F,0xF8FFFF0F,0x803F0000,0x803F0000,0x803F0000,0x803F0000,0x803F0000,0x803F0000,0x803F0000};

/* '5' */
static const unsigned int char53[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x03FCFF03,0xFF03FCFF,0xFCFF07FC,0x07FCFF07,0xFF07FCFF,0x00F007FC,0x0F00E00F,0xE00F00E0,0x00E00F00,0x1F80EF0F,0xFF1FE0FF,0xFCFF1FF8,0x1FFCFF1F,0xE13FFEFF,0xFF803FFE,0x007F0007,0x00007F00,0x7F00007F,0x7F7F001F,0x807F7F00,0xFE803FFF,0x3FFEE13F,0xFF1FFCFF,0xF8FF0FFC,0x03F0FF07,0x7F00C0FF,0x00000000};

/* '6' */
static const unsigned int char54[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x00803F00,0xFF03E0FF,0xF8FF07F0,0x0FF8FF0F,0xE31FFCFF,0xFEC11FFC,0x3FFE803F,0x003FF800,0x00007F00,0x7F00007F,0x7F7F801F,0xF0FF7EE0,0x7FF8FF7F,0xFF7FFCFF,0xFEC17FFE,0x7FFF807F,0x007F7F00,0x7F007F7F,0x3F7F003F,0x803F7F00,0xFF803F7F,0x1FFEE11F,0xFF0FFEFF,0xF8FF07FC,0x01F0FF03,0x7F00E0FF,0x00000080};

/* '7' */
static const unsigned int char55[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x7FFFFF7F,0xFF7FFFFF,0xFFFF7FFF,0x7FFFFF7F,0xFF7FFFFF,0xFC0000FE,0x00F80100,0x0700F003,0xE00700F0,0x00C00F00,0x1F00C00F,0x803F0080,0x00003F00,0x7E00007F,0x007E0000,0x0000FE00,0xFC0100FC,0x00FC0100,0x0300FC01,0xF80300F8,0x00F80300,0x0300F803,0xF00700F0,0x00F00700,0x0700F007,0xF00700F0,0x00000000};

/* '8' */
static const unsigned int char56[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x03007F00,0xFF07E0FF,0xF8FF0FF0,0x1FFCFF1F,0xC13FFCE3,0xFE803FFE,0x3FFE803F,0x803FFE80,0xFE803FFE,0x1FFCC11F,0xFF0FFCE3,0xE0FF03F8,0x07C0FF01,0xFF0FF0FF,0xFCC11FF8,0x3FFE803F,0x007FFE80,0x7F007F7F,0x7F7F007F,0x007F7F00,0xFF807F7F,0x3FFE803F,0xFF1FFEE1,0xFCFF0FFC,0x03F0FF07,0x7F00E0FF,0x00000080};

/* '9' */
static const unsigned int char57[31] ICACHE_RODATA_ATTR={
24,35,108,0,
0x0300FF00,0xFF07C0FF,0xF0FF0FE0,0x3FF8FF1F,0xC33FFCFF,0xFE807FFC,0x7FFE007F,0x007F7E00,0x7F007F7E,0x7F7F007F,0x807F7F00,0xFFC13FFF,0x1FFFFF3F,0xFF0FFFFF,0xBFFF07FF,0x007FFF03,0x00007FFC,0x7F00007F,0x0F7E0000,0x803F7E80,0xFCC03FFE,0x1FFCE31F,0xFF1FFCFF,0xF0FF0FF8,0x03E0FF07,0xFE0080FF,0x00000000};


const unsigned int *arial56b[18] ={
(unsigned int*)42,(unsigned int*)57,
char42,
char43,
char44,
char45,
char46,
char47,
char48,
char49,
char50,
char51,
char52,
char53,
char54,
char55,
char56,
char57};