/* Function at 0x8069ED90, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8069ED90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069EDA0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069EDA8
    r30 = r3;
    if (==) goto 0x0x8069edec;
    /* addic. r3, r3, 0x58 */ // 0x8069EDB4
    if (==) goto 0x0x8069edc4;
    /* li r4, 0 */ // 0x8069EDBC
    FUN_806A0540(r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x8069EDC4
    /* li r4, -1 */ // 0x8069EDC8
    FUN_80668158(r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x8069EDD4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8069edec;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069EDF0
    r30 = *(8 + r1); // lwz @ 0x8069EDF4
    r0 = *(0x14 + r1); // lwz @ 0x8069EDF8
    return;
}