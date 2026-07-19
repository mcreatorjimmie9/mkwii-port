/* Function at 0x8070D8D8, size=92 bytes */
/* Stack frame: 0 bytes */

int FUN_8070D8D8(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r4, 0 */ // 0x8070D8D8
    r6 = *(4 + r3); // lwz @ 0x8070D8DC
    r5 = *(0 + r4); // lwz @ 0x8070D8E0
    /* li r3, 1 */ // 0x8070D8E4
    /* li r7, 0 */ // 0x8070D8E8
    /* b 0x8070d924 */ // 0x8070D8EC
    r4 = *(0x18 + r5); // lwz @ 0x8070D8F0
    r0 = r7 rlwinm 2; // rlwinm
    /* lwzx r4, r4, r0 */ // 0x8070D8F8
    r0 = *(0x334 + r4); // lhz @ 0x8070D8FC
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x8070D904
    /* srwi r0, r0, 5 */ // 0x8070D908
    r3 = r3 & r0; // 0x8070D90C
    /* neg r0, r3 */ // 0x8070D910
    r0 = r0 | r3; // 0x8070D914
    /* rlwinm. r3, r0, 1, 0x1f, 0x1f */ // 0x8070D918
    /* beqlr  */ // 0x8070D91C
    r7 = r7 + 1; // 0x8070D920
    /* clrlwi r0, r7, 0x10 */ // 0x8070D924
    if (<) goto 0x0x8070d8f0;
    return;
}