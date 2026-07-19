/* Function at 0x8091E39C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8091E39C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8091E3A4
    *(0xc + r1) = r31; // stw @ 0x8091E3AC
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x8091E3B4
    r30 = r3;
    r3 = *(0 + r7); // lwz @ 0x8091E3BC
    FUN_8090B0E8(); // bl 0x8090B0E8
    r0 = r3;
    r3 = r30;
    r5 = r31;
    /* clrlwi r4, r0, 0x10 */ // 0x8091E3D0
    FUN_8091E498(r3, r5); // bl 0x8091E498
    r0 = *(0x14 + r1); // lwz @ 0x8091E3D8
    r31 = *(0xc + r1); // lwz @ 0x8091E3DC
    r30 = *(8 + r1); // lwz @ 0x8091E3E0
    return;
}