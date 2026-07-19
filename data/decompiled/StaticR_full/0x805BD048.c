/* Function at 0x805BD048, size=216 bytes */
/* Stack frame: 0 bytes */

int FUN_805BD048(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x805BD048
    r5 = *(0xde + r3); // lha @ 0x805BD04C
    r0 = *(0 + r4); // lwzu @ 0x805BD050
    /* li r6, 5 */ // 0x805BD054
    if (<) goto 0x0x805bd068;
    /* li r6, 0 */ // 0x805BD060
    /* b 0x805bd0b4 */ // 0x805BD064
    r0 = *(4 + r4); // lwz @ 0x805BD068
    if (<) goto 0x0x805bd07c;
    /* li r6, 1 */ // 0x805BD074
    /* b 0x805bd0b4 */ // 0x805BD078
    r0 = *(8 + r4); // lwz @ 0x805BD07C
    if (<) goto 0x0x805bd090;
    /* li r6, 2 */ // 0x805BD088
    /* b 0x805bd0b4 */ // 0x805BD08C
    r0 = *(0xc + r4); // lwz @ 0x805BD090
    if (<) goto 0x0x805bd0a4;
    /* li r6, 3 */ // 0x805BD09C
    /* b 0x805bd0b4 */ // 0x805BD0A0
    r0 = *(0x10 + r4); // lwz @ 0x805BD0A4
    if (<) goto 0x0x805bd0b4;
    /* li r6, 4 */ // 0x805BD0B0
    /* lis r4, 0 */ // 0x805BD0B4
    r3 = *(0xda + r3); // lhz @ 0x805BD0B8
    /* lhzu r0, 0(r4) */ // 0x805BD0BC
    /* li r5, 4 */ // 0x805BD0C0
    if (<) goto 0x0x805bd0d4;
    /* li r5, 0 */ // 0x805BD0CC
    /* b 0x805bd10c */ // 0x805BD0D0
    r0 = *(2 + r4); // lhz @ 0x805BD0D4
    if (<) goto 0x0x805bd0e8;
    /* li r5, 1 */ // 0x805BD0E0
    /* b 0x805bd10c */ // 0x805BD0E4
    r0 = *(4 + r4); // lhz @ 0x805BD0E8
    if (<) goto 0x0x805bd0fc;
    /* li r5, 2 */ // 0x805BD0F4
    /* b 0x805bd10c */ // 0x805BD0F8
    r0 = *(6 + r4); // lhz @ 0x805BD0FC
    if (<) goto 0x0x805bd10c;
    /* li r5, 3 */ // 0x805BD108
    r3 = r6 + r5; // 0x805BD10C
    /* bltlr  */ // 0x805BD114
    /* li r3, 7 */ // 0x805BD118
    return;
}