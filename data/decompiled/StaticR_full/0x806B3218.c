/* Function at 0x806B3218, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806B3218(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1f */ // 0x806B3220
    /* li r5, -1 */ // 0x806B3224
    *(0x14 + r1) = r0; // stw @ 0x806B3228
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x806B3230
    /* lis r5, 0 */ // 0x806B3234
    /* lfs f1, 0(r5) */ // 0x806B3238
    /* li r4, 3 */ // 0x806B323C
    r3 = *(0 + r3); // lwz @ 0x806B3240
    /* li r5, 0xa */ // 0x806B3244
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x806B324C
    return;
}