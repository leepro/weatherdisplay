#include <ets_sys.h>

/* ' ' */
static const unsigned int char32[5] ICACHE_RODATA_ATTR={
8,1,4,25,
0x00000000};

/* '!' */
static const unsigned int char33[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x18181818,0x18181818,0x18181818,0x18181818,0x18180000};

/* '"' */
static const unsigned int char34[6] ICACHE_RODATA_ATTR={
8,7,8,0,
0x63636363,0x00636363};

/* '#' */
static const unsigned int char35[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x0C030C03,0x18061807,0x18061806,0xFE7FFE7F,0x300C300C,0x300C300C,0xFE7F300C,0x6018FE7F,0xE0386018,0xC030C030};

/* '%' */
static const unsigned int char37[19] ICACHE_RODATA_ATTR={
24,20,60,0,
0x1FC0000F,0xC139C081,0x80C33080,0x3000C330,0xC63000C7,0x00CC3900,0x0F008C1F,0x18000018,0xF83100F0,0x009C3300,0x63000C63,0x0CC3000C,0x010CC300,0x81019C83,0xF00003F8};

/* '&' */
static const unsigned int char38[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xE01FC007,0x30307018,0x30303030,0xE01C6018,0x000FC00F,0x8471003F,0xECC0CEE0,0x38C07CC0,0xFE703CE0,0x861FE73F};

/* ''' */
static const unsigned int char39[6] ICACHE_RODATA_ATTR={
8,7,8,0,
0x18181818,0x00181818};

/* '(' */
static const unsigned int char40[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x180C0C06,0x30303018,0x60606060,0x60606060,0x30303060,0x0C0C1818,0x00000006};

/* ')' */
static const unsigned int char41[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x18303060,0x0C0C0C18,0x06060606,0x06060606,0x0C0C0C06,0x30301818,0x00000060};

/* '*' */
static const unsigned int char42[6] ICACHE_RODATA_ATTR={
8,8,8,0,
0xFF5A1818,0x20243C3C};

/* '+' */
static const unsigned int char43[10] ICACHE_RODATA_ATTR={
16,12,24,4,
0x80018001,0x80018001,0xFC3F8001,0x8001FC3F,0x80018001,0x80018001};

/* ',' */
static const unsigned int char44[6] ICACHE_RODATA_ATTR={
8,6,8,18,
0x08081818,0x00001018};

/* '-' */
static const unsigned int char45[5] ICACHE_RODATA_ATTR={
8,2,4,12,
0x00007F7F};

/* '.' */
static const unsigned int char46[5] ICACHE_RODATA_ATTR={
8,2,4,18,
0x00001818};

/* '/' */
static const unsigned int char47[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x06060303,0x0C0C0C06,0x1818181C,0x60303030,0xC0E06060};

/* '0' */
static const unsigned int char48[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF80FE003,0x0C181C1C,0x06300C18,0x06300630,0x06300630,0x06300630,0x06300630,0x0C180630,0x1C1C0C18,0xE003F80F};

/* '1' */
static const unsigned int char49[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x30003000,0xF0007000,0xB007F003,0x30003006,0x30003000,0x30003000,0x30003000,0x30003000,0x30003000,0x30003000};

/* '2' */
static const unsigned int char50[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF00FE007,0x1C30381C,0x0C000C30,0x0C000C00,0x18001800,0x60003000,0x8001C000,0x00060003,0x0018000C,0xFC3FFC3F};

/* '3' */
static const unsigned int char51[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF00FE007,0x0C38381C,0x0C000C30,0x38000C00,0xF801F001,0x0E001C00,0x06000600,0x06300600,0x1C1C0C38,0xE003F80F};

/* '4' */
static const unsigned int char52[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x38001800,0x78007800,0x9801D800,0x18039803,0x180E1806,0x1818180C,0xFE3F1838,0x1800FE3F,0x18001800,0x18001800};

/* '5' */
static const unsigned int char53[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFC0FFC0F,0x0018001C,0x00180018,0xF83FE013,0x0C301C3C,0x06000600,0x06000600,0x06300600,0x1C1C0C38,0xE007F80F};

/* '6' */
static const unsigned int char54[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF807F001,0x0E1C1C0E,0x00180618,0xE0330030,0x1C3CF837,0x06300C38,0x06300630,0x06180630,0x1C0C0C18,0xE003F807};

