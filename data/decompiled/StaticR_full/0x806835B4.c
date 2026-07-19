/* Function at 0x806835B4, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806835B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x806835C4
    *(0x18 + r1) = r30; // stw @ 0x806835C8
    r30 = r5;
    if (!=) goto 0x0x80683600;
    /* lis r31, 0 */ // 0x806835D4
    /* li r0, 1 */ // 0x806835D8
    r3 = *(0 + r31); // lwz @ 0x806835DC
    r3 = *(0x90 + r3); // lwz @ 0x806835E0
    *(0x14 + r3) = r0; // stb @ 0x806835E4
    FUN_80683F90(); // bl 0x80683F90
    r3 = *(0 + r31); // lwz @ 0x806835EC
    /* li r4, 0x3f */ // 0x806835F0
    /* li r5, 0 */ // 0x806835F4
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* b 0x80683614 */ // 0x806835FC
    /* lis r3, 0 */ // 0x80683600
    /* li r4, 4 */ // 0x80683604
    r3 = *(0 + r3); // lwz @ 0x80683608
    /* li r5, 1 */ // 0x8068360C
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* lis r4, 0 */ // 0x80683614
    r3 = r30;
    r31 = *(0 + r4); // lwz @ 0x8068361C
    FUN_8064A384(r5, r4, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x80683624
    r3 = r31;
    /* li r5, 0xff */ // 0x8068362C
    /* stfd f0, 8(r1) */ // 0x80683630
    r4 = *(0xc + r1); // lwz @ 0x80683634
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x8068363C
    r31 = *(0x1c + r1); // lwz @ 0x80683640
    r30 = *(0x18 + r1); // lwz @ 0x80683644
    return;
}