/* Function at 0x8069D7E4, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8069D7E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069D7F4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069D7FC
    r30 = r3;
    if (==) goto 0x0x8069d850;
    /* addic. r3, r3, 0x1c8 */ // 0x8069D808
    if (==) goto 0x0x8069d818;
    /* li r4, 0 */ // 0x8069D810
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x54 */ // 0x8069D818
    if (==) goto 0x0x8069d828;
    /* li r4, 0 */ // 0x8069D820
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x8069D828
    /* li r4, -1 */ // 0x8069D82C
    FUN_80668158(r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x8069D838
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8069d850;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069D854
    r30 = *(8 + r1); // lwz @ 0x8069D858
    r0 = *(0x14 + r1); // lwz @ 0x8069D85C
    return;
}