/* '7' */
static const unsigned int char55[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFC3FFC3F,0x18000800,0x20003000,0xC0006000,0x8001C000,0x80018001,0x00030003,0x00030003,0x00060006,0x00060006};

/* '8' */
static const unsigned int char56[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF80FE003,0x0C18180C,0x0C180C18,0x180C0C18,0xF80FF007,0x0C181C1C,0x06300630,0x06300630,0x1C1C0C18,0xE003F80F};

/* '9' */
static const unsigned int char57[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF00FE003,0x0C18181C,0x06300430,0x06300630,0x0E180630,0xF60F1E1C,0x0600C603,0x0C300C00,0x381C0C38,0xC007F00F};

/* ':' */
static const unsigned int char58[8] ICACHE_RODATA_ATTR={
8,15,16,5,
0x00001818,0x00000000,0x00000000,0x00181800};

/* ';' */
static const unsigned int char59[9] ICACHE_RODATA_ATTR={
8,19,20,5,
0x00001818,0x00000000,0x00000000,0x08181800,0x00101808};

/* '<' */
static const unsigned int char60[11] ICACHE_RODATA_ATTR={
16,13,28,4,
0x1C000400,0xE0017800,0x001C0007,0x001C0030,0xE0010007,0x1C007800,0x00000400};

/* '=' */
static const unsigned int char61[8] ICACHE_RODATA_ATTR={
16,8,16,6,
0xFE3FFE3F,0x00000000,0x00000000,0xFE3FFE3F};

/* '>' */
static const unsigned int char62[11] ICACHE_RODATA_ATTR={
16,13,28,4,
0x00380020,0x8007001E,0x3800E000,0x38000C00,0x8007E000,0x0038001E,0x00000020};

/* '?' */
static const unsigned int char63[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF80FE003,0x0E181C1C,0x06300630,0x0E000600,0x18000C00,0x60003000,0xC000E000,0xC000C000,0x00000000,0xC000C000};

/* '@' */
static const unsigned int char64[24] ICACHE_RODATA_ATTR={
24,26,80,0,
0x01007F00,0x8107C0FF,0x70000EE0,0x3838001C,0xFD319C71,0x8E8F638C,0x66060763,0x03C60603,0x0603CC06,0xCC0603CC,0x06CC0E03,0x1C06CC0C,0xE7180EC6,0xF763701E,0xC0F371E0,0x38030030,0x001E0600,0x78800F1C,0x00E0FF03,0x0000807F};

/* 'A' */
static const unsigned int char65[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x80018001,0xC003C003,0x6006E007,0x700E6006,0x300C300C,0x18181818,0xFC3FF81F,0x0E700C30,0x06600660,0x03C003C0};

/* 'B' */
static const unsigned int char66[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF87FF07F,0x0E601C60,0x06600660,0x0E600660,0xF87F1C60,0x0E60FC7F,0x03600760,0x03600360,0x0E600760,0xF07FFC7F};

/* 'C' */
static const unsigned int char67[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF80FF007,0x0E300C1C,0x03600770,0x00C000E0,0x00C000C0,0x00C000C0,0x036000C0,0x06700760,0x1C180E30,0xF007F80F};

/* 'D' */
static const unsigned int char68[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF0FFE0FF,0x0CC03CC0,0x06C006C0,0x03C003C0,0x03C003C0,0x03C003C0,0x03C003C0,0x06C006C0,0x3CC00CC0,0xC0FFF0FF};

/* 'E' */
static const unsigned int char69[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFF7FFF7F,0x00600060,0x00600060,0x00600060,0xFE7F0060,0x0060FE7F,0x00600060,0x00600060,0x00600060,0xFF7FFF7F};

/* 'F' */
static const unsigned int char70[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFE7FFE7F,0x00600060,0x00600060,0x00600060,0xF87F0060,0x0060F87F,0x00600060,0x00600060,0x00600060,0x00600060};

/* 'G' */
static const unsigned int char71[19] ICACHE_RODATA_ATTR={
24,20,60,0,
0x01007F00,0xC003C0FF,0x700007E0,0x0C30000E,0x000C1800,0x00001800,0x18000018,0x07180000,0xF80718F8,0x1C180018,0x000C1800,0x18000E18,0x03380007,0xFF01F0C0,0x007F00E0};

/* 'H' */
static const unsigned int char72[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x03600360,0x03600360,0x03600360,0x03600360,0xFF7F0360,0x0360FF7F,0x03600360,0x03600360,0x03600360,0x03600360};

