/* Function at 0x806ABBB4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806ABBB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806ABBBC
    /* li r4, 0xcf */ // 0x806ABBC0
    *(0x14 + r1) = r0; // stw @ 0x806ABBC4
    /* li r5, 0 */ // 0x806ABBC8
    r3 = *(0 + r3); // lwz @ 0x806ABBCC
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* lis r3, 0 */ // 0x806ABBD4
    /* lis r5, 0 */ // 0x806ABBD8
    /* lfs f1, 0(r5) */ // 0x806ABBDC
    /* li r4, 3 */ // 0x806ABBE0
    r3 = *(0 + r3); // lwz @ 0x806ABBE4
    /* li r5, 0x1e */ // 0x806ABBE8
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x806ABBF0
    return;
}