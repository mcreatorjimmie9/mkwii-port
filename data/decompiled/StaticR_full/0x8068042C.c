/* Function at 0x8068042C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8068042C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1f */ // 0x80680434
    /* li r5, -1 */ // 0x80680438
    *(0x14 + r1) = r0; // stw @ 0x8068043C
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x80680444
    /* lis r5, 0 */ // 0x80680448
    /* lfs f1, 0(r5) */ // 0x8068044C
    /* li r4, 5 */ // 0x80680450
    r3 = *(0 + r3); // lwz @ 0x80680454
    /* li r5, 0xa */ // 0x80680458
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x80680460
    return;
}