/* 'I' */
static const unsigned int char73[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x18181818,0x18181818,0x18181818,0x18181818,0x18181818};

/* 'J' */
static const unsigned int char74[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x18001800,0x18001800,0x18001800,0x18001800,0x18001800,0x18001800,0x18001800,0x18181818,0x300C1818,0xC007F00F};

/* 'K' */
static const unsigned int char75[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x1CC00EC0,0x70C038C0,0xC0C1E0C0,0x00C780C3,0x00DF00CF,0xC0F180FB,0xE0C0C0E1,0x38C070C0,0x1CC018C0,0x07C00EC0};

/* 'L' */
static const unsigned int char76[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x00300030,0x00300030,0x00300030,0x00300030,0x00300030,0x00300030,0x00300030,0x00300030,0x00300030,0xFC3FFC3F};

/* 'M' */
static const unsigned int char77[19] ICACHE_RODATA_ATTR={
24,20,60,0,
0x0F38000E,0x000F7800,0x78000F78,0x0DD8800D,0x800DD880,0x98C10CD8,0x0C98C10C,0x630C98C1,0x18630C18,0x0C18630C,0x360C1877,0x18360C18,0x0C18360C,0x1C0C181C,0x181C0C18};

/* 'N' */
static const unsigned int char78[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x03700370,0x03780378,0x0366036C,0x03630366,0x83618361,0xC360C360,0x33606360,0x1B603360,0x0F600F60,0x07600760};

/* 'O' */
static const unsigned int char79[19] ICACHE_RODATA_ATTR={
24,20,60,0,
0x01007F00,0xC103C0FF,0x700007E0,0x0C38000E,0x001C1800,0x0C00181C,0x180C0018,0x00180C00,0x0C00180C,0x1C0C0018,0x000C1C00,0x38000E18,0x03700007,0xFF01E0C1,0x007F00C0};

/* 'P' */
static const unsigned int char80[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xF87FF07F,0x0E601C60,0x06600660,0x06600660,0x1C600E60,0xE07FF87F,0x00600060,0x00600060,0x00600060,0x00600060};

/* 'Q' */
static const unsigned int char81[20] ICACHE_RODATA_ATTR={
24,21,64,0,
0x01007F00,0xC103C0FF,0x700007E0,0x0C38000E,0x000C1800,0x0C001818,0x180C0018,0x00180C00,0x0C00180C,0x0C0C0018,0x000C1C00,0x38070E18,0x03F00707,0xFF01F0C1,0x1C7F00F8,0x000C0000};

/* 'R' */
static const unsigned int char82[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFCFFF8FF,0x07C00EC0,0x03C003C0,0x07C003C0,0xFCFF0EC0,0xE0C0F0FF,0x30C060C0,0x1CC038C0,0x06C00CC0,0x03C007C0};

/* 'S' */
static const unsigned int char83[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFC1FF007,0x06701E38,0x03600360,0x00380070,0xF81FC03F,0x1E00FE01,0x03C00700,0x03E003C0,0x0E380670,0xF007FC1F};

/* 'T' */
static const unsigned int char84[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFE7FFE7F,0x80018001,0x80018001,0x80018001,0x80018001,0x80018001,0x80018001,0x80018001,0x80018001,0x80018001};

/* 'U' */
static const unsigned int char85[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x03600360,0x03600360,0x03600360,0x03600360,0x03600360,0x03600360,0x03600360,0x07700360,0x1E3C0630,0xF007FC1F};

/* 'V' */
static const unsigned int char86[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x07E003C0,0x06600660,0x0C300E70,0x18180C30,0x381C1818,0x300C300C,0x6006700E,0xC003E006,0xC003C003,0x80018001};

/* 'W' */
static const unsigned int char87[19] ICACHE_RODATA_ATTR={
24,20,60,0,
0xC00318C0,0x3C600318,0x063C6006,0x60063C60,0x66300666,0x0C66300C,0x300CC330,0xC3100CC3,0x88C11108,0x19888111,0x810B9081,0xD0000BD0,0x0FD0000B,0x000EF000,0x70000E70};

/* 'X' */
static const unsigned int char88[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x1C380E70,0x381C1818,0xE007700E,0xC003E007,0x80018001,0xC0038001,0x700EE007,0x381C700E,0x0C381C38,0x07E00E70};

