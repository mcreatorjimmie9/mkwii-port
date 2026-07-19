/* Function at 0x8090A598, size=216 bytes */
/* Stack frame: 0 bytes */

int FUN_8090A598(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r6 = *(0x1eec + r3); // lbz @ 0x8090A598
    /* li r5, 0 */ // 0x8090A59C
    /* b 0x8090a5dc */ // 0x8090A5A0
    /* clrlwi r0, r5, 0x18 */ // 0x8090A5A4
    r4 = r3 + r0; // 0x8090A5A8
    r0 = *(0x1f50 + r4); // lbz @ 0x8090A5AC
    if (==) goto 0x0x8090a5c4;
    r0 = *(0x4361 + r4); // lbz @ 0x8090A5B8
    if (!=) goto 0x0x8090a5d8;
    r0 = *(0x1f5c + r4); // lbz @ 0x8090A5C4
    if (!=) goto 0x0x8090a5d8;
    /* li r3, 0 */ // 0x8090A5D0
    return;
    r5 = r5 + 1; // 0x8090A5D8
    /* clrlwi r0, r5, 0x18 */ // 0x8090A5DC
    if (<) goto 0x0x8090a5a4;
    r5 = *(0 + r3); // lbz @ 0x8090A5E8
    /* li r9, 0 */ // 0x8090A5EC
    /* b 0x8090a65c */ // 0x8090A5F0
    /* clrlwi r0, r9, 0x18 */ // 0x8090A5F4
    /* mulli r0, r0, 0x1c */ // 0x8090A5F8
    r4 = r3 + r0; // 0x8090A5FC
    r0 = *(0x12 + r4); // lbz @ 0x8090A600
    if (>=) goto 0x0x8090a658;
    r7 = *(0xc + r4); // lwz @ 0x8090A60C
    r8 = *(0x168 + r7); // lwz @ 0x8090A610
    r4 = *(0x160 + r7); // lwz @ 0x8090A614
    /* slwi r0, r8, 4 */ // 0x8090A618
    /* lwzx r0, r4, r0 */ // 0x8090A61C
    if (!=) goto 0x0x8090a650;
    r0 = *(0x164 + r7); // lwz @ 0x8090A628
    /* li r4, 0 */ // 0x8090A62C
    if (!=) goto 0x0x8090a648;
    r0 = *(0x16d + r7); // lbz @ 0x8090A638
    if (==) goto 0x0x8090a648;
    /* li r4, 1 */ // 0x8090A644
    if (!=) goto 0x0x8090a658;
    /* li r3, 0 */ // 0x8090A650
    return;
    r9 = r9 + 1; // 0x8090A658
    /* clrlwi r0, r9, 0x18 */ // 0x8090A65C
    if (<) goto 0x0x8090a5f4;
    /* li r3, 1 */ // 0x8090A668
    return;
}