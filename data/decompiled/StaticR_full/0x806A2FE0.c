/* Function at 0x806A2FE0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806A2FE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x806A2FE8
    *(0xc + r1) = r31; // stw @ 0x806A2FF0
    *(8 + r1) = r30; // stw @ 0x806A2FF4
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A2FFC
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A3004
    /* li r4, 0 */ // 0x806A3008
    /* lfs f1, 0(r31) */ // 0x806A300C
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A3014
    /* li r4, 3 */ // 0x806A3018
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3020
    /* li r4, 0 */ // 0x806A3024
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806A302C
    r31 = *(0xc + r1); // lwz @ 0x806A3030
    r30 = *(8 + r1); // lwz @ 0x806A3034
    return;
}