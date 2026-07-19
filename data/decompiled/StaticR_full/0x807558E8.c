/* Function at 0x807558E8, size=80 bytes */
/* Stack frame: 0 bytes */

void FUN_807558E8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* li r0, 1 */ // 0x807558E8
    *(0x13a + r3) = r0; // stb @ 0x807558EC
    /* li r7, 0 */ // 0x807558F0
    /* li r8, 0 */ // 0x807558F4
    /* li r5, 0 */ // 0x807558F8
    /* li r4, 0xff */ // 0x807558FC
    /* b 0x80755928 */ // 0x80755900
    r6 = *(0xe0 + r3); // lwz @ 0x80755904
    r7 = r7 + 1; // 0x80755908
    /* lwzx r6, r6, r8 */ // 0x8075590C
    r8 = r8 + 4; // 0x80755910
    *(0xd8 + r6) = r5; // sth @ 0x80755914
    *(0xd4 + r6) = r5; // stb @ 0x80755918
    *(0xd5 + r6) = r5; // stb @ 0x8075591C
    *(0xd6 + r6) = r5; // stb @ 0x80755920
    *(0xd7 + r6) = r4; // stb @ 0x80755924
    r0 = *(0xd0 + r3); // lbz @ 0x80755928
    if (<) goto 0x0x80755904;
    return;
}