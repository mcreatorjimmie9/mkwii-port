/* Function at 0x808C98E4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808C98E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808C98EC
    r0 = *(8 + r3); // lwz @ 0x808C98F0
    if (==) goto 0x0x808c9904;
    /* li r3, 0 */ // 0x808C98FC
    /* b 0x808c992c */ // 0x808C9900
    /* lis r3, 0 */ // 0x808C9904
    r3 = *(0 + r3); // lwz @ 0x808C9908
    FUN_805C14C8(r3, r3); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808C9910
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808C9918
    r3 = *(0xc + r3); // lwz @ 0x808C991C
    /* lwzx r3, r3, r0 */ // 0x808C9920
    r0 = *(0x38 + r3); // lwz @ 0x808C9924
    r3 = r0 rlwinm 0x1f; // rlwinm
    r0 = *(0x14 + r1); // lwz @ 0x808C992C
    return;
}