/* 'Y' */
static const unsigned int char89[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x0E6007C0,0x1C300C30,0x381C1818,0x6006700E,0xC0036006,0x8001C003,0x80018001,0x80018001,0x80018001,0x80018001};

/* 'Z' */
static const unsigned int char90[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0xFF7FFF7F,0x0C000600,0x38001800,0x60007000,0xC001C000,0x00038003,0x000C0006,0x0038001C,0x00600030,0xFFFFFFFF};

/* '[' */
static const unsigned int char91[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x30303E3E,0x30303030,0x30303030,0x30303030,0x30303030,0x3E303030,0x0000003E};

/* '\' */
static const unsigned int char92[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x6060C0C0,0x30303060,0x18181838,0x060C0C0C,0x03070606};

/* ']' */
static const unsigned int char93[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x06063E3E,0x06060606,0x06060606,0x06060606,0x06060606,0x3E060606,0x0000003E};

/* '^' */
static const unsigned int char94[7] ICACHE_RODATA_ATTR={
8,10,12,0,
0x243C3C18,0x42422424,0x0000C342};

/* '_' */
static const unsigned int char95[5] ICACHE_RODATA_ATTR={
16,2,4,23,
0xFFFFFFFF};

/* '`' */
static const unsigned int char96[5] ICACHE_RODATA_ATTR={
8,4,4,0,
0x060C1C38};

/* 'a' */
static const unsigned int char97[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xF81FF007,0x0C301C18,0x7C000C00,0xCC1FFC07,0x0C300C18,0x1C300C30,0xEC1F7C38,0x0000C60F};

/* 'b' */
static const unsigned int char98[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x00300030,0x00300030,0xC0330030,0x383CF037,0x0C301838,0x0C300C30,0x0C300C30,0x1C300C30,0x383C1838,0xC033F03F};

/* 'c' */
static const unsigned int char99[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xF00FE003,0x1C18381C,0x00300C30,0x00300030,0x0C300030,0x18180C30,0xF00F381C,0x0000E003};

/* 'd' */
static const unsigned int char100[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x0C000C00,0x0C000C00,0xCC030C00,0x3C1CEC0F,0x0C301C18,0x0C300C30,0x0C300C30,0x0C380C30,0x3C1C1C18,0xCC03FC0F};

/* 'e' */
static const unsigned int char101[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xF80FE003,0x0C181C1C,0x06300630,0xFE3FFE3F,0x00300030,0x06180038,0xF80F1C1E,0x0000F003};

/* 'f' */
static const unsigned int char102[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x30303F1F,0x30FEFE30,0x30303030,0x30303030,0x30303030};

/* 'g' */
static const unsigned int char103[14] ICACHE_RODATA_ATTR={
16,20,40,5,
0xEC0FCC03,0x1C183C1C,0x0C300C30,0x0C300C30,0x0C300C30,0x1C180C30,0xEC0F3C1C,0x0C30CC03,0x38381C30,0xE007F01F};

/* 'h' */
static const unsigned int char104[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x00180018,0x00180018,0xF0190018,0x1C1EF81F,0x0C180C1C,0x0C180C18,0x0C180C18,0x0C180C18,0x0C180C18,0x0C180C18};

/* 'i' */
static const unsigned int char105[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x00001818,0x18181800,0x18181818,0x18181818,0x18181818};

/* 'j' */
static const unsigned int char106[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x00000606,0x06060600,0x06060606,0x06060606,0x06060606,0x3C060606,0x0000003C};

/* 'k' */
static const unsigned int char107[14] ICACHE_RODATA_ATTR={
16,20,40,0,
0x00300030,0x00300030,0x1C300030,0x70303830,0xC031E030,0x803F8037,0xC039803F,0xE030E030,0x30307030,0x1C303830};

/* 'l' */
static const unsigned int char108[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x18181818,0x18181818,0x18181818,0x18181818,0x18181818};

/* 'm' */
static const unsigned int char109[16] ICACHE_RODATA_ATTR={
24,15,48,5,
0x1BE0E119,0x3E1EF0F7,0x181C1C38,0x18181818,0x18181818,0x18181818,0x18181818,0x18181818,0x18181818,0x18181818,0x18181818,0x00000018};

/* 'n' */
static const unsigned int char110[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xF81FF019,0x0C1C1C1E,0x0C180C18,0x0C180C18,0x0C180C18,0x0C180C18,0x0C180C18,0x00000C18};

