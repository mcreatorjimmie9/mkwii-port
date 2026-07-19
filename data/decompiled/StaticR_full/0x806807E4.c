/* Function at 0x806807E4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806807E4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1f */ // 0x806807EC
    /* li r5, -1 */ // 0x806807F0
    *(0x14 + r1) = r0; // stw @ 0x806807F4
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x806807FC
    /* lis r5, 0 */ // 0x80680800
    /* lfs f1, 0(r5) */ // 0x80680804
    /* li r4, 5 */ // 0x80680808
    r3 = *(0 + r3); // lwz @ 0x8068080C
    /* li r5, 0xa */ // 0x80680810
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x80680818
    return;
}