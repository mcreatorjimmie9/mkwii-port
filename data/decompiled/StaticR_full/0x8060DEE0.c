/* Function at 0x8060DEE0, size=196 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8060DEE0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* lis r7, 0 */ // 0x8060DEE8
    r9 = r5;
    *(0x14 + r1) = r0; // stw @ 0x8060DEF0
    /* li r8, 0 */ // 0x8060DEF4
    r7 = *(0 + r7); // lwz @ 0x8060DEF8
    r5 = *(0xb70 + r7); // lwz @ 0x8060DEFC
    /* li r7, 0 */ // 0x8060DF00
    r0 = r5 + -3; // 0x8060DF04
    if (>) goto 0x0x8060df24;
    /* li r5, 1 */ // 0x8060DF10
    r0 = r5 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060DF18
    if (==) goto 0x0x8060df24;
    r7 = r5;
    if (==) goto 0x0x8060df44;
    r5 = r4;
    r6 = r9;
    /* li r4, 0x1c2 */ // 0x8060DF34
    FUN_8060DFB4(r5, r6, r4); // bl 0x8060DFB4
    r8 = r3;
    /* b 0x8060df90 */ // 0x8060DF40
    if (==) goto 0x0x8060df90;
    if (>) goto 0x0x8060df90;
    /* lis r5, 0 */ // 0x8060DF54
    r0 = r6 + 0xb; // 0x8060DF58
    r5 = *(0 + r5); // lwz @ 0x8060DF5C
    /* lis r7, 0 */ // 0x8060DF60
    r7 = r7 + 0; // 0x8060DF64
    r6 = r9;
    r8 = *(0x24 + r5); // lbz @ 0x8060DF6C
    r5 = r4;
    /* subf r0, r8, r0 */ // 0x8060DF74
    /* slwi r0, r0, 1 */ // 0x8060DF78
    /* lhax r4, r7, r0 */ // 0x8060DF7C
    r0 = r4 + 0x48; // 0x8060DF80
    /* extsh r4, r0 */ // 0x8060DF84
    FUN_8060DFB4(); // bl 0x8060DFB4
    r8 = r3;
    r0 = *(0x14 + r1); // lwz @ 0x8060DF90
    r3 = r8;
    return;
}