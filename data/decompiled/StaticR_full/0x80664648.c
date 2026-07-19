/* Function at 0x80664648, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80664648(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80664650
    *(0x1c + r1) = r31; // stw @ 0x80664658
    *(0x18 + r1) = r30; // stw @ 0x8066465C
    r30 = r3;
    r3 = r3 + 0xec; // 0x80664664
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8066466C
    r31 = r3;
    if (==) goto 0x0x80664688;
    if (==) goto 0x0x806646dc;
    /* b 0x806646ec */ // 0x80664684
    r3 = *(0 + r3); // lwz @ 0x80664688
    /* slwi r0, r0, 4 */ // 0x8066468C
    /* lwzx r3, r3, r0 */ // 0x80664690
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80664698
    /* lis r0, 0x4330 */ // 0x8066469C
    *(0xc + r1) = r4; // stw @ 0x806646A0
    /* lis r3, 0 */ // 0x806646A4
    /* lfd f3, 0(r3) */ // 0x806646A8
    /* lis r5, 0 */ // 0x806646AC
    *(8 + r1) = r0; // stw @ 0x806646B0
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806646B8
    /* li r4, 3 */ // 0x806646BC
    /* lfd f2, 8(r1) */ // 0x806646C0
    /* lfs f0, 0(r5) */ // 0x806646C4
    /* fsubs f2, f2, f3 */ // 0x806646C8
    /* fdivs f1, f1, f2 */ // 0x806646CC
    /* fsubs f1, f0, f1 */ // 0x806646D0
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x806646ec */ // 0x806646D8
    /* lis r5, 0 */ // 0x806646DC
    /* li r4, 3 */ // 0x806646E0
    /* lfs f1, 0(r5) */ // 0x806646E4
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
}