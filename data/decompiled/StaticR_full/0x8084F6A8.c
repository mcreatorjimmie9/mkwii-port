/* Function at 0x8084F6A8, size=80 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8084F6A8(int r3, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r8, 0 */ // 0x8084F6B0
    *(0x24 + r1) = r0; // stw @ 0x8084F6B4
    r7 = *(0 + r8); // lwzu @ 0x8084F6BC
    *(8 + r1) = r7; // stw @ 0x8084F6C0
    r6 = *(4 + r8); // lwz @ 0x8084F6C4
    r0 = *(8 + r8); // lwz @ 0x8084F6C8
    *(0xc + r1) = r6; // stw @ 0x8084F6CC
    *(0x10 + r1) = r0; // stw @ 0x8084F6D0
    r6 = *(0x147 + r3); // lbz @ 0x8084F6D4
    /* neg r0, r6 */ // 0x8084F6D8
    r0 = r0 | r6; // 0x8084F6DC
    /* srwi r6, r0, 0x1f */ // 0x8084F6E0
    FUN_8084F6F8(); // bl 0x8084F6F8
    r0 = *(0x24 + r1); // lwz @ 0x8084F6E8
    return;
}