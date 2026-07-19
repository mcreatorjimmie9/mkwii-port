/* Function at 0x805A79B8, size=252 bytes */
/* Stack frame: 0 bytes */

void FUN_805A79B8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* li r8, 0 */ // 0x805A79B8
    /* li r6, 0xff */ // 0x805A79BC
    /* b 0x805a7a24 */ // 0x805A79C0
    r5 = *(8 + r3); // lwz @ 0x805A79C4
    /* clrlwi r0, r8, 0x18 */ // 0x805A79C8
    /* lbzx r0, r5, r0 */ // 0x805A79CC
    if (!=) goto 0x0x805a7a20;
    r9 = r8;
    /* b 0x805a79f8 */ // 0x805A79DC
    r5 = *(8 + r3); // lwz @ 0x805A79E0
    /* clrlwi r0, r9, 0x18 */ // 0x805A79E4
    r9 = r9 + 1; // 0x805A79E8
    r5 = r5 + r0; // 0x805A79EC
    r0 = *(1 + r5); // lbz @ 0x805A79F0
    *(0 + r5) = r0; // stb @ 0x805A79F4
    r5 = *(0x10 + r3); // lbz @ 0x805A79F8
    /* clrlwi r7, r9, 0x18 */ // 0x805A79FC
    r0 = r5 + -1; // 0x805A7A00
    if (<) goto 0x0x805a79e0;
    r5 = *(8 + r3); // lwz @ 0x805A7A0C
    /* stbx r6, r5, r7 */ // 0x805A7A10
    r5 = *(0x10 + r3); // lbz @ 0x805A7A14
    r0 = r5 + -1; // 0x805A7A18
    *(0x10 + r3) = r0; // stb @ 0x805A7A1C
    r8 = r8 + 1; // 0x805A7A20
    r0 = *(0x10 + r3); // lbz @ 0x805A7A24
    /* clrlwi r5, r8, 0x18 */ // 0x805A7A28
    if (<) goto 0x0x805a79c4;
    /* li r8, 0 */ // 0x805A7A34
    /* li r6, 0xff */ // 0x805A7A38
    /* b 0x805a7aa0 */ // 0x805A7A3C
    r5 = *(0xc + r3); // lwz @ 0x805A7A40
    /* clrlwi r0, r8, 0x18 */ // 0x805A7A44
    /* lbzx r0, r5, r0 */ // 0x805A7A48
    if (!=) goto 0x0x805a7a9c;
    r9 = r8;
    /* b 0x805a7a74 */ // 0x805A7A58
    r5 = *(0xc + r3); // lwz @ 0x805A7A5C
    /* clrlwi r0, r9, 0x18 */ // 0x805A7A60
    r9 = r9 + 1; // 0x805A7A64
    r5 = r5 + r0; // 0x805A7A68
    r0 = *(1 + r5); // lbz @ 0x805A7A6C
    *(0 + r5) = r0; // stb @ 0x805A7A70
    r5 = *(0x11 + r3); // lbz @ 0x805A7A74
    /* clrlwi r7, r9, 0x18 */ // 0x805A7A78
    r0 = r5 + -1; // 0x805A7A7C
    if (<) goto 0x0x805a7a5c;
    r5 = *(0xc + r3); // lwz @ 0x805A7A88
    /* stbx r6, r5, r7 */ // 0x805A7A8C
    r5 = *(0x11 + r3); // lbz @ 0x805A7A90
    r0 = r5 + -1; // 0x805A7A94
    *(0x11 + r3) = r0; // stb @ 0x805A7A98
    r8 = r8 + 1; // 0x805A7A9C
    r0 = *(0x11 + r3); // lbz @ 0x805A7AA0
    /* clrlwi r5, r8, 0x18 */ // 0x805A7AA4
    if (<) goto 0x0x805a7a40;
    return;
}