/* Function at 0x8075AFAC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8075AFAC(int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x8075AFB4
    /* lis r5, 0 */ // 0x8075AFB8
    *(0x14 + r1) = r0; // stw @ 0x8075AFBC
    r6 = r6 + 0; // 0x8075AFC0
    /* li r7, 0 */ // 0x8075AFC8
    r0 = *(0 + r5); // lwz @ 0x8075AFCC
    r6 = *(0 + r6); // lwz @ 0x8075AFD4
    *(0xc + r1) = r6; // stw @ 0x8075AFD8
    /* li r6, 1 */ // 0x8075AFDC
    *(8 + r1) = r0; // stw @ 0x8075AFE0
    FUN_808A1444(r5, r6); // bl 0x808A1444
    r0 = *(0x14 + r1); // lwz @ 0x8075AFE8
    return;
}