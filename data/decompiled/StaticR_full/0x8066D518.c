/* Function at 0x8066D518, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8066D518(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x8066D520
    r3 = r3 + 0x98; // 0x8066D524
    *(0x14 + r1) = r0; // stw @ 0x8066D528
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8066D530
    /* li r4, 0 */ // 0x8066D534
    /* lfs f1, 0(r5) */ // 0x8066D538
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8066D540
    return;
}