/* Function at 0x806B31D4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806B31D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1e */ // 0x806B31DC
    /* li r5, -1 */ // 0x806B31E0
    *(0x14 + r1) = r0; // stw @ 0x806B31E4
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x806B31EC
    /* lis r5, 0 */ // 0x806B31F0
    /* lfs f1, 0(r5) */ // 0x806B31F4
    /* li r4, 3 */ // 0x806B31F8
    r3 = *(0 + r3); // lwz @ 0x806B31FC
    /* li r5, 0x1e */ // 0x806B3200
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x806B3208
    return;
}