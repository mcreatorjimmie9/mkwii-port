/* Function at 0x806A4928, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806A4928(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x806A4940
    *(0x14 + r1) = r29; // stw @ 0x806A4944
    r29 = r3;
    r3 = r3 + 0x98; // 0x806A494C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A4954
    r31 = r3;
    if (==) goto 0x0x806a4970;
    if (==) goto 0x0x806a4984;
    /* b 0x806a49d4 */ // 0x806A496C
    /* lis r5, 0 */ // 0x806A4970
    /* li r4, 1 */ // 0x806A4974
    /* lfs f1, 0(r5) */ // 0x806A4978
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a49d4 */ // 0x806A4980
    r3 = *(0 + r3); // lwz @ 0x806A4984
    /* slwi r0, r0, 4 */ // 0x806A4988
    /* lwzx r3, r3, r0 */ // 0x806A498C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A4994
    /* lis r0, 0x4330 */ // 0x806A4998
    *(0xc + r1) = r4; // stw @ 0x806A499C
    /* lis r3, 0 */ // 0x806A49A0
    /* lfd f3, 0(r3) */ // 0x806A49A4
    /* lis r5, 0 */ // 0x806A49A8
    *(8 + r1) = r0; // stw @ 0x806A49AC
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806A49B4
    /* li r4, 1 */ // 0x806A49B8
    /* lfd f2, 8(r1) */ // 0x806A49BC
    /* lfs f0, 0(r5) */ // 0x806A49C0
    /* fsubs f2, f2, f3 */ // 0x806A49C4
}