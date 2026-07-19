/* Function at 0x80659684, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80659684(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80659694
    *(8 + r1) = r30; // stw @ 0x80659698
    r30 = r3;
    if (>) goto 0x0x806596e4;
    /* mulli r31, r4, 0x1d8 */ // 0x806596A4
    r5 = r3 + r31; // 0x806596A8
    /* lwzx r0, r3, r31 */ // 0x806596AC
    r3 = *(4 + r5); // lwz @ 0x806596B0
    /* or. r0, r3, r0 */ // 0x806596B4
    if (==) goto 0x0x806596e4;
    /* li r0, 0 */ // 0x806596BC
    *(4 + r5) = r0; // stw @ 0x806596C0
    r3 = r5 + 0x10; // 0x806596C4
    /* li r4, 0 */ // 0x806596C8
    *(0 + r5) = r0; // stw @ 0x806596CC
    /* li r5, 0x1c0 */ // 0x806596D0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = r30 + r31; // 0x806596D8
    /* li r0, -1 */ // 0x806596DC
    *(0x1d0 + r3) = r0; // stw @ 0x806596E0
    r0 = *(0x14 + r1); // lwz @ 0x806596E4
    r31 = *(0xc + r1); // lwz @ 0x806596E8
    r30 = *(8 + r1); // lwz @ 0x806596EC
}