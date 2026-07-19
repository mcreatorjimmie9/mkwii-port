/* Function at 0x806F0184, size=248 bytes */
/* Stack frame: 0 bytes */

int FUN_806F0184(int r3, int r4, int r5)
{
    /* li r0, 3 */ // 0x806F0184
    /* li r5, 0 */ // 0x806F0188
    /* mtctr r0 */ // 0x806F018C
    /* clrlwi r0, r5, 0x18 */ // 0x806F0190
    /* mulli r0, r0, 0x30 */ // 0x806F0194
    r4 = r3 + r0; // 0x806F0198
    r4 = *(0x34 + r4); // lwz @ 0x806F019C
    if (>) goto 0x0x806f01ac;
    /* b 0x806f01b0 */ // 0x806F01A8
    /* li r4, -1 */ // 0x806F01AC
    if (==) goto 0x0x806f01c4;
    r3 = r3 + r0; // 0x806F01B8
    r3 = *(0x4c + r3); // lbz @ 0x806F01BC
    return;
    r5 = r5 + 1; // 0x806F01C4
    /* clrlwi r0, r5, 0x18 */ // 0x806F01C8
    /* mulli r0, r0, 0x30 */ // 0x806F01CC
    r4 = r3 + r0; // 0x806F01D0
    r4 = *(0x34 + r4); // lwz @ 0x806F01D4
    if (>) goto 0x0x806f01e4;
    /* b 0x806f01e8 */ // 0x806F01E0
    /* li r4, -1 */ // 0x806F01E4
    if (==) goto 0x0x806f01fc;
    r3 = r3 + r0; // 0x806F01F0
    r3 = *(0x4c + r3); // lbz @ 0x806F01F4
    return;
    r5 = r5 + 1; // 0x806F01FC
    /* clrlwi r0, r5, 0x18 */ // 0x806F0200
    /* mulli r0, r0, 0x30 */ // 0x806F0204
    r4 = r3 + r0; // 0x806F0208
    r4 = *(0x34 + r4); // lwz @ 0x806F020C
    if (>) goto 0x0x806f021c;
    /* b 0x806f0220 */ // 0x806F0218
    /* li r4, -1 */ // 0x806F021C
    if (==) goto 0x0x806f0234;
    r3 = r3 + r0; // 0x806F0228
    r3 = *(0x4c + r3); // lbz @ 0x806F022C
    return;
    r5 = r5 + 1; // 0x806F0234
    /* clrlwi r0, r5, 0x18 */ // 0x806F0238
    /* mulli r0, r0, 0x30 */ // 0x806F023C
    r4 = r3 + r0; // 0x806F0240
    r4 = *(0x34 + r4); // lwz @ 0x806F0244
    if (>) goto 0x0x806f0254;
    /* b 0x806f0258 */ // 0x806F0250
    /* li r4, -1 */ // 0x806F0254
    if (==) goto 0x0x806f026c;
    r3 = r3 + r0; // 0x806F0260
    r3 = *(0x4c + r3); // lbz @ 0x806F0264
    return;
    r5 = r5 + 1; // 0x806F026C
    if (counter-- != 0) goto 0x0x806f0190;
    /* li r3, 0 */ // 0x806F0274
    return;
}