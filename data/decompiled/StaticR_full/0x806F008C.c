/* Function at 0x806F008C, size=248 bytes */
/* Stack frame: 0 bytes */

int FUN_806F008C(int r3, int r4, int r5)
{
    /* li r0, 3 */ // 0x806F008C
    /* li r5, 0 */ // 0x806F0090
    /* mtctr r0 */ // 0x806F0094
    /* clrlwi r0, r5, 0x18 */ // 0x806F0098
    /* mulli r0, r0, 0x30 */ // 0x806F009C
    r4 = r3 + r0; // 0x806F00A0
    r4 = *(0x34 + r4); // lwz @ 0x806F00A4
    if (>) goto 0x0x806f00b4;
    /* b 0x806f00b8 */ // 0x806F00B0
    /* li r4, -1 */ // 0x806F00B4
    if (==) goto 0x0x806f00cc;
    r3 = r3 + r0; // 0x806F00C0
    r3 = *(0x3c + r3); // lwz @ 0x806F00C4
    return;
    r5 = r5 + 1; // 0x806F00CC
    /* clrlwi r0, r5, 0x18 */ // 0x806F00D0
    /* mulli r0, r0, 0x30 */ // 0x806F00D4
    r4 = r3 + r0; // 0x806F00D8
    r4 = *(0x34 + r4); // lwz @ 0x806F00DC
    if (>) goto 0x0x806f00ec;
    /* b 0x806f00f0 */ // 0x806F00E8
    /* li r4, -1 */ // 0x806F00EC
    if (==) goto 0x0x806f0104;
    r3 = r3 + r0; // 0x806F00F8
    r3 = *(0x3c + r3); // lwz @ 0x806F00FC
    return;
    r5 = r5 + 1; // 0x806F0104
    /* clrlwi r0, r5, 0x18 */ // 0x806F0108
    /* mulli r0, r0, 0x30 */ // 0x806F010C
    r4 = r3 + r0; // 0x806F0110
    r4 = *(0x34 + r4); // lwz @ 0x806F0114
    if (>) goto 0x0x806f0124;
    /* b 0x806f0128 */ // 0x806F0120
    /* li r4, -1 */ // 0x806F0124
    if (==) goto 0x0x806f013c;
    r3 = r3 + r0; // 0x806F0130
    r3 = *(0x3c + r3); // lwz @ 0x806F0134
    return;
    r5 = r5 + 1; // 0x806F013C
    /* clrlwi r0, r5, 0x18 */ // 0x806F0140
    /* mulli r0, r0, 0x30 */ // 0x806F0144
    r4 = r3 + r0; // 0x806F0148
    r4 = *(0x34 + r4); // lwz @ 0x806F014C
    if (>) goto 0x0x806f015c;
    /* b 0x806f0160 */ // 0x806F0158
    /* li r4, -1 */ // 0x806F015C
    if (==) goto 0x0x806f0174;
    r3 = r3 + r0; // 0x806F0168
    r3 = *(0x3c + r3); // lwz @ 0x806F016C
    return;
    r5 = r5 + 1; // 0x806F0174
    if (counter-- != 0) goto 0x0x806f0098;
    /* li r3, 0 */ // 0x806F017C
    return;
}