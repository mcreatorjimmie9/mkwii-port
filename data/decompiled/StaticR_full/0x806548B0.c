/* Function at 0x806548B0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806548B0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x806548B8
    r3 = r3 + 0x98; // 0x806548BC
    *(0x24 + r1) = r0; // stw @ 0x806548C0
    *(0x1c + r1) = r31; // stw @ 0x806548C4
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806548CC
    r31 = r3;
    if (==) goto 0x0x806548e8;
    if (==) goto 0x0x8065493c;
    /* b 0x8065494c */ // 0x806548E4
    r3 = *(0 + r3); // lwz @ 0x806548E8
    /* slwi r0, r0, 4 */ // 0x806548EC
    /* lwzx r3, r3, r0 */ // 0x806548F0
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806548F8
    /* lis r0, 0x4330 */ // 0x806548FC
    *(0xc + r1) = r4; // stw @ 0x80654900
    /* lis r3, 0 */ // 0x80654904
    /* lfd f3, 0(r3) */ // 0x80654908
    /* lis r5, 0 */ // 0x8065490C
    *(8 + r1) = r0; // stw @ 0x80654910
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80654918
}