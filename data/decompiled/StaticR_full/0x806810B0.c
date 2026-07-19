/* Function at 0x806810B0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806810B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1f */ // 0x806810B8
    /* li r5, -1 */ // 0x806810BC
    *(0x14 + r1) = r0; // stw @ 0x806810C0
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x806810C8
    /* lis r5, 0 */ // 0x806810CC
    /* lfs f1, 0(r5) */ // 0x806810D0
    /* li r4, 5 */ // 0x806810D4
    r3 = *(0 + r3); // lwz @ 0x806810D8
    /* li r5, 0xa */ // 0x806810DC
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x806810E4
    return;
}