/* 'o' */
static const unsigned int char111[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xF80FE003,0x0C181C1C,0x06300E38,0x06300630,0x06300630,0x0C180E38,0xF80F1C1C,0x0000E003};

/* 'p' */
static const unsigned int char112[14] ICACHE_RODATA_ATTR={
16,20,40,5,
0xF037C033,0x1838383C,0x0C300C30,0x0C300C30,0x0C300C30,0x18380C30,0xF037383C,0x0030C033,0x00300030,0x00300030};

/* 'q' */
static const unsigned int char113[14] ICACHE_RODATA_ATTR={
16,20,40,5,
0xEC0FCC03,0x1C183C1C,0x0C300C30,0x0C300C30,0x0C300C30,0x1C180C38,0xEC0F3C1C,0x0C00CC03,0x0C000C00,0x0C000C00};

/* 'r' */
static const unsigned int char114[8] ICACHE_RODATA_ATTR={
8,15,16,5,
0x70707F6F,0x60606060,0x60606060,0x00606060};

/* 's' */
static const unsigned int char115[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xF01FC007,0x18303838,0x003C0030,0xF80FC01F,0x1C00F801,0x0C380C30,0xF80F181C,0x0000E007};

/* 't' */
static const unsigned int char116[9] ICACHE_RODATA_ATTR={
8,20,20,0,
0x18181808,0x187F7F18,0x18181818,0x18181818,0x0F1F1818};

/* 'u' */
static const unsigned int char117[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0x0C180C18,0x0C180C18,0x0C180C18,0x0C180C18,0x0C180C18,0x1C180C18,0xEC0F3C1C,0x0000CC07};

/* 'v' */
static const unsigned int char118[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0x06300630,0x0C180C18,0x180C1C1C,0x3006180E,0x60073006,0x60036003,0xC001C001,0x00008000};

/* 'w' */
static const unsigned int char119[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0x83C103C0,0x866183C1,0xC663C663,0x4422C423,0x68166C26,0x28146816,0x381C381C,0x00001008};

/* 'x' */
static const unsigned int char120[8] ICACHE_RODATA_ATTR={
8,15,16,5,
0x666642C1,0x18181C24,0x66241818,0x00C34266};

/* 'y' */
static const unsigned int char121[14] ICACHE_RODATA_ATTR={
16,20,40,5,
0x0C300C30,0x18181818,0x300C181C,0x3006300C,0x60066006,0xC0036003,0xC001C003,0x80018001,0x00030003,0x001C001E};

/* 'z' */
static const unsigned int char122[12] ICACHE_RODATA_ATTR={
16,15,32,5,
0xFC1FFC1F,0x38001C00,0xE0007000,0xC001C001,0x00078003,0x001C000E,0xFC3F0038,0x0000FC3F};

/* '{' */
static const unsigned int char123[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x181C0F07,0x18181818,0x30181818,0x1830E0E0,0x18181818,0x0F181818,0x00000007};

/* '|' */
static const unsigned int char124[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x18181818,0x18181818,0x18181818,0x18181818,0x18181818,0x18181818,0x00000018};

/* '}' */
static const unsigned int char125[11] ICACHE_RODATA_ATTR={
8,25,28,0,
0x1818F0E0,0x18181818,0x0C181818,0x180C0707,0x18181818,0xF0181818,0x000000E0};

/* '~' */
static const unsigned int char126[6] ICACHE_RODATA_ATTR={
16,4,8,8,
0xC67F001E,0x7840FE61};


const unsigned int *arial32[97] ={
(unsigned int*)32,(unsigned int*)126,
char32,
char33,
char34,
char35,
0,
char37,
char38,
char39,
char40,
char41,
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
char57,
char58,
char59,
char60,
char61,
char62,
char63,
char64,
char65,
char66,
char67,
char68,
char69,
char70,
char71,
char72,
char73,
char74,
char75,
char76,
char77,
char78,
char79,
char80,
char81,
char82,
char83,
char84,
char85,
char86,
char87,
char88,
char89,
char90,
char91,
char92,
char93,
char94,
char95,
char96,
char97,
char98,
char99,
char100,
char101,
char102,
char103,
char104,
char105,
char106,
char107,
char108,
char109,
char110,
char111,
char112,
char113,
char114,
char115,
char116,
char117,
char118,
char119,
char120,
char121,
char122,
char123,
char124,
char125,
char126};