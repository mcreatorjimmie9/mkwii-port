/* Function at 0x80677770, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80677770(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x80677778
    r3 = r3 + 0x98; // 0x8067777C
    *(0x24 + r1) = r0; // stw @ 0x80677780
    *(0x1c + r1) = r31; // stw @ 0x80677784
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8067778C
    r31 = r3;
    if (==) goto 0x0x806777a8;
    if (==) goto 0x0x806777fc;
    /* b 0x8067780c */ // 0x806777A4
    r3 = *(0 + r3); // lwz @ 0x806777A8
    /* slwi r0, r0, 4 */ // 0x806777AC
    /* lwzx r3, r3, r0 */ // 0x806777B0
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806777B8
    /* lis r0, 0x4330 */ // 0x806777BC
    *(0xc + r1) = r4; // stw @ 0x806777C0
    /* lis r3, 0 */ // 0x806777C4
    /* lfd f3, 0(r3) */ // 0x806777C8
    /* lis r5, 0 */ // 0x806777CC
    *(8 + r1) = r0; // stw @ 0x806777D0
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806777